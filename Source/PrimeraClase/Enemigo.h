#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

UCLASS(Abstract)
class PRIMERACLASE_API AEnemigo : public AActor
{
	GENERATED_BODY()

public:
	AEnemigo();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
		UStaticMeshComponent* Mesh;

	// Atributo privado encapsulado
	UPROPERTY(EditAnywhere, Category = "Combate")
		int32 Vida;

public:
	virtual void Atacar() PURE_VIRTUAL(AEnemigo::Atacar, );

	// Getter y Setter encapsulados
	int32 GetVida() const { return Vida; }
	void SetVida(int32 NuevaVida) { Vida = NuevaVida; }
};
