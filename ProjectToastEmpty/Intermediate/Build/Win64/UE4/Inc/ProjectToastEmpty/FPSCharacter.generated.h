// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTTOASTEMPTY_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define PROJECTTOASTEMPTY_FPSCharacter_generated_h

#define ProjectToastEmpty_Source_ProjectToastEmpty_FPSCharacter_h_14_RPC_WRAPPERS
#define ProjectToastEmpty_Source_ProjectToastEmpty_FPSCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectToastEmpty_Source_ProjectToastEmpty_FPSCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend PROJECTTOASTEMPTY_API class UClass* Z_Construct_UClass_AFPSCharacter(); \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ProjectToastEmpty"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProjectToastEmpty_Source_ProjectToastEmpty_FPSCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend PROJECTTOASTEMPTY_API class UClass* Z_Construct_UClass_AFPSCharacter(); \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ProjectToastEmpty"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProjectToastEmpty_Source_ProjectToastEmpty_FPSCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public:


#define ProjectToastEmpty_Source_ProjectToastEmpty_FPSCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter)


#define ProjectToastEmpty_Source_ProjectToastEmpty_FPSCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFPSCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFPSCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFPSCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFPSCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFPSCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFPSCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFPSCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFPSCharacter, L_MotionController); }


#define ProjectToastEmpty_Source_ProjectToastEmpty_FPSCharacter_h_11_PROLOG
#define ProjectToastEmpty_Source_ProjectToastEmpty_FPSCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectToastEmpty_Source_ProjectToastEmpty_FPSCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjectToastEmpty_Source_ProjectToastEmpty_FPSCharacter_h_14_RPC_WRAPPERS \
	ProjectToastEmpty_Source_ProjectToastEmpty_FPSCharacter_h_14_INCLASS \
	ProjectToastEmpty_Source_ProjectToastEmpty_FPSCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectToastEmpty_Source_ProjectToastEmpty_FPSCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectToastEmpty_Source_ProjectToastEmpty_FPSCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjectToastEmpty_Source_ProjectToastEmpty_FPSCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectToastEmpty_Source_ProjectToastEmpty_FPSCharacter_h_14_INCLASS_NO_PURE_DECLS \
	ProjectToastEmpty_Source_ProjectToastEmpty_FPSCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectToastEmpty_Source_ProjectToastEmpty_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
