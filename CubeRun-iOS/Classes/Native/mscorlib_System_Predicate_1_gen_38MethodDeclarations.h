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

// System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>
struct Predicate_1_t2351;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t205;
// System.AsyncCallback
struct AsyncCallback_t206;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArgument.h"

// System.Void System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17783_gshared (Predicate_1_t2351 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m17783(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2351 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17783_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17784_gshared (Predicate_1_t2351 * __this, CustomAttributeTypedArgument_t1305  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m17784(__this, ___obj, method) (( bool (*) (Predicate_1_t2351 *, CustomAttributeTypedArgument_t1305 , const MethodInfo*))Predicate_1_Invoke_m17784_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17785_gshared (Predicate_1_t2351 * __this, CustomAttributeTypedArgument_t1305  ___obj, AsyncCallback_t206 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m17785(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2351 *, CustomAttributeTypedArgument_t1305 , AsyncCallback_t206 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17785_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17786_gshared (Predicate_1_t2351 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m17786(__this, ___result, method) (( bool (*) (Predicate_1_t2351 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17786_gshared)(__this, ___result, method)
