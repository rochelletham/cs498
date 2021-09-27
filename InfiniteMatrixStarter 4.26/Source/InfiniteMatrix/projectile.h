// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "projectile.generated.h"
#include "Components/SphereComponent.h"

UCLASS()
class INFINITEMATRIX_API Aprojectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aprojectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

   // Sphere collision component.
   UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
   USphereComponent* CollisionComponent;

   // Projectile movement component.
   UPROPERTY(VisibleAnywhere, Category = Movement)
   UProjectileMovementComponent* ProjectileMovementComponent;

   // Function that initializes the projectile's velocity in the shoot direction.
   void FireInDirection(const FVector& ShootDirection);

   // Function that handles firing projectiles.
   UFUNCTION()
   void Fire();

   // Handles input for moving forward and backward.
    UFUNCTION()
    void MoveForward(float Value);

    // Handles input for moving right and left.
    UFUNCTION()
    void MoveRight(float Value);

    // Sets jump flag when key is pressed.
    UFUNCTION()
    void StartJump();

    // Clears jump flag when key is released.
    UFUNCTION()
    void StopJump();

   // FPS camera
    UPROPERTY(VisibleAnywhere)
    UCameraComponent* FPSCameraComponent;

    // First-person mesh (arms), visible only to the owning player.
    UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
    USkeletalMeshComponent* FPSMesh;



};
