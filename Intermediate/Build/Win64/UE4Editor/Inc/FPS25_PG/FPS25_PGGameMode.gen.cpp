// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS25_PG/FPS25_PGGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS25_PGGameMode() {}
// Cross Module References
	FPS25_PG_API UClass* Z_Construct_UClass_AFPS25_PGGameMode_NoRegister();
	FPS25_PG_API UClass* Z_Construct_UClass_AFPS25_PGGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FPS25_PG();
// End Cross Module References
	void AFPS25_PGGameMode::StaticRegisterNativesAFPS25_PGGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFPS25_PGGameMode_NoRegister()
	{
		return AFPS25_PGGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFPS25_PGGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPS25_PGGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS25_PG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS25_PGGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPS25_PGGameMode.h" },
		{ "ModuleRelativePath", "FPS25_PGGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPS25_PGGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS25_PGGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPS25_PGGameMode_Statics::ClassParams = {
		&AFPS25_PGGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPS25_PGGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPS25_PGGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPS25_PGGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPS25_PGGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPS25_PGGameMode, 2364342905);
	template<> FPS25_PG_API UClass* StaticClass<AFPS25_PGGameMode>()
	{
		return AFPS25_PGGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPS25_PGGameMode(Z_Construct_UClass_AFPS25_PGGameMode, &AFPS25_PGGameMode::StaticClass, TEXT("/Script/FPS25_PG"), TEXT("AFPS25_PGGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS25_PGGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
