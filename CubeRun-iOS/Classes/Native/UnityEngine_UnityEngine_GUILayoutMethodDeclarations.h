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

// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t69;
// UnityEngine.GUIContent
struct GUIContent_t526;
// UnityEngine.GUIStyle
struct GUIStyle_t532;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t538;

#include "codegen/il2cpp-codegen.h"

// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_Button_m274 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t69* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_DoButton_m3114 (Object_t * __this /* static, unused */, GUIContent_t526 * ___content, GUIStyle_t532 * ___style, GUILayoutOptionU5BU5D_t69* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" GUILayoutOption_t538 * GUILayout_Width_m3115 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" GUILayoutOption_t538 * GUILayout_Height_m3116 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
