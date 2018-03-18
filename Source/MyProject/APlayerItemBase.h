// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "APlayerItemBase.generated.h"

UCLASS()
class MYPROJECT_API AAPlayerItemBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAPlayerItemBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// ********************************************
};


class CItem
{
public:
	CItem();
	~CItem();
	FString itemID;
	FString itemName;

private:

};
