#include "prototype_p.h"
#include "Modules/ModuleManager.h"
#include "SkeletalMesh.h"
#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "UserWidget.h"
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_PRIMARY_GAME_MODULE(FDefaultGameModuleImpl, prototype_p, "prototype_p");

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

IMPLEMENT_MODULE(FDefaultModuleImpl, ModuleTest)
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	UE_LOG(LogTemp, Warning, TEXT("ModuleTest module has started!"));
	UMyCharacterCustomization* MyCharacterCustomization = NewObject<UMyCharacterCustomization>();
	MyCharacterCustomization->SetSkeletalMesh(nullptr);
	MyCharacterCustomization->SetAnimInstance(nullptr);
	UE_LOG(LogTemp, Warning, TEXT("SkeletalMesh: %s"), *MyCharacterCustomization->SkeletalMesh->GetName());
	UE_LOG(LogTemp, Warning, TEXT("AnimInstance: %s"), *MyCharacterCustomization->AnimInstance->GetName());
}


// function to get templates for character customization
void UMyCharacterCustomization::GetCharacterCustomizationTemplates()
{
	// Get the skeletal mesh
	USkeletalMesh* SkeletalMesh = nullptr;
	// Get the animation instance
	UAnimInstance* AnimInstance = nullptr;

	// Set the skeletal mesh
	SetSkeletalMesh(SkeletalMesh);
	// Set the animation instance
	SetAnimInstance(AnimInstance);
}
