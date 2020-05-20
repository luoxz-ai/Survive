
local class = class(GA.GamePlay.Object, "ActorObject")

function class:ctor(uclass , uLocation , uRotation , params)
    gWorld:SpawnActor(uclass , uLocation , uRotation , params)
end