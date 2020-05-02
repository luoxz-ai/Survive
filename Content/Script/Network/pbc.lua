local protobuf = require "Network.protobuf"
local ProtoMap = require "Network.EProtoMap"
local ProtoId = require "Network.EProtoId"
local XDAppPBInfo = {}
local c = require ("protobuf.c")

local reverseProtoId = {}
for k, v in pairs(ProtoId) do
    reverseProtoId[v] = k
end

-- 缓存心动平台协议号到PB协议信息的映射关系
local gMapXDAppCmdValue = {}
for tKey, tValue in pairs(XDAppPBInfo) do
    gMapXDAppCmdValue[tValue.cmdValue] = tValue
end

local class = class(GA.Network, "Pbc")
class.up = nil--GA.Utils.TypeDecl.func
class.down = nil--GA.Utils.TypeDecl.func
class.typeEnum = nil--GA.Utils.TypeDecl.hashTable
local gServerMsgType = "Cmd.WrapPacket"
local gXDAppMsgInfo = 
{ 
    msgType = "xdapp.chat.server.WrapPacket", 
    upCmd = "ChatMsgClientToGateCmd", 
    rcvCmd = "ChatMsgGateToClientCmd",
}

local function ReadPbFile(name)
    local file = io.open(name, "rb")
    local content = file:read "*a" -- *a or *all reads the whole file
    file:close()
    return content
end

function class:ctor()
    self.reg()
    self.down = GA.Network.Pbc.ProtoDown.new()
    self.up = GA.Network.Pbc.ProtoUp.new()
    setmetatable(self.up, {__index = function(t, msgId)
            return self.upDelegate(msgId)
        end
    })
end

-- no multiple message delegates in one frame, 
-- so no need to gen multiple delegates.
local upMeta = {
    id = nil
}

function class.upDelegate(msgId)
    upMeta.id = msgId
    return upMeta
end

function class.reg()
    log("reg protobuf")
    -- pbc reg auto-gen
    class._regFile('msg.pb')
    class._regFile('sceneMap.pb')
    class._regFile('xCmd.pb')
	-- pbc reg auto-gen
end


--------------------------------------------------------------------------------
-- 向服务器发送消息的接口 ...
-- inCmd 与服务器通信的协议号，通常来源于xCmd.proto的CommandList，
--       如果是心动平台消息的话则来源于xdapp/chat/server.proto的Cmd
-- inMsg 期望发送的数据包，如果是给心动平台发送的话，需要填充 _isToXDApp 字段
--------------------------------------------------------------------------------
function class.up(inCmd, inMsg)
    if inMsg._isToXDApp then
        class._upToXDApp(inCmd, inMsg)
    else
        if not ProtoId[inCmd] then
            logE("Proto id not found: "..tostring(inCmd).." Try proto-auto-gen or check your spelling.")
            return
        end
        logProtocol("[pbc up][", inCmd, "] ", inMsg)
        class.send(class._wrapMsgForServer(inCmd, inMsg))
    end
end

setmetatable(upMeta, {__call = function(t, msg)
    class.up(t.id, msg)
end
})

function class.send(msg)
    proto_send(msg)
end

-- @TODO: Strange that the protected call from C++ doesn't work as expected if there is a c-stack
-- called inside the lua function(Seems the continuous function is not called, while the error-handle-
-- function could be called). So we make a simple defence here which offers an error-jmp for functions
-- between C++ pcall and _handleMsg pcall. But this could be removed later.
function class.rcv(inMsg)
    local status, err = pcall(function() class.rcvWrapper(inMsg) end)
    if not status then
        logE(err)
    end
end

--------------------------------------------------------------------------------
-- 接收服务器信息的入口 ...
-- inMsg 服务器发送的包，目前的填充格式为gServerMsgType
--       根据解析后的cmd协议号，判断是否为转发的心动平台消息
--       对消息处理的函数名必须和消息体的名字一一对应
--------------------------------------------------------------------------------
function class.rcvWrapper(inMsg)
    if not inMsg then logE("rcv nil pbc msg") return end
    local tMsgTable, tError = protobuf.decode(gServerMsgType, inMsg)
    if tError then logE(err) return end
    print(table.tostring(tMsgTable.cmd))
    if type(tMsgTable.cmd) ~= "number" or tMsgTable.cmd == 0 then
        -- server sends old heart-beat frequently with enumType 0.
        if tMsgTable.cmd ~= 0 then logE("decode msg failed: cannot unwrap packet"..tostring(tMsgTable.cmd)) end return
    end
    local tMsgType = class._enum2MsgType(tMsgTable.cmd)
    if not tMsgType then logE("pb's message type not found by cmd: "..tostring(tMsgTable.cmd)) return end
    if class._isFromXDApp(tMsgType) then
        -- 处理心动平台的消息：先解析出服务器的的WrapPacket，然后传递给_rcvFromXDApp继续处理
        local tXDAppMsg, tXDAppDecodeError = protobuf.decode(class._msg2CmdType(tMsgType), tMsgTable.content)
        if tXDAppDecodeError then logE(tXDAppDecodeError) return end
        class._rcvFromXDApp(tXDAppMsg)
    else
        -- 处理游戏服务器的消息
        class._handleMsg(class._msg2CmdType(tMsgType), tMsgType, tMsgTable.content)
    end
end

--------------------------------------------------------------------------------
-- 接收心动平台信息的入口 ...
-- inMsg 心动平台发送的包，目前的填充格式为gXDAppMsgInfo.msgType，
--       对消息处理的函数名必须为 "XDApp + 消息体的名字" 
--------------------------------------------------------------------------------
function class._rcvFromXDApp(inMsg)
    local tXDAppTable, tDecodeErr = protobuf.decode(gXDAppMsgInfo.msgType, inMsg.content)
    if tDecodeErr then logE(tDecodeErr) return
    else
        local tXDAppMsgInfo = gMapXDAppCmdValue[tXDAppTable.cmd]
        if not tXDAppMsgInfo then logE("xdapp pb's message type not found by cmd: "..tostring(tXDAppTable.cmd)) return end
        log("_rcvFromXDApp message: ["..tXDAppMsgInfo.msgType.."] {"..serialize(tXDAppTable.content).."}")
        class._handleMsg(tXDAppMsgInfo.package..'.'..tXDAppMsgInfo.msgType, "XDApp"..tXDAppMsgInfo.msgType, tXDAppTable.content)
    end
end

--------------------------------------------------------------------------------
-- 对消息进行解包，并调用本地的处理函数 ...
-- inMsgType 消息结构体的类型，
-- inFuncName 处理消息的函数名称，通过 Pbc.down 来索引
-- inMsg 消息体的内容
--------------------------------------------------------------------------------
function class._handleMsg(inMsgType, inFuncName, inMsg)
    local tMsgInfo = class._decodeAll(inMsgType, inMsg)
    logProtocol("[pbc down][", inMsgType, "] ", tMsgInfo)
    if not Pbc.down[inFuncName] then
        logE("no pbc down function for: "..inFuncName)
    else
        local tState, tCallError = xpcall(Pbc.down[inFuncName], __G__TRACKBACK__, tMsgInfo)
        -- logE("down action: " .. (tState and "1" or "0"))
        -- if not state then
        --     logE("proto rcv error:" .. tCallError)
        -- end
    end
end

--------------------------------------------------------------------------------
-- 将要发送的消息体打包为服务器可解析的消息结构，目前为gServerMsgType ...
--------------------------------------------------------------------------------
function class._wrapMsgForServer(inCmd, inMsg)
    local tWrapPackage = 
    {
        cmd = ProtoId[inCmd],
        content = protobuf.encode(class._msg2CmdType(inCmd), inMsg),
    }
    --logE("pbc encode: "..inCmd)
    --logE("decode debug: "..table.tostring(protobuf.decode(tType, tWrapPackage.content)))
    return protobuf.encode(gServerMsgType, tWrapPackage)
end

--------------------------------------------------------------------------------
-- 对发送给心动平台的消息做特殊处理，先用心动平台的消息类型包一遍，再发送给游戏服务器 ...
-- inCmd 与心动平台的协议，通常来源于xdapp/chat/server.proto的Cmd
-- inMsg 期望发送给心动平台的数据包，必须包含特殊字段_XDAppInfo
--------------------------------------------------------------------------------
function class._upToXDApp(inCmd, inMsg)
    if not XDAppPBInfo[inCmd] then
        logE("XDApp Protocol buffer id not found: "..tostring(inCmd).." Try proto-auto-gen or check your spelling.")
        return
    end
    logProtocol("[pbc up][", inCmd, "] ", inMsg)
    -- 在打包发送前删除心动平台标记位
    inMsg._isToXDApp = nil
    -- 组装给心动平台解析的PB结构
    local tXDAppMsg = 
    {
        cmd = XDAppPBInfo[inCmd].cmdValue,
        content = protobuf.encode(XDAppPBInfo[inCmd].package..'.'..XDAppPBInfo[inCmd].msgType, inMsg),
    }
    -- 组装给服务器解析的PB结构
    local tServerMsg =
    {
        content = protobuf.encode(gXDAppMsgInfo.msgType, tXDAppMsg),
    }
    class.send(class._wrapMsgForServer(gXDAppMsgInfo.upCmd, tServerMsg))
end

--------------------------------------------------------------------------------
-- 判断是否为服务器转发的心动平台消息类型，目前仅支持聊天协议判断，未来可在此处扩充 ...
-- inMsgType 服务器发送来的消息协议号
--------------------------------------------------------------------------------
function class._isFromXDApp(inMsgType)
    return inMsgType == gXDAppMsgInfo.rcvCmd
end

--------------------------------------------------------------------------------
-- 根据心动平台的协议号，获得PB的反射信息 ...
-- inPBCmd 与心动平台定义的协议号，来源在XDApp/Chat/server.proto的Cmd
--------------------------------------------------------------------------------
function class._getXDAppMsgInfo(inPBCmd)
    for tKey, tValue in pairs(XDAppPBInfo) do
        if tValue.cmdValue == inPBCmd then
            return tValue
        end
    end
end

function class._enum2MsgType(enumType)
    return reverseProtoId[enumType]
end

function class._cmd2EnumType(cmdType)
    local msgType = string.gsub(cmdType, "Cmd.", "")
    if msgType then
        return ProtoId[msgType]
    end
end

function class._enum2CmdType(enumType)
    local msgType = class._enum2MsgType(enumType)
    if msgType then
        return ProtoMap[msgType]
    end
end

function class._msg2CmdType(msgType)
    return "Cmd."..msgType
end

function class._regFile(fileName)
    protobuf.regFile(fileName)
end

function class._decodeTable(tbl)
    --logE("dump decode table: "..table.tostring(tbl))
    for k,v in pairs(tbl) do
        if type(v) == "table" then
            --logE("dump decode table: "..table.tostring(v))
            if (type(v[1]) == "string" and string.find(v[1],"Cmd.")) then
                local ret = protobuf.decode(v[1], v[2])
                if ret then
                    tbl[k] = ret
                end
            end
            class._decodeTable(tbl[k])
        end
    end
end

-- pbc added a new method called expand, which will decode the inner
-- table, so this method seems useless?
function class._decodeAll(typename, buffer)
    local ret, err = protobuf.decode(typename, buffer)
    if ret then
        class._decodeTable(ret)
    else
        logE(err)
    end
    return ret
end
