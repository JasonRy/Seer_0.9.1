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

// I18N.CJK.DbcsEncoding/DbcsDecoder
struct DbcsDecoder_t320438914;
// I18N.CJK.DbcsConvert
struct DbcsConvert_t2366949127;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Char[]
struct CharU5BU5D_t3324145743;

#include "codegen/il2cpp-codegen.h"
#include "I18N_CJK_I18N_CJK_DbcsConvert2366949127.h"

// System.Void I18N.CJK.DbcsEncoding/DbcsDecoder::.ctor(I18N.CJK.DbcsConvert)
extern "C"  void DbcsDecoder__ctor_m3303910808 (DbcsDecoder_t320438914 * __this, DbcsConvert_t2366949127 * ___convert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.CJK.DbcsEncoding/DbcsDecoder::CheckRange(System.Byte[],System.Int32,System.Int32)
extern "C"  void DbcsDecoder_CheckRange_m3168197107 (DbcsDecoder_t320438914 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.CJK.DbcsEncoding/DbcsDecoder::CheckRange(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  void DbcsDecoder_CheckRange_m3751996719 (DbcsDecoder_t320438914 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
