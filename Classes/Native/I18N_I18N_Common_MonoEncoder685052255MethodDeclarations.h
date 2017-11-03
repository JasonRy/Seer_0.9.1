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

// I18N.Common.MonoEncoder
struct MonoEncoder_t685052255;
// I18N.Common.MonoEncoding
struct MonoEncoding_t3350080258;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "I18N_I18N_Common_MonoEncoding3350080258.h"

// System.Void I18N.Common.MonoEncoder::.ctor(I18N.Common.MonoEncoding)
extern "C"  void MonoEncoder__ctor_m638681740 (MonoEncoder_t685052255 * __this, MonoEncoding_t3350080258 * ___encoding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Common.MonoEncoder::GetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t MonoEncoder_GetByteCount_m3843865300 (MonoEncoder_t685052255 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Common.MonoEncoder::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean)
extern "C"  int32_t MonoEncoder_GetBytes_m2743781262 (MonoEncoder_t685052255 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4260760469* ___bytes3, int32_t ___byteIndex4, bool ___flush5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Common.MonoEncoder::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean)
extern "C"  int32_t MonoEncoder_GetBytes_m4082483571 (MonoEncoder_t685052255 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, bool ___flush4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.Common.MonoEncoder::HandleFallback(System.Char*,System.Int32&,System.Int32&,System.Byte*,System.Int32&,System.Int32&)
extern "C"  void MonoEncoder_HandleFallback_m418779071 (MonoEncoder_t685052255 * __this, Il2CppChar* ___chars0, int32_t* ___charIndex1, int32_t* ___charCount2, uint8_t* ___bytes3, int32_t* ___byteIndex4, int32_t* ___byteCount5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
