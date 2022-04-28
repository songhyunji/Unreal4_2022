// Fill out your copyright notice in the Description page of Project Settings.


#include "DodgeballFunctionLibrary.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "CollisionQueryParams.h"

bool UDodgeballFunctionLibrary::CanSeeActor(
                        const UWorld* World,
                        FVector Location,
                        const AActor* TargetActor,
                        TArray<const AActor*> IgnoreActors)
{
    if(TargetActor == nullptr)
    {
        return false;
    }
    
    FHitResult Hit; // save line trace result
    
    FVector Start = Location;   // line trace start
    FVector End = TargetActor->GetActorLocation();  // line trace end
    
    FQuat Rotation = FQuat::Identity;   // rotation in sweep trace (not use)
    
    // trace channel for judging visibility
    // ECollisionChannel Channel = ECollisionChannel::ECC_Visibility;
    ECollisionChannel Channel = ECollisionChannel::ECC_GameTraceChannel1;
    
    // GetWorld()->LineTraceSingleByChannel(Hit, Start, End, Channel); // execute line trace
    
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActors(IgnoreActors);  // ignore actors
    World->LineTraceSingleByChannel(Hit, Start, End, Channel, QueryParams); // execute line trace
    DrawDebugLine(World, Start, End, FColor::Red); // visualization line trace in game
    
    FCollisionShape Shape = FCollisionShape::MakeBox(FVector(20.f, 20.f, 20.f));    // object shape in sweep trace (not use)
    // GetWorld()->SweepSingleByChannel(Hit, Start, End, Rotation, Channel, Shape);    // call Sweep Single By Channel (not use)
    
    // if blocked, can't see target (return false)
    // else, can see target (return true)
    return !Hit.bBlockingHit;
}
