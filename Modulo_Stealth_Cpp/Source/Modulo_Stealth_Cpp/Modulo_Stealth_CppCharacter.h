#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "Modulo_Stealth_CppCharacter.generated.h"

// Forward declaration
class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class UAnimInstance;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config = Game)
class AModulo_Stealth_CppCharacter : public ACharacter
{
	GENERATED_BODY()

private:
	/** Lunghezza originale della Spring Arm */
	float DefaultSpringArmLength;

	/** Velocità di movimento originale */
	float DefaultWalkSpeed;

protected:
	/** Camera boom (Spring Arm) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Camera principale che segue il personaggio */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

	/** Mapping Context */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Input per il salto */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Input per il movimento */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Input per guardarsi attorno */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	/** Input per il crouch */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* CrouchAction;

	/** Lunghezza della Spring Arm quando il personaggio è accovacciato */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float CrouchSpringArmLength = 200.0f;

	/** Velocità di movimento quando il personaggio è accovacciato */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float CrouchSpeed = 150.0f;

public:
	AModulo_Stealth_CppCharacter();

protected:
	/** Funzione per gestire il movimento */
	void Move(const FInputActionValue& Value);

	/** Funzione per gestire la visuale */
	void Look(const FInputActionValue& Value);

	/** Funzione per gestire il crouch */
	void HandleCrouch(const FInputActionValue& Value);

	/** Aggiorna lo stato dell'animazione */
	void UpdateAnimationState();

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void BeginPlay() override;
};


