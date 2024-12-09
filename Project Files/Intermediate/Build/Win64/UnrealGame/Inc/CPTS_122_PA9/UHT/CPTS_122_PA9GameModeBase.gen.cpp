// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPTS_122_PA9/CPTS_122_PA9GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPTS_122_PA9GameModeBase() {}

// Begin Cross Module References
CPTS_122_PA9_API UClass* Z_Construct_UClass_ACPTS_122_PA9GameModeBase();
CPTS_122_PA9_API UClass* Z_Construct_UClass_ACPTS_122_PA9GameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CPTS_122_PA9();
// End Cross Module References

// Begin Class ACPTS_122_PA9GameModeBase
void ACPTS_122_PA9GameModeBase::StaticRegisterNativesACPTS_122_PA9GameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPTS_122_PA9GameModeBase);
UClass* Z_Construct_UClass_ACPTS_122_PA9GameModeBase_NoRegister()
{
	return ACPTS_122_PA9GameModeBase::StaticClass();
}
struct Z_Construct_UClass_ACPTS_122_PA9GameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CPTS_122_PA9GameModeBase.h" },
		{ "ModuleRelativePath", "CPTS_122_PA9GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPTS_122_PA9GameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPTS_122_PA9GameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CPTS_122_PA9,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPTS_122_PA9GameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPTS_122_PA9GameModeBase_Statics::ClassParams = {
	&ACPTS_122_PA9GameModeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPTS_122_PA9GameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPTS_122_PA9GameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPTS_122_PA9GameModeBase()
{
	if (!Z_Registration_Info_UClass_ACPTS_122_PA9GameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPTS_122_PA9GameModeBase.OuterSingleton, Z_Construct_UClass_ACPTS_122_PA9GameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPTS_122_PA9GameModeBase.OuterSingleton;
}
template<> CPTS_122_PA9_API UClass* StaticClass<ACPTS_122_PA9GameModeBase>()
{
	return ACPTS_122_PA9GameModeBase::StaticClass();
}
ACPTS_122_PA9GameModeBase::ACPTS_122_PA9GameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPTS_122_PA9GameModeBase);
ACPTS_122_PA9GameModeBase::~ACPTS_122_PA9GameModeBase() {}
// End Class ACPTS_122_PA9GameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_charl_source_repos_CPTS_122_PA9_Source_CPTS_122_PA9_CPTS_122_PA9GameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPTS_122_PA9GameModeBase, ACPTS_122_PA9GameModeBase::StaticClass, TEXT("ACPTS_122_PA9GameModeBase"), &Z_Registration_Info_UClass_ACPTS_122_PA9GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPTS_122_PA9GameModeBase), 165144328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_charl_source_repos_CPTS_122_PA9_Source_CPTS_122_PA9_CPTS_122_PA9GameModeBase_h_3045268223(TEXT("/Script/CPTS_122_PA9"),
	Z_CompiledInDeferFile_FID_Users_charl_source_repos_CPTS_122_PA9_Source_CPTS_122_PA9_CPTS_122_PA9GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_charl_source_repos_CPTS_122_PA9_Source_CPTS_122_PA9_CPTS_122_PA9GameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
