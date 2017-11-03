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

// I18N.Other.ISCIIEncoding
struct ISCIIEncoding_t2683407806;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void I18N.Other.ISCIIEncoding::.ctor(System.Int32,System.Int32,System.String,System.String)
extern "C"  void ISCIIEncoding__ctor_m1351304815 (ISCIIEncoding_t2683407806 * __this, int32_t ___codePage0, int32_t ___shift1, String_t* ___encodingName2, String_t* ___webName3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Other.ISCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t ISCIIEncoding_GetByteCount_m3923062051 (ISCIIEncoding_t2683407806 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Other.ISCIIEncoding::GetByteCount(System.String)
extern "C"  int32_t ISCIIEncoding_GetByteCount_m2694685130 (ISCIIEncoding_t2683407806 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Other.ISCIIEncoding::GetByteCountImpl(System.Char*,System.Int32)
extern "C"  int32_t ISCIIEncoding_GetByteCountImpl_m748578228 (ISCIIEncoding_t2683407806 * __this, Il2CppChar* ___chars0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Other.ISCIIEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t ISCIIEncoding_GetBytesImpl_m3516152228 (ISCIIEncoding_t2683407806 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Other.ISCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ISCIIEncoding_GetCharCount_m2724474495 (ISCIIEncoding_t2683407806 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Other.ISCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t ISCIIEncoding_GetChars_m54332327 (ISCIIEncoding_t2683407806 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Other.ISCIIEncoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t ISCIIEncoding_GetMaxByteCount_m3287742821 (ISCIIEncoding_t2683407806 * __this, int32_t ___charCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Other.ISCIIEncoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t ISCIIEncoding_GetMaxCharCount_m4079278167 (ISCIIEncoding_t2683407806 * __this, int32_t ___byteCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.Other.ISCIIEncoding::get_BodyName()
extern "C"  String_t* ISCIIEncoding_get_BodyName_m2473596174 (ISCIIEncoding_t2683407806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.Other.ISCIIEncoding::get_EncodingName()
extern "C"  String_t* ISCIIEncoding_get_EncodingName_m416923647 (ISCIIEncoding_t2683407806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.Other.ISCIIEncoding::get_HeaderName()
extern "C"  String_t* ISCIIEncoding_get_HeaderName_m1913070009 (ISCIIEncoding_t2683407806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.Other.ISCIIEncoding::get_WebName()
extern "C"  String_t* ISCIIEncoding_get_WebName_m1143785792 (ISCIIEncoding_t2683407806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
