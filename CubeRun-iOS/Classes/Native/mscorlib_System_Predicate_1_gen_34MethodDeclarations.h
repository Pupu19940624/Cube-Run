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

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2204;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t205;
// System.AsyncCallback
struct AsyncCallback_t206;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16300_gshared (Predicate_1_t2204 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m16300(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2204 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16300_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16301_gshared (Predicate_1_t2204 * __this, UILineInfo_t372  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m16301(__this, ___obj, method) (( bool (*) (Predicate_1_t2204 *, UILineInfo_t372 , const MethodInfo*))Predicate_1_Invoke_m16301_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16302_gshared (Predicate_1_t2204 * __this, UILineInfo_t372  ___obj, AsyncCallback_t206 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m16302(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2204 *, UILineInfo_t372 , AsyncCallback_t206 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16302_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16303_gshared (Predicate_1_t2204 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m16303(__this, ___result, method) (( bool (*) (Predicate_1_t2204 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16303_gshared)(__this, ___result, method)
