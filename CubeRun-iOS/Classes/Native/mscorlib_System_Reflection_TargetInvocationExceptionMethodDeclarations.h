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

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t1329;
// System.Exception
struct Exception_t39;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t631;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern "C" void TargetInvocationException__ctor_m8442 (TargetInvocationException_t1329 * __this, Exception_t39 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetInvocationException__ctor_m8443 (TargetInvocationException_t1329 * __this, SerializationInfo_t631 * ___info, StreamingContext_t632  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
