// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTTOAST_MyActor_generated_h
#error "MyActor.generated.h already included, missing '#pragma once' in MyActor.h"
#endif
#define PROJECTTOAST_MyActor_generated_h

#define Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_RPC_WRAPPERS \
	virtual void CalledFromCpp_Implementation(); \
 \
	DECLARE_FUNCTION(execCalledFromCpp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalledFromCpp_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateValues) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateValues(); \
		P_NATIVE_END; \
	}


#define Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CalledFromCpp_Implementation(); \
 \
	DECLARE_FUNCTION(execCalledFromCpp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalledFromCpp_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateValues) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateValues(); \
		P_NATIVE_END; \
	}


#define Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_EVENT_PARMS
#define Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_CALLBACK_WRAPPERS
#define Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectToast"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectToast"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public:


#define Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor)


#define Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_PRIVATE_PROPERTY_OFFSET
#define Project_Toast_4_21_Source_ProjectToast_MyActor_h_9_PROLOG \
	Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_EVENT_PARMS


#define Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_RPC_WRAPPERS \
	Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_CALLBACK_WRAPPERS \
	Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_INCLASS \
	Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_CALLBACK_WRAPPERS \
	Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_INCLASS_NO_PURE_DECLS \
	Project_Toast_4_21_Source_ProjectToast_MyActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Toast_4_21_Source_ProjectToast_MyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
