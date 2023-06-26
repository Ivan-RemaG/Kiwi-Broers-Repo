// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "blankProject/blankProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeblankProjectGameModeBase() {}
// Cross Module References
	BLANKPROJECT_API UClass* Z_Construct_UClass_AblankProjectGameModeBase_NoRegister();
	BLANKPROJECT_API UClass* Z_Construct_UClass_AblankProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_blankProject();
// End Cross Module References
	void AblankProjectGameModeBase::StaticRegisterNativesAblankProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AblankProjectGameModeBase);
	UClass* Z_Construct_UClass_AblankProjectGameModeBase_NoRegister()
	{
		return AblankProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AblankProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AblankProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_blankProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AblankProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "blankProjectGameModeBase.h" },
		{ "ModuleRelativePath", "blankProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AblankProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AblankProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AblankProjectGameModeBase_Statics::ClassParams = {
		&AblankProjectGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AblankProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AblankProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AblankProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AblankProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AblankProjectGameModeBase.OuterSingleton, Z_Construct_UClass_AblankProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AblankProjectGameModeBase.OuterSingleton;
	}
	template<> BLANKPROJECT_API UClass* StaticClass<AblankProjectGameModeBase>()
	{
		return AblankProjectGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AblankProjectGameModeBase);
	struct Z_CompiledInDeferFile_FID_blankProject_Source_blankProject_blankProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_blankProject_Source_blankProject_blankProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AblankProjectGameModeBase, AblankProjectGameModeBase::StaticClass, TEXT("AblankProjectGameModeBase"), &Z_Registration_Info_UClass_AblankProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AblankProjectGameModeBase), 3714259402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_blankProject_Source_blankProject_blankProjectGameModeBase_h_363983352(TEXT("/Script/blankProject"),
		Z_CompiledInDeferFile_FID_blankProject_Source_blankProject_blankProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_blankProject_Source_blankProject_blankProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
