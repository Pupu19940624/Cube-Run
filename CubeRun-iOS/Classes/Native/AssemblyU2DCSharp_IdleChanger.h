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

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"

// IdleChanger
struct  IdleChanger_t56  : public MonoBehaviour_t2
{
	// UnityEngine.Animator IdleChanger::anim
	Animator_t49 * ___anim_2;
	// UnityEngine.AnimatorStateInfo IdleChanger::currentState
	AnimatorStateInfo_t57  ___currentState_3;
	// UnityEngine.AnimatorStateInfo IdleChanger::previousState
	AnimatorStateInfo_t57  ___previousState_4;
	// System.Boolean IdleChanger::_random
	bool ____random_5;
	// System.Single IdleChanger::_threshold
	float ____threshold_6;
	// System.Single IdleChanger::_interval
	float ____interval_7;
};
