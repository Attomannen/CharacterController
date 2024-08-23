// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTC_Character/CharacterController.h"
#include "EnhancedInput/Public/InputActionValue.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterController() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
SOTC_CHARACTER_API UClass* Z_Construct_UClass_ACharacterController();
SOTC_CHARACTER_API UClass* Z_Construct_UClass_ACharacterController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTC_Character();
// End Cross Module References

// Begin Class ACharacterController Function LedgeGrab
struct Z_Construct_UFunction_ACharacterController_LedgeGrab_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_LedgeGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "LedgeGrab", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_LedgeGrab_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterController_LedgeGrab_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACharacterController_LedgeGrab()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_LedgeGrab_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacterController::execLedgeGrab)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LedgeGrab();
	P_NATIVE_END;
}
// End Class ACharacterController Function LedgeGrab

// Begin Class ACharacterController Function Move
struct Z_Construct_UFunction_ACharacterController_Move_Statics
{
	struct CharacterController_eventMove_Parms
	{
		FInputActionValue InputValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacterController_Move_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterController_eventMove_Parms, InputValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputValue_MetaData), NewProp_InputValue_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_Move_Statics::NewProp_InputValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_ACharacterController_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACharacterController_Move_Statics::CharacterController_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterController_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACharacterController_Move_Statics::CharacterController_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACharacterController_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacterController::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_InputValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_InputValue);
	P_NATIVE_END;
}
// End Class ACharacterController Function Move

// Begin Class ACharacterController Function ResetLedgeGrabCooldown
struct Z_Construct_UFunction_ACharacterController_ResetLedgeGrabCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_ResetLedgeGrabCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "ResetLedgeGrabCooldown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_ResetLedgeGrabCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterController_ResetLedgeGrabCooldown_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACharacterController_ResetLedgeGrabCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_ResetLedgeGrabCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacterController::execResetLedgeGrabCooldown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetLedgeGrabCooldown();
	P_NATIVE_END;
}
// End Class ACharacterController Function ResetLedgeGrabCooldown

// Begin Class ACharacterController Function RotateCamera
struct Z_Construct_UFunction_ACharacterController_RotateCamera_Statics
{
	struct CharacterController_eventRotateCamera_Parms
	{
		FInputActionValue InputValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacterController_RotateCamera_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterController_eventRotateCamera_Parms, InputValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputValue_MetaData), NewProp_InputValue_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_RotateCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_RotateCamera_Statics::NewProp_InputValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_RotateCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_RotateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "RotateCamera", nullptr, nullptr, Z_Construct_UFunction_ACharacterController_RotateCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_RotateCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACharacterController_RotateCamera_Statics::CharacterController_eventRotateCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_RotateCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterController_RotateCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACharacterController_RotateCamera_Statics::CharacterController_eventRotateCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACharacterController_RotateCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_RotateCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacterController::execRotateCamera)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_InputValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateCamera(Z_Param_Out_InputValue);
	P_NATIVE_END;
}
// End Class ACharacterController Function RotateCamera

// Begin Class ACharacterController Function SmoothMoveToLedge
struct Z_Construct_UFunction_ACharacterController_SmoothMoveToLedge_Statics
{
	struct CharacterController_eventSmoothMoveToLedge_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacterController_SmoothMoveToLedge_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterController_eventSmoothMoveToLedge_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_SmoothMoveToLedge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_SmoothMoveToLedge_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_SmoothMoveToLedge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_SmoothMoveToLedge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "SmoothMoveToLedge", nullptr, nullptr, Z_Construct_UFunction_ACharacterController_SmoothMoveToLedge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_SmoothMoveToLedge_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACharacterController_SmoothMoveToLedge_Statics::CharacterController_eventSmoothMoveToLedge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_SmoothMoveToLedge_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterController_SmoothMoveToLedge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACharacterController_SmoothMoveToLedge_Statics::CharacterController_eventSmoothMoveToLedge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACharacterController_SmoothMoveToLedge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_SmoothMoveToLedge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacterController::execSmoothMoveToLedge)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SmoothMoveToLedge(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class ACharacterController Function SmoothMoveToLedge

// Begin Class ACharacterController Function SmoothUpdateRotation
struct Z_Construct_UFunction_ACharacterController_SmoothUpdateRotation_Statics
{
	struct CharacterController_eventSmoothUpdateRotation_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacterController_SmoothUpdateRotation_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterController_eventSmoothUpdateRotation_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_SmoothUpdateRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_SmoothUpdateRotation_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_SmoothUpdateRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_SmoothUpdateRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "SmoothUpdateRotation", nullptr, nullptr, Z_Construct_UFunction_ACharacterController_SmoothUpdateRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_SmoothUpdateRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACharacterController_SmoothUpdateRotation_Statics::CharacterController_eventSmoothUpdateRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_SmoothUpdateRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterController_SmoothUpdateRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACharacterController_SmoothUpdateRotation_Statics::CharacterController_eventSmoothUpdateRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACharacterController_SmoothUpdateRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_SmoothUpdateRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacterController::execSmoothUpdateRotation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SmoothUpdateRotation(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class ACharacterController Function SmoothUpdateRotation

// Begin Class ACharacterController Function StartLedgeGrabCooldown
struct Z_Construct_UFunction_ACharacterController_StartLedgeGrabCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_StartLedgeGrabCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "StartLedgeGrabCooldown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_StartLedgeGrabCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterController_StartLedgeGrabCooldown_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACharacterController_StartLedgeGrabCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_StartLedgeGrabCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacterController::execStartLedgeGrabCooldown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartLedgeGrabCooldown();
	P_NATIVE_END;
}
// End Class ACharacterController Function StartLedgeGrabCooldown

// Begin Class ACharacterController Function StartRunning
struct Z_Construct_UFunction_ACharacterController_StartRunning_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_StartRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "StartRunning", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_StartRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterController_StartRunning_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACharacterController_StartRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_StartRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacterController::execStartRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRunning();
	P_NATIVE_END;
}
// End Class ACharacterController Function StartRunning

// Begin Class ACharacterController Function StopMove
struct Z_Construct_UFunction_ACharacterController_StopMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_StopMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "StopMove", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_StopMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterController_StopMove_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACharacterController_StopMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_StopMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacterController::execStopMove)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopMove();
	P_NATIVE_END;
}
// End Class ACharacterController Function StopMove

// Begin Class ACharacterController Function StopRunning
struct Z_Construct_UFunction_ACharacterController_StopRunning_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_StopRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "StopRunning", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_StopRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterController_StopRunning_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACharacterController_StopRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_StopRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacterController::execStopRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopRunning();
	P_NATIVE_END;
}
// End Class ACharacterController Function StopRunning

// Begin Class ACharacterController Function UpdateSpeed
struct Z_Construct_UFunction_ACharacterController_UpdateSpeed_Statics
{
	struct CharacterController_eventUpdateSpeed_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACharacterController_UpdateSpeed_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterController_eventUpdateSpeed_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_UpdateSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_UpdateSpeed_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_UpdateSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_UpdateSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "UpdateSpeed", nullptr, nullptr, Z_Construct_UFunction_ACharacterController_UpdateSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_UpdateSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACharacterController_UpdateSpeed_Statics::CharacterController_eventUpdateSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_UpdateSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterController_UpdateSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACharacterController_UpdateSpeed_Statics::CharacterController_eventUpdateSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACharacterController_UpdateSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_UpdateSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacterController::execUpdateSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSpeed(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class ACharacterController Function UpdateSpeed

// Begin Class ACharacterController
void ACharacterController::StaticRegisterNativesACharacterController()
{
	UClass* Class = ACharacterController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LedgeGrab", &ACharacterController::execLedgeGrab },
		{ "Move", &ACharacterController::execMove },
		{ "ResetLedgeGrabCooldown", &ACharacterController::execResetLedgeGrabCooldown },
		{ "RotateCamera", &ACharacterController::execRotateCamera },
		{ "SmoothMoveToLedge", &ACharacterController::execSmoothMoveToLedge },
		{ "SmoothUpdateRotation", &ACharacterController::execSmoothUpdateRotation },
		{ "StartLedgeGrabCooldown", &ACharacterController::execStartLedgeGrabCooldown },
		{ "StartRunning", &ACharacterController::execStartRunning },
		{ "StopMove", &ACharacterController::execStopMove },
		{ "StopRunning", &ACharacterController::execStopRunning },
		{ "UpdateSpeed", &ACharacterController::execUpdateSpeed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterController);
UClass* Z_Construct_UClass_ACharacterController_NoRegister()
{
	return ACharacterController::StaticClass();
}
struct Z_Construct_UClass_ACharacterController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterController.h" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerCamera_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_normalSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_runSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotationSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_strafeRatio_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
		{ "Category", "EnhancedInput" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveAction_MetaData[] = {
		{ "Category", "EnhancedInput" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lookAction_MetaData[] = {
		{ "Category", "EnhancedInput" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_runAction_MetaData[] = {
		{ "Category", "EnhancedInput" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpAction_MetaData[] = {
		{ "Category", "EnhancedInput" },
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAxisValue_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementDirection_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAtLedge_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentSpeed_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeCheckOffset_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeDetectionDistance_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_accelerationRate_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_decelerationRate_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotationInterpSpeed_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanGrabLedge_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeGrabCooldown_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LedgeGrabCooldownTimer_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRunning_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsClimbingLedge_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ledgeTargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMovingAlongLedge_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ledgeMoveSpeed_MetaData[] = {
		{ "ModuleRelativePath", "CharacterController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerCamera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_normalSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_runSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_strafeRatio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_moveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_lookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_runAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_jumpAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveAxisValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementDirection;
	static void NewProp_bIsAtLedge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAtLedge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LedgeCheckOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LedgeDetectionDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_accelerationRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_decelerationRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rotationInterpSpeed;
	static void NewProp_bCanGrabLedge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanGrabLedge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LedgeGrabCooldown;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LedgeGrabCooldownTimer;
	static void NewProp_bIsRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRunning;
	static void NewProp_bIsClimbingLedge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsClimbingLedge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ledgeTargetLocation;
	static void NewProp_bIsMovingAlongLedge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMovingAlongLedge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ledgeMoveSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacterController_LedgeGrab, "LedgeGrab" }, // 91283094
		{ &Z_Construct_UFunction_ACharacterController_Move, "Move" }, // 2801240829
		{ &Z_Construct_UFunction_ACharacterController_ResetLedgeGrabCooldown, "ResetLedgeGrabCooldown" }, // 1510967179
		{ &Z_Construct_UFunction_ACharacterController_RotateCamera, "RotateCamera" }, // 602270044
		{ &Z_Construct_UFunction_ACharacterController_SmoothMoveToLedge, "SmoothMoveToLedge" }, // 2485423359
		{ &Z_Construct_UFunction_ACharacterController_SmoothUpdateRotation, "SmoothUpdateRotation" }, // 2342399761
		{ &Z_Construct_UFunction_ACharacterController_StartLedgeGrabCooldown, "StartLedgeGrabCooldown" }, // 1480948501
		{ &Z_Construct_UFunction_ACharacterController_StartRunning, "StartRunning" }, // 1257509436
		{ &Z_Construct_UFunction_ACharacterController_StopMove, "StopMove" }, // 1639524621
		{ &Z_Construct_UFunction_ACharacterController_StopRunning, "StopRunning" }, // 1291597688
		{ &Z_Construct_UFunction_ACharacterController_UpdateSpeed, "UpdateSpeed" }, // 3065312745
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_playerCamera = { "playerCamera", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, playerCamera), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerCamera_MetaData), NewProp_playerCamera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_normalSpeed = { "normalSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, normalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_normalSpeed_MetaData), NewProp_normalSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_runSpeed = { "runSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, runSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_runSpeed_MetaData), NewProp_runSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_rotationSpeed = { "rotationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, rotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotationSpeed_MetaData), NewProp_rotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_strafeRatio = { "strafeRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, strafeRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_strafeRatio_MetaData), NewProp_strafeRatio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_moveAction = { "moveAction", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, moveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveAction_MetaData), NewProp_moveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_lookAction = { "lookAction", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, lookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lookAction_MetaData), NewProp_lookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_runAction = { "runAction", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, runAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_runAction_MetaData), NewProp_runAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_jumpAction = { "jumpAction", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, jumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpAction_MetaData), NewProp_jumpAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_MoveAxisValue = { "MoveAxisValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, MoveAxisValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAxisValue_MetaData), NewProp_MoveAxisValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_MovementDirection = { "MovementDirection", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, MovementDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementDirection_MetaData), NewProp_MovementDirection_MetaData) };
void Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsAtLedge_SetBit(void* Obj)
{
	((ACharacterController*)Obj)->bIsAtLedge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsAtLedge = { "bIsAtLedge", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACharacterController), &Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsAtLedge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAtLedge_MetaData), NewProp_bIsAtLedge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_currentSpeed = { "currentSpeed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, currentSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentSpeed_MetaData), NewProp_currentSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_LedgeCheckOffset = { "LedgeCheckOffset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, LedgeCheckOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeCheckOffset_MetaData), NewProp_LedgeCheckOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_LedgeDetectionDistance = { "LedgeDetectionDistance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, LedgeDetectionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeDetectionDistance_MetaData), NewProp_LedgeDetectionDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_accelerationRate = { "accelerationRate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, accelerationRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_accelerationRate_MetaData), NewProp_accelerationRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_decelerationRate = { "decelerationRate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, decelerationRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_decelerationRate_MetaData), NewProp_decelerationRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_rotationInterpSpeed = { "rotationInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, rotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotationInterpSpeed_MetaData), NewProp_rotationInterpSpeed_MetaData) };
void Z_Construct_UClass_ACharacterController_Statics::NewProp_bCanGrabLedge_SetBit(void* Obj)
{
	((ACharacterController*)Obj)->bCanGrabLedge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_bCanGrabLedge = { "bCanGrabLedge", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACharacterController), &Z_Construct_UClass_ACharacterController_Statics::NewProp_bCanGrabLedge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanGrabLedge_MetaData), NewProp_bCanGrabLedge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_LedgeGrabCooldown = { "LedgeGrabCooldown", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, LedgeGrabCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeGrabCooldown_MetaData), NewProp_LedgeGrabCooldown_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_LedgeGrabCooldownTimer = { "LedgeGrabCooldownTimer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, LedgeGrabCooldownTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LedgeGrabCooldownTimer_MetaData), NewProp_LedgeGrabCooldownTimer_MetaData) }; // 756291145
void Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsRunning_SetBit(void* Obj)
{
	((ACharacterController*)Obj)->bIsRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsRunning = { "bIsRunning", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACharacterController), &Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRunning_MetaData), NewProp_bIsRunning_MetaData) };
void Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsClimbingLedge_SetBit(void* Obj)
{
	((ACharacterController*)Obj)->bIsClimbingLedge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsClimbingLedge = { "bIsClimbingLedge", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACharacterController), &Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsClimbingLedge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsClimbingLedge_MetaData), NewProp_bIsClimbingLedge_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_ledgeTargetLocation = { "ledgeTargetLocation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, ledgeTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ledgeTargetLocation_MetaData), NewProp_ledgeTargetLocation_MetaData) };
void Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsMovingAlongLedge_SetBit(void* Obj)
{
	((ACharacterController*)Obj)->bIsMovingAlongLedge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsMovingAlongLedge = { "bIsMovingAlongLedge", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACharacterController), &Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsMovingAlongLedge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMovingAlongLedge_MetaData), NewProp_bIsMovingAlongLedge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_ledgeMoveSpeed = { "ledgeMoveSpeed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, ledgeMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ledgeMoveSpeed_MetaData), NewProp_ledgeMoveSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_playerCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_normalSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_runSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_rotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_strafeRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_InputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_moveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_lookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_runAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_jumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_MoveAxisValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_MovementDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsAtLedge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_currentSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_LedgeCheckOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_LedgeDetectionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_accelerationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_decelerationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_rotationInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_bCanGrabLedge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_LedgeGrabCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_LedgeGrabCooldownTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsClimbingLedge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_ledgeTargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_bIsMovingAlongLedge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_ledgeMoveSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACharacterController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTC_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterController_Statics::ClassParams = {
	&ACharacterController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACharacterController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharacterController()
{
	if (!Z_Registration_Info_UClass_ACharacterController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterController.OuterSingleton, Z_Construct_UClass_ACharacterController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharacterController.OuterSingleton;
}
template<> SOTC_CHARACTER_API UClass* StaticClass<ACharacterController>()
{
	return ACharacterController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterController);
ACharacterController::~ACharacterController() {}
// End Class ACharacterController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_antobrom_Documents_SOTC_Character_SOTC_Character_Source_SOTC_Character_CharacterController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterController, ACharacterController::StaticClass, TEXT("ACharacterController"), &Z_Registration_Info_UClass_ACharacterController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterController), 2137192657U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antobrom_Documents_SOTC_Character_SOTC_Character_Source_SOTC_Character_CharacterController_h_3091416683(TEXT("/Script/SOTC_Character"),
	Z_CompiledInDeferFile_FID_Users_antobrom_Documents_SOTC_Character_SOTC_Character_Source_SOTC_Character_CharacterController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_antobrom_Documents_SOTC_Character_SOTC_Character_Source_SOTC_Character_CharacterController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
