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

// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t1124;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t688;
// System.Byte[]
struct ByteU5BU5D_t677;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.BlockProcessor::.ctor(System.Security.Cryptography.ICryptoTransform,System.Int32)
extern "C" void BlockProcessor__ctor_m6715 (BlockProcessor_t1124 * __this, Object_t * ___transform, int32_t ___blockSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Finalize()
extern "C" void BlockProcessor_Finalize_m6716 (BlockProcessor_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Initialize()
extern "C" void BlockProcessor_Initialize_m6717 (BlockProcessor_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[])
extern "C" void BlockProcessor_Core_m6718 (BlockProcessor_t1124 * __this, ByteU5BU5D_t677* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[],System.Int32,System.Int32)
extern "C" void BlockProcessor_Core_m6719 (BlockProcessor_t1124 * __this, ByteU5BU5D_t677* ___rgb, int32_t ___ib, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.BlockProcessor::Final()
extern "C" ByteU5BU5D_t677* BlockProcessor_Final_m6720 (BlockProcessor_t1124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
