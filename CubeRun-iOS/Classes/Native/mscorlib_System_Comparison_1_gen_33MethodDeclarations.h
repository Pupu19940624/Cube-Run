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

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2198;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t205;
// System.AsyncCallback
struct AsyncCallback_t206;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m16167_gshared (Comparison_1_t2198 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m16167(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2198 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16167_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16168_gshared (Comparison_1_t2198 * __this, UICharInfo_t374  ___x, UICharInfo_t374  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16168(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2198 *, UICharInfo_t374 , UICharInfo_t374 , const MethodInfo*))Comparison_1_Invoke_m16168_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16169_gshared (Comparison_1_t2198 * __this, UICharInfo_t374  ___x, UICharInfo_t374  ___y, AsyncCallback_t206 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16169(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2198 *, UICharInfo_t374 , UICharInfo_t374 , AsyncCallback_t206 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16169_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16170_gshared (Comparison_1_t2198 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16170(__this, ___result, method) (( int32_t (*) (Comparison_1_t2198 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16170_gshared)(__this, ___result, method)
