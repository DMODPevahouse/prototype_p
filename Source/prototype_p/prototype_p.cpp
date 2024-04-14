// Copyright Epic Games, Inc. All Rights Reserved.

#include "prototype_p.h"
#include "Modules/ModuleManager.h"
#include "SkeletalMesh.h"
#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "UserWidget.h"


IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, prototype_p, "prototype_p" );
 

UCLASS()
class PROTOTYPE_P_API UMyCharacterCustomization : public UUserWidget
{
    GENERATED_BODY()

public:
    UMyCharacterCustomization(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character")
    USkeletalMesh* SkeletalMesh;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character")
    UAnimInstance* AnimInstance;

    UFUNCTION(BlueprintCallable, Category = "Character")
    void SetSkeletalMesh(USkeletalMesh* InSkeletalMesh);

    UFUNCTION(BlueprintCallable, Category = "Character")
    void SetAnimInstance(UAnimInstance* InAnimInstance);
};

UMyCharacterCustomization::UMyCharacterCustomization(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    SkeletalMesh = nullptr;
    AnimInstance = nullptr;
}

void UMyCharacterCustomization::SetSkeletalMesh(USkeletalMesh* InSkeletalMesh)
{
    SkeletalMesh = InSkeletalMesh;
}

void UMyCharacterCustomization::SetAnimInstance(UAnimInstance* InAnimInstance)
{
    AnimInstance = InAnimInstance;
}

IMPLEMENT_MODULE(FDefaultModuleImpl, ModuleTest);