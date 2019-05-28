// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSCharacter.h"
#include "Projectile.h"
#include "Animation/AnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "Kismet/GameplayStatics.h"
#include "Debug.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

// Sets default values
AFPSCharacter::AFPSCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.0f, 96.0f);
	
	//Set our rotation rates for input - increase for faster rotation or decrease for slower
	m_rotationBaseRate = FVector2D(45.0f, 45.0f);

	// Create a camera component
	m_cameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCameraComponent"));
	m_cameraComponent->SetupAttachment(GetCapsuleComponent());
	m_cameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); // Position the camera
	m_cameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	m_characterMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMeshComponent"));
	m_characterMeshComponent->SetOnlyOwnerSee(true);
	m_characterMeshComponent->SetupAttachment(m_cameraComponent);
	m_characterMeshComponent->bCastDynamicShadow = false;
	m_characterMeshComponent->CastShadow = false;
	m_characterMeshComponent->RelativeRotation = FRotator(1.9f, -19.19f, 5.2f);
	m_characterMeshComponent->RelativeLocation = FVector(-0.5f, -4.4f, -155.7f);

	// Create a gun mesh component
	m_gunMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GunMeshComponent"));
	m_gunMeshComponent->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	m_gunMeshComponent->bCastDynamicShadow = false;
	m_gunMeshComponent->CastShadow = false;
	// m_gunMeshComponent->SetupAttachment(m_characterMeshComponent, TEXT("GripPoint"));
	m_gunMeshComponent->SetupAttachment(RootComponent);

	m_muzzleLocationComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocationComponent"));
	m_muzzleLocationComponent->SetupAttachment(m_gunMeshComponent);
	m_muzzleLocationComponent->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	m_gunOffset = FVector(100.0f, 0.0f, 10.0f);
	
	//Enable the crouch functionality
	GetCharacterMovement()->GetNavAgentPropertiesRef().bCanCrouch = true;
}


// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();

	Debug::Print("FPSCharacter : Initialized", FColor::Green);

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	//m_gunMeshComponent->AttachToComponent(m_characterMeshComponent, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));
}


// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	
	//Camera rotation on devices that provide absolute delta, such as a mouse
	PlayerInputComponent->BindAxis("RotateHorizontalDelta", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("RotateVerticalDelta", this, &APawn::AddControllerPitchInput);
	
	//Camera rotation on devices that we choose to treat as a rate of change, such as an analog joystick or button press
	PlayerInputComponent->BindAxis("RotateHorizontal", this, &AFPSCharacter::RotateHorizontal);
	PlayerInputComponent->BindAxis("RotateVertical", this, &AFPSCharacter::RotateVertical);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	//PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPSCharacter::OnFire);
}


void AFPSCharacter::OnFire()
{
	// try and fire a projectile
	if (m_projectileClass != NULL) {

		UWorld* const World = GetWorld();

		if (World != NULL) {

			const FRotator SpawnRotation = GetControlRotation();
			// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
			const FVector SpawnLocation = ((m_muzzleLocationComponent != nullptr)
											? m_muzzleLocationComponent->GetComponentLocation()
											: GetActorLocation()) + SpawnRotation.RotateVector(m_gunOffset);

			//Set Spawn Collision Handling Override
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

			// spawn the projectile at the muzzle
			World->SpawnActor<AProjectile>(m_projectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
		}
	}

	// try and play the sound if specified
	if (m_fireSound != NULL) {

		UGameplayStatics::PlaySoundAtLocation(this, m_fireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (m_fireAnimation != NULL) {

		// Get the animation object for the arms mesh
		UAnimInstance* animation = m_characterMeshComponent->GetAnimInstance();
		
		if (animation != NULL) {
			animation->Montage_Play(m_fireAnimation, 1.f);
		}
	}
}


void AFPSCharacter::MoveForward(float amount)
{
	if (amount != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), amount);
	}
}


void AFPSCharacter::MoveRight(float amount)
{
	if (amount != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), amount);
	}
}


void AFPSCharacter::RotateHorizontal(float amount)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(amount * m_rotationBaseRate.X * GetWorld()->GetDeltaSeconds());
}


void AFPSCharacter::RotateVertical(float amount)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(amount * m_rotationBaseRate.Y * GetWorld()->GetDeltaSeconds());
}