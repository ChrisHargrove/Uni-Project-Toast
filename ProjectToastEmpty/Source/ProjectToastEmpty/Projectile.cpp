// Fill out your copyright notice in the Description page of Project Settings.

#include "Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// Use a sphere as a simple collision representation
	m_collisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	m_collisionComponent->InitSphereRadius(5.0f);
	m_collisionComponent->BodyInstance.SetCollisionProfileName("Projectile");
	m_collisionComponent->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);	// Set up a notification for when this component hits something blocking

	// Players can't walk on it
	m_collisionComponent->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	m_collisionComponent->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = m_collisionComponent;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	m_projectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComponent"));
	m_projectileMovement->UpdatedComponent = m_collisionComponent;
	m_projectileMovement->InitialSpeed = 3000.f;
	m_projectileMovement->MaxSpeed = 3000.f;
	m_projectileMovement->bRotationFollowsVelocity = true;
	m_projectileMovement->bShouldBounce = true;
	m_projectileMovement->Bounciness = 0.3f;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AProjectile::OnHit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, FVector normalImpulse, const FHitResult& hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((otherActor != NULL) && (otherActor != this) && (otherComponent != NULL) && otherComponent->IsSimulatingPhysics())
	{
		otherComponent->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

		Destroy();
	}
}

