#include "Modulo_Stealth_CppCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "InputActionValue.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

AModulo_Stealth_CppCharacter::AModulo_Stealth_CppCharacter()
{
	// Abilitiamo il crouch nel Character Movement
	GetCharacterMovement()->NavAgentProps.bCanCrouch = true;

	// Permettiamo la rotazione del personaggio in base alla camera
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true; // Il personaggio segue la direzione del movimento

	// Creiamo la Spring Arm (Camera Boom)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // Lunghezza standard
	CameraBoom->bUsePawnControlRotation = true;

	// Creiamo la Camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom);
	FollowCamera->bUsePawnControlRotation = false;

	// Salviamo i valori originali
	DefaultSpringArmLength = CameraBoom->TargetArmLength;
	DefaultWalkSpeed = GetCharacterMovement()->MaxWalkSpeed;
}

void AModulo_Stealth_CppCharacter::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (PlayerController)
	{
		UEnhancedInputLocalPlayerSubsystem* Subsystem =
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());

		if (Subsystem && DefaultMappingContext)
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
			UE_LOG(LogTemplateCharacter, Warning, TEXT("Mapping Context Caricato Correttamente"));
		}
		else
		{
			UE_LOG(LogTemplateCharacter, Error, TEXT("Mapping Context NON caricato!"));
		}
	}
}

void AModulo_Stealth_CppCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (EnhancedInputComponent)
	{
		if (MoveAction)
		{
			EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AModulo_Stealth_CppCharacter::Move);
		}

		if (LookAction)
		{
			EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AModulo_Stealth_CppCharacter::Look);
		}

		if (CrouchAction)
		{
			EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Triggered, this, &AModulo_Stealth_CppCharacter::HandleCrouch);
		}
	}
}

void AModulo_Stealth_CppCharacter::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller)
	{
		// Otteniamo la rotazione della camera
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0); // Ignoriamo Pitch e Roll

		// Determiniamo la direzione in avanti e laterale
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// Applichiamo il movimento
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AModulo_Stealth_CppCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();
	AddControllerYawInput(LookAxisVector.X);
	AddControllerPitchInput(LookAxisVector.Y);
}

void AModulo_Stealth_CppCharacter::HandleCrouch(const FInputActionValue& Value)
{
	bool bIsPressed = Value.Get<bool>();

	if (bIsPressed)
	{
		Crouch();
		CameraBoom->TargetArmLength = CrouchSpringArmLength;
		GetCharacterMovement()->MaxWalkSpeed = CrouchSpeed;
	}
	else
	{
		UnCrouch();
		CameraBoom->TargetArmLength = DefaultSpringArmLength;
		GetCharacterMovement()->MaxWalkSpeed = DefaultWalkSpeed;
	}
}
