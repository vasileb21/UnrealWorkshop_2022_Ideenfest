// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IdeenFest_Project/IdeenFest_ProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIdeenFest_ProjectGameMode() {}
// Cross Module References
	IDEENFEST_PROJECT_API UClass* Z_Construct_UClass_AIdeenFest_ProjectGameMode_NoRegister();
	IDEENFEST_PROJECT_API UClass* Z_Construct_UClass_AIdeenFest_ProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_IdeenFest_Project();
// End Cross Module References
	void AIdeenFest_ProjectGameMode::StaticRegisterNativesAIdeenFest_ProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIdeenFest_ProjectGameMode);
	UClass* Z_Construct_UClass_AIdeenFest_ProjectGameMode_NoRegister()
	{
		return AIdeenFest_ProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AIdeenFest_ProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIdeenFest_ProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_IdeenFest_Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIdeenFest_ProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "IdeenFest_ProjectGameMode.h" },
		{ "ModuleRelativePath", "IdeenFest_ProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIdeenFest_ProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIdeenFest_ProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIdeenFest_ProjectGameMode_Statics::ClassParams = {
		&AIdeenFest_ProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AIdeenFest_ProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIdeenFest_ProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIdeenFest_ProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_AIdeenFest_ProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIdeenFest_ProjectGameMode.OuterSingleton, Z_Construct_UClass_AIdeenFest_ProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIdeenFest_ProjectGameMode.OuterSingleton;
	}
	template<> IDEENFEST_PROJECT_API UClass* StaticClass<AIdeenFest_ProjectGameMode>()
	{
		return AIdeenFest_ProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIdeenFest_ProjectGameMode);
	struct Z_CompiledInDeferFile_FID_IdeenFest_Project_Source_IdeenFest_Project_IdeenFest_ProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IdeenFest_Project_Source_IdeenFest_Project_IdeenFest_ProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIdeenFest_ProjectGameMode, AIdeenFest_ProjectGameMode::StaticClass, TEXT("AIdeenFest_ProjectGameMode"), &Z_Registration_Info_UClass_AIdeenFest_ProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIdeenFest_ProjectGameMode), 231454909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IdeenFest_Project_Source_IdeenFest_Project_IdeenFest_ProjectGameMode_h_3489500435(TEXT("/Script/IdeenFest_Project"),
		Z_CompiledInDeferFile_FID_IdeenFest_Project_Source_IdeenFest_Project_IdeenFest_ProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IdeenFest_Project_Source_IdeenFest_Project_IdeenFest_ProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
