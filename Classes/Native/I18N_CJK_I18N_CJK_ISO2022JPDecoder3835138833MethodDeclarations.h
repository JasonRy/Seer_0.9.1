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

// I18N.CJK.ISO2022JPDecoder
struct ISO2022JPDecoder_t3835138833;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Char[]
struct CharU5BU5D_t3324145743;

#include "codegen/il2cpp-codegen.h"

// System.Void I18N.CJK.ISO2022JPDecoder::.ctor(System.Boolean,System.Boolean)
extern "C"  void ISO2022JPDecoder__ctor_m1363505174 (ISO2022JPDecoder_t3835138833 * __this, bool ___allow1ByteKana0, bool ___allowShiftIO1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.CJK.ISO2022JPDecoder::.cctor()
extern "C"  void ISO2022JPDecoder__cctor_m2159600285 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.ISO2022JPDecoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ISO2022JPDecoder_GetCharCount_m3573788300 (ISO2022JPDecoder_t3835138833 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.ISO2022JPDecoder::ToChar(System.Int32)
extern "C"  int32_t ISO2022JPDecoder_ToChar_m3166361244 (ISO2022JPDecoder_t3835138833 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.ISO2022JPDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t ISO2022JPDecoder_GetChars_m3779185914 (ISO2022JPDecoder_t3835138833 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.CJK.ISO2022JPDecoder::Reset()
extern "C"  void ISO2022JPDecoder_Reset_m2026616253 (ISO2022JPDecoder_t3835138833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
