local BpType = GA.BpType or {}
local BpClassMap = {
	-- bpmap reg auto-gen
	BP_LuaManager = BpType.BP_LuaManager ,
	BP_MessageManager = BpType.BP_MessageManager ,
	-- bpmap reg auto-gen
}

-- 确认是不含资源的Library类再放进来强引用，否则放到上面动态创建
local NativeClassMap = {

}

local GeneratedBpClassMap = setmetatable({}, {__mode = "v"})

function GA:loadBpClass()
	local mt = {
		__index = function(t, k)
			local native = NativeClassMap[k]
			if native then
				return native
			end
			if not GeneratedBpClassMap[k] then
				if BpClassMap[k] then 
					GeneratedBpClassMap[k] = import(BpClassMap[k])
				elseif BpType[k] then 
					GeneratedBpClassMap[k] = import(BpType[k])
				end 
			end
			return GeneratedBpClassMap[k]
		end
	}
	self.BpClass = setmetatable({}, mt)
end
GA:loadBpClass()
