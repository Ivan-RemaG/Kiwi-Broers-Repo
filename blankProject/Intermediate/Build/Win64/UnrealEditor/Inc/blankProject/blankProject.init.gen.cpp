// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeblankProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_blankProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_blankProject()
	{
		if (!Z_Registration_Info_UPackage__Script_blankProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/blankProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5F5E0CF2,
				0x6985B8DE,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_blankProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_blankProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_blankProject(Z_Construct_UPackage__Script_blankProject, TEXT("/Script/blankProject"), Z_Registration_Info_UPackage__Script_blankProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5F5E0CF2, 0x6985B8DE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
