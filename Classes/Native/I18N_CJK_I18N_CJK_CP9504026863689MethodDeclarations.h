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

// I18N.CJK.CP950
struct CP950_t4026863689;
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

// System.Void I18N.CJK.CP950::.ctor()
extern "C"  void CP950__ctor_m1072869268 (CP950_t4026863689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// I18N.CJK.DbcsConvert I18N.CJK.CP950::GetConvert()
extern "C"  DbcsConvert_t2366949127 * CP950_GetConvert_m2155961611 (CP950_t4026863689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP950::GetByteCountImpl(System.Char*,System.Int32)
extern "C"  int32_t CP950_GetByteCountImpl_m70404241 (CP950_t4026863689 * __this, Il2CppChar* ___chars0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP950::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t CP950_GetBytesImpl_m1057220801 (CP950_t4026863689 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP950::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t CP950_GetChars_m2040117354 (CP950_t4026863689 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder I18N.CJK.CP950::GetDecoder()
extern "C"  Decoder_t2225063046 * CP950_GetDecoder_m3922681359 (CP950_t4026863689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.CP950::get_BodyName()
extern "C"  String_t* CP950_get_BodyName_m2364323113 (CP950_t4026863689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.CP950::get_EncodingName()
extern "C"  String_t* CP950_get_EncodingName_m3296909978 (CP950_t4026863689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.CP950::get_HeaderName()
extern "C"  String_t* CP950_get_HeaderName_m4275840788 (CP950_t4026863689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.CP950::get_WebName()
extern "C"  String_t* CP950_get_WebName_m3772660165 (CP950_t4026863689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
