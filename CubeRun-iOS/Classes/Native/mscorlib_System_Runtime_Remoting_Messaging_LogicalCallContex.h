﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t773;
// System.Runtime.Remoting.Messaging.CallContextRemotingData
struct CallContextRemotingData_t1420;

#include "mscorlib_System_Object.h"

// System.Runtime.Remoting.Messaging.LogicalCallContext
struct  LogicalCallContext_t1419  : public Object_t
{
	// System.Collections.Hashtable System.Runtime.Remoting.Messaging.LogicalCallContext::_data
	Hashtable_t773 * ____data_0;
	// System.Runtime.Remoting.Messaging.CallContextRemotingData System.Runtime.Remoting.Messaging.LogicalCallContext::_remotingData
	CallContextRemotingData_t1420 * ____remotingData_1;
};
