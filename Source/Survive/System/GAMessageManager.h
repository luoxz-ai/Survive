// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "System/BaseManager.h"
#include "NetWork/MessageManager.h"
#include "GAMessageManager.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVE_API AGAMessageManager : public ABaseManager
{
	GENERATED_BODY()

protected:
	TSharedPtr<MessageManager> MyMessageManager;
};
