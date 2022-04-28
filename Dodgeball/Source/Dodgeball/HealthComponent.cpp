// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "HealthInterface.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;  // not use Tick event
                                                // for increanse performance

	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    
	// ...
}

void UHealthComponent::LoseHealth(float Amount)
{
    Health -= Amount;
    
    if(Health <= 0.f)
    {
        // die
        Health = 0.f;   // Health point can't be negative
        
        if(GetOwner()->Implements<UHealthInterface>())
        {
            // check function is implemented
            IHealthInterface::Execute_OnDeath(GetOwner());  // function (that have to be called in interface) has "Execute_"
        }
    }
}
