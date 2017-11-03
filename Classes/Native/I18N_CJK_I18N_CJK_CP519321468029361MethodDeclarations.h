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

// I18N.CJK.CP51932
struct CP51932_t1468029361;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Text.Encoder
struct Encoder_t3370229086;
// System.Text.Decoder
struct Decoder_t2225063046;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void I18N.CJK.CP51932::.ctor()
extern "C"  void CP51932__ctor_m573076396 (CP51932_t1468029361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP51932::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t CP51932_GetByteCount_m2182064216 (CP51932_t1468029361 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___index1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP51932::GetByteCountImpl(System.Char*,System.Int32)
extern "C"  int32_t CP51932_GetByteCountImpl_m1158311721 (CP51932_t1468029361 * __this, Il2CppChar* ___chars0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP51932::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t CP51932_GetBytesImpl_m940477785 (CP51932_t1468029361 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP51932::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t CP51932_GetCharCount_m983476660 (CP51932_t1468029361 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP51932::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t CP51932_GetChars_m3048916178 (CP51932_t1468029361 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP51932::GetMaxByteCount(System.Int32)
extern "C"  int32_t CP51932_GetMaxByteCount_m2628748186 (CP51932_t1468029361 * __this, int32_t ___charCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP51932::GetMaxCharCount(System.Int32)
extern "C"  int32_t CP51932_GetMaxCharCount_m3420283532 (CP51932_t1468029361 * __this, int32_t ___byteCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoder I18N.CJK.CP51932::GetEncoder()
extern "C"  Encoder_t3370229086 * CP51932_GetEncoder_m196958135 (CP51932_t1468029361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder I18N.CJK.CP51932::GetDecoder()
extern "C"  Decoder_t2225063046 * CP51932_GetDecoder_m3193260215 (CP51932_t1468029361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.CP51932::get_BodyName()
extern "C"  String_t* CP51932_get_BodyName_m2375358801 (CP51932_t1468029361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.CP51932::get_EncodingName()
extern "C"  String_t* CP51932_get_EncodingName_m3029134018 (CP51932_t1468029361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.CP51932::get_HeaderName()
extern "C"  String_t* CP51932_get_HeaderName_m1996235068 (CP51932_t1468029361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.CP51932::get_IsBrowserDisplay()
extern "C"  bool CP51932_get_IsBrowserDisplay_m199918501 (CP51932_t1468029361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.CP51932::get_IsBrowserSave()
extern "C"  bool CP51932_get_IsBrowserSave_m3091871772 (CP51932_t1468029361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.CP51932::get_IsMailNewsDisplay()
extern "C"  bool CP51932_get_IsMailNewsDisplay_m2428599247 (CP51932_t1468029361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.CP51932::get_IsMailNewsSave()
extern "C"  bool CP51932_get_IsMailNewsSave_m3613409330 (CP51932_t1468029361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.CP51932::get_WebName()
extern "C"  String_t* CP51932_get_WebName_m1694806173 (CP51932_t1468029361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
