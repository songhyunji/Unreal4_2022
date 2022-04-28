// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyCharacter.generated.h"

UCLASS()
class DODGEBALL_API AEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyCharacter();
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=LookAt, meta=(AllowPrivateAccess="true"))
    class ULookAtActorComponent* LookAtActorComponent;
    
    // class for making dodgeball object
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Dodgeball)
    TSubclassOf<class ADodgeballProjectile> DodgeballClass;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    
    bool bCanSeePlayer = false;         // if enemy can see player this frame
    bool bPreviousCanSeePlayer = false;  // if enemy could see player last frame
    FTimerHandle ThrowTimerHandle;
    float ThrowingInterval = 2.f;
    float ThrowingDelay = 0.5f;
    void ThrowDodgeball();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
