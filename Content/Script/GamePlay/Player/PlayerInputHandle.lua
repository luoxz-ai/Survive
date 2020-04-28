local class = class(GP.Player, "PlayerInputHandle")

function class:ctor()
    self.RightAxisValue = 0
    self.ForwardAxisValue = 0
    self.LookUp = 0
    self.LookRight = 0

    self.fire = GC.Core.Activity.new(false)
    self.LookRightRate = 150
    self.LookUpRate = 150

    self.moveStop = GC.Core.Activity.new(false)
    self.CrouchAction = GC.Core.Activity.new(false)
    self.JumpAction = GC.Core.Activity.new(false)
    self.SprintAction = GC.Core.Activity.new(false)
end

function class:tick()

end

function class:lateTick()
    
end