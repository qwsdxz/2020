// Fill out your copyright notice in the Description page of Project Settings.

#include "ATimeManager.h"
#include "MyProject.h"
#include "EngineGlobals.h"


// Sets default values
AATimeManager::AATimeManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CurrentHour = 0;
	CurrentMinute = 0;
	UpdateRateSecond = 0.1f;
	UpdateDeltaMinute = 10;
}

// Called when the game starts or when spawned
void AATimeManager::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &AATimeManager::UpdateGameTime, 1.0f, true);
}

// Called every frame
void AATimeManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AATimeManager::UpdateGameTime()
{
	CurrentMinute += UpdateDeltaMinute;
	if (CurrentMinute >= 60)
	{
		CurrentMinute = CurrentMinute % 60;
		CurrentHour++;
		if (CurrentHour == 24) {
			CurrentHour = 0;
		}
	}
	UpdateGameTimeInBP();
}