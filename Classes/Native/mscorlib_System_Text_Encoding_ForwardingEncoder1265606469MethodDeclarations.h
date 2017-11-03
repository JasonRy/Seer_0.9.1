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

// System.Text.Encoding/ForwardingEncoder
struct ForwardingEncoder_t1265606469;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_Encoding2012439129.h"

// System.Void System.Text.Encoding/ForwardingEncoder::.ctor(System.Text.Encoding)
extern "C"  void ForwardingEncoder__ctor_m3229822296 (ForwardingEncoder_t1265606469 * __this, Encoding_t2012439129 * ___enc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding/ForwardingEncoder::GetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t ForwardingEncoder_GetByteCount_m3259701542 (ForwardingEncoder_t1265606469 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___index1, int32_t ___count2, bool ___flush3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding/ForwardingEncoder::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean)
extern "C"  int32_t ForwardingEncoder_GetBytes_m496135420 (ForwardingEncoder_t1265606469 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4260760469* ___bytes3, int32_t ___byteCount4, bool ___flush5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
