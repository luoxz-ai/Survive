--lua class : test_C
require "UnLua"
local class = Class(GA.GameWorld.Manager, "MessageManager")
print("MessageManager requires -----------")
function class:init()
    self:RegisterToGame()
end
function class:GetUnluaBind()
    return GA.BpClass.BP_MessageManager,"GameWorld.Manager.MessageManager"
end
function class:beginPlay()
    print("MessageManager beginplay")
end
function class:ReceiveBeginPlay()
    print("MessageManager beginplay")
end
function class:proto_send(msg)
    
end
function class:OverrideDisconncet()
    print(" xxxxxxxxxxxxxx disconnect")
end
return class

