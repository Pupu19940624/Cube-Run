#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.CharacterController
struct CharacterController_t48;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_CollisionFlags.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
extern "C" int32_t CharacterController_Move_m252 (CharacterController_t48 * __this, Vector3_t12  ___motion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::INTERNAL_CALL_Move(UnityEngine.CharacterController,UnityEngine.Vector3&)
extern "C" int32_t CharacterController_INTERNAL_CALL_Move_m2843 (Object_t * __this /* static, unused */, CharacterController_t48 * ___self, Vector3_t12 * ___motion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
extern "C" bool CharacterController_get_isGrounded_m243 (CharacterController_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
