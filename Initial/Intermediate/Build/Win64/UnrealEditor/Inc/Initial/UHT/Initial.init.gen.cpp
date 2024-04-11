// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInitial_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Initial;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Initial()
	{
		if (!Z_Registration_Info_UPackage__Script_Initial.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Initial",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x59EB43A8,
				0xA2F03842,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Initial.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Initial.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Initial(Z_Construct_UPackage__Script_Initial, TEXT("/Script/Initial"), Z_Registration_Info_UPackage__Script_Initial, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x59EB43A8, 0xA2F03842));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
