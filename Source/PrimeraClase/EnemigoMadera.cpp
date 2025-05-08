#include "EnemigoMadera.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoMadera::AEnemigoMadera()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_Wood_Oak.M_Wood_Oak'"));
	if (Material.Succeeded())
	{
		Mesh->SetMaterial(0, Material.Object);
	}
}

void AEnemigoMadera::Atacar()
{
	int32 Daño = 5;
	SetVida(GetVida() - Daño);

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT("Enemigo de Madera atacó! Vida restante: %d"), GetVida()));
}
