// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIdeenFest_Project_init() {}
	IDEENFEST_PROJECT_API UFunction* Z_Construct_UDelegateFunction_IdeenFest_Project_OnPickUp__DelegateSignature();
	IDEENFEST_PROJECT_API UFunction* Z_Construct_UDelegateFunction_IdeenFest_Project_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_IdeenFest_Project;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_IdeenFest_Project()
	{
		if (!Z_Registration_Info_UPackage__Script_IdeenFest_Project.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_IdeenFest_Project_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_IdeenFest_Project_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/IdeenFest_Project",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6295765D,
				0x4B6C8F2E,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_IdeenFest_Project.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_IdeenFest_Project.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_IdeenFest_Project(Z_Construct_UPackage__Script_IdeenFest_Project, TEXT("/Script/IdeenFest_Project"), Z_Registration_Info_UPackage__Script_IdeenFest_Project, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6295765D, 0x4B6C8F2E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
