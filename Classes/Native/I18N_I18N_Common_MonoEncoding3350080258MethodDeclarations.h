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

// I18N.Common.MonoEncoding
struct MonoEncoding_t3350080258;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t671205824;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_EncoderFallbackBuffer671205824.h"
#include "mscorlib_System_String7231557.h"

// System.Void I18N.Common.MonoEncoding::.ctor(System.Int32)
extern "C"  void MonoEncoding__ctor_m391048563 (MonoEncoding_t3350080258 * __this, int32_t ___codePage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.Common.MonoEncoding::.ctor(System.Int32,System.Int32)
extern "C"  void MonoEncoding__ctor_m1893655108 (MonoEncoding_t3350080258 * __this, int32_t ___codePage0, int32_t ___windowsCodePage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Common.MonoEncoding::get_WindowsCodePage()
extern "C"  int32_t MonoEncoding_get_WindowsCodePage_m1337366376 (MonoEncoding_t3350080258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.Common.MonoEncoding::HandleFallback(System.Text.EncoderFallbackBuffer&,System.Char*,System.Int32&,System.Int32&,System.Byte*,System.Int32&,System.Int32&)
extern "C"  void MonoEncoding_HandleFallback_m2241921844 (MonoEncoding_t3350080258 * __this, EncoderFallbackBuffer_t671205824 ** ___buffer0, Il2CppChar* ___chars1, int32_t* ___charIndex2, int32_t* ___charCount3, uint8_t* ___bytes4, int32_t* ___byteIndex5, int32_t* ___byteCount6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Common.MonoEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t MonoEncoding_GetByteCount_m432430650 (MonoEncoding_t3350080258 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Common.MonoEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t MonoEncoding_GetBytes_m3643485246 (MonoEncoding_t3350080258 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4260760469* ___bytes3, int32_t ___byteIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Common.MonoEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t MonoEncoding_GetBytes_m3217763927 (MonoEncoding_t3350080258 * __this, String_t* ___s0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4260760469* ___bytes3, int32_t ___byteIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Common.MonoEncoding::GetByteCount(System.Char*,System.Int32)
extern "C"  int32_t MonoEncoding_GetByteCount_m202667467 (MonoEncoding_t3350080258 * __this, Il2CppChar* ___chars0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Common.MonoEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t MonoEncoding_GetBytes_m24349819 (MonoEncoding_t3350080258 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
