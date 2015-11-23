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

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t136;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t322;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t602;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m1845_gshared (UnityEvent_1_t136 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1845(__this, method) (( void (*) (UnityEvent_1_t136 *, const MethodInfo*))UnityEvent_1__ctor_m1845_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m1847_gshared (UnityEvent_1_t136 * __this, UnityAction_1_t322 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m1847(__this, ___call, method) (( void (*) (UnityEvent_1_t136 *, UnityAction_1_t322 *, const MethodInfo*))UnityEvent_1_AddListener_m1847_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m2167_gshared (UnityEvent_1_t136 * __this, UnityAction_1_t322 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m2167(__this, ___call, method) (( void (*) (UnityEvent_1_t136 *, UnityAction_1_t322 *, const MethodInfo*))UnityEvent_1_RemoveListener_m2167_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m12655_gshared (UnityEvent_1_t136 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m12655(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t136 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m12655_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t602 * UnityEvent_1_GetDelegate_m12656_gshared (UnityEvent_1_t136 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12656(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t602 * (*) (UnityEvent_1_t136 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m12656_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t602 * UnityEvent_1_GetDelegate_m12657_gshared (Object_t * __this /* static, unused */, UnityAction_1_t322 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12657(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t602 * (*) (Object_t * /* static, unused */, UnityAction_1_t322 *, const MethodInfo*))UnityEvent_1_GetDelegate_m12657_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1846_gshared (UnityEvent_1_t136 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1846(__this, ___arg0, method) (( void (*) (UnityEvent_1_t136 *, float, const MethodInfo*))UnityEvent_1_Invoke_m1846_gshared)(__this, ___arg0, method)
