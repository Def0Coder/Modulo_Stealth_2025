#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AI_Guards.generated.h"

class ATargetPoint;
class AAIController;

UCLASS()
class YOURGAME_API AAI_Guards : public ACharacter
{
	GENERATED_BODY()

public:
	AAI_Guards();

protected:
	virtual void BeginPlay() override;

	/** Spostamento della guardia tra i punti di pattuglia */
	void MoveToNextPatrolPoint();

	/** Quando la guardia raggiunge un punto di pattuglia */
	UFUNCTION()
	void OnMoveCompleted(struct FAIRequestID RequestID, const struct FPathFollowingResult& Result);

	/** Controlla se il player è visibile */
	void CheckForPlayer();

	/** Insegue il player */
	void ChasePlayer();

	/** Controlla lo stato del player */
	void CheckPlayerStatus();

	/** Resetta la pattuglia se il player è accovacciato */
	void ResumePatrol();

	/** Termina il gioco se il player viene raggiunto */
	void GameOver();

	/** Array di punti di pattuglia */
	UPROPERTY(EditAnywhere, Category = "AI")
	TArray<AActor*> PatrolPoints;

	/** Indice del punto attuale nella pattuglia */
	UPROPERTY(EditAnywhere, Category = "AI")
	int32 CurrentPatrolIndex;

	/** Distanza di visione della guardia */
	UPROPERTY(EditAnywhere, Category = "AI")
	float VisionRange = 1000.0f;

	/** Angolo di visione della guardia */
	UPROPERTY(EditAnywhere, Category = "AI")
	float VisionAngle = 60.0f;

	/** Indica se il player è stato rilevato */
	UPROPERTY(EditAnywhere, Category = "AI")
	bool bPlayerDetected = false;

	UPROPERTY()
	AAIController* AIController;

	/** Timer per controllare la vista della guardia */
	FTimerHandle VisionTimer;
};
