// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECameraDirectorMode : uint8;
#ifdef AIRSIM_CameraDirector_generated_h
#error "CameraDirector.generated.h already included, missing '#pragma once' in CameraDirector.h"
#endif
#define AIRSIM_CameraDirector_generated_h

#define DemoCar_Plugins_AirSim_Source_CameraDirector_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execsetMode) \
	{ \
		P_GET_ENUM(ECameraDirectorMode,Z_Param_mode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setMode(ECameraDirectorMode(Z_Param_mode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECameraDirectorMode*)Z_Param__Result=this->getMode(); \
		P_NATIVE_END; \
	}


#define DemoCar_Plugins_AirSim_Source_CameraDirector_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execsetMode) \
	{ \
		P_GET_ENUM(ECameraDirectorMode,Z_Param_mode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setMode(ECameraDirectorMode(Z_Param_mode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECameraDirectorMode*)Z_Param__Result=this->getMode(); \
		P_NATIVE_END; \
	}


#define DemoCar_Plugins_AirSim_Source_CameraDirector_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraDirector(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_ACameraDirector(); \
public: \
	DECLARE_CLASS(ACameraDirector, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ACameraDirector) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DemoCar_Plugins_AirSim_Source_CameraDirector_h_29_INCLASS \
private: \
	static void StaticRegisterNativesACameraDirector(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_ACameraDirector(); \
public: \
	DECLARE_CLASS(ACameraDirector, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ACameraDirector) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DemoCar_Plugins_AirSim_Source_CameraDirector_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraDirector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraDirector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraDirector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraDirector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraDirector(ACameraDirector&&); \
	NO_API ACameraDirector(const ACameraDirector&); \
public:


#define DemoCar_Plugins_AirSim_Source_CameraDirector_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraDirector(ACameraDirector&&); \
	NO_API ACameraDirector(const ACameraDirector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraDirector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraDirector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACameraDirector)


#define DemoCar_Plugins_AirSim_Source_CameraDirector_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__manual_pose_controller_() { return STRUCT_OFFSET(ACameraDirector, manual_pose_controller_); }


#define DemoCar_Plugins_AirSim_Source_CameraDirector_h_26_PROLOG
#define DemoCar_Plugins_AirSim_Source_CameraDirector_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemoCar_Plugins_AirSim_Source_CameraDirector_h_29_PRIVATE_PROPERTY_OFFSET \
	DemoCar_Plugins_AirSim_Source_CameraDirector_h_29_RPC_WRAPPERS \
	DemoCar_Plugins_AirSim_Source_CameraDirector_h_29_INCLASS \
	DemoCar_Plugins_AirSim_Source_CameraDirector_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DemoCar_Plugins_AirSim_Source_CameraDirector_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemoCar_Plugins_AirSim_Source_CameraDirector_h_29_PRIVATE_PROPERTY_OFFSET \
	DemoCar_Plugins_AirSim_Source_CameraDirector_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DemoCar_Plugins_AirSim_Source_CameraDirector_h_29_INCLASS_NO_PURE_DECLS \
	DemoCar_Plugins_AirSim_Source_CameraDirector_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DemoCar_Plugins_AirSim_Source_CameraDirector_h


#define FOREACH_ENUM_ECAMERADIRECTORMODE(op) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FPV) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_GROUND_OBSERVER) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FLY_WITH_ME) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_MANUAL) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_SPRINGARM_CHASE) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_BACKUP) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_NODISPLAY) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
