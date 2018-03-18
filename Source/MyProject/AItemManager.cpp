// Fill out your copyright notice in the Description page of Project Settings.

#include "AItemManager.h"


// Sets default values
AAItemManager::AAItemManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAItemManager::BeginPlay()
{
	Super::BeginPlay();
	myCharacter = Cast<AMyProjectCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)) ;
}

// Called every frame
void AAItemManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAItemManager::AddItem(FString ItemID)
{
	UE_LOG(LogTemp, Warning, TEXT("AddItem,%s"),*ItemID);
	//PlayerItemData itemDataTemp;
	//itemDataTemp.itemID = "1";
	//myCharacter->Inventory.Add(itemDataTemp);
	//UE_LOG(LogTemp, Warning, TEXT("AddItem,%d"), myCharacter->Inventory.Num());
}

