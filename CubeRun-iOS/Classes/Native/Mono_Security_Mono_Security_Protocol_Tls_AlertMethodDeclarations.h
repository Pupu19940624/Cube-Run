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

// Mono.Security.Protocol.Tls.Alert
struct Alert_t761;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLevel.h"

// System.Void Mono.Security.Protocol.Tls.Alert::.ctor(Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void Alert__ctor_m4037 (Alert_t761 * __this, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Alert::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void Alert__ctor_m4038 (Alert_t761 * __this, uint8_t ___level, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.AlertLevel Mono.Security.Protocol.Tls.Alert::get_Level()
extern "C" uint8_t Alert_get_Level_m4039 (Alert_t761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.AlertDescription Mono.Security.Protocol.Tls.Alert::get_Description()
extern "C" uint8_t Alert_get_Description_m4040 (Alert_t761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Alert::get_IsWarning()
extern "C" bool Alert_get_IsWarning_m4041 (Alert_t761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Alert::get_IsCloseNotify()
extern "C" bool Alert_get_IsCloseNotify_m4042 (Alert_t761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Alert::inferAlertLevel()
extern "C" void Alert_inferAlertLevel_m4043 (Alert_t761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.Alert::GetAlertMessage(Mono.Security.Protocol.Tls.AlertDescription)
extern "C" String_t* Alert_GetAlertMessage_m4044 (Object_t * __this /* static, unused */, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
