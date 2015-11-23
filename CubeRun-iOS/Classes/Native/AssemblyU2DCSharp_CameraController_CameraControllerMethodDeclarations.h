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

// CameraController.CameraController
struct CameraController_t52;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void CameraController.CameraController::.ctor()
extern "C" void CameraController__ctor_m196 (CameraController_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraController.CameraController::setupFocusObject(System.String)
extern "C" void CameraController_setupFocusObject_m197 (CameraController_t52 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraController.CameraController::Start()
extern "C" void CameraController_Start_m198 (CameraController_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraController.CameraController::Update()
extern "C" void CameraController_Update_m199 (CameraController_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraController.CameraController::OnGUI()
extern "C" void CameraController_OnGUI_m200 (CameraController_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraController.CameraController::mouseEvent()
extern "C" void CameraController_mouseEvent_m201 (CameraController_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraController.CameraController::mouseDragEvent(UnityEngine.Vector3)
extern "C" void CameraController_mouseDragEvent_m202 (CameraController_t52 * __this, Vector3_t12  ___mousePos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraController.CameraController::mouseWheelEvent(System.Single)
extern "C" void CameraController_mouseWheelEvent_m203 (CameraController_t52 * __this, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraController.CameraController::cameraTranslate(UnityEngine.Vector3)
extern "C" void CameraController_cameraTranslate_m204 (CameraController_t52 * __this, Vector3_t12  ___vec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraController.CameraController::cameraRotate(UnityEngine.Vector3)
extern "C" void CameraController_cameraRotate_m205 (CameraController_t52 * __this, Vector3_t12  ___eulerAngle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
