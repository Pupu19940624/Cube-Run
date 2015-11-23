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

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t3;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
extern "C" void VirtualAxis__ctor_m14 (VirtualAxis_t3 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
extern "C" void VirtualAxis__ctor_m15 (VirtualAxis_t3 * __this, String_t* ___name, bool ___matchToInputSettings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
extern "C" String_t* VirtualAxis_get_name_m16 (VirtualAxis_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
extern "C" void VirtualAxis_set_name_m17 (VirtualAxis_t3 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
extern "C" bool VirtualAxis_get_matchWithInputManager_m18 (VirtualAxis_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
extern "C" void VirtualAxis_set_matchWithInputManager_m19 (VirtualAxis_t3 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
extern "C" void VirtualAxis_Remove_m20 (VirtualAxis_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
extern "C" void VirtualAxis_Update_m21 (VirtualAxis_t3 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
extern "C" float VirtualAxis_get_GetValue_m22 (VirtualAxis_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValueRaw()
extern "C" float VirtualAxis_get_GetValueRaw_m23 (VirtualAxis_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
