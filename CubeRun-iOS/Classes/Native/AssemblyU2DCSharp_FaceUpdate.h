#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t54;
// UnityEngine.Animator
struct Animator_t49;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// FaceUpdate
struct  FaceUpdate_t53  : public MonoBehaviour_t2
{
	// UnityEngine.AnimationClip[] FaceUpdate::animations
	AnimationClipU5BU5D_t54* ___animations_2;
	// UnityEngine.Animator FaceUpdate::anim
	Animator_t49 * ___anim_3;
	// System.Single FaceUpdate::delayWeight
	float ___delayWeight_4;
	// System.Single FaceUpdate::current
	float ___current_5;
};
