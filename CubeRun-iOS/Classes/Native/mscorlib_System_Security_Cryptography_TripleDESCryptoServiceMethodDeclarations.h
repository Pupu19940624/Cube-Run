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

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t1545;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t688;
// System.Byte[]
struct ByteU5BU5D_t677;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::.ctor()
extern "C" void TripleDESCryptoServiceProvider__ctor_m9447 (TripleDESCryptoServiceProvider_t1545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateIV()
extern "C" void TripleDESCryptoServiceProvider_GenerateIV_m9448 (TripleDESCryptoServiceProvider_t1545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateKey()
extern "C" void TripleDESCryptoServiceProvider_GenerateKey_m9449 (TripleDESCryptoServiceProvider_t1545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateDecryptor_m9450 (TripleDESCryptoServiceProvider_t1545 * __this, ByteU5BU5D_t677* ___rgbKey, ByteU5BU5D_t677* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateEncryptor_m9451 (TripleDESCryptoServiceProvider_t1545 * __this, ByteU5BU5D_t677* ___rgbKey, ByteU5BU5D_t677* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
