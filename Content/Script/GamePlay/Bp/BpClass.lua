local class = {
    -- Input = '/Game/BluePrints/System/Input.Input' ,
    -- PlayCharacter = '/Game/BluePrints/Actor/Player/PlayCharacter.PlayCharacter'
}
for k,v in pairs(class) do 
    class[k] = UE4.UClass.Load(v)
end
GP.Bp.BpClass = class
return class