

local class = class(GA.GamePlay.Player, "WeaponEventHandle")

function class:ctor()
    self.fire = GA.GameCore.Core.Activity.new(false)
    
end
