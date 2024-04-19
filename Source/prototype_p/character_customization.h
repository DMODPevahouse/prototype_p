// this file will be adding in the required headings and classes for character_customization.cpp
#pragma once
#include "character.h"
#include "CoreMinimal.h"
#include "character_customization.generated.h"

UCLASS()
class PROTOTYPE_P_API Acharacter_customization : public Acharacter
{
	GENERATED_BODY()
	public:
		Acharacter_customization();
		virtual void BeginPlay() override;
		virtual void Tick(float DeltaTime) override;
		virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
		void MoveForward(float Value);
		void MoveRight(float Value);
		void TurnAtRate(float Rate);
		void LookUpAtRate(float Rate);
		void Jump();
		void StopJumping();
		void Turn(float Value);
		void LookUp(float Value);
		void OnStartJump();
		void OnStopJump();
		void OnStartCrouch();
		void OnStopCrouch();
		void OnStartSprint();
		void OnStopSprint();
		void OnStartAim();
		void OnStopAim();
		void OnStartFire();
		void OnStopFire();
		void OnStartReload();
		void OnStopReload();
		void OnStartInteract();
		void OnStopInteract();
		void OnStartSneak();
		void OnStopSneak();
		void OnStartSprint();
		void OnStopSprint();
		void OnStartAim();
		void OnStopAim();
		void OnStartFire();
		void OnStopFire();
		void OnStartReload();
		void OnStopReload();
		void OnStartInteract();
		void OnStopInteract();
		void OnStartSneak();
		void OnStopSneak();
		void OnStartSprint();
		void OnStopSprint();
		void OnStartAim();
		void OnStopAim();
		void OnStartFire();
		void OnStopFire();
		void OnStartReload();
		void OnStopReload();
		void OnStartInteract();
		void OnStopInteract();
		void OnStartSneak();
		void OnStopSneak();
		void OnStartSprint();
		void OnStopSprint();
		void OnStartAim();
		void OnStopAim();
		void OnStartFire();
		void OnStopFire();
		void OnStartReload();
		void OnStopReload();
		void OnStartInteract();
		void OnStopInteract();
		void OnStartSneak();
		void OnStopSneak();
		void OnStartSprint();
		void OnStopSprint();
		void OnStartAim();
		void OnStopAim();
		void OnStartFire();
		void OnStopFire();
		void OnStartReload();
		void On
};