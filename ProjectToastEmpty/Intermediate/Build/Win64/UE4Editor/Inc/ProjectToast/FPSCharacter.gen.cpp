// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectToast/FPSCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacter() {}
// Cross Module References
	PROJECTTOAST_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
	PROJECTTOAST_API UClass* Z_Construct_UClass_AFPSCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ProjectToast();
	PROJECTTOAST_API UFunction* Z_Construct_UFunction_AFPSCharacter_MoveForward();
	PROJECTTOAST_API UFunction* Z_Construct_UFunction_AFPSCharacter_MoveRight();
	PROJECTTOAST_API UFunction* Z_Construct_UFunction_AFPSCharacter_OnFire();
	PROJECTTOAST_API UFunction* Z_Construct_UFunction_AFPSCharacter_RotateHorizontal();
	PROJECTTOAST_API UFunction* Z_Construct_UFunction_AFPSCharacter_RotateVertical();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECTTOAST_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
	{
		UClass* Class = AFPSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForward", &AFPSCharacter::execMoveForward },
			{ "MoveRight", &AFPSCharacter::execMoveRight },
			{ "OnFire", &AFPSCharacter::execOnFire },
			{ "RotateHorizontal", &AFPSCharacter::execRotateHorizontal },
			{ "RotateVertical", &AFPSCharacter::execRotateVertical },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics
	{
		struct FPSCharacter_eventMoveForward_Parms
		{
			float amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventMoveForward_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSCharacter.h" },
		{ "ToolTip", "Handles moving forward/backward" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "MoveForward", sizeof(FPSCharacter_eventMoveForward_Parms), Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics
	{
		struct FPSCharacter_eventMoveRight_Parms
		{
			float amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventMoveRight_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSCharacter.h" },
		{ "ToolTip", "Handles stafing movement, left and right" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "MoveRight", sizeof(FPSCharacter_eventMoveRight_Parms), Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_OnFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_OnFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSCharacter.h" },
		{ "ToolTip", "Fires a projectile." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_OnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "OnFire", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_OnFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_OnFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_OnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_OnFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_RotateHorizontal_Statics
	{
		struct FPSCharacter_eventRotateHorizontal_Parms
		{
			float amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_RotateHorizontal_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventRotateHorizontal_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_RotateHorizontal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_RotateHorizontal_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_RotateHorizontal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSCharacter.h" },
		{ "ToolTip", "Handles custom rotation on X axis (button presses, joystick's)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_RotateHorizontal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "RotateHorizontal", sizeof(FPSCharacter_eventRotateHorizontal_Parms), Z_Construct_UFunction_AFPSCharacter_RotateHorizontal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_RotateHorizontal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_RotateHorizontal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_RotateHorizontal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_RotateHorizontal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_RotateHorizontal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_RotateVertical_Statics
	{
		struct FPSCharacter_eventRotateVertical_Parms
		{
			float amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_RotateVertical_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventRotateVertical_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_RotateVertical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_RotateVertical_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_RotateVertical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPSCharacter.h" },
		{ "ToolTip", "Handles custom rotation on Y axis (button presses, joystick's)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_RotateVertical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "RotateVertical", sizeof(FPSCharacter_eventRotateVertical_Parms), Z_Construct_UFunction_AFPSCharacter_RotateVertical_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_RotateVertical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_RotateVertical_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_RotateVertical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_RotateVertical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_RotateVertical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSCharacter_NoRegister()
	{
		return AFPSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFPSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_gunMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_gunMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_characterMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_characterMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_muzzleLocationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_muzzleLocationComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_fireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_fireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_projectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m_projectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_gunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_gunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_rotationBaseRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_rotationBaseRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectToast,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSCharacter_MoveForward, "MoveForward" }, // 1461815676
		{ &Z_Construct_UFunction_AFPSCharacter_MoveRight, "MoveRight" }, // 2193731514
		{ &Z_Construct_UFunction_AFPSCharacter_OnFire, "OnFire" }, // 654551453
		{ &Z_Construct_UFunction_AFPSCharacter_RotateHorizontal, "RotateHorizontal" }, // 1760019164
		{ &Z_Construct_UFunction_AFPSCharacter_RotateVertical, "RotateVertical" }, // 418956544
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPSCharacter.h" },
		{ "ModuleRelativePath", "FPSCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_cameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_cameraComponent = { "m_cameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, m_cameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_cameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_cameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_gunMeshComponent_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSCharacter.h" },
		{ "ToolTip", "Gun mesh: 1st person view (seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_gunMeshComponent = { "m_gunMeshComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, m_gunMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_gunMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_gunMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_characterMeshComponent_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_characterMeshComponent = { "m_characterMeshComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, m_characterMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_characterMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_characterMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_muzzleLocationComponent_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FPSCharacter.h" },
		{ "ToolTip", "Location on gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_muzzleLocationComponent = { "m_muzzleLocationComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, m_muzzleLocationComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_muzzleLocationComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_muzzleLocationComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_fireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FPSCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_fireAnimation = { "m_fireAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, m_fireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_fireAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_fireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_fireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FPSCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_fireSound = { "m_fireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, m_fireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_fireSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_fireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_projectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "FPSCharacter.h" },
		{ "ToolTip", "Projectile class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_projectileClass = { "m_projectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, m_projectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_projectileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_projectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_gunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FPSCharacter.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_gunOffset = { "m_gunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, m_gunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_gunOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_gunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_rotationBaseRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "FPSCharacter.h" },
		{ "ToolTip", "Base rotation rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_rotationBaseRate = { "m_rotationBaseRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, m_rotationBaseRate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_rotationBaseRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_rotationBaseRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_cameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_gunMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_characterMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_muzzleLocationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_fireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_fireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_projectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_gunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_m_rotationBaseRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSCharacter_Statics::ClassParams = {
		&AFPSCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSCharacter, 1250326110);
	template<> PROJECTTOAST_API UClass* StaticClass<AFPSCharacter>()
	{
		return AFPSCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSCharacter(Z_Construct_UClass_AFPSCharacter, &AFPSCharacter::StaticClass, TEXT("/Script/ProjectToast"), TEXT("AFPSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
