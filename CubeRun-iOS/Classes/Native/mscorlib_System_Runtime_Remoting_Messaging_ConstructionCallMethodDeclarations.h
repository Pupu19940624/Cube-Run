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

// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t1413;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t631;
// System.String
struct String_t;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t1374;
// System.Object[]
struct ObjectU5BU5D_t336;
// System.Collections.IList
struct IList_t997;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t839;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
extern "C" void ConstructionCall__ctor_m8665 (ConstructionCall_t1413 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConstructionCall__ctor_m8666 (ConstructionCall_t1413 * __this, SerializationInfo_t631 * ___info, StreamingContext_t632  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
extern "C" void ConstructionCall_InitDictionary_m8667 (ConstructionCall_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
extern "C" void ConstructionCall_set_IsContextOk_m8668 (ConstructionCall_t1413 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
extern "C" Type_t * ConstructionCall_get_ActivationType_m8669 (ConstructionCall_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
extern "C" String_t* ConstructionCall_get_ActivationTypeName_m8670 (ConstructionCall_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
extern "C" Object_t * ConstructionCall_get_Activator_m8671 (ConstructionCall_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ConstructionCall_set_Activator_m8672 (ConstructionCall_t1413 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
extern "C" ObjectU5BU5D_t336* ConstructionCall_get_CallSiteActivationAttributes_m8673 (ConstructionCall_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
extern "C" void ConstructionCall_SetActivationAttributes_m8674 (ConstructionCall_t1413 * __this, ObjectU5BU5D_t336* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
extern "C" Object_t * ConstructionCall_get_ContextProperties_m8675 (ConstructionCall_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
extern "C" void ConstructionCall_InitMethodProperty_m8676 (ConstructionCall_t1413 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConstructionCall_GetObjectData_m8677 (ConstructionCall_t1413 * __this, SerializationInfo_t631 * ___info, StreamingContext_t632  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
extern "C" Object_t * ConstructionCall_get_Properties_m8678 (ConstructionCall_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
