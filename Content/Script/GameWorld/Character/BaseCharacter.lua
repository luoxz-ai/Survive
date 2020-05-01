--lua class : test_C
require "UnLua"
print("lua class : GameWorld.Character.BaseCharacter")
local class = Class(GA.GameWorld.Character , "BaseCharacter")

function class:beginPlay()

end

function class:ReceiveBeginPlay()
    gworld.message_beginPlay:addListener(self , "beginPlay")
end

function class:ReceiveEndPlay()
    print("ReceiveEndPlay BaseCharacter")
end

function class:ReceiveAnyDamage(Damage, DamageType, InstigatedBy, DamageCauser)
    print("ReceiveAnyDamage BaseCharacter")
end

function class:ReceiveActorBeginOverlap(OtherActor)
    print("ReceiveActorBeginOverlap BaseCharacter")
end

function class:ReceiveActorEndOverlap(OtherActor)
    print("ReceiveActorEndOverlap BaseCharacter")
end

function class:ChangeTest(test)
    print(test,"==========22222222222222")
end

return class

