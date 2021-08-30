// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OverTheSpeed/OverTheSpeedGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverTheSpeedGameModeBase() {}
// Cross Module References
	OVERTHESPEED_API UClass* Z_Construct_UClass_AOverTheSpeedGameModeBase_NoRegister();
	OVERTHESPEED_API UClass* Z_Construct_UClass_AOverTheSpeedGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_OverTheSpeed();
// End Cross Module References
	void AOverTheSpeedGameModeBase::StaticRegisterNativesAOverTheSpeedGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AOverTheSpeedGameModeBase_NoRegister()
	{
		return AOverTheSpeedGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AOverTheSpeedGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOverTheSpeedGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OverTheSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOverTheSpeedGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "OverTheSpeedGameModeBase.h" },
		{ "ModuleRelativePath", "OverTheSpeedGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOverTheSpeedGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOverTheSpeedGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOverTheSpeedGameModeBase_Statics::ClassParams = {
		&AOverTheSpeedGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOverTheSpeedGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOverTheSpeedGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOverTheSpeedGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOverTheSpeedGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOverTheSpeedGameModeBase, 187588833);
	template<> OVERTHESPEED_API UClass* StaticClass<AOverTheSpeedGameModeBase>()
	{
		return AOverTheSpeedGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOverTheSpeedGameModeBase(Z_Construct_UClass_AOverTheSpeedGameModeBase, &AOverTheSpeedGameModeBase::StaticClass, TEXT("/Script/OverTheSpeed"), TEXT("AOverTheSpeedGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOverTheSpeedGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
