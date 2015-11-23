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

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t1878;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t205;
// System.AsyncCallback
struct AsyncCallback_t206;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m11892_gshared (Predicate_1_t1878 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m11892(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1878 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11892_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m11893_gshared (Predicate_1_t1878 * __this, RaycastResult_t111  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m11893(__this, ___obj, method) (( bool (*) (Predicate_1_t1878 *, RaycastResult_t111 , const MethodInfo*))Predicate_1_Invoke_m11893_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m11894_gshared (Predicate_1_t1878 * __this, RaycastResult_t111  ___obj, AsyncCallback_t206 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m11894(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1878 *, RaycastResult_t111 , AsyncCallback_t206 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11894_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m11895_gshared (Predicate_1_t1878 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m11895(__this, ___result, method) (( bool (*) (Predicate_1_t1878 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11895_gshared)(__this, ___result, method)
