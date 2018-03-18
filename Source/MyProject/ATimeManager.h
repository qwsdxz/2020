// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ATimeManager.generated.h"

UCLASS()
class MYPROJECT_API AATimeManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AATimeManager();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void UpdateGameTime();

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateGameTimeInBP();

	UPROPERTY(BlueprintReadOnly)
	int32 CurrentHour;
	UPROPERTY(BlueprintReadOnly)
	int32 CurrentMinute;

	UPROPERTY(EditAnywhere)
	float UpdateRateSecond;

	UPROPERTY(EditAnywhere)
	float UpdateDeltaMinute;

	// ¶¨Ê±Æ÷
	FTimerHandle CountdownTimerHandle;
};
