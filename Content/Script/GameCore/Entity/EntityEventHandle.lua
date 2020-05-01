
local class = class(GA.GameCore.Entity, "EntityEventHandle")

local value = GA.GameCore.Core.Value
local message = GA.GameCore.Core.Message
function class:ctor()
    self.health = value.new(100)
    self.isGrounded = value.new(true)
    self.live = value.new(true)
    self.death = message.new()
    self.respawn = message.new()
end