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

// I18N.CJK.CP950/CP950Decoder
struct CP950Decoder_t3734222975;
// I18N.CJK.DbcsConvert
struct DbcsConvert_t2366949127;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Char[]
struct CharU5BU5D_t3324145743;

#include "codegen/il2cpp-codegen.h"
#include "I18N_CJK_I18N_CJK_DbcsConvert2366949127.h"

// System.Void I18N.CJK.CP950/CP950Decoder::.ctor(I18N.CJK.DbcsConvert)
extern "C"  void CP950Decoder__ctor_m3395849787 (CP950Decoder_t3734222975 * __this, DbcsConvert_t2366949127 * ___convert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP950/CP950Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t CP950Decoder_GetCharCount_m3141684770 (CP950Decoder_t3734222975 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP950/CP950Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t CP950Decoder_GetCharCount_m2327297307 (CP950Decoder_t3734222975 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP950/CP950Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t CP950Decoder_GetChars_m1978270884 (CP950Decoder_t3734222975 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.CP950/CP950Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
extern "C"  int32_t CP950Decoder_GetChars_m2365583961 (CP950Decoder_t3734222975 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, bool ___refresh5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
