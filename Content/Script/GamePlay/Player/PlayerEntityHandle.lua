
local super = GC.Entity.EntityEventHandle
local class = class(GP.Player, "PlayerEntityHandle", super)

-- local value = GC.Core.Value
-- local message = GC.Core.Message
-- local activity = GC.Core.Activity
function class:ctor()
    super.ctor(self)
    self.hunger = GC.Core.Value.new(100)
    self.speed = GC.Core.Value.new(0)
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