﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Predicate`1<System.Object>
struct Predicate_1_t1824;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t205;
// System.AsyncCallback
struct AsyncCallback_t206;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m11296_gshared (Predicate_1_t1824 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m11296(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1824 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11296_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m11297_gshared (Predicate_1_t1824 * __this, Object_t * ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m11297(__this, ___obj, method) (( bool (*) (Predicate_1_t1824 *, Object_t *, const MethodInfo*))Predicate_1_Invoke_m11297_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m11298_gshared (Predicate_1_t1824 * __this, Object_t * ___obj, AsyncCallback_t206 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m11298(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1824 *, Object_t *, AsyncCallback_t206 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11298_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m11299_gshared (Predicate_1_t1824 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m11299(__this, ___result, method) (( bool (*) (Predicate_1_t1824 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11299_gshared)(__this, ___result, method)
