#pragma once
#include "CoreMinimal.h"
#include "MMOGameModeBase.h"

template<typename T>
class ISingleton
{
public:
	UFUNCTION(BlueprintCallable, Category = "C++ API")
	static T* I()
	{
		static T* sInstance = nullptr;
		// 防止持有野指针
		sInstance = AMMOGameModeBase::SeekManagerInstance<T>();
		return sInstance;
	}

	static bool CheckValid()
	{
		return I() != nullptr;
	}
};
