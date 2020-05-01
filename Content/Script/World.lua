GA = {}
require "GameCore.GC"
require "GamePlay.GP"
require "GameManage.GM"
require "GameWorld.GW"
local class = class(GA,"World")
local var = GA.GameCore.Core.Var
function class:ctor()
    
    self.world = nil
    self.GameWorld = nil
    self.message_beginPlay = GA.GameCore.Core.Message.new()
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

function class:initializeWorld()
    -- self.eventBus               = GA.GameCore.Core.EventBus.new()
    -- self.StateManager           = GA.Core.StateManager.new()
    -- self.scheduler              = GA.Core.Scheduler.new()
    -- self.UserInput              = GA.Input.UserInput.new()
    -- self.NetworkMonitor         = GA.Network.NetworkMonitor.new()
    -- self.playerInputManager     = GA.Core.PlayerInputManager.new(self.UserInput)
    -- self.playerController       = GA.Core.PlayerController.new()
end

function class:tick(dt)
    if self.playerNet then self.playerNet:tick(dt) end
end


function class:lateTick(dt)
    if self.playerNet then self.playerNet:lateTick(dt) end
end


return class