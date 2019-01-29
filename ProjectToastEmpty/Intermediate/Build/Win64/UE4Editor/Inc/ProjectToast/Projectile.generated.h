// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PROJECTTOAST_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define PROJECTTOAST_Projectile_generated_h

#define Project_Toast_4_21_Source_ProjectToast_Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComponent); \
		P_GET_STRUCT(FVector,Z_Param_normalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_hitComponent,Z_Param_otherActor,Z_Param_otherComponent,Z_Param_normalImpulse,Z_Param_Out_hit); \
		P_NATIVE_END; \
	}


#define Project_Toast_4_21_Source_ProjectToast_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComponent); \
		P_GET_STRUCT(FVector,Z_Param_normalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_hitComponent,Z_Param_otherActor,Z_Param_otherComponent,Z_Param_normalImpulse,Z_Param_Out_hit); \
		P_NATIVE_END; \
	}


#define Project_Toast_4_21_Source_ProjectToast_Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectToast"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Project_Toast_4_21_Source_ProjectToast_Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectToast"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Project_Toast_4_21_Source_ProjectToast_Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define Project_Toast_4_21_Source_ProjectToast_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define Project_Toast_4_21_Source_ProjectToast_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_collisionComponent() { return STRUCT_OFFSET(AProjectile, m_collisionComponent); } \
	FORCEINLINE static uint32 __PPO__m_projectileMovement() { return STRUCT_OFFSET(AProjectile, m_projectileMovement); }


#define Project_Toast_4_21_Source_ProjectToast_Projectile_h_9_PROLOG
#define Project_Toast_4_21_Source_ProjectToast_Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Toast_4_21_Source_ProjectToast_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Project_Toast_4_21_Source_ProjectToast_Projectile_h_12_RPC_WRAPPERS \
	Project_Toast_4_21_Source_ProjectToast_Projectile_h_12_INCLASS \
	Project_Toast_4_21_Source_ProjectToast_Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Toast_4_21_Source_ProjectToast_Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Toast_4_21_Source_ProjectToast_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Project_Toast_4_21_Source_ProjectToast_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Toast_4_21_Source_ProjectToast_Projectile_h_12_INCLASS_NO_PURE_DECLS \
	Project_Toast_4_21_Source_ProjectToast_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Toast_4_21_Source_ProjectToast_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
