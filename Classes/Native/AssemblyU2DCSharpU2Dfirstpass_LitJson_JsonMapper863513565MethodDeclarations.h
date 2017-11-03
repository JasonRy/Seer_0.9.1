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

// LitJson.JsonMapper
struct JsonMapper_t863513565;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Il2CppObject;
// LitJson.JsonReader
struct JsonReader_t1009895007;
// LitJson.IJsonWrapper
struct IJsonWrapper_t2026182966;
// LitJson.WrapperFactory
struct WrapperFactory_t3264289803;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t1504911478;
// LitJson.ImporterFunc
struct ImporterFunc_t2138319818;
// LitJson.JsonWriter
struct JsonWriter_t1165300239;
// System.String
struct String_t;
// LitJson.JsonData
struct JsonData_t1715015430;
// System.IO.TextReader
struct TextReader_t2148718976;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_JsonReader1009895007.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_WrapperFacto3264289803.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_ImporterFunc2138319818.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_JsonWriter1165300239.h"
#include "mscorlib_System_IO_TextReader2148718976.h"
#include "mscorlib_System_String7231557.h"

// System.Void LitJson.JsonMapper::.ctor()
extern "C"  void JsonMapper__ctor_m2619110039 (JsonMapper_t863513565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::.cctor()
extern "C"  void JsonMapper__cctor_m3400903670 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddArrayMetadata(System.Type)
extern "C"  void JsonMapper_AddArrayMetadata_m4253718885 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddObjectMetadata(System.Type)
extern "C"  void JsonMapper_AddObjectMetadata_m2343229557 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
extern "C"  void JsonMapper_AddTypeProperties_m3037821526 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo LitJson.JsonMapper::GetConvOp(System.Type,System.Type)
extern "C"  MethodInfo_t * JsonMapper_GetConvOp_m3313663902 (Il2CppObject * __this /* static, unused */, Type_t * ___t10, Type_t * ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::ReadValue(System.Type,LitJson.JsonReader)
extern "C"  Il2CppObject * JsonMapper_ReadValue_m3861801998 (Il2CppObject * __this /* static, unused */, Type_t * ___inst_type0, JsonReader_t1009895007 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C"  Il2CppObject * JsonMapper_ReadValue_m1659666742 (Il2CppObject * __this /* static, unused */, WrapperFactory_t3264289803 * ___factory0, JsonReader_t1009895007 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::ReadSkip(LitJson.JsonReader)
extern "C"  void JsonMapper_ReadSkip_m3762771592 (Il2CppObject * __this /* static, unused */, JsonReader_t1009895007 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
extern "C"  void JsonMapper_RegisterBaseExporters_m3754739635 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
extern "C"  void JsonMapper_RegisterBaseImporters_m3023550050 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
extern "C"  void JsonMapper_RegisterImporter_m3654643262 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_t2138319818 * ___importer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
extern "C"  void JsonMapper_WriteValue_m3961701537 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, bool ___writer_is_private2, int32_t ___depth3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonMapper::ToJson(System.Object)
extern "C"  String_t* JsonMapper_ToJson_m494483905 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::ToJson(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_ToJson_m679161752 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(LitJson.JsonReader)
extern "C"  JsonData_t1715015430 * JsonMapper_ToObject_m2994549585 (Il2CppObject * __this /* static, unused */, JsonReader_t1009895007 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.IO.TextReader)
extern "C"  JsonData_t1715015430 * JsonMapper_ToObject_m3338122002 (Il2CppObject * __this /* static, unused */, TextReader_t2148718976 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.String)
extern "C"  JsonData_t1715015430 * JsonMapper_ToObject_m1898508055 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C"  Il2CppObject * JsonMapper_ToWrapper_m1789094137 (Il2CppObject * __this /* static, unused */, WrapperFactory_t3264289803 * ___factory0, JsonReader_t1009895007 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
extern "C"  Il2CppObject * JsonMapper_ToWrapper_m3801206895 (Il2CppObject * __this /* static, unused */, WrapperFactory_t3264289803 * ___factory0, String_t* ___json1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::UnregisterExporters()
extern "C"  void JsonMapper_UnregisterExporters_m359286667 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::UnregisterImporters()
extern "C"  void JsonMapper_UnregisterImporters_m3923064378 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ReadSkip>m__0()
extern "C"  Il2CppObject * JsonMapper_U3CReadSkipU3Em__0_m3782090225 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__1(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__1_m3364848893 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__2(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__2_m795362494 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__3(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__3_m2520843391 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__4(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__4_m4246324288 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__5(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__5_m1676837889 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__6(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__6_m3402318786 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__7(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__7_m832832387 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__8(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__8_m2558313284 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__9(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__9_m4283794181 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, JsonWriter_t1165300239 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__A(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__A_m978422291 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__B(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__B_m467888114 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__C(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__C_m4252321233 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__D(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__D_m3741787056 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__E(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__E_m3231252879 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__F(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__F_m2720718702 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__10(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__10_m937424915 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__11(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__11_m426890738 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__12(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__12_m4211323857 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__13(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__13_m3700789680 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__14(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__14_m3190255503 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__15(System.Object)
extern "C"  Il2CppObject * JsonMapper_U3CRegisterBaseImportersU3Em__15_m2679721326 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__16()
extern "C"  Il2CppObject * JsonMapper_U3CToObjectU3Em__16_m2657137035 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__17()
extern "C"  Il2CppObject * JsonMapper_U3CToObjectU3Em__17_m2657137996 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__18()
extern "C"  Il2CppObject * JsonMapper_U3CToObjectU3Em__18_m2657138957 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
