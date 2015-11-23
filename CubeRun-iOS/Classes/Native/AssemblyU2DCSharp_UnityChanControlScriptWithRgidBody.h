#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t61;
// UnityEngine.Rigidbody
struct Rigidbody_t62;
// UnityEngine.Animator
struct Animator_t49;
// UnityEngine.GameObject
struct GameObject_t36;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"

// UnityChanControlScriptWithRgidBody
struct  UnityChanControlScriptWithRgidBody_t60  : public MonoBehaviour_t2
{
	// System.Single UnityChanControlScriptWithRgidBody::animSpeed
	float ___animSpeed_2;
	// System.Single UnityChanControlScriptWithRgidBody::lookSmoother
	float ___lookSmoother_3;
	// System.Boolean UnityChanControlScriptWithRgidBody::useCurves
	bool ___useCurves_4;
	// System.Single UnityChanControlScriptWithRgidBody::useCurvesHeight
	float ___useCurvesHeight_5;
	// System.Single UnityChanControlScriptWithRgidBody::forwardSpeed
	float ___forwardSpeed_6;
	// System.Single UnityChanControlScriptWithRgidBody::backwardSpeed
	float ___backwardSpeed_7;
	// System.Single UnityChanControlScriptWithRgidBody::rotateSpeed
	float ___rotateSpeed_8;
	// System.Single UnityChanControlScriptWithRgidBody::jumpPower
	float ___jumpPower_9;
	// UnityEngine.CapsuleCollider UnityChanControlScriptWithRgidBody::col
	CapsuleCollider_t61 * ___col_10;
	// UnityEngine.Rigidbody UnityChanControlScriptWithRgidBody::rb
	Rigidbody_t62 * ___rb_11;
	// UnityEngine.Vector3 UnityChanControlScriptWithRgidBody::velocity
	Vector3_t12  ___velocity_12;
	// System.Single UnityChanControlScriptWithRgidBody::orgColHight
	float ___orgColHight_13;
	// UnityEngine.Vector3 UnityChanControlScriptWithRgidBody::orgVectColCenter
	Vector3_t12  ___orgVectColCenter_14;
	// UnityEngine.Animator UnityChanControlScriptWithRgidBody::anim
	Animator_t49 * ___anim_15;
	// UnityEngine.AnimatorStateInfo UnityChanControlScriptWithRgidBody::currentBaseState
	AnimatorStateInfo_t57  ___currentBaseState_16;
	// UnityEngine.GameObject UnityChanControlScriptWithRgidBody::cameraObject
	GameObject_t36 * ___cameraObject_17;
};
struct UnityChanControlScriptWithRgidBody_t60_StaticFields{
	// System.Int32 UnityChanControlScriptWithRgidBody::idleState
	int32_t ___idleState_18;
	// System.Int32 UnityChanControlScriptWithRgidBody::locoState
	int32_t ___locoState_19;
	// System.Int32 UnityChanControlScriptWithRgidBody::jumpState
	int32_t ___jumpState_20;
	// System.Int32 UnityChanControlScriptWithRgidBody::restState
	int32_t ___restState_21;
};
