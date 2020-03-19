// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS25_PG/Public/BWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBWeapon() {}
// Cross Module References
	FPS25_PG_API UClass* Z_Construct_UClass_ABWeapon_NoRegister();
	FPS25_PG_API UClass* Z_Construct_UClass_ABWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPS25_PG();
// End Cross Module References
	void ABWeapon::StaticRegisterNativesABWeapon()
	{
	}
	UClass* Z_Construct_UClass_ABWeapon_NoRegister()
	{
		return ABWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ABWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS25_PG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BWeapon.h" },
		{ "ModuleRelativePath", "Public/BWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABWeapon_Statics::ClassParams = {
		&ABWeapon::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ABWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABWeapon, 1742026513);
	template<> FPS25_PG_API UClass* StaticClass<ABWeapon>()
	{
		return ABWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABWeapon(Z_Construct_UClass_ABWeapon, &ABWeapon::StaticClass, TEXT("/Script/FPS25_PG"), TEXT("ABWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
