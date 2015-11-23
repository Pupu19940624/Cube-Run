﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.AppDomain
struct AppDomain_t634;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_Security_RuntimeDeclSecurityEntry.h"

// System.Security.RuntimeSecurityFrame
struct  RuntimeSecurityFrame_t1565  : public Object_t
{
	// System.AppDomain System.Security.RuntimeSecurityFrame::domain
	AppDomain_t634 * ___domain_0;
	// System.Reflection.MethodInfo System.Security.RuntimeSecurityFrame::method
	MethodInfo_t * ___method_1;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::assert
	RuntimeDeclSecurityEntry_t1564  ___assert_2;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::deny
	RuntimeDeclSecurityEntry_t1564  ___deny_3;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::permitonly
	RuntimeDeclSecurityEntry_t1564  ___permitonly_4;
};
