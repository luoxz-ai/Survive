// Fill out your copyright notice in the Description page of Project Settings.


#include "MMOGameMode.h"
#include "System/GAMessageManager.h"
void AMMOGameMode::Respawn(bool inplace)
{
}
void AMMOGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	UE_LOG(LogTemp, Log, TEXT("C++ InitGame"));
	Super::InitGame(MapName, Options, ErrorMessage);
	sInstance = this;
	OverrideInitGame();
}
void AMMOGameMode::StartPlay()
{
	UE_LOG(LogTemp, Log, TEXT("C++ StartPlay"));
	Super::StartPlay();
}

void AMMOGameMode::BeginPlay()
{
	UE_LOG(LogTemp, Log, TEXT("C++ BeginPlay"));
	Super::BeginPlay();
}

void AMMOGameMode::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	/**
	 * ����ʱ�����⣬�������������lua���п���PlayerController�Ѿ����ͷ�
	 * �ᵼ��lua����ʱ��Ұָ������
	 * ��������lua������������ص������
	 */
	 //����Lua
	UE_LOG(LogTemp, Log, TEXT("C++ EndPlay"));
	Super::EndPlay(EndPlayReason);
}

void AMMOGameMode::Tick(float DeltaSeconds)
{
	UE_LOG(LogTemp, Log, TEXT("C++ Tick"));
	Super::Tick(DeltaSeconds);
}
AMMOGameMode* AMMOGameMode::sInstance = nullptr;