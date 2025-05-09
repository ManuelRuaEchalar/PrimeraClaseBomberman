// Fill out your copyright notice in the Description page of Project Settings.


#include "WoodEnemyFactory.h"

// Sets default values
AWoodEnemyFactory::AWoodEnemyFactory()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

AEnemigo* AWoodEnemyFactory::CreateEnemy(UWorld* World, const FVector& Location, const FRotator& Rotation)
{
    if (World)
    {
        return World->SpawnActor<AEnemigoMadera>(Location, Rotation);
    }
    return nullptr;
}

