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

// TrailCollider
struct TrailCollider_t50;
// UnityEngine.Collider
struct Collider_t64;

#include "codegen/il2cpp-codegen.h"

// System.Void TrailCollider::.ctor()
extern "C" void TrailCollider__ctor_m191 (TrailCollider_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrailCollider::Awake()
extern "C" void TrailCollider_Awake_m192 (TrailCollider_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrailCollider::Update()
extern "C" void TrailCollider_Update_m193 (TrailCollider_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrailCollider::OnTriggerEnter(UnityEngine.Collider)
extern "C" void TrailCollider_OnTriggerEnter_m194 (TrailCollider_t50 * __this, Collider_t64 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrailCollider::OnTriggerExit(UnityEngine.Collider)
extern "C" void TrailCollider_OnTriggerExit_m195 (TrailCollider_t50 * __this, Collider_t64 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
