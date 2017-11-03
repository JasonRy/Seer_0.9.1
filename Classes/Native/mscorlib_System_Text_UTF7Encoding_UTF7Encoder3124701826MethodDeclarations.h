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

// System.Text.UTF7Encoding/UTF7Encoder
struct UTF7Encoder_t3124701826;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.UTF7Encoding/UTF7Encoder::.ctor(System.Boolean)
extern "C"  void UTF7Encoder__ctor_m3994538727 (UTF7Encoder_t3124701826 * __this, bool ___allowOptionals0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding/UTF7Encoder::GetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t UTF7Encoder_GetByteCount_m4247288291 (UTF7Encoder_t3124701826 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___index1, int32_t ___count2, bool ___flush3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding/UTF7Encoder::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean)
extern "C"  int32_t UTF7Encoder_GetBytes_m2630846367 (UTF7Encoder_t3124701826 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4260760469* ___bytes3, int32_t ___byteIndex4, bool ___flush5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
