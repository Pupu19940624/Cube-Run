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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t2203;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m16297_gshared (DefaultComparer_t2203 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16297(__this, method) (( void (*) (DefaultComparer_t2203 *, const MethodInfo*))DefaultComparer__ctor_m16297_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16298_gshared (DefaultComparer_t2203 * __this, UILineInfo_t372  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m16298(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2203 *, UILineInfo_t372 , const MethodInfo*))DefaultComparer_GetHashCode_m16298_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16299_gshared (DefaultComparer_t2203 * __this, UILineInfo_t372  ___x, UILineInfo_t372  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m16299(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2203 *, UILineInfo_t372 , UILineInfo_t372 , const MethodInfo*))DefaultComparer_Equals_m16299_gshared)(__this, ___x, ___y, method)
