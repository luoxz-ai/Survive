local class = class(GA.GamePlay.Player, "PlayerInputHandle")

function class:ctor()
    self.RightAxisValue = 0
    self.ForwardAxisValue = 0
    self.LookUp = 0
    self.LookRight = 0

    self.fire = GA.GameCore.Core.Activity.new(false)
    self.LookRightRate = 150
    self.LookUpRate = 150

    self.moveStop = GA.GameCore.Core.Activity.new(false)
    self.CrouchAction = GA.GameCore.Core.Activity.new(false)
    self.JumpAction = GA.GameCore.Core.Activity.new(false)
    self.SprintAction = GA.GameCore.Core.Activity.new(false)
end

function class:tick()

end

function class:lateTick()
    
end