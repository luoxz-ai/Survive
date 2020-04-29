// Fill out your copyright notice in the Description page of Project Settings.


#include "MessageManager.h"

// Sets default values
AMessageManager::AMessageManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMessageManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMessageManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AMessageManager::Disconnect()
{
	message->PostDisconnect();
}
void AMessageManager::Connect(const FString& Host)
{
	message = MakeShareable(new Message(std::string(TCHAR_TO_UTF8(*Host))));

	message->PostConnect();
}


