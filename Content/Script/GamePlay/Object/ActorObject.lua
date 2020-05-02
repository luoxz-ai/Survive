
local class = class(GA.GamePlay.Object, "ActorObject")

function class:ctor(uclass , uLocation , uRotation , params)
    gworld:SpawnActor(uclass , uLocation , uRotation , params)
end