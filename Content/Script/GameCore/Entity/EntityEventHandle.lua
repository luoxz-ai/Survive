
local class = class(GC.Entity, "EntityEventHandle")

local value = GC.Core.Value
local message = GC.Core.Message
function class:ctor()
    self.health = value.new(100)
    self.isGrounded = value.new(true)
    self.live = value.new(true)
    self.death = message.new()
    self.respawn = message.new()
end