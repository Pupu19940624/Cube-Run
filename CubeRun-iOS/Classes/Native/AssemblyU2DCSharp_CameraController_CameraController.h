#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t36;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// CameraController.CameraController
struct  CameraController_t52  : public MonoBehaviour_t2
{
	// UnityEngine.Vector3 CameraController.CameraController::focus
	Vector3_t12  ___focus_2;
	// UnityEngine.GameObject CameraController.CameraController::focusObj
	GameObject_t36 * ___focusObj_3;
	// System.Boolean CameraController.CameraController::showInstWindow
	bool ___showInstWindow_4;
	// UnityEngine.Vector3 CameraController.CameraController::oldPos
	Vector3_t12  ___oldPos_5;
};
