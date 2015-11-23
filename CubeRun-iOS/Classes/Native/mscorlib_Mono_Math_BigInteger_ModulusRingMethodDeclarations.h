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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1119;
// Mono.Math.BigInteger
struct BigInteger_t1120;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m6633 (ModulusRing_t1119 * __this, BigInteger_t1120 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m6634 (ModulusRing_t1119 * __this, BigInteger_t1120 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1120 * ModulusRing_Multiply_m6635 (ModulusRing_t1119 * __this, BigInteger_t1120 * ___a, BigInteger_t1120 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1120 * ModulusRing_Difference_m6636 (ModulusRing_t1119 * __this, BigInteger_t1120 * ___a, BigInteger_t1120 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1120 * ModulusRing_Pow_m6637 (ModulusRing_t1119 * __this, BigInteger_t1120 * ___a, BigInteger_t1120 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1120 * ModulusRing_Pow_m6638 (ModulusRing_t1119 * __this, uint32_t ___b, BigInteger_t1120 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
