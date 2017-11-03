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

// I18N.CJK.GB18030Decoder
struct GB18030Decoder_t903445423;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Char[]
struct CharU5BU5D_t3324145743;

#include "codegen/il2cpp-codegen.h"

// System.Void I18N.CJK.GB18030Decoder::.ctor()
extern "C"  void GB18030Decoder__ctor_m3082067122 (GB18030Decoder_t903445423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.CJK.GB18030Decoder::.cctor()
extern "C"  void GB18030Decoder__cctor_m572704059 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.GB18030Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t GB18030Decoder_GetCharCount_m2041484078 (GB18030Decoder_t903445423 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___start1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.GB18030Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t GB18030Decoder_GetChars_m2039665176 (GB18030Decoder_t903445423 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
