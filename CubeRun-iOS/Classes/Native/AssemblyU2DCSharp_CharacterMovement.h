#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t49;
// UnityEngine.CharacterController
struct CharacterController_t48;
// UnityEngine.GameObject
struct GameObject_t36;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// CharacterMovement
struct  CharacterMovement_t47  : public MonoBehaviour_t2
{
	// System.Single CharacterMovement::movementSpeed
	float ___movementSpeed_2;
	// System.Single CharacterMovement::jumpSpeed
	float ___jumpSpeed_3;
	// System.Single CharacterMovement::speed
	float ___speed_5;
	// System.Single CharacterMovement::maxSpeed
	float ___maxSpeed_6;
	// System.Single CharacterMovement::minSpeed
	float ___minSpeed_7;
	// UnityEngine.Vector3 CharacterMovement::moveToward
	Vector3_t12  ___moveToward_8;
	// UnityEngine.CharacterController CharacterMovement::characterController
	CharacterController_t48 * ___characterController_9;
	// UnityEngine.GameObject CharacterMovement::trail
	GameObject_t36 * ___trail_10;
	// System.Single CharacterMovement::trailInterval
	float ___trailInterval_11;
	// System.Boolean CharacterMovement::doubleJump
	bool ___doubleJump_12;
};
struct CharacterMovement_t47_StaticFields{
	// UnityEngine.Animator CharacterMovement::animator
	Animator_t49 * ___animator_4;
};
