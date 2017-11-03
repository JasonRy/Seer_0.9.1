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

// I18N.CJK.DbcsEncoding
struct DbcsEncoding_t668823671;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"

// System.Void I18N.CJK.DbcsEncoding::.ctor(System.Int32)
extern "C"  void DbcsEncoding__ctor_m4264163259 (DbcsEncoding_t668823671 * __this, int32_t ___codePage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.CJK.DbcsEncoding::.ctor(System.Int32,System.Int32)
extern "C"  void DbcsEncoding__ctor_m4129606908 (DbcsEncoding_t668823671 * __this, int32_t ___codePage0, int32_t ___windowsCodePage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.DbcsEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t DbcsEncoding_GetByteCount_m3927065354 (DbcsEncoding_t668823671 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.DbcsEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t DbcsEncoding_GetCharCount_m2728477798 (DbcsEncoding_t668823671 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.DbcsEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t DbcsEncoding_GetChars_m2491433440 (DbcsEncoding_t668823671 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.DbcsEncoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t DbcsEncoding_GetMaxByteCount_m3712783436 (DbcsEncoding_t668823671 * __this, int32_t ___charCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.DbcsEncoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t DbcsEncoding_GetMaxCharCount_m209351486 (DbcsEncoding_t668823671 * __this, int32_t ___byteCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.DbcsEncoding::get_IsBrowserDisplay()
extern "C"  bool DbcsEncoding_get_IsBrowserDisplay_m1046340775 (DbcsEncoding_t668823671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.DbcsEncoding::get_IsBrowserSave()
extern "C"  bool DbcsEncoding_get_IsBrowserSave_m2660255322 (DbcsEncoding_t668823671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.DbcsEncoding::get_IsMailNewsDisplay()
extern "C"  bool DbcsEncoding_get_IsMailNewsDisplay_m2897885965 (DbcsEncoding_t668823671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.DbcsEncoding::get_IsMailNewsSave()
extern "C"  bool DbcsEncoding_get_IsMailNewsSave_m3118201268 (DbcsEncoding_t668823671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
