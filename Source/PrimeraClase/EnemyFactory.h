// EnemyFactory.h
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Enemigo.h"
#include "EnemyFactory.generated.h"

// Esta clase define la interfaz para la fábrica de enemigos
UINTERFACE(MinimalAPI)
class UEnemyFactory : public UInterface
{
    GENERATED_BODY()
};

// Clase de la interfaz
class PRIMERACLASE_API IEnemyFactory
{
    GENERATED_BODY()

public:
    // Método fábrica que deberán implementar las clases concretas
    virtual AEnemigo* CreateEnemy(UWorld* World, const FVector& Location, const FRotator& Rotation) = 0;
};