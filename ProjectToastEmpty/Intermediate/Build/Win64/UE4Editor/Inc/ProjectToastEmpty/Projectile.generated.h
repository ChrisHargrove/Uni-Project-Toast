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
#ifdef PROJECTTOASTEMPTY_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define PROJECTTOASTEMPTY_Projectile_generated_h

#define ProjectToastEmpty_Source_ProjectToastEmpty_Projectile_h_12_RPC_WRAPPERS \
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


#define ProjectToastEmpty_Source_ProjectToastEmpty_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define ProjectToastEmpty_Source_ProjectToastEmpty_Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectToastEmpty"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ProjectToastEmpty_Source_ProjectToastEmpty_Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectToastEmpty"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ProjectToastEmpty_Source_ProjectToastEmpty_Projectile_h_12_STANDARD_CONSTRUCTORS \
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


#define ProjectToastEmpty_Source_ProjectToastEmpty_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define ProjectToastEmpty_Source_ProjectToastEmpty_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_collisionComponent() { return STRUCT_OFFSET(AProjectile, m_collisionComponent); } \
	FORCEINLINE static uint32 __PPO__m_projectileMovement() { return STRUCT_OFFSET(AProjectile, m_projectileMovement); }


#define ProjectToastEmpty_Source_ProjectToastEmpty_Projectile_h_9_PROLOG
#define ProjectToastEmpty_Source_ProjectToastEmpty_Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectToastEmpty_Source_ProjectToastEmpty_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectToastEmpty_Source_ProjectToastEmpty_Projectile_h_12_RPC_WRAPPERS \
	ProjectToastEmpty_Source_ProjectToastEmpty_Projectile_h_12_INCLASS \
	ProjectToastEmpty_Source_ProjectToastEmpty_Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectToastEmpty_Source_ProjectToastEmpty_Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectToastEmpty_Source_ProjectToastEmpty_Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectToastEmpty_Source_ProjectToastEmpty_Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectToastEmpty_Source_ProjectToastEmpty_Projectile_h_12_INCLASS_NO_PURE_DECLS \
	ProjectToastEmpty_Source_ProjectToastEmpty_Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectToastEmpty_Source_ProjectToastEmpty_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
