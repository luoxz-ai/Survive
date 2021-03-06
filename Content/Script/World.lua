if WITH_LUAIDE_DEBUG then
    require("socket.core")
    require("LuaPanda").start("127.0.0.1",8818)
end
require "GameCore.GC"
require "GamePlay.GP"
require "GameManage.GM"
require "GameWorld.GW"
require "Network.Network_Module"
local class = class(GA,"World")
local var = GA.GameCore.Core.Var
Pbc = GA.Network.Pbc
function class:ctor()  
    self._uWorldContext = nil
end
function class:InitializeWorld(WorldContext)
    self._uWorldContext = WorldContext
    self.MessageManager = self:SpawnActorByLua(GA.GameWorld.Manager.MessageManager, UE4.FVector(0.0, 0.0, 0.0) , UE4.FRotator(0, 0, 0))
    self.MessageManager:init()
    --host = "111.229.54.9:8999"
    host = "127.0.0.1:8999"
    self.MessageManager:Connect(host);
    --self.MessageManager:SendMessage("sad");
end
function class:getWorldContext()
    return self._uWorldContext
end
function class:setWorld(world)
    self.world = world
end
function class:setGameWorld(GameWorld)
    self.GameWorld = GameWorld
end
function class:beginPlay()
    --local zero = UE4.FVector(0.0, 0.0, 0.0)
    --self.inputManage = GA.GamePlay.Manage.InputManage.new()

    -- local playerControl = UE4.UGameplayStatics.GetPlayerController(self.world, 0)
    -- self.playerNet = GA.GamePlay.Player.PlayerNet.new(playerControl)
    -- self.message_beginPlay:send()
end

-- function class:initializeWorld()
--     -- self.eventBus               = GA.GameCore.Core.EventBus.new()
--     -- self.StateManager           = GA.Core.StateManager.new()
--     -- self.scheduler              = GA.Core.Scheduler.new()
--     -- self.UserInput              = GA.Input.UserInput.new()
--     -- self.NetworkMonitor         = GA.Network.NetworkMonitor.new()
--     -- self.playerInputManager     = GA.Core.PlayerInputManager.new(self.UserInput)
--     -- self.playerController       = GA.Core.PlayerController.new()
-- end

function class:tick(dt)
    if self.playerNet then self.playerNet:tick(dt) end
end
function class:lateTick(dt)
    if self.playerNet then self.playerNet:lateTick(dt) end
end
function class:SpawnActorByLua(luaclass, uLocation , uRotation , params)
    local uclass,modulename = luaclass:GetUnluaBind()
    local transform = UE4.FTransform(uRotation:ToQuat(), uLocation)
    return self._uWorldContext:SpawnActor(uclass , transform , params and params.collisionHandle or ESpawnActorCollisionHandlingMethod.AlwaysSpawn , self , self, modulename)
end
return class