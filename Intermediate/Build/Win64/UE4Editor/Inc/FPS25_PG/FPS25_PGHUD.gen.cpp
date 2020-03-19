// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS25_PG/FPS25_PGHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS25_PGHUD() {}
// Cross Module References
	FPS25_PG_API UClass* Z_Construct_UClass_AFPS25_PGHUD_NoRegister();
	FPS25_PG_API UClass* Z_Construct_UClass_AFPS25_PGHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FPS25_PG();
// End Cross Module References
	void AFPS25_PGHUD::StaticRegisterNativesAFPS25_PGHUD()
	{
	}
	UClass* Z_Construct_UClass_AFPS25_PGHUD_NoRegister()
	{
		return AFPS25_PGHUD::StaticClass();
	}
	struct Z_Construct_UClass_AFPS25_PGHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPS25_PGHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS25_PG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS25_PGHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FPS25_PGHUD.h" },
		{ "ModuleRelativePath", "FPS25_PGHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPS25_PGHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS25_PGHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPS25_PGHUD_Statics::ClassParams = {
		&AFPS25_PGHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPS25_PGHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPS25_PGHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPS25_PGHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPS25_PGHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPS25_PGHUD, 627148118);
	template<> FPS25_PG_API UClass* StaticClass<AFPS25_PGHUD>()
	{
		return AFPS25_PGHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPS25_PGHUD(Z_Construct_UClass_AFPS25_PGHUD, &AFPS25_PGHUD::StaticClass, TEXT("/Script/FPS25_PG"), TEXT("AFPS25_PGHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS25_PGHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
