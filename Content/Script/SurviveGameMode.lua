--lua class : SurviveGameMode
require "UnLua"
print("lua class : SurviveGameMode")
local class = Class(_G,"SurviveGameMode")

function class:Initialize(Initializer)

end

function class:UserConstructionScript()
    
end
function class:OverrideInitGame()
    print("OverrideInitGame==*******************=")
    require "World"
    --创建各种message
    gworld = GP.World.new()
end
function class:ReceiveBeginPlay()
    print("ReceiveBeginPlay GameMode")
    gworld:setWorld(self:GetWorld())
    gworld:setGameWorld(self)
    gworld:beginPlay()
    print(self.Object.Super)
    print(self.Object.Respawn)
    print(self:Respawn(true))
end

--[[
function class:ReceiveEndPlay()
end
--]]

function class:ReceiveTick(DeltaSeconds)
    if gworld then
        gworld:tick(DeltaSeconds)
        gworld:lateTick(DeltaSeconds)
    end
end

--[[
function class:ReceiveAnyDamage(Damage, DamageType, InstigatedBy, DamageCauser)
end
--]]

--[[
function class:ReceiveActorBeginOverlap(OtherActor)
end
--]]

--[[
function class:ReceiveActorEndOverlap(OtherActor)
end
--]]

return class
