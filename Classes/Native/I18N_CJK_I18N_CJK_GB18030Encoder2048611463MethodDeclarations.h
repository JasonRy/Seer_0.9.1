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

// I18N.CJK.GB18030Encoder
struct GB18030Encoder_t2048611463;
// I18N.Common.MonoEncoding
struct MonoEncoding_t3350080258;

#include "codegen/il2cpp-codegen.h"
#include "I18N_I18N_Common_MonoEncoding3350080258.h"

// System.Void I18N.CJK.GB18030Encoder::.ctor(I18N.Common.MonoEncoding)
extern "C"  void GB18030Encoder__ctor_m2075771985 (GB18030Encoder_t2048611463 * __this, MonoEncoding_t3350080258 * ___owner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.CJK.GB18030Encoder::.cctor()
extern "C"  void GB18030Encoder__cctor_m1626173459 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.GB18030Encoder::GetByteCountImpl(System.Char*,System.Int32,System.Boolean)
extern "C"  int32_t GB18030Encoder_GetByteCountImpl_m60605650 (GB18030Encoder_t2048611463 * __this, Il2CppChar* ___chars0, int32_t ___count1, bool ___refresh2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.GB18030Encoder::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean)
extern "C"  int32_t GB18030Encoder_GetBytesImpl_m3917207074 (GB18030Encoder_t2048611463 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, bool ___refresh4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
