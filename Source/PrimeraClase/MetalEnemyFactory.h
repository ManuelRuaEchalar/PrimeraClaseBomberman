// MetalEnemyFactory.h
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyFactory.h"
#include "EnemigoMetal.h"
#include "MetalEnemyFactory.generated.h"

UCLASS()
class PRIMERACLASE_API AMetalEnemyFactory : public AActor, public IEnemyFactory
{
    GENERATED_BODY()

public:
    AMetalEnemyFactory();

    // Implementación del método fábrica para crear enemigos de metal
    virtual AEnemigo* CreateEnemy(UWorld* World, const FVector& Location, const FRotator& Rotation) override;
};

