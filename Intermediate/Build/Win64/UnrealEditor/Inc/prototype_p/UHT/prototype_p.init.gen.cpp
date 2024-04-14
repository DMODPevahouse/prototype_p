// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeprototype_p_init() {}
	PROTOTYPE_P_API UFunction* Z_Construct_UDelegateFunction_prototype_p_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_prototype_p;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_prototype_p()
	{
		if (!Z_Registration_Info_UPackage__Script_prototype_p.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_prototype_p_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/prototype_p",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF86C9D53,
				0x4FB7CB5E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_prototype_p.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_prototype_p.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_prototype_p(Z_Construct_UPackage__Script_prototype_p, TEXT("/Script/prototype_p"), Z_Registration_Info_UPackage__Script_prototype_p, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF86C9D53, 0x4FB7CB5E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
