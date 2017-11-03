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

// I18N.CJK.CP936
struct CP936_t4026863633;
// I18N.CJK.DbcsConvert
struct DbcsConvert_t2366949127;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Text.Decoder
struct Decoder_t2225063046;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void I18N.CJK.CP936::.ctor()
extern "C"  void CP936__ctor_m3487690956 (CP936_t4026863633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// I18N.CJK.DbcsConvert I18N.CJK.CP936::GetConvert()
extern "C"  DbcsConvert_t2366949127 * CP936_GetConvert_m3632406227 (CP936_t4026863633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP936::GetByteCountImpl(System.Char*,System.Int32)
extern "C"  int32_t CP936_GetByteCountImpl_m1913343433 (CP936_t4026863633 * __this, Il2CppChar* ___chars0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP936::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t CP936_GetBytesImpl_m116700153 (CP936_t4026863633 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP936::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t CP936_GetCharCount_m2308030548 (CP936_t4026863633 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP936::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t CP936_GetChars_m3903339058 (CP936_t4026863633 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder I18N.CJK.CP936::GetDecoder()
extern "C"  Decoder_t2225063046 * CP936_GetDecoder_m1104158679 (CP936_t4026863633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.CP936::get_BodyName()
extern "C"  String_t* CP936_get_BodyName_m3888391409 (CP936_t4026863633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.CP936::get_EncodingName()
extern "C"  String_t* CP936_get_EncodingName_m51193442 (CP936_t4026863633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.CP936::get_HeaderName()
extern "C"  String_t* CP936_get_HeaderName_m26658012 (CP936_t4026863633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.CP936::get_IsBrowserDisplay()
extern "C"  bool CP936_get_IsBrowserDisplay_m1549587077 (CP936_t4026863633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.CP936::get_IsBrowserSave()
extern "C"  bool CP936_get_IsBrowserSave_m1228231996 (CP936_t4026863633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.CP936::get_IsMailNewsDisplay()
extern "C"  bool CP936_get_IsMailNewsDisplay_m1318652143 (CP936_t4026863633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.CP936::get_IsMailNewsSave()
extern "C"  bool CP936_get_IsMailNewsSave_m1675151122 (CP936_t4026863633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.CP936::get_WebName()
extern "C"  String_t* CP936_get_WebName_m2297803005 (CP936_t4026863633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
