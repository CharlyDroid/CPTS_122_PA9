// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RocketActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPTS_122_PA9_RocketActor_generated_h
#error "RocketActor.generated.h already included, missing '#pragma once' in RocketActor.h"
#endif
#define CPTS_122_PA9_RocketActor_generated_h

<<<<<<< HEAD
#define FID_Users_mmila_Desktop_CPTS_122_PA9_Source_CPTS_122_PA9_RocketActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execstartSim); \
=======
#define FID_Users_charl_OneDrive___Washington_State_University__email_wsu_edu__2024_2025_School_Year_CPTS_122_PA9_Source_CPTS_122_PA9_RocketActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSimTime); \
>>>>>>> master
	DECLARE_FUNCTION(execUpdateSimTime); \
	DECLARE_FUNCTION(execSpawnRocket);


#define FID_Users_mmila_Desktop_CPTS_122_PA9_Source_CPTS_122_PA9_RocketActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARocketActor(); \
	friend struct Z_Construct_UClass_ARocketActor_Statics; \
public: \
	DECLARE_CLASS(ARocketActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPTS_122_PA9"), NO_API) \
	DECLARE_SERIALIZER(ARocketActor)


#define FID_Users_mmila_Desktop_CPTS_122_PA9_Source_CPTS_122_PA9_RocketActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARocketActor(ARocketActor&&); \
	ARocketActor(const ARocketActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARocketActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARocketActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARocketActor) \
	NO_API virtual ~ARocketActor();


#define FID_Users_mmila_Desktop_CPTS_122_PA9_Source_CPTS_122_PA9_RocketActor_h_13_PROLOG
#define FID_Users_mmila_Desktop_CPTS_122_PA9_Source_CPTS_122_PA9_RocketActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mmila_Desktop_CPTS_122_PA9_Source_CPTS_122_PA9_RocketActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mmila_Desktop_CPTS_122_PA9_Source_CPTS_122_PA9_RocketActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_mmila_Desktop_CPTS_122_PA9_Source_CPTS_122_PA9_RocketActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPTS_122_PA9_API UClass* StaticClass<class ARocketActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mmila_Desktop_CPTS_122_PA9_Source_CPTS_122_PA9_RocketActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
