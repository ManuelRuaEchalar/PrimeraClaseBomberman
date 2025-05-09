// Fill out your copyright notice in the Description page of Project Settings.
#include "MetalEnemyFactory.h"

// Sets default values
AMetalEnemyFactory::AMetalEnemyFactory()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}


AEnemigo* AMetalEnemyFactory::CreateEnemy(UWorld* World, const FVector& Location, const FRotator& Rotation)
{
    if (World)
    {
        return World->SpawnActor<AEnemigoMetal>(Location, Rotation);
    }
    return nullptr;
}

