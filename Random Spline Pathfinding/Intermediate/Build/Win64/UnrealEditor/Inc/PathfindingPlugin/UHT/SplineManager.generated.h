// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SplineManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATHFINDINGPLUGIN_SplineManager_generated_h
#error "SplineManager.generated.h already included, missing '#pragma once' in SplineManager.h"
#endif
#define PATHFINDINGPLUGIN_SplineManager_generated_h

#define FID_PathfindingTest_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_SplineManager_h_10_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetupSplineUsingPoints); \
	DECLARE_FUNCTION(execRemoveLastSplinePoint); \
	DECLARE_FUNCTION(execCreateNewSplinePoint);


#define FID_PathfindingTest_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_SplineManager_h_10_INCLASS \
private: \
	static void StaticRegisterNativesASplineManager(); \
	friend struct Z_Construct_UClass_ASplineManager_Statics; \
public: \
	DECLARE_CLASS(ASplineManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PathfindingPlugin"), NO_API) \
	DECLARE_SERIALIZER(ASplineManager)


#define FID_PathfindingTest_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_SplineManager_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASplineManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASplineManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASplineManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASplineManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASplineManager(ASplineManager&&); \
	ASplineManager(const ASplineManager&); \
public: \
	NO_API virtual ~ASplineManager();


#define FID_PathfindingTest_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_SplineManager_h_7_PROLOG
#define FID_PathfindingTest_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_SplineManager_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PathfindingTest_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_SplineManager_h_10_RPC_WRAPPERS \
	FID_PathfindingTest_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_SplineManager_h_10_INCLASS \
	FID_PathfindingTest_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_SplineManager_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATHFINDINGPLUGIN_API UClass* StaticClass<class ASplineManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PathfindingTest_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_SplineManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
