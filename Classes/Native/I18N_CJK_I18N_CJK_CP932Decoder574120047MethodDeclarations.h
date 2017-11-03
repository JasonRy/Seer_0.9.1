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

// I18N.CJK.CP932Decoder
struct CP932Decoder_t574120047;
// I18N.CJK.JISConvert
struct JISConvert_t1383524885;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Char[]
struct CharU5BU5D_t3324145743;

#include "codegen/il2cpp-codegen.h"
#include "I18N_CJK_I18N_CJK_JISConvert1383524885.h"

// System.Void I18N.CJK.CP932Decoder::.ctor(I18N.CJK.JISConvert)
extern "C"  void CP932Decoder__ctor_m2998466311 (CP932Decoder_t574120047 * __this, JISConvert_t1383524885 * ___convert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP932Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t CP932Decoder_GetCharCount_m1862647150 (CP932Decoder_t574120047 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP932Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t CP932Decoder_GetCharCount_m2937474127 (CP932Decoder_t574120047 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP932Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t CP932Decoder_GetChars_m3023052760 (CP932Decoder_t574120047 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP932Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
extern "C"  int32_t CP932Decoder_GetChars_m1845594277 (CP932Decoder_t574120047 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, bool ___refresh5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
