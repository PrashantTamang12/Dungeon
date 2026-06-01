// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectItem.h"

// Sets default values
ACollectItem::ACollectItem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Tags.Add("Collectable Item");

}

// Called when the game starts or when spawned
void ACollectItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollectItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

