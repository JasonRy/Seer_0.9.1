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

// System.Text.Encoder
struct Encoder_t3370229086;
// System.Text.EncoderFallback
struct EncoderFallback_t1901620832;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t671205824;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_EncoderFallback1901620832.h"

// System.Void System.Text.Encoder::.ctor()
extern "C"  void Encoder__ctor_m1621202458 (Encoder_t3370229086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.EncoderFallback System.Text.Encoder::get_Fallback()
extern "C"  EncoderFallback_t1901620832 * Encoder_get_Fallback_m1277786878 (Encoder_t3370229086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoder::set_Fallback(System.Text.EncoderFallback)
extern "C"  void Encoder_set_Fallback_m4149313261 (Encoder_t3370229086 * __this, EncoderFallback_t1901620832 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.EncoderFallbackBuffer System.Text.Encoder::get_FallbackBuffer()
extern "C"  EncoderFallbackBuffer_t671205824 * Encoder_get_FallbackBuffer_m721809406 (Encoder_t3370229086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoder::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean)
extern "C"  int32_t Encoder_GetBytes_m3086594400 (Encoder_t3370229086 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, bool ___flush4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoder::Reset()
extern "C"  void Encoder_Reset_m3562602695 (Encoder_t3370229086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoder::CheckArguments(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  void Encoder_CheckArguments_m1202608456 (Encoder_t3370229086 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
