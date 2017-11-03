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

// I18N.CJK.KoreanEncoding
struct KoreanEncoding_t3908325261;
// I18N.CJK.DbcsConvert
struct DbcsConvert_t2366949127;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Text.Decoder
struct Decoder_t2225063046;

#include "codegen/il2cpp-codegen.h"

// System.Void I18N.CJK.KoreanEncoding::.ctor(System.Int32,System.Boolean)
extern "C"  void KoreanEncoding__ctor_m3769692920 (KoreanEncoding_t3908325261 * __this, int32_t ___codepage0, bool ___useUHC1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// I18N.CJK.DbcsConvert I18N.CJK.KoreanEncoding::GetConvert()
extern "C"  DbcsConvert_t2366949127 * KoreanEncoding_GetConvert_m2884525583 (KoreanEncoding_t3908325261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.KoreanEncoding::GetByteCountImpl(System.Char*,System.Int32)
extern "C"  int32_t KoreanEncoding_GetByteCountImpl_m1769727493 (KoreanEncoding_t3908325261 * __this, Il2CppChar* ___chars0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.KoreanEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t KoreanEncoding_GetBytesImpl_m2701342517 (KoreanEncoding_t3908325261 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.KoreanEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t KoreanEncoding_GetCharCount_m2763931024 (KoreanEncoding_t3908325261 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.KoreanEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t KoreanEncoding_GetChars_m3474758006 (KoreanEncoding_t3908325261 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder I18N.CJK.KoreanEncoding::GetDecoder()
extern "C"  Decoder_t2225063046 * KoreanEncoding_GetDecoder_m3200455437 (KoreanEncoding_t3908325261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
