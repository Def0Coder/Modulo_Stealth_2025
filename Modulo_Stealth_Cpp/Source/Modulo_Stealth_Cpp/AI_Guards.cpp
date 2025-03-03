#include "AI_Guards.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "NavigationSystem.h"
#include "AIController.h"
#include "GameFramework/Actor.h"
#include "Engine/TargetPoint.h"
#include "TimerManager.h"

AAI_Guards::AAI_Guards()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AAI_Guards::BeginPlay()
{
	Super::BeginPlay();

	AIController = Cast<AAIController>(GetController());

	// Trova tutti i Target Points nel livello
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), PatrolPoints);

	// Inizializza la pattuglia
	CurrentPatrolIndex = 0;
	if (PatrolPoints.Num() > 0)
	{
		MoveToNextPatrolPoint();
	}

	// Avvia il controllo della visione ogni 0.5 secondi
	GetWorldTimerManager().SetTimer(VisionTimer, this, &AAI_Guards::CheckForPlayer, 0.5f, true);
}

void AAI_Guards::MoveToNextPatrolPoint()
{
	if (PatrolPoints.Num() > 0 && AIController)
	{
		AActor* NextPoint = PatrolPoints[CurrentPatrolIndex];
		AIController->MoveToActor(NextPoint, 5.0f);
	}
}

void AAI_Guards::CheckForPlayer()
{
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (PlayerPawn)
	{
		FVector GuardLocation = GetActorLocation();
		FVector PlayerLocation = PlayerPawn->GetActorLocation();
		FVector DirectionToPlayer = (PlayerLocation - GuardLocation).GetSafeNormal();
		FVector ForwardVector = GetActorForwardVector();

		float Distance = FVector::Dist(GuardLocation, PlayerLocation);
		float DotProduct = FVector::DotProduct(ForwardVector, DirectionToPlayer);
		float Angle = FMath::RadiansToDegrees(FMath::Acos(DotProduct));

		bool bPlayerIsVisible = (Distance < VisionRange) && (Angle < VisionAngle);

		if (bPlayerIsVisible && !PlayerPawn->GetCharacterMovement()->IsCrouching())
		{
			bPlayerDetected = true;
			ChasePlayer();
		}
		else
		{
			bPlayerDetected = false;
			ResumePatrol();
		}
	}
}

void AAI_Guards::ChasePlayer()
{
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (AIController && PlayerPawn)
	{
		AIController->MoveToActor(PlayerPawn);
		GetWorldTimerManager().SetTimer(VisionTimer, this, &AAI_Guards::CheckPlayerStatus, 0.5f, true);
	}
}

void AAI_Guards::CheckPlayerStatus()
{
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (PlayerPawn)
	{
		if (FVector::Dist(GetActorLocation(), PlayerPawn->GetActorLocation()) < 100.0f)
		{
			GameOver();
		}
		else if (PlayerPawn->GetCharacterMovement()->IsCrouching())
		{
			bPlayerDetected = false;
			ResumePatrol();
		}
	}
}

void AAI_Guards::ResumePatrol()
{
	GetWorldTimerManager().ClearTimer(VisionTimer);
	bPlayerDetected = false;
	MoveToNextPatrolPoint();
}

void AAI_Guards::GameOver()
{
	UE_LOG(LogTemp, Warning, TEXT("Game Over!"));
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}

