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

// I18N.Common.ByteEncoding
struct ByteEncoding_t856120359;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Text_NormalizationForm3442229955.h"

// System.Void I18N.Common.ByteEncoding::.ctor(System.Int32,System.Char[],System.String,System.String,System.String,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Int32)
extern "C"  void ByteEncoding__ctor_m2956039844 (ByteEncoding_t856120359 * __this, int32_t ___codePage0, CharU5BU5D_t3324145743* ___toChars1, String_t* ___encodingName2, String_t* ___bodyName3, String_t* ___headerName4, String_t* ___webName5, bool ___isBrowserDisplay6, bool ___isBrowserSave7, bool ___isMailNewsDisplay8, bool ___isMailNewsSave9, int32_t ___windowsCodePage10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.Common.ByteEncoding::IsAlwaysNormalized(System.Text.NormalizationForm)
extern "C"  bool ByteEncoding_IsAlwaysNormalized_m2154935400 (ByteEncoding_t856120359 * __this, int32_t ___form0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.Common.ByteEncoding::get_IsSingleByte()
extern "C"  bool ByteEncoding_get_IsSingleByte_m989401502 (ByteEncoding_t856120359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Common.ByteEncoding::GetByteCount(System.String)
extern "C"  int32_t ByteEncoding_GetByteCount_m3791109788 (ByteEncoding_t856120359 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Common.ByteEncoding::GetByteCountImpl(System.Char*,System.Int32)
extern "C"  int32_t ByteEncoding_GetByteCountImpl_m966303366 (ByteEncoding_t856120359 * __this, Il2CppChar* ___chars0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.Common.ByteEncoding::ToBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  void ByteEncoding_ToBytes_m2758140324 (ByteEncoding_t856120359 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4260760469* ___bytes3, int32_t ___byteIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Common.ByteEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t ByteEncoding_GetBytesImpl_m1027877110 (ByteEncoding_t856120359 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Common.ByteEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ByteEncoding_GetCharCount_m1771243729 (ByteEncoding_t856120359 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Common.ByteEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t ByteEncoding_GetChars_m343454997 (ByteEncoding_t856120359 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Common.ByteEncoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t ByteEncoding_GetMaxByteCount_m389884343 (ByteEncoding_t856120359 * __this, int32_t ___charCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Common.ByteEncoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t ByteEncoding_GetMaxCharCount_m1181419689 (ByteEncoding_t856120359 * __this, int32_t ___byteCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.Common.ByteEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* ByteEncoding_GetString_m4285730378 (ByteEncoding_t856120359 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.Common.ByteEncoding::GetString(System.Byte[])
extern "C"  String_t* ByteEncoding_GetString_m855214442 (ByteEncoding_t856120359 * __this, ByteU5BU5D_t4260760469* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.Common.ByteEncoding::get_BodyName()
extern "C"  String_t* ByteEncoding_get_BodyName_m758466496 (ByteEncoding_t856120359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.Common.ByteEncoding::get_EncodingName()
extern "C"  String_t* ByteEncoding_get_EncodingName_m310528433 (ByteEncoding_t856120359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.Common.ByteEncoding::get_HeaderName()
extern "C"  String_t* ByteEncoding_get_HeaderName_m2940891115 (ByteEncoding_t856120359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.Common.ByteEncoding::get_IsBrowserDisplay()
extern "C"  bool ByteEncoding_get_IsBrowserDisplay_m1156271016 (ByteEncoding_t856120359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.Common.ByteEncoding::get_IsBrowserSave()
extern "C"  bool ByteEncoding_get_IsBrowserSave_m593438457 (ByteEncoding_t856120359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.Common.ByteEncoding::get_IsMailNewsDisplay()
extern "C"  bool ByteEncoding_get_IsMailNewsDisplay_m2010756140 (ByteEncoding_t856120359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean I18N.Common.ByteEncoding::get_IsMailNewsSave()
extern "C"  bool ByteEncoding_get_IsMailNewsSave_m3471387893 (ByteEncoding_t856120359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String I18N.Common.ByteEncoding::get_WebName()
extern "C"  String_t* ByteEncoding_get_WebName_m3028121678 (ByteEncoding_t856120359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.Common.ByteEncoding::get_WindowsCodePage()
extern "C"  int32_t ByteEncoding_get_WindowsCodePage_m3905940643 (ByteEncoding_t856120359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
