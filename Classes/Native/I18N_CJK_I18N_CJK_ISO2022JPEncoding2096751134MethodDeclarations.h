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

// I18N.CJK.ISO2022JPEncoding
struct ISO2022JPEncoding_t2096751134;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"

// System.Void I18N.CJK.ISO2022JPEncoding::.ctor(System.Int32,System.Boolean,System.Boolean)
extern "C"  void ISO2022JPEncoding__ctor_m3354096016 (ISO2022JPEncoding_t2096751134 * __this, int32_t ___codePage0, bool ___allow1ByteKana1, bool ___allowShiftIO2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.ISO2022JPEncoding::get_BodyName()
extern "C"  String_t* ISO2022JPEncoding_get_BodyName_m4121390462 (ISO2022JPEncoding_t2096751134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.ISO2022JPEncoding::get_HeaderName()
extern "C"  String_t* ISO2022JPEncoding_get_HeaderName_m600448553 (ISO2022JPEncoding_t2096751134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.ISO2022JPEncoding::get_WebName()
extern "C"  String_t* ISO2022JPEncoding_get_WebName_m2859508432 (ISO2022JPEncoding_t2096751134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t ISO2022JPEncoding_GetMaxByteCount_m3645870221 (ISO2022JPEncoding_t2096751134 * __this, int32_t ___charCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t ISO2022JPEncoding_GetMaxCharCount_m142438271 (ISO2022JPEncoding_t2096751134 * __this, int32_t ___byteCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t ISO2022JPEncoding_GetByteCount_m2619657291 (ISO2022JPEncoding_t2096751134 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetByteCountImpl(System.Char*,System.Int32)
extern "C"  int32_t ISO2022JPEncoding_GetByteCountImpl_m2112575196 (ISO2022JPEncoding_t2096751134 * __this, Il2CppChar* ___chars0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t ISO2022JPEncoding_GetBytesImpl_m719740108 (ISO2022JPEncoding_t2096751134 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ISO2022JPEncoding_GetCharCount_m1421069735 (ISO2022JPEncoding_t2096751134 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t ISO2022JPEncoding_GetChars_m2148065151 (ISO2022JPEncoding_t2096751134 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
