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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"
#include "mscorlib_Mono_Globalization_Unicode_NormalizationC3374103067.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void Mono.Globalization.Unicode.Normalization::.cctor()
extern "C"  void Normalization__cctor_m4096518767 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Globalization.Unicode.Normalization::PropValue(System.Int32)
extern "C"  uint32_t Normalization_PropValue_m2522625216 (Il2CppObject * __this /* static, unused */, int32_t ___cp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.Normalization::CharMapIdx(System.Int32)
extern "C"  int32_t Normalization_CharMapIdx_m2841887914 (Il2CppObject * __this /* static, unused */, int32_t ___cp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.Normalization::GetNormalizedStringLength(System.Int32)
extern "C"  int32_t Normalization_GetNormalizedStringLength_m2401558581 (Il2CppObject * __this /* static, unused */, int32_t ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.Normalization::GetCombiningClass(System.Int32)
extern "C"  uint8_t Normalization_GetCombiningClass_m966626675 (Il2CppObject * __this /* static, unused */, int32_t ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.Normalization::GetPrimaryCompositeFromMapIndex(System.Int32)
extern "C"  int32_t Normalization_GetPrimaryCompositeFromMapIndex_m2938466092 (Il2CppObject * __this /* static, unused */, int32_t ___src0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.Normalization::GetPrimaryCompositeHelperIndex(System.Int32)
extern "C"  int32_t Normalization_GetPrimaryCompositeHelperIndex_m888289436 (Il2CppObject * __this /* static, unused */, int32_t ___cp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.Normalization::GetPrimaryCompositeCharIndex(System.Object,System.Int32)
extern "C"  int32_t Normalization_GetPrimaryCompositeCharIndex_m3235539622 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___chars0, int32_t ___start1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Globalization.Unicode.Normalization::Compose(System.String,System.Int32)
extern "C"  String_t* Normalization_Compose_m1747699968 (Il2CppObject * __this /* static, unused */, String_t* ___source0, int32_t ___checkType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder Mono.Globalization.Unicode.Normalization::Combine(System.String,System.Int32,System.Int32)
extern "C"  StringBuilder_t243639308 * Normalization_Combine_m1595126066 (Il2CppObject * __this /* static, unused */, String_t* ___source0, int32_t ___start1, int32_t ___checkType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.Normalization::Combine(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C"  void Normalization_Combine_m2906588175 (Il2CppObject * __this /* static, unused */, StringBuilder_t243639308 * ___sb0, int32_t ___start1, int32_t ___checkType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.Normalization::GetPrimaryCompositeMapIndex(System.Object,System.Int32,System.Int32)
extern "C"  int32_t Normalization_GetPrimaryCompositeMapIndex_m503452867 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, int32_t ___cur1, int32_t ___bufferPos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Globalization.Unicode.Normalization::Decompose(System.String,System.Int32)
extern "C"  String_t* Normalization_Decompose_m2027560671 (Il2CppObject * __this /* static, unused */, String_t* ___source0, int32_t ___checkType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.Normalization::Decompose(System.String,System.Text.StringBuilder&,System.Int32)
extern "C"  void Normalization_Decompose_m1902805124 (Il2CppObject * __this /* static, unused */, String_t* ___source0, StringBuilder_t243639308 ** ___sb1, int32_t ___checkType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.Normalization::ReorderCanonical(System.String,System.Text.StringBuilder&,System.Int32)
extern "C"  void Normalization_ReorderCanonical_m631463186 (Il2CppObject * __this /* static, unused */, String_t* ___src0, StringBuilder_t243639308 ** ___sb1, int32_t ___start2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.Normalization::DecomposeChar(System.Text.StringBuilder&,System.Int32[]&,System.String,System.Int32,System.Int32&)
extern "C"  void Normalization_DecomposeChar_m4243545172 (Il2CppObject * __this /* static, unused */, StringBuilder_t243639308 ** ___sb0, Int32U5BU5D_t3230847821** ___buf1, String_t* ___s2, int32_t ___i3, int32_t* ___start4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.NormalizationCheck Mono.Globalization.Unicode.Normalization::QuickCheck(System.Char,System.Int32)
extern "C"  int32_t Normalization_QuickCheck_m3852170330 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.Normalization::GetCanonicalHangul(System.Int32,System.Int32[],System.Int32)
extern "C"  bool Normalization_GetCanonicalHangul_m4183736194 (Il2CppObject * __this /* static, unused */, int32_t ___s0, Int32U5BU5D_t3230847821* ___buf1, int32_t ___bufIdx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.Normalization::GetCanonical(System.Int32,System.Int32[],System.Int32)
extern "C"  void Normalization_GetCanonical_m2454502615 (Il2CppObject * __this /* static, unused */, int32_t ___c0, Int32U5BU5D_t3230847821* ___buf1, int32_t ___bufIdx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Globalization.Unicode.Normalization::Normalize(System.String,System.Int32)
extern "C"  String_t* Normalization_Normalize_m3568990715 (Il2CppObject * __this /* static, unused */, String_t* ___source0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.Normalization::load_normalization_resource(System.IntPtr&,System.IntPtr&,System.IntPtr&,System.IntPtr&,System.IntPtr&,System.IntPtr&)
extern "C"  void Normalization_load_normalization_resource_m4049220737 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___props0, IntPtr_t* ___mappedChars1, IntPtr_t* ___charMapIndex2, IntPtr_t* ___helperIndex3, IntPtr_t* ___mapIdxToComposite4, IntPtr_t* ___combiningClass5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
