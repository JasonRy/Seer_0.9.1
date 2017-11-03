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

// I18N.CJK.CP51932Decoder
struct CP51932Decoder_t745125451;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Exception
struct Exception_t3991598821;

#include "codegen/il2cpp-codegen.h"

// System.Void I18N.CJK.CP51932Decoder::.ctor()
extern "C"  void CP51932Decoder__ctor_m2743505302 (CP51932Decoder_t745125451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP51932Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t CP51932Decoder_GetCharCount_m1828690194 (CP51932Decoder_t745125451 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP51932Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t CP51932Decoder_GetCharCount_m708654123 (CP51932Decoder_t745125451 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP51932Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t CP51932Decoder_GetChars_m3561974708 (CP51932Decoder_t745125451 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP51932Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
extern "C"  int32_t CP51932Decoder_GetChars_m3244132681 (CP51932Decoder_t745125451 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, bool ___refresh5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception I18N.CJK.CP51932Decoder::Insufficient()
extern "C"  Exception_t3991598821 * CP51932Decoder_Insufficient_m1664024600 (CP51932Decoder_t745125451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
