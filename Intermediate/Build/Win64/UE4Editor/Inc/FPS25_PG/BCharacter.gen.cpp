// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS25_PG/Public/BCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBCharacter() {}
// Cross Module References
	FPS25_PG_API UClass* Z_Construct_UClass_ABCharacter_NoRegister();
	FPS25_PG_API UClass* Z_Construct_UClass_ABCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FPS25_PG();
// End Cross Module References
	void ABCharacter::StaticRegisterNativesABCharacter()
	{
	}
	UClass* Z_Construct_UClass_ABCharacter_NoRegister()
	{
		return ABCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS25_PG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BCharacter.h" },
		{ "ModuleRelativePath", "Public/BCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABCharacter_Statics::ClassParams = {
		&ABCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABCharacter, 3138960638);
	template<> FPS25_PG_API UClass* StaticClass<ABCharacter>()
	{
		return ABCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABCharacter(Z_Construct_UClass_ABCharacter, &ABCharacter::StaticClass, TEXT("/Script/FPS25_PG"), TEXT("ABCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
