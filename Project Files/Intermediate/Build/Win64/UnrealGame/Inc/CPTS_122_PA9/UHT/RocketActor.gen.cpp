// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPTS_122_PA9/RocketActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRocketActor() {}

// Begin Cross Module References
CPTS_122_PA9_API UClass* Z_Construct_UClass_ARocketActor();
CPTS_122_PA9_API UClass* Z_Construct_UClass_ARocketActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CPTS_122_PA9();
// End Cross Module References

// Begin Class ARocketActor Function SetSimTime
struct Z_Construct_UFunction_ARocketActor_SetSimTime_Statics
{
	struct RocketActor_eventSetSimTime_Parms
	{
		float Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sim Time" },
		{ "ModuleRelativePath", "RocketActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARocketActor_SetSimTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RocketActor_eventSetSimTime_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARocketActor_SetSimTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARocketActor_SetSimTime_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARocketActor_SetSimTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARocketActor_SetSimTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARocketActor, nullptr, "SetSimTime", nullptr, nullptr, Z_Construct_UFunction_ARocketActor_SetSimTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARocketActor_SetSimTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARocketActor_SetSimTime_Statics::RocketActor_eventSetSimTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARocketActor_SetSimTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARocketActor_SetSimTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARocketActor_SetSimTime_Statics::RocketActor_eventSetSimTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARocketActor_SetSimTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARocketActor_SetSimTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARocketActor::execSetSimTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSimTime(Z_Param_Time);
	P_NATIVE_END;
}
// End Class ARocketActor Function SetSimTime

// Begin Class ARocketActor Function SpawnRocket
struct Z_Construct_UFunction_ARocketActor_SpawnRocket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SPAWNING" },
		{ "ModuleRelativePath", "RocketActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARocketActor_SpawnRocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARocketActor, nullptr, "SpawnRocket", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARocketActor_SpawnRocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARocketActor_SpawnRocket_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARocketActor_SpawnRocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARocketActor_SpawnRocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARocketActor::execSpawnRocket)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnRocket();
	P_NATIVE_END;
}
// End Class ARocketActor Function SpawnRocket

// Begin Class ARocketActor Function startSim
struct Z_Construct_UFunction_ARocketActor_startSim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SPAWNING" },
		{ "ModuleRelativePath", "RocketActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARocketActor_startSim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARocketActor, nullptr, "startSim", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARocketActor_startSim_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARocketActor_startSim_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARocketActor_startSim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARocketActor_startSim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARocketActor::execstartSim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->startSim();
	P_NATIVE_END;
}
// End Class ARocketActor Function startSim

// Begin Class ARocketActor Function UpdatePosAndRotation
struct Z_Construct_UFunction_ARocketActor_UpdatePosAndRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sim Time" },
		{ "ModuleRelativePath", "RocketActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARocketActor_UpdatePosAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARocketActor, nullptr, "UpdatePosAndRotation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARocketActor_UpdatePosAndRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARocketActor_UpdatePosAndRotation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARocketActor_UpdatePosAndRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARocketActor_UpdatePosAndRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARocketActor::execUpdatePosAndRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePosAndRotation();
	P_NATIVE_END;
}
// End Class ARocketActor Function UpdatePosAndRotation

// Begin Class ARocketActor Function UpdateSimTime
struct Z_Construct_UFunction_ARocketActor_UpdateSimTime_Statics
{
	struct RocketActor_eventUpdateSimTime_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sim Time" },
		{ "ModuleRelativePath", "RocketActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARocketActor_UpdateSimTime_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RocketActor_eventUpdateSimTime_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARocketActor_UpdateSimTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARocketActor_UpdateSimTime_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARocketActor_UpdateSimTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARocketActor_UpdateSimTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARocketActor, nullptr, "UpdateSimTime", nullptr, nullptr, Z_Construct_UFunction_ARocketActor_UpdateSimTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARocketActor_UpdateSimTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARocketActor_UpdateSimTime_Statics::RocketActor_eventUpdateSimTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARocketActor_UpdateSimTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARocketActor_UpdateSimTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARocketActor_UpdateSimTime_Statics::RocketActor_eventUpdateSimTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARocketActor_UpdateSimTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARocketActor_UpdateSimTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARocketActor::execUpdateSimTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSimTime(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class ARocketActor Function UpdateSimTime

// Begin Class ARocketActor
void ARocketActor::StaticRegisterNativesARocketActor()
{
	UClass* Class = ARocketActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSimTime", &ARocketActor::execSetSimTime },
		{ "SpawnRocket", &ARocketActor::execSpawnRocket },
		{ "startSim", &ARocketActor::execstartSim },
		{ "UpdatePosAndRotation", &ARocketActor::execUpdatePosAndRotation },
		{ "UpdateSimTime", &ARocketActor::execUpdateSimTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARocketActor);
UClass* Z_Construct_UClass_ARocketActor_NoRegister()
{
	return ARocketActor::StaticClass();
}
struct Z_Construct_UClass_ARocketActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RocketActor.h" },
		{ "ModuleRelativePath", "RocketActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimTime_MetaData[] = {
		{ "Category", "Sim Time" },
		{ "ModuleRelativePath", "RocketActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMultiplier_MetaData[] = {
		{ "Category", "Sim Time" },
		{ "ModuleRelativePath", "RocketActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_startFlag_MetaData[] = {
		{ "Category", "SPAWNING" },
		{ "ModuleRelativePath", "RocketActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxTime_MetaData[] = {
		{ "Category", "SPAWNING" },
		{ "ModuleRelativePath", "RocketActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplier;
	static void NewProp_startFlag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_startFlag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARocketActor_SetSimTime, "SetSimTime" }, // 1767094185
		{ &Z_Construct_UFunction_ARocketActor_SpawnRocket, "SpawnRocket" }, // 254668992
		{ &Z_Construct_UFunction_ARocketActor_startSim, "startSim" }, // 40173207
		{ &Z_Construct_UFunction_ARocketActor_UpdatePosAndRotation, "UpdatePosAndRotation" }, // 2928799123
		{ &Z_Construct_UFunction_ARocketActor_UpdateSimTime, "UpdateSimTime" }, // 2019372414
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARocketActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARocketActor_Statics::NewProp_SimTime = { "SimTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARocketActor, SimTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimTime_MetaData), NewProp_SimTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARocketActor_Statics::NewProp_SpeedMultiplier = { "SpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARocketActor, SpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedMultiplier_MetaData), NewProp_SpeedMultiplier_MetaData) };
void Z_Construct_UClass_ARocketActor_Statics::NewProp_startFlag_SetBit(void* Obj)
{
	((ARocketActor*)Obj)->startFlag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARocketActor_Statics::NewProp_startFlag = { "startFlag", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARocketActor), &Z_Construct_UClass_ARocketActor_Statics::NewProp_startFlag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_startFlag_MetaData), NewProp_startFlag_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARocketActor_Statics::NewProp_maxTime = { "maxTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARocketActor, maxTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxTime_MetaData), NewProp_maxTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARocketActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARocketActor_Statics::NewProp_SimTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARocketActor_Statics::NewProp_SpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARocketActor_Statics::NewProp_startFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARocketActor_Statics::NewProp_maxTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARocketActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARocketActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CPTS_122_PA9,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARocketActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARocketActor_Statics::ClassParams = {
	&ARocketActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARocketActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARocketActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARocketActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARocketActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARocketActor()
{
	if (!Z_Registration_Info_UClass_ARocketActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARocketActor.OuterSingleton, Z_Construct_UClass_ARocketActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARocketActor.OuterSingleton;
}
template<> CPTS_122_PA9_API UClass* StaticClass<ARocketActor>()
{
	return ARocketActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARocketActor);
ARocketActor::~ARocketActor() {}
// End Class ARocketActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_charl_source_repos_CPTS_122_PA9_Source_CPTS_122_PA9_RocketActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARocketActor, ARocketActor::StaticClass, TEXT("ARocketActor"), &Z_Registration_Info_UClass_ARocketActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARocketActor), 86969908U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_charl_source_repos_CPTS_122_PA9_Source_CPTS_122_PA9_RocketActor_h_2122856626(TEXT("/Script/CPTS_122_PA9"),
	Z_CompiledInDeferFile_FID_Users_charl_source_repos_CPTS_122_PA9_Source_CPTS_122_PA9_RocketActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_charl_source_repos_CPTS_122_PA9_Source_CPTS_122_PA9_RocketActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
