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

// System.Text.Decoder
struct Decoder_t2225063046;
// System.Text.DecoderFallback
struct DecoderFallback_t649129352;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t4139272936;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Char[]
struct CharU5BU5D_t3324145743;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_DecoderFallback649129352.h"

// System.Void System.Text.Decoder::.ctor()
extern "C"  void Decoder__ctor_m1448672242 (Decoder_t2225063046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C"  void Decoder_set_Fallback_m4287157405 (Decoder_t2225063046 * __this, DecoderFallback_t649129352 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C"  DecoderFallbackBuffer_t4139272936 * Decoder_get_FallbackBuffer_m1620793422 (Decoder_t2225063046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t Decoder_GetCharCount_m781020173 (Decoder_t2225063046 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, bool ___flush3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
extern "C"  int32_t Decoder_GetChars_m2988413735 (Decoder_t2225063046 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, bool ___flush5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::Reset()
extern "C"  void Decoder_Reset_m3390072479 (Decoder_t2225063046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::CheckArguments(System.Char[],System.Int32)
extern "C"  void Decoder_CheckArguments_m3674559868 (Decoder_t2225063046 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___charIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::CheckArguments(System.Byte[],System.Int32,System.Int32)
extern "C"  void Decoder_CheckArguments_m24918121 (Decoder_t2225063046 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
