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

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t1894;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1853;
// System.Object[]
struct ObjectU5BU5D_t336;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m12100_gshared (InvokableCall_1_t1894 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m12100(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t1894 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m12100_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m12101_gshared (InvokableCall_1_t1894 * __this, UnityAction_1_t1853 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m12101(__this, ___action, method) (( void (*) (InvokableCall_1_t1894 *, UnityAction_1_t1853 *, const MethodInfo*))InvokableCall_1__ctor_m12101_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m12102_gshared (InvokableCall_1_t1894 * __this, ObjectU5BU5D_t336* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m12102(__this, ___args, method) (( void (*) (InvokableCall_1_t1894 *, ObjectU5BU5D_t336*, const MethodInfo*))InvokableCall_1_Invoke_m12102_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m12103_gshared (InvokableCall_1_t1894 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m12103(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t1894 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m12103_gshared)(__this, ___targetObj, ___method, method)
