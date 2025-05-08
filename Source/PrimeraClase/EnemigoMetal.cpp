#include "EnemigoMetal.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoMetal::AEnemigoMetal()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel'"));
	if (Material.Succeeded())
	{
		Mesh->SetMaterial(0, Material.Object);
	}
}

void AEnemigoMetal::Atacar()
{
	int32 Daño = 15;
	SetVida(GetVida() - Daño);

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT("Enemigo de Metal atacó! Vida restante: %d"), GetVida()));
}
