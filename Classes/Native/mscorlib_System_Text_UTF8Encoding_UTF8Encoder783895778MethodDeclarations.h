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

// System.Text.UTF8Encoding/UTF8Encoder
struct UTF8Encoder_t783895778;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.UTF8Encoding/UTF8Encoder::.ctor(System.Boolean)
extern "C"  void UTF8Encoder__ctor_m3320644743 (UTF8Encoder_t783895778 * __this, bool ___emitIdentifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding/UTF8Encoder::GetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t UTF8Encoder_GetByteCount_m3696514115 (UTF8Encoder_t783895778 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___index1, int32_t ___count2, bool ___flush3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding/UTF8Encoder::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean)
extern "C"  int32_t UTF8Encoder_GetBytes_m2978218303 (UTF8Encoder_t783895778 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4260760469* ___bytes3, int32_t ___byteIndex4, bool ___flush5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding/UTF8Encoder::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean)
extern "C"  int32_t UTF8Encoder_GetBytes_m4086332386 (UTF8Encoder_t783895778 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, bool ___flush4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
