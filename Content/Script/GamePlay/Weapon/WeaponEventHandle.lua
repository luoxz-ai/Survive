

local class = class(GP.Player, "WeaponEventHandle")

function class:ctor()
    self.fire = GC.Core.Activity.new(false)
    
end
