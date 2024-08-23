// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef SOTC_CHARACTER_CharacterController_generated_h
#error "CharacterController.generated.h already included, missing '#pragma once' in CharacterController.h"
#endif
#define SOTC_CHARACTER_CharacterController_generated_h

#define FID_Users_antobrom_Documents_SOTC_Character_SOTC_Character_Source_SOTC_Character_CharacterController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRotateCamera); \
	DECLARE_FUNCTION(execSmoothUpdateRotation); \
	DECLARE_FUNCTION(execUpdateSpeed); \
	DECLARE_FUNCTION(execStopRunning); \
	DECLARE_FUNCTION(execStartRunning); \
	DECLARE_FUNCTION(execLedgeGrab); \
	DECLARE_FUNCTION(execSmoothMoveToLedge); \
	DECLARE_FUNCTION(execResetLedgeGrabCooldown); \
	DECLARE_FUNCTION(execStartLedgeGrabCooldown); \
	DECLARE_FUNCTION(execStopMove); \
	DECLARE_FUNCTION(execMove);


#define FID_Users_antobrom_Documents_SOTC_Character_SOTC_Character_Source_SOTC_Character_CharacterController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterController(); \
	friend struct Z_Construct_UClass_ACharacterController_Statics; \
public: \
	DECLARE_CLASS(ACharacterController, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SOTC_Character"), NO_API) \
	DECLARE_SERIALIZER(ACharacterController)


#define FID_Users_antobrom_Documents_SOTC_Character_SOTC_Character_Source_SOTC_Character_CharacterController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACharacterController(ACharacterController&&); \
	ACharacterController(const ACharacterController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterController) \
	NO_API virtual ~ACharacterController();


#define FID_Users_antobrom_Documents_SOTC_Character_SOTC_Character_Source_SOTC_Character_CharacterController_h_11_PROLOG
#define FID_Users_antobrom_Documents_SOTC_Character_SOTC_Character_Source_SOTC_Character_CharacterController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_antobrom_Documents_SOTC_Character_SOTC_Character_Source_SOTC_Character_CharacterController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_antobrom_Documents_SOTC_Character_SOTC_Character_Source_SOTC_Character_CharacterController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_antobrom_Documents_SOTC_Character_SOTC_Character_Source_SOTC_Character_CharacterController_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOTC_CHARACTER_API UClass* StaticClass<class ACharacterController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_antobrom_Documents_SOTC_Character_SOTC_Character_Source_SOTC_Character_CharacterController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
