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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>
struct DefaultComparer_t2110;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::.ctor()
extern "C" void DefaultComparer__ctor_m15262_gshared (DefaultComparer_t2110 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m15262(__this, method) (( void (*) (DefaultComparer_t2110 *, const MethodInfo*))DefaultComparer__ctor_m15262_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15263_gshared (DefaultComparer_t2110 * __this, Color32_t326  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m15263(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2110 *, Color32_t326 , const MethodInfo*))DefaultComparer_GetHashCode_m15263_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15264_gshared (DefaultComparer_t2110 * __this, Color32_t326  ___x, Color32_t326  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m15264(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2110 *, Color32_t326 , Color32_t326 , const MethodInfo*))DefaultComparer_Equals_m15264_gshared)(__this, ___x, ___y, method)
