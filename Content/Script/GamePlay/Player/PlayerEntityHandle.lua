
local super = GA.GameCore.Entity.EntityEventHandle
local class = class(GA.GamePlay.Player, "PlayerEntityHandle", super)

-- local value = GA.GameCore.Core.Value
-- local message = GA.GameCore.Core.Message
-- local activity = GA.GameCore.Core.Activity
function class:ctor()
    super.ctor(self)
    self.hunger = GA.GameCore.Core.Value.new(100)
    self.speed = GA.GameCore.Core.Value.new(0)
    self.RightAxisValue = 0
    self.ForwardAxisValue = 0

    self.LookUp = 0
    self.LookRight = 0

    self.LookRightRate = 150
    self.LookUpRate = 150


    -- playAnimation
    self.pitchRate = 2.0
    self.interpSpeed = 6.0

end

function class:tick()

end

function class:lateTick()
    
end