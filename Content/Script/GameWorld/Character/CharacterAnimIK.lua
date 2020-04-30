
require "UnLua"
print("lua class : GameWorld.Character.CharacterAnimIK")
local class = Class(GP.Character ,"CharacterAnimIK")


function class:beginPlay()
    --local pawn = self:TryGetPawnOwner()
    --local anim = pawn.Mesh:GetAnimInstance()
end
function class:BlueprintInitializeAnimation()
    gworld.message_beginPlay:addListener(self , "beginPlay")
end


function class:BlueprintUpdateAnimation(dt)
    -- print(self:TryGetPawnOwner().__cname,"------------------------")
end


return class