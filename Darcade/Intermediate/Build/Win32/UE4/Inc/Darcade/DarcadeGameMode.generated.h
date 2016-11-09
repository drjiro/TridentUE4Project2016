// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DARCADE_DarcadeGameMode_generated_h
#error "DarcadeGameMode.generated.h already included, missing '#pragma once' in DarcadeGameMode.h"
#endif
#define DARCADE_DarcadeGameMode_generated_h

#define Darcade_Source_Darcade_DarcadeGameMode_h_9_RPC_WRAPPERS
#define Darcade_Source_Darcade_DarcadeGameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define Darcade_Source_Darcade_DarcadeGameMode_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesADarcadeGameMode(); \
	friend DARCADE_API class UClass* Z_Construct_UClass_ADarcadeGameMode(); \
	public: \
	DECLARE_CLASS(ADarcadeGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/Darcade"), DARCADE_API) \
	DECLARE_SERIALIZER(ADarcadeGameMode) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Darcade_Source_Darcade_DarcadeGameMode_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesADarcadeGameMode(); \
	friend DARCADE_API class UClass* Z_Construct_UClass_ADarcadeGameMode(); \
	public: \
	DECLARE_CLASS(ADarcadeGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/Darcade"), DARCADE_API) \
	DECLARE_SERIALIZER(ADarcadeGameMode) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Darcade_Source_Darcade_DarcadeGameMode_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DARCADE_API ADarcadeGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADarcadeGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DARCADE_API, ADarcadeGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADarcadeGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DARCADE_API ADarcadeGameMode(ADarcadeGameMode&&); \
	DARCADE_API ADarcadeGameMode(const ADarcadeGameMode&); \
public:


#define Darcade_Source_Darcade_DarcadeGameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DARCADE_API ADarcadeGameMode(ADarcadeGameMode&&); \
	DARCADE_API ADarcadeGameMode(const ADarcadeGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DARCADE_API, ADarcadeGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADarcadeGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADarcadeGameMode)


#define Darcade_Source_Darcade_DarcadeGameMode_h_6_PROLOG
#define Darcade_Source_Darcade_DarcadeGameMode_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Darcade_Source_Darcade_DarcadeGameMode_h_9_RPC_WRAPPERS \
	Darcade_Source_Darcade_DarcadeGameMode_h_9_INCLASS \
	Darcade_Source_Darcade_DarcadeGameMode_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Darcade_Source_Darcade_DarcadeGameMode_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Darcade_Source_Darcade_DarcadeGameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Darcade_Source_Darcade_DarcadeGameMode_h_9_INCLASS_NO_PURE_DECLS \
	Darcade_Source_Darcade_DarcadeGameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Darcade_Source_Darcade_DarcadeGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS