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

// I18N.CJK.GB18030Encoding
struct GB18030Encoding_t1408568640;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Text.Encoder
struct Encoder_t3370229086;
// System.Text.Decoder
struct Decoder_t2225063046;

#include "codegen/il2cpp-codegen.h"

// System.Void I18N.CJK.GB18030Encoding::.ctor()
extern "C"  void GB18030Encoding__ctor_m133034749 (GB18030Encoding_t1408568640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.GB18030Encoding::get_EncodingName()
extern "C"  String_t* GB18030Encoding_get_EncodingName_m307006417 (GB18030Encoding_t1408568640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.GB18030Encoding::get_HeaderName()
extern "C"  String_t* GB18030Encoding_get_HeaderName_m3405691403 (GB18030Encoding_t1408568640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.GB18030Encoding::get_BodyName()
extern "C"  String_t* GB18030Encoding_get_BodyName_m3887438304 (GB18030Encoding_t1408568640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.GB18030Encoding::get_WebName()
extern "C"  String_t* GB18030Encoding_get_WebName_m496656942 (GB18030Encoding_t1408568640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.GB18030Encoding::get_IsMailNewsDisplay()
extern "C"  bool GB18030Encoding_get_IsMailNewsDisplay_m3250518304 (GB18030Encoding_t1408568640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.GB18030Encoding::get_IsMailNewsSave()
extern "C"  bool GB18030Encoding_get_IsMailNewsSave_m1259285633 (GB18030Encoding_t1408568640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.GB18030Encoding::get_IsBrowserDisplay()
extern "C"  bool GB18030Encoding_get_IsBrowserDisplay_m1334810676 (GB18030Encoding_t1408568640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.GB18030Encoding::get_IsBrowserSave()
extern "C"  bool GB18030Encoding_get_IsBrowserSave_m2046100973 (GB18030Encoding_t1408568640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.GB18030Encoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t GB18030Encoding_GetMaxByteCount_m249346603 (GB18030Encoding_t1408568640 * __this, int32_t ___len0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.GB18030Encoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t GB18030Encoding_GetMaxCharCount_m1040881949 (GB18030Encoding_t1408568640 * __this, int32_t ___len0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.GB18030Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t GB18030Encoding_GetByteCount_m2362866665 (GB18030Encoding_t1408568640 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___index1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.GB18030Encoding::GetByteCountImpl(System.Char*,System.Int32)
extern "C"  int32_t GB18030Encoding_GetByteCountImpl_m304632826 (GB18030Encoding_t1408568640 * __this, Il2CppChar* ___chars0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.GB18030Encoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t GB18030Encoding_GetBytesImpl_m1617399658 (GB18030Encoding_t1408568640 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.GB18030Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t GB18030Encoding_GetCharCount_m1164279109 (GB18030Encoding_t1408568640 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___start1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.GB18030Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t GB18030Encoding_GetChars_m4057497121 (GB18030Encoding_t1408568640 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIdx1, int32_t ___srclen2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIdx4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoder I18N.CJK.GB18030Encoding::GetEncoder()
extern "C"  Encoder_t3370229086 * GB18030Encoding_GetEncoder_m226441734 (GB18030Encoding_t1408568640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder I18N.CJK.GB18030Encoding::GetDecoder()
extern "C"  Decoder_t2225063046 * GB18030Encoding_GetDecoder_m2838614790 (GB18030Encoding_t1408568640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
