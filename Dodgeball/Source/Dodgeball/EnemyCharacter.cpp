// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "DodgeballProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
AEnemyCharacter::AEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
    SightSource = CreateDefaultSubobject<USceneComponent>(TEXT("SightSource"));
    SightSource->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    
    ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);    // get character that controled by this player
    bCanSeePlayer = LookAtActor(PlayerCharacter);   // look at player each frame
    
    if(bCanSeePlayer != bPreviousCanSeePlayer)
    {
        if(bCanSeePlayer)
        {
            // start throwing dodgeball
            GetWorldTimerManager().SetTimer(ThrowTimerHandle, this, &AEnemyCharacter::ThrowDodgeball, ThrowingInterval, true, ThrowingDelay);
        }
        else
        {
            // stop throwing dodgeball
            GetWorldTimerManager().ClearTimer(ThrowTimerHandle);
        }
    }
    
    bPreviousCanSeePlayer = bCanSeePlayer;

}

// Called to bind functionality to input
void AEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

bool AEnemyCharacter::CanSeeActor(const AActor* TargetActor) const
{
    if(TargetActor == nullptr)
    {
        return false;
    }
    
    FHitResult Hit; // save line trace result
    
    //FVector Start = GetActorLocation(); // line trace start
    FVector Start = SightSource->GetComponentLocation();
    FVector End = TargetActor->GetActorLocation();  // line trace end    
    
    FQuat Rotation = FQuat::Identity;   // rotation in sweep trace (not use)
    
    // trace channel for judging visibility
    // ECollisionChannel Channel = ECollisionChannel::ECC_Visibility;
    ECollisionChannel Channel = ECollisionChannel::ECC_GameTraceChannel1;
    
    // GetWorld()->LineTraceSingleByChannel(Hit, Start, End, Channel); // execute line trace
    
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(this);  // ignore this actor (execute this line trace)
    QueryParams.AddIgnoredActor(TargetActor);  // ignore target actor
    GetWorld()->LineTraceSingleByChannel(Hit, Start, End, Channel, QueryParams); // execute line trace
    DrawDebugLine(GetWorld(), Start, End, FColor::Red); // visualization line trace in game
    
    FCollisionShape Shape = FCollisionShape::MakeBox(FVector(20.f, 20.f, 20.f));    // object shape in sweep trace (not use)
    // GetWorld()->SweepSingleByChannel(Hit, Start, End, Rotation, Channel, Shape);    // call Sweep Single By Channel (not use)
    
    // if blocked, can't see target (return false)
    // else, can see target (return true)
    return !Hit.bBlockingHit;
}

bool AEnemyCharacter::LookAtActor(AActor* TargetActor)
{
    if(TargetActor == nullptr)
    {
        return false;
    }
    
    if(CanSeeActor(TargetActor))
    {
        FVector Start = GetActorLocation();
        FVector End = TargetActor->GetActorLocation();
        FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(Start, End);    // calculate rotation that look at end from start
        
        SetActorRotation(LookAtRotation);   // enemy rotate
        return true;
    }
    return false;
}

void AEnemyCharacter::ThrowDodgeball()
{
    if(DodgeballClass == nullptr)
    {
        return;
    }
    
    FVector ForwardVector = GetActorForwardVector();
    float SpawnDistance = 40.f;
    FVector SpawnLocation = GetActorLocation() + (ForwardVector * SpawnDistance);
    // spawn new dodgeball
    // GetWorld()->SpawnActor<ADodgeballProjectile>(DodgeballClass, SpawnLocation, GetActorRotation());
    FTransform SpawnTransform(GetActorRotation(), SpawnLocation);
    ADodgeballProjectile* Projectile = GetWorld()->SpawnActorDeferred<ADodgeballProjectile>(DodgeballClass, SpawnTransform);
    Projectile->GetProjectileMovementComponent()->InitialSpeed = 2200.f;    // set initial speed
    Projectile->FinishSpawning(SpawnTransform);
}
