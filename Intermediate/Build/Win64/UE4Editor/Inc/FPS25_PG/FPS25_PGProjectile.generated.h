// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef FPS25_PG_FPS25_PGProjectile_generated_h
#error "FPS25_PGProjectile.generated.h already included, missing '#pragma once' in FPS25_PGProjectile.h"
#endif
#define FPS25_PG_FPS25_PGProjectile_generated_h

#define FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_SPARSE_DATA
#define FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS25_PGProjectile(); \
	friend struct Z_Construct_UClass_AFPS25_PGProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPS25_PGProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS25_PG"), NO_API) \
	DECLARE_SERIALIZER(AFPS25_PGProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFPS25_PGProjectile(); \
	friend struct Z_Construct_UClass_AFPS25_PGProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPS25_PGProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS25_PG"), NO_API) \
	DECLARE_SERIALIZER(AFPS25_PGProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPS25_PGProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPS25_PGProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS25_PGProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS25_PGProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS25_PGProjectile(AFPS25_PGProjectile&&); \
	NO_API AFPS25_PGProjectile(const AFPS25_PGProjectile&); \
public:


#define FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS25_PGProjectile(AFPS25_PGProjectile&&); \
	NO_API AFPS25_PGProjectile(const AFPS25_PGProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS25_PGProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS25_PGProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPS25_PGProjectile)


#define FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFPS25_PGProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFPS25_PGProjectile, ProjectileMovement); }


#define FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_9_PROLOG
#define FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_SPARSE_DATA \
	FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_RPC_WRAPPERS \
	FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_INCLASS \
	FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_SPARSE_DATA \
	FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_INCLASS_NO_PURE_DECLS \
	FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS25_PG_API UClass* StaticClass<class AFPS25_PGProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS25_PG_Source_FPS25_PG_FPS25_PGProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
