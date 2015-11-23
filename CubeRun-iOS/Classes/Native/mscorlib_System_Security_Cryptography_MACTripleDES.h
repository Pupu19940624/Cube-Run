﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.TripleDES
struct TripleDES_t865;
// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t1128;

#include "mscorlib_System_Security_Cryptography_KeyedHashAlgorithm.h"

// System.Security.Cryptography.MACTripleDES
struct  MACTripleDES_t1520  : public KeyedHashAlgorithm_t757
{
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::tdes
	TripleDES_t865 * ___tdes_5;
	// Mono.Security.Cryptography.MACAlgorithm System.Security.Cryptography.MACTripleDES::mac
	MACAlgorithm_t1128 * ___mac_6;
	// System.Boolean System.Security.Cryptography.MACTripleDES::m_disposed
	bool ___m_disposed_7;
};
