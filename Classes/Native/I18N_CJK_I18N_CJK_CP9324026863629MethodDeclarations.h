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

// I18N.CJK.CP932
struct CP932_t4026863629;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Text.Decoder
struct Decoder_t2225063046;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void I18N.CJK.CP932::.ctor()
extern "C"  void CP932__ctor_m4273744976 (CP932_t4026863629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP932::GetByteCountImpl(System.Char*,System.Int32)
extern "C"  int32_t CP932_GetByteCountImpl_m2351765325 (CP932_t4026863629 * __this, Il2CppChar* ___chars0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP932::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t CP932_GetBytesImpl_m2503787133 (CP932_t4026863629 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP932::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t CP932_GetCharCount_m2226681048 (CP932_t4026863629 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP932::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t CP932_GetChars_m3422859566 (CP932_t4026863629 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP932::GetMaxByteCount(System.Int32)
extern "C"  int32_t CP932_GetMaxByteCount_m3467868862 (CP932_t4026863629 * __this, int32_t ___charCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP932::GetMaxCharCount(System.Int32)
extern "C"  int32_t CP932_GetMaxCharCount_m4259404208 (CP932_t4026863629 * __this, int32_t ___byteCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder I18N.CJK.CP932::GetDecoder()
extern "C"  Decoder_t2225063046 * CP932_GetDecoder_m3663886035 (CP932_t4026863629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.CP932::get_BodyName()
extern "C"  String_t* CP932_get_BodyName_m2770119917 (CP932_t4026863629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.CP932::get_EncodingName()
extern "C"  String_t* CP932_get_EncodingName_m3500757086 (CP932_t4026863629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.CP932::get_HeaderName()
extern "C"  String_t* CP932_get_HeaderName_m3404545496 (CP932_t4026863629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.CP932::get_IsBrowserDisplay()
extern "C"  bool CP932_get_IsBrowserDisplay_m1268489857 (CP932_t4026863629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.CP932::get_IsBrowserSave()
extern "C"  bool CP932_get_IsBrowserSave_m790522560 (CP932_t4026863629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.CP932::get_IsMailNewsDisplay()
extern "C"  bool CP932_get_IsMailNewsDisplay_m1194572915 (CP932_t4026863629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.CJK.CP932::get_IsMailNewsSave()
extern "C"  bool CP932_get_IsMailNewsSave_m991060494 (CP932_t4026863629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.CJK.CP932::get_WebName()
extern "C"  String_t* CP932_get_WebName_m44972417 (CP932_t4026863629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP932::get_WindowsCodePage()
extern "C"  int32_t CP932_get_WindowsCodePage_m573519018 (CP932_t4026863629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
