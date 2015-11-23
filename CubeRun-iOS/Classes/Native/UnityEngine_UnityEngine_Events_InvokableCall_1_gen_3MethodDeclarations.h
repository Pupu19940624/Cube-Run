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

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t1975;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t354;
// System.Object[]
struct ObjectU5BU5D_t336;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m13232_gshared (InvokableCall_1_t1975 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m13232(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t1975 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m13232_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m13233_gshared (InvokableCall_1_t1975 * __this, UnityAction_1_t354 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m13233(__this, ___action, method) (( void (*) (InvokableCall_1_t1975 *, UnityAction_1_t354 *, const MethodInfo*))InvokableCall_1__ctor_m13233_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m13234_gshared (InvokableCall_1_t1975 * __this, ObjectU5BU5D_t336* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m13234(__this, ___args, method) (( void (*) (InvokableCall_1_t1975 *, ObjectU5BU5D_t336*, const MethodInfo*))InvokableCall_1_Invoke_m13234_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m13235_gshared (InvokableCall_1_t1975 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m13235(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t1975 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m13235_gshared)(__this, ___targetObj, ___method, method)
