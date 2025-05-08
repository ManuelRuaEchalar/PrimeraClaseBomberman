#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoMadera.generated.h"

UCLASS()
class PRIMERACLASE_API AEnemigoMadera : public AEnemigo
{
	GENERATED_BODY()

public:
	AEnemigoMadera();

	virtual void Atacar() override;
};
