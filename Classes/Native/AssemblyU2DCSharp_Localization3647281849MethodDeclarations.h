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

// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t579454026;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t3836129977;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// BetterList`1<System.String>
struct BetterList_1_t1504199569;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;
// System.Object[]
struct ObjectU5BU5D_t1108656482;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_TextAsset3836129977.h"

// System.Void Localization::.cctor()
extern "C"  void Localization__cctor_m1191965675 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]> Localization::get_dictionary()
extern "C"  Dictionary_2_t579454026 * Localization_get_dictionary_m2295583953 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::set_dictionary(System.Collections.Generic.Dictionary`2<System.String,System.String[]>)
extern "C"  void Localization_set_dictionary_m2122357832 (Il2CppObject * __this /* static, unused */, Dictionary_2_t579454026 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Localization::get_knownLanguages()
extern "C"  StringU5BU5D_t4054002952* Localization_get_knownLanguages_m431207172 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::get_language()
extern "C"  String_t* Localization_get_language_m4046813542 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::set_language(System.String)
extern "C"  void Localization_set_language_m411704107 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadDictionary(System.String)
extern "C"  bool Localization_LoadDictionary_m3777629616 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadAndSelect(System.String)
extern "C"  bool Localization_LoadAndSelect_m1822437257 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Load(UnityEngine.TextAsset)
extern "C"  void Localization_Load_m4202658910 (Il2CppObject * __this /* static, unused */, TextAsset_t3836129977 * ___asset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Set(System.String,System.Byte[])
extern "C"  void Localization_Set_m3157847683 (Il2CppObject * __this /* static, unused */, String_t* ___languageName0, ByteU5BU5D_t4260760469* ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::ReplaceKey(System.String,System.String)
extern "C"  void Localization_ReplaceKey_m3861312273 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::ClearReplacements()
extern "C"  void Localization_ClearReplacements_m2220150446 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadCSV(UnityEngine.TextAsset,System.Boolean)
extern "C"  bool Localization_LoadCSV_m727032931 (Il2CppObject * __this /* static, unused */, TextAsset_t3836129977 * ___asset0, bool ___merge1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadCSV(System.Byte[],System.Boolean)
extern "C"  bool Localization_LoadCSV_m1504216576 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bytes0, bool ___merge1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::HasLanguage(System.String)
extern "C"  bool Localization_HasLanguage_m484554116 (Il2CppObject * __this /* static, unused */, String_t* ___languageName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::LoadCSV(System.Byte[],UnityEngine.TextAsset,System.Boolean)
extern "C"  bool Localization_LoadCSV_m2021377728 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bytes0, TextAsset_t3836129977 * ___asset1, bool ___merge2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::AddCSV(BetterList`1<System.String>,System.String[],System.Collections.Generic.Dictionary`2<System.String,System.Int32>)
extern "C"  void Localization_AddCSV_m3834968952 (Il2CppObject * __this /* static, unused */, BetterList_1_t1504199569 * ___newValues0, StringU5BU5D_t4054002952* ___newLanguages1, Dictionary_2_t1974256870 * ___languageIndices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Localization::ExtractStrings(BetterList`1<System.String>,System.String[],System.Collections.Generic.Dictionary`2<System.String,System.Int32>)
extern "C"  StringU5BU5D_t4054002952* Localization_ExtractStrings_m218665019 (Il2CppObject * __this /* static, unused */, BetterList_1_t1504199569 * ___added0, StringU5BU5D_t4054002952* ___newLanguages1, Dictionary_2_t1974256870 * ___languageIndices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::SelectLanguage(System.String)
extern "C"  bool Localization_SelectLanguage_m3438398552 (Il2CppObject * __this /* static, unused */, String_t* ___language0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Set(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void Localization_Set_m3679996727 (Il2CppObject * __this /* static, unused */, String_t* ___languageName0, Dictionary_2_t827649927 * ___dictionary1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Set(System.String,System.String)
extern "C"  void Localization_Set_m920686012 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Get(System.String)
extern "C"  String_t* Localization_Get_m2079644207 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Format(System.String,System.Object[])
extern "C"  String_t* Localization_Format_m3071416850 (Il2CppObject * __this /* static, unused */, String_t* ___key0, ObjectU5BU5D_t1108656482* ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::get_isActive()
extern "C"  bool Localization_get_isActive_m1111783919 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Localize(System.String)
extern "C"  String_t* Localization_Localize_m976395348 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::Exists(System.String)
extern "C"  bool Localization_Exists_m739235440 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Set(System.String,System.String,System.String)
extern "C"  void Localization_Set_m2516647160 (Il2CppObject * __this /* static, unused */, String_t* ___language0, String_t* ___key1, String_t* ___text2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
