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

// I18N.CJK.ISO2022JPEncoder
struct ISO2022JPEncoder_t685337577;
// I18N.Common.MonoEncoding
struct MonoEncoding_t3350080258;

#include "codegen/il2cpp-codegen.h"
#include "I18N_I18N_Common_MonoEncoding3350080258.h"
#include "I18N_CJK_I18N_CJK_ISO2022JPMode140135918.h"

// System.Void I18N.CJK.ISO2022JPEncoder::.ctor(I18N.Common.MonoEncoding,System.Boolean,System.Boolean)
extern "C"  void ISO2022JPEncoder__ctor_m4280521423 (ISO2022JPEncoder_t685337577 * __this, MonoEncoding_t3350080258 * ___owner0, bool ___allow1ByteKana1, bool ___allowShiftIO2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.CJK.ISO2022JPEncoder::.cctor()
extern "C"  void ISO2022JPEncoder__cctor_m3213069685 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.ISO2022JPEncoder::GetByteCountImpl(System.Char*,System.Int32,System.Boolean)
extern "C"  int32_t ISO2022JPEncoder_GetByteCountImpl_m682103860 (ISO2022JPEncoder_t685337577 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, bool ___flush2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.CJK.ISO2022JPEncoder::SwitchMode(System.Byte*,System.Int32&,System.Int32&,I18N.CJK.ISO2022JPMode&,I18N.CJK.ISO2022JPMode)
extern "C"  void ISO2022JPEncoder_SwitchMode_m3432492658 (ISO2022JPEncoder_t685337577 * __this, uint8_t* ___bytes0, int32_t* ___byteIndex1, int32_t* ___byteCount2, int32_t* ___cur3, int32_t ___next4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 I18N.CJK.ISO2022JPEncoder::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean)
extern "C"  int32_t ISO2022JPEncoder_GetBytesImpl_m2576257028 (ISO2022JPEncoder_t685337577 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, bool ___flush4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void I18N.CJK.ISO2022JPEncoder::Reset()
extern "C"  void ISO2022JPEncoder_Reset_m2199146469 (ISO2022JPEncoder_t685337577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
