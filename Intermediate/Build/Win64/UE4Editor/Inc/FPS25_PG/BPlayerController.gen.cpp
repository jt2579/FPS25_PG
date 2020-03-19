// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS25_PG/Public/BPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPlayerController() {}
// Cross Module References
	FPS25_PG_API UClass* Z_Construct_UClass_ABPlayerController_NoRegister();
	FPS25_PG_API UClass* Z_Construct_UClass_ABPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_FPS25_PG();
// End Cross Module References
	void ABPlayerController::StaticRegisterNativesABPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ABPlayerController_NoRegister()
	{
		return ABPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ABPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS25_PG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BPlayerController.h" },
		{ "ModuleRelativePath", "Public/BPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABPlayerController_Statics::ClassParams = {
		&ABPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABPlayerController, 3821542435);
	template<> FPS25_PG_API UClass* StaticClass<ABPlayerController>()
	{
		return ABPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABPlayerController(Z_Construct_UClass_ABPlayerController, &ABPlayerController::StaticClass, TEXT("/Script/FPS25_PG"), TEXT("ABPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
