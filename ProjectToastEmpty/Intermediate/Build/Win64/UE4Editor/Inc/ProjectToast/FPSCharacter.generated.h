// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTTOAST_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define PROJECTTOAST_FPSCharacter_generated_h

#define ProjectToastEmpty_4_22_Source_ProjectToast_FPSCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRotateVertical) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RotateVertical(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateHorizontal) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RotateHorizontal(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFire(); \
		P_NATIVE_END; \
	}


#define ProjectToastEmpty_4_22_Source_ProjectToast_FPSCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRotateVertical) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RotateVertical(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateHorizontal) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RotateHorizontal(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFire(); \
		P_NATIVE_END; \
	}


#define ProjectToastEmpty_4_22_Source_ProjectToast_FPSCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectToast"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define ProjectToastEmpty_4_22_Source_ProjectToast_FPSCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectToast"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define ProjectToastEmpty_4_22_Source_ProjectToast_FPSCharacter_h_14_STANDARD_CONSTRUCTORS \
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


#define ProjectToastEmpty_4_22_Source_ProjectToast_FPSCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter)


#define ProjectToastEmpty_4_22_Source_ProjectToast_FPSCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cameraComponent() { return STRUCT_OFFSET(AFPSCharacter, m_cameraComponent); }


#define ProjectToastEmpty_4_22_Source_ProjectToast_FPSCharacter_h_11_PROLOG
#define ProjectToastEmpty_4_22_Source_ProjectToast_FPSCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectToastEmpty_4_22_Source_ProjectToast_FPSCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjectToastEmpty_4_22_Source_ProjectToast_FPSCharacter_h_14_RPC_WRAPPERS \
	ProjectToastEmpty_4_22_Source_ProjectToast_FPSCharacter_h_14_INCLASS \
	ProjectToastEmpty_4_22_Source_ProjectToast_FPSCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectToastEmpty_4_22_Source_ProjectToast_FPSCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectToastEmpty_4_22_Source_ProjectToast_FPSCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjectToastEmpty_4_22_Source_ProjectToast_FPSCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectToastEmpty_4_22_Source_ProjectToast_FPSCharacter_h_14_INCLASS_NO_PURE_DECLS \
	ProjectToastEmpty_4_22_Source_ProjectToast_FPSCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTOAST_API UClass* StaticClass<class AFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectToastEmpty_4_22_Source_ProjectToast_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
