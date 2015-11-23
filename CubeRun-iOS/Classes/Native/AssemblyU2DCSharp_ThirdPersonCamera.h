#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t34;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ThirdPersonCamera
struct  ThirdPersonCamera_t59  : public MonoBehaviour_t2
{
	// System.Single ThirdPersonCamera::smooth
	float ___smooth_2;
	// UnityEngine.Transform ThirdPersonCamera::standardPos
	Transform_t34 * ___standardPos_3;
	// UnityEngine.Transform ThirdPersonCamera::frontPos
	Transform_t34 * ___frontPos_4;
	// UnityEngine.Transform ThirdPersonCamera::jumpPos
	Transform_t34 * ___jumpPos_5;
	// System.Boolean ThirdPersonCamera::bQuickSwitch
	bool ___bQuickSwitch_6;
};
