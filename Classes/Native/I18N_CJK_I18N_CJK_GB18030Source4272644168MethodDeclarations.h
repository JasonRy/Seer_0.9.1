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

// I18N.CJK.GB18030Source
struct GB18030Source_t4272644168;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"

// System.Void I18N.CJK.GB18030Source::.ctor()
extern "C"  void GB18030Source__ctor_m3858239605 (GB18030Source_t4272644168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.CJK.GB18030Source::.cctor()
extern "C"  void GB18030Source__cctor_m3159214552 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.CJK.GB18030Source::Unlinear(System.Byte[],System.Int32,System.Int64)
extern "C"  void GB18030Source_Unlinear_m4091550749 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___start1, int64_t ___gbx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.CJK.GB18030Source::Unlinear(System.Byte*,System.Int64)
extern "C"  void GB18030Source_Unlinear_m679421742 (Il2CppObject * __this /* static, unused */, uint8_t* ___bytes0, int64_t ___gbx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 I18N.CJK.GB18030Source::FromGBX(System.Byte[],System.Int32)
extern "C"  int64_t GB18030Source_FromGBX_m3825720185 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___start1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 I18N.CJK.GB18030Source::FromUCSSurrogate(System.Int32)
extern "C"  int64_t GB18030Source_FromUCSSurrogate_m2678664088 (Il2CppObject * __this /* static, unused */, int32_t ___cp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 I18N.CJK.GB18030Source::FromUCS(System.Int32)
extern "C"  int64_t GB18030Source_FromUCS_m4197606148 (Il2CppObject * __this /* static, unused */, int32_t ___cp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 I18N.CJK.GB18030Source::FromGBXRaw(System.Byte,System.Byte,System.Byte,System.Byte,System.Boolean)
extern "C"  int64_t GB18030Source_FromGBXRaw_m2530326370 (Il2CppObject * __this /* static, unused */, uint8_t ___b10, uint8_t ___b21, uint8_t ___b32, uint8_t ___b43, bool ___supp4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.GB18030Source::ToUcsRaw(System.Int32)
extern "C"  int32_t GB18030Source_ToUcsRaw_m9771064 (Il2CppObject * __this /* static, unused */, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 I18N.CJK.GB18030Source::ToGbxRaw(System.Int32)
extern "C"  int64_t GB18030Source_ToGbxRaw_m3508304289 (Il2CppObject * __this /* static, unused */, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
