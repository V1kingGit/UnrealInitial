// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenableDoor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef INITIAL_OpenableDoor_generated_h
#error "OpenableDoor.generated.h already included, missing '#pragma once' in OpenableDoor.h"
#endif
#define INITIAL_OpenableDoor_generated_h

#define FID_Users_Frederik_Documents_GitHub_UnrealInitial_Initial_Source_Initial_OpenableDoor_h_12_SPARSE_DATA
#define FID_Users_Frederik_Documents_GitHub_UnrealInitial_Initial_Source_Initial_OpenableDoor_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Frederik_Documents_GitHub_UnrealInitial_Initial_Source_Initial_OpenableDoor_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Frederik_Documents_GitHub_UnrealInitial_Initial_Source_Initial_OpenableDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execToggle);


#define FID_Users_Frederik_Documents_GitHub_UnrealInitial_Initial_Source_Initial_OpenableDoor_h_12_ACCESSORS
#define FID_Users_Frederik_Documents_GitHub_UnrealInitial_Initial_Source_Initial_OpenableDoor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOpenableDoor(); \
	friend struct Z_Construct_UClass_AOpenableDoor_Statics; \
public: \
	DECLARE_CLASS(AOpenableDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Initial"), NO_API) \
	DECLARE_SERIALIZER(AOpenableDoor)


#define FID_Users_Frederik_Documents_GitHub_UnrealInitial_Initial_Source_Initial_OpenableDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOpenableDoor(AOpenableDoor&&); \
	NO_API AOpenableDoor(const AOpenableDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOpenableDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOpenableDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOpenableDoor) \
	NO_API virtual ~AOpenableDoor();


#define FID_Users_Frederik_Documents_GitHub_UnrealInitial_Initial_Source_Initial_OpenableDoor_h_9_PROLOG
#define FID_Users_Frederik_Documents_GitHub_UnrealInitial_Initial_Source_Initial_OpenableDoor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Frederik_Documents_GitHub_UnrealInitial_Initial_Source_Initial_OpenableDoor_h_12_SPARSE_DATA \
	FID_Users_Frederik_Documents_GitHub_UnrealInitial_Initial_Source_Initial_OpenableDoor_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Frederik_Documents_GitHub_UnrealInitial_Initial_Source_Initial_OpenableDoor_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Frederik_Documents_GitHub_UnrealInitial_Initial_Source_Initial_OpenableDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Frederik_Documents_GitHub_UnrealInitial_Initial_Source_Initial_OpenableDoor_h_12_ACCESSORS \
	FID_Users_Frederik_Documents_GitHub_UnrealInitial_Initial_Source_Initial_OpenableDoor_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Frederik_Documents_GitHub_UnrealInitial_Initial_Source_Initial_OpenableDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INITIAL_API UClass* StaticClass<class AOpenableDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Frederik_Documents_GitHub_UnrealInitial_Initial_Source_Initial_OpenableDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
