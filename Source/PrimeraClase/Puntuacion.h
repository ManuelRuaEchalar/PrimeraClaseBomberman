#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Puntuacion.generated.h"

class UTextRenderComponent;

/**
 * APuntuacion
 * Actor singleton que muestra la puntuación en pantalla.
 */
UCLASS()
class PRIMERACLASE_API APuntuacion : public AActor
{
	GENERATED_BODY()

public:

	static APuntuacion* GetInstance(UWorld* World);

	void SetScore(int32 NewScore);
	int32 GetScore() const { return Score; }

protected:
	virtual void BeginPlay() override;

private:
	APuntuacion();
	// Única instancia
	static APuntuacion* Instance;

	// Componente para mostrar texto en el mundo
	UPROPERTY(VisibleAnywhere)
		UTextRenderComponent* TextComponent;

	// Valor interno de la puntuación
	int32 Score;

	// ——— Novedades para el timer ———
	/** Manejador del timer que llama a IncrementScore cada X segundos */
	FTimerHandle ScoreTimerHandle;

	/** Función que realmente incrementa el score en +10 */
	void IncrementScore();
};
