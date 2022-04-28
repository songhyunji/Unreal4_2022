// Fill out your copyright notice in the Description page of Project Settings.


#include "DodgeballProjectile.h"
#include "Components/SphereComponent.h"
#include "DodgeballCharacter.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "HealthComponent.h"

// Sets default values
ADodgeballProjectile::ADodgeballProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
    SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collision"));
    SphereComponent->SetSphereRadius(35.f);
    SphereComponent->SetCollisionProfileName(FName("Dodgeball"));
    SphereComponent->SetSimulatePhysics(true);
    SphereComponent->SetNotifyRigidBodyCollision(true); // simulation make Hit event

    // binding OnHit() to SphereComponent->OnHit event
    // SphereComponent->OnHit event called => OnHit() called
    SphereComponent->OnComponentHit.AddDynamic(this, &ADodgeballProjectile::OnHit); // set On Component Hit event
    
    // set this Sphere Component to Root Component
    // if not, collision dont operate well
    RootComponent = SphereComponent;
    
    ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
    
    ProjectileMovement->InitialSpeed = 1500.f;
}

// Called when the game starts or when spawned
void ADodgeballProjectile::BeginPlay()
{
	Super::BeginPlay();
	
    SetLifeSpan(5.f);   // destroy itself when 5 sec after spawn
}

// Called every frame
void ADodgeballProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADodgeballProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    ADodgeballCharacter* Player = Cast<ADodgeballCharacter>(OtherActor);
    if(Player != nullptr)
    {
        // "Player" is real player (not other actor)
        UHealthComponent* HealthComponent = Player->FindComponentByClass<UHealthComponent>();
        
        if(HealthComponent != nullptr)
        {
            HealthComponent->LoseHealth(Damage);
        }
        Destroy();
    }
}
