
local class = class(GC.Input, "Button")

local var = GC.Core.Var
function class:ctor()
    self.state = GC.Input.EButtonState.Released
    self.callbacks = {}
end

function class:isPressed()
    return self.state == GC.Input.EButtonState.Pressed
end

function class:addChangeListener(callback)
    self.callbacks[callback] = callback
end

function class:removeChangeListener(callback)
    self.callbacks[callback] = nil
end

function class:clear()
    for _,callback in pairs(self.callbacks) do
        callback()
    end
end

function class:set(newvalue)
    self.state = newvalue
end

function class:pressed()
    self.state = GC.Input.EButtonState.Pressed
end

function class:released()
    self.state = GC.Input.EButtonState.Released
end

function class:get()
    return self.state
end