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

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t321;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t205;
// System.AsyncCallback
struct AsyncCallback_t206;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m1992_gshared (UnityAction_1_t321 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m1992(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t321 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m1992_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m12648_gshared (UnityAction_1_t321 * __this, Color_t134  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m12648(__this, ___arg0, method) (( void (*) (UnityAction_1_t321 *, Color_t134 , const MethodInfo*))UnityAction_1_Invoke_m12648_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m12649_gshared (UnityAction_1_t321 * __this, Color_t134  ___arg0, AsyncCallback_t206 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m12649(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t321 *, Color_t134 , AsyncCallback_t206 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m12649_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m12650_gshared (UnityAction_1_t321 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m12650(__this, ___result, method) (( void (*) (UnityAction_1_t321 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m12650_gshared)(__this, ___result, method)
