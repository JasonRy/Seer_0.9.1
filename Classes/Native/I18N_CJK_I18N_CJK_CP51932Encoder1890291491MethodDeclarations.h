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

// I18N.CJK.CP51932Encoder
struct CP51932Encoder_t1890291491;
// I18N.Common.MonoEncoding
struct MonoEncoding_t3350080258;

#include "codegen/il2cpp-codegen.h"
#include "I18N_I18N_Common_MonoEncoding3350080258.h"

// System.Void I18N.CJK.CP51932Encoder::.ctor(I18N.Common.MonoEncoding)
extern "C"  void CP51932Encoder__ctor_m150228277 (CP51932Encoder_t1890291491 * __this, MonoEncoding_t3350080258 * ___encoding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP51932Encoder::GetByteCountImpl(System.Char*,System.Int32,System.Boolean)
extern "C"  int32_t CP51932Encoder_GetByteCountImpl_m2285358446 (CP51932Encoder_t1890291491 * __this, Il2CppChar* ___chars0, int32_t ___count1, bool ___refresh2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP51932Encoder::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean)
extern "C"  int32_t CP51932Encoder_GetBytesImpl_m4208607678 (CP51932Encoder_t1890291491 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, bool ___refresh4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
