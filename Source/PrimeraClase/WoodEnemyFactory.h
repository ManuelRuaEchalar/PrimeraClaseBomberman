// WoodEnemyFactory.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyFactory.h"
#include "EnemigoMadera.h"
#include "WoodEnemyFactory.generated.h"

UCLASS()
class PRIMERACLASE_API AWoodEnemyFactory : public AActor, public IEnemyFactory
{
    GENERATED_BODY()

public:
    AWoodEnemyFactory();

    // Implementación del método fábrica para crear enemigos de madera
    virtual AEnemigo* CreateEnemy(UWorld* World, const FVector& Location, const FRotator& Rotation) override;
};

