#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoMetal.generated.h"

UCLASS()
class PRIMERACLASE_API AEnemigoMetal : public AEnemigo
{
	GENERATED_BODY()

public:
	AEnemigoMetal();

	virtual void Atacar() override;
};
