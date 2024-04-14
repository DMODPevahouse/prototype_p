// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "prototype_p/prototype_pPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeprototype_pPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	PROTOTYPE_P_API UClass* Z_Construct_UClass_Aprototype_pPlayerController();
	PROTOTYPE_P_API UClass* Z_Construct_UClass_Aprototype_pPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_prototype_p();
// End Cross Module References
	void Aprototype_pPlayerController::StaticRegisterNativesAprototype_pPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aprototype_pPlayerController);
	UClass* Z_Construct_UClass_Aprototype_pPlayerController_NoRegister()
	{
		return Aprototype_pPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_Aprototype_pPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aprototype_pPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_prototype_p,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aprototype_pPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprototype_pPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "prototype_pPlayerController.h" },
		{ "ModuleRelativePath", "prototype_pPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprototype_pPlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "prototype_pPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aprototype_pPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Aprototype_pPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aprototype_pPlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_Aprototype_pPlayerController_Statics::NewProp_InputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aprototype_pPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aprototype_pPlayerController_Statics::NewProp_InputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aprototype_pPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aprototype_pPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Aprototype_pPlayerController_Statics::ClassParams = {
		&Aprototype_pPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Aprototype_pPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Aprototype_pPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aprototype_pPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_Aprototype_pPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aprototype_pPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_Aprototype_pPlayerController()
	{
		if (!Z_Registration_Info_UClass_Aprototype_pPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aprototype_pPlayerController.OuterSingleton, Z_Construct_UClass_Aprototype_pPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Aprototype_pPlayerController.OuterSingleton;
	}
	template<> PROTOTYPE_P_API UClass* StaticClass<Aprototype_pPlayerController>()
	{
		return Aprototype_pPlayerController::StaticClass();
	}
	Aprototype_pPlayerController::Aprototype_pPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aprototype_pPlayerController);
	Aprototype_pPlayerController::~Aprototype_pPlayerController() {}
	struct Z_CompiledInDeferFile_FID_prototype_p_Source_prototype_p_prototype_pPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prototype_p_Source_prototype_p_prototype_pPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Aprototype_pPlayerController, Aprototype_pPlayerController::StaticClass, TEXT("Aprototype_pPlayerController"), &Z_Registration_Info_UClass_Aprototype_pPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aprototype_pPlayerController), 2317892526U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prototype_p_Source_prototype_p_prototype_pPlayerController_h_2633053741(TEXT("/Script/prototype_p"),
		Z_CompiledInDeferFile_FID_prototype_p_Source_prototype_p_prototype_pPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prototype_p_Source_prototype_p_prototype_pPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
