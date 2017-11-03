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

// LitJson.JsonData
struct JsonData_t1715015430;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.ICollection
struct ICollection_t2643922881;
// System.Array
struct Il2CppArray;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t951828701;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// LitJson.JsonWriter
struct JsonWriter_t1165300239;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t901821544;
// System.Collections.IDictionary
struct IDictionary_t537317817;
// System.Collections.IList
struct IList_t1751339649;
// LitJson.IJsonWrapper
struct IJsonWrapper_t2026182966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_JsonWriter1165300239.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_JsonData1715015430.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_JsonType1715515030.h"

// System.Void LitJson.JsonData::.ctor()
extern "C"  void JsonData__ctor_m1767641230 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Boolean)
extern "C"  void JsonData__ctor_m1763423621 (JsonData_t1715015430 * __this, bool ___boolean0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Double)
extern "C"  void JsonData__ctor_m2252783988 (JsonData_t1715015430 * __this, double ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Int32)
extern "C"  void JsonData__ctor_m3539951839 (JsonData_t1715015430 * __this, int32_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Int64)
extern "C"  void JsonData__ctor_m3539954784 (JsonData_t1715015430 * __this, int64_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Object)
extern "C"  void JsonData__ctor_m3043133382 (JsonData_t1715015430 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.String)
extern "C"  void JsonData__ctor_m2821023028 (JsonData_t1715015430 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.ICollection.get_Count()
extern "C"  int32_t JsonData_System_Collections_ICollection_get_Count_m2133000531 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool JsonData_System_Collections_ICollection_get_IsSynchronized_m1669936470 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * JsonData_System_Collections_ICollection_get_SyncRoot_m667549276 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.get_IsFixedSize()
extern "C"  bool JsonData_System_Collections_IDictionary_get_IsFixedSize_m3665017005 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.get_IsReadOnly()
extern "C"  bool JsonData_System_Collections_IDictionary_get_IsReadOnly_m295140524 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * JsonData_System_Collections_IDictionary_get_Keys_m3383253498 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * JsonData_System_Collections_IDictionary_get_Values_m2383923304 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsArray()
extern "C"  bool JsonData_LitJson_IJsonWrapper_get_IsArray_m881411995 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsBoolean()
extern "C"  bool JsonData_LitJson_IJsonWrapper_get_IsBoolean_m118123882 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsDouble()
extern "C"  bool JsonData_LitJson_IJsonWrapper_get_IsDouble_m4206370353 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsInt()
extern "C"  bool JsonData_LitJson_IJsonWrapper_get_IsInt_m3552316401 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsLong()
extern "C"  bool JsonData_LitJson_IJsonWrapper_get_IsLong_m2834318812 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsObject()
extern "C"  bool JsonData_LitJson_IJsonWrapper_get_IsObject_m2937397791 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsString()
extern "C"  bool JsonData_LitJson_IJsonWrapper_get_IsString_m346944113 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsFixedSize()
extern "C"  bool JsonData_System_Collections_IList_get_IsFixedSize_m3457372213 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsReadOnly()
extern "C"  bool JsonData_System_Collections_IList_get_IsReadOnly_m3613578276 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * JsonData_System_Collections_IDictionary_get_Item_m3282356218 (JsonData_t1715015430 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void JsonData_System_Collections_IDictionary_set_Item_m2794435423 (JsonData_t1715015430 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.get_Item(System.Int32)
extern "C"  Il2CppObject * JsonData_System_Collections_Specialized_IOrderedDictionary_get_Item_m2256174991 (JsonData_t1715015430 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.set_Item(System.Int32,System.Object)
extern "C"  void JsonData_System_Collections_Specialized_IOrderedDictionary_set_Item_m2740187100 (JsonData_t1715015430 * __this, int32_t ___idx0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * JsonData_System_Collections_IList_get_Item_m2630338787 (JsonData_t1715015430 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void JsonData_System_Collections_IList_set_Item_m1716281658 (JsonData_t1715015430 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void JsonData_System_Collections_ICollection_CopyTo_m3462783094 (JsonData_t1715015430 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void JsonData_System_Collections_IDictionary_Add_m2025696146 (JsonData_t1715015430 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Clear()
extern "C"  void JsonData_System_Collections_IDictionary_Clear_m773769980 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool JsonData_System_Collections_IDictionary_Contains_m1128506046 (JsonData_t1715015430 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * JsonData_System_Collections_IDictionary_GetEnumerator_m1486878691 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void JsonData_System_Collections_IDictionary_Remove_m83544989 (JsonData_t1715015430 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LitJson.JsonData::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * JsonData_System_Collections_IEnumerable_GetEnumerator_m1174836107 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.GetBoolean()
extern "C"  bool JsonData_LitJson_IJsonWrapper_GetBoolean_m3033996607 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double LitJson.JsonData::LitJson.IJsonWrapper.GetDouble()
extern "C"  double JsonData_LitJson_IJsonWrapper_GetDouble_m3265353155 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::LitJson.IJsonWrapper.GetInt()
extern "C"  int32_t JsonData_LitJson_IJsonWrapper_GetInt_m1887422124 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LitJson.JsonData::LitJson.IJsonWrapper.GetLong()
extern "C"  int64_t JsonData_LitJson_IJsonWrapper_GetLong_m1385728002 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::LitJson.IJsonWrapper.GetString()
extern "C"  String_t* JsonData_LitJson_IJsonWrapper_GetString_m3342687683 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetBoolean(System.Boolean)
extern "C"  void JsonData_LitJson_IJsonWrapper_SetBoolean_m1726695430 (JsonData_t1715015430 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetDouble(System.Double)
extern "C"  void JsonData_LitJson_IJsonWrapper_SetDouble_m1814397078 (JsonData_t1715015430 * __this, double ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetInt(System.Int32)
extern "C"  void JsonData_LitJson_IJsonWrapper_SetInt_m4094977575 (JsonData_t1715015430 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetLong(System.Int64)
extern "C"  void JsonData_LitJson_IJsonWrapper_SetLong_m2901336809 (JsonData_t1715015430 * __this, int64_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetString(System.String)
extern "C"  void JsonData_LitJson_IJsonWrapper_SetString_m748238870 (JsonData_t1715015430 * __this, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::LitJson.IJsonWrapper.ToJson()
extern "C"  String_t* JsonData_LitJson_IJsonWrapper_ToJson_m2716661929 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.ToJson(LitJson.JsonWriter)
extern "C"  void JsonData_LitJson_IJsonWrapper_ToJson_m4249428930 (JsonData_t1715015430 * __this, JsonWriter_t1165300239 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.IList.Add(System.Object)
extern "C"  int32_t JsonData_System_Collections_IList_Add_m1913175046 (JsonData_t1715015430 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Clear()
extern "C"  void JsonData_System_Collections_IList_Clear_m1749174148 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.Contains(System.Object)
extern "C"  bool JsonData_System_Collections_IList_Contains_m2867164230 (JsonData_t1715015430 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t JsonData_System_Collections_IList_IndexOf_m920616798 (JsonData_t1715015430 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void JsonData_System_Collections_IList_Insert_m519582243 (JsonData_t1715015430 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Remove(System.Object)
extern "C"  void JsonData_System_Collections_IList_Remove_m1239792165 (JsonData_t1715015430 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.RemoveAt(System.Int32)
extern "C"  void JsonData_System_Collections_IList_RemoveAt_m1364207155 (JsonData_t1715015430 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.GetEnumerator()
extern "C"  Il2CppObject * JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_m1207823573 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.Insert(System.Int32,System.Object,System.Object)
extern "C"  void JsonData_System_Collections_Specialized_IOrderedDictionary_Insert_m1434136403 (JsonData_t1715015430 * __this, int32_t ___idx0, Il2CppObject * ___key1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.RemoveAt(System.Int32)
extern "C"  void JsonData_System_Collections_Specialized_IOrderedDictionary_RemoveAt_m1145247829 (JsonData_t1715015430 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::get_Count()
extern "C"  int32_t JsonData_get_Count_m4275052380 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsArray()
extern "C"  bool JsonData_get_IsArray_m1945495094 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsBoolean()
extern "C"  bool JsonData_get_IsBoolean_m499765573 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsDouble()
extern "C"  bool JsonData_get_IsDouble_m2833208054 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsInt()
extern "C"  bool JsonData_get_IsInt_m1466275148 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsLong()
extern "C"  bool JsonData_get_IsLong_m2591549409 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsObject()
extern "C"  bool JsonData_get_IsObject_m1564235492 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsString()
extern "C"  bool JsonData_get_IsString_m3268749110 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> LitJson.JsonData::get_Keys()
extern "C"  Il2CppObject* JsonData_get_Keys_m1221712197 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::get_Item(System.String)
extern "C"  JsonData_t1715015430 * JsonData_get_Item_m3002455308 (JsonData_t1715015430 * __this, String_t* ___prop_name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
extern "C"  void JsonData_set_Item_m1854222537 (JsonData_t1715015430 * __this, String_t* ___prop_name0, JsonData_t1715015430 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::get_Item(System.Int32)
extern "C"  JsonData_t1715015430 * JsonData_get_Item_m1190499847 (JsonData_t1715015430 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
extern "C"  void JsonData_set_Item_m1491962894 (JsonData_t1715015430 * __this, int32_t ___index0, JsonData_t1715015430 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
extern "C"  Il2CppObject * JsonData_EnsureCollection_m2956584072 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
extern "C"  Il2CppObject * JsonData_EnsureDictionary_m2362286472 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList LitJson.JsonData::EnsureList()
extern "C"  Il2CppObject * JsonData_EnsureList_m833195336 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
extern "C"  JsonData_t1715015430 * JsonData_ToJsonData_m2198304717 (JsonData_t1715015430 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::WriteJson(LitJson.IJsonWrapper,LitJson.JsonWriter)
extern "C"  void JsonData_WriteJson_m1054819194 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::Add(System.Object)
extern "C"  int32_t JsonData_Add_m4123150557 (JsonData_t1715015430 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::Clear()
extern "C"  void JsonData_Clear_m3468741817 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::Equals(LitJson.JsonData)
extern "C"  bool JsonData_Equals_m2713242256 (JsonData_t1715015430 * __this, JsonData_t1715015430 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonType LitJson.JsonData::GetJsonType()
extern "C"  int32_t JsonData_GetJsonType_m101522512 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::SetJsonType(LitJson.JsonType)
extern "C"  void JsonData_SetJsonType_m1319688671 (JsonData_t1715015430 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::ToJson()
extern "C"  String_t* JsonData_ToJson_m2141433948 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::ToJson(LitJson.JsonWriter)
extern "C"  void JsonData_ToJson_m3938872143 (JsonData_t1715015430 * __this, JsonWriter_t1165300239 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::ToString()
extern "C"  String_t* JsonData_ToString_m105032837 (JsonData_t1715015430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Boolean)
extern "C"  JsonData_t1715015430 * JsonData_op_Implicit_m2524032322 (Il2CppObject * __this /* static, unused */, bool ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Double)
extern "C"  JsonData_t1715015430 * JsonData_op_Implicit_m614751767 (Il2CppObject * __this /* static, unused */, double ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int32)
extern "C"  JsonData_t1715015430 * JsonData_op_Implicit_m1408902108 (Il2CppObject * __this /* static, unused */, int32_t ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int64)
extern "C"  JsonData_t1715015430 * JsonData_op_Implicit_m1408905053 (Il2CppObject * __this /* static, unused */, int64_t ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.String)
extern "C"  JsonData_t1715015430 * JsonData_op_Implicit_m1182990807 (Il2CppObject * __this /* static, unused */, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C"  bool JsonData_op_Explicit_m4036169505 (Il2CppObject * __this /* static, unused */, JsonData_t1715015430 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C"  double JsonData_op_Explicit_m4049956474 (Il2CppObject * __this /* static, unused */, JsonData_t1715015430 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C"  int32_t JsonData_op_Explicit_m1299638151 (Il2CppObject * __this /* static, unused */, JsonData_t1715015430 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C"  int64_t JsonData_op_Explicit_m562499046 (Il2CppObject * __this /* static, unused */, JsonData_t1715015430 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C"  String_t* JsonData_op_Explicit_m1825690298 (Il2CppObject * __this /* static, unused */, JsonData_t1715015430 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
