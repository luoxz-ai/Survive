
require "UnLua"
print("lua class : GameWorld.Character.CharacterAnimIK")
local class = Class(GA.GameWorld.Character ,"CharacterAnimIK")
function class:GetUnluaBind()
    return GA.BpClass.BP_MessageManager,"GameWorld.Character.CharacterAnimIK"
end
function class:beginPlay()
    --local pawn = self:TryGetPawnOwner()
    --local anim = pawn.Mesh:GetAnimInstance()
end
function class:BlueprintInitializeAnimation()
    gWorld.message_beginPlay:addListener(self , "beginPlay")
end


function class:BlueprintUpdateAnimation(dt)
    -- print(self:TryGetPawnOwner().__cname,"------------------------")
end


return class