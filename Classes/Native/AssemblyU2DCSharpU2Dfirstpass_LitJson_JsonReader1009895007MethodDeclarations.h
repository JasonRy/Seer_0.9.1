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

// LitJson.JsonReader
struct JsonReader_t1009895007;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t2148718976;
// System.Object
struct Il2CppObject;
// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IO_TextReader2148718976.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_JsonToken621800391.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_ParserToken608116400.h"

// System.Void LitJson.JsonReader::.ctor(System.String)
extern "C"  void JsonReader__ctor_m280643277 (JsonReader_t1009895007 * __this, String_t* ___json_text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader)
extern "C"  void JsonReader__ctor_m312238748 (JsonReader_t1009895007 * __this, TextReader_t2148718976 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
extern "C"  void JsonReader__ctor_m955704673 (JsonReader_t1009895007 * __this, TextReader_t2148718976 * ___reader0, bool ___owned1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.cctor()
extern "C"  void JsonReader__cctor_m802786296 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_AllowComments()
extern "C"  bool JsonReader_get_AllowComments_m3161493899 (JsonReader_t1009895007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::set_AllowComments(System.Boolean)
extern "C"  void JsonReader_set_AllowComments_m3618864106 (JsonReader_t1009895007 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_AllowSingleQuotedStrings()
extern "C"  bool JsonReader_get_AllowSingleQuotedStrings_m929724349 (JsonReader_t1009895007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::set_AllowSingleQuotedStrings(System.Boolean)
extern "C"  void JsonReader_set_AllowSingleQuotedStrings_m284586316 (JsonReader_t1009895007 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_SkipNonMembers()
extern "C"  bool JsonReader_get_SkipNonMembers_m3469800671 (JsonReader_t1009895007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::set_SkipNonMembers(System.Boolean)
extern "C"  void JsonReader_set_SkipNonMembers_m4068178158 (JsonReader_t1009895007 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_EndOfInput()
extern "C"  bool JsonReader_get_EndOfInput_m153642380 (JsonReader_t1009895007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_EndOfJson()
extern "C"  bool JsonReader_get_EndOfJson_m592353416 (JsonReader_t1009895007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonToken LitJson.JsonReader::get_Token()
extern "C"  int32_t JsonReader_get_Token_m2154694706 (JsonReader_t1009895007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonReader::get_Value()
extern "C"  Il2CppObject * JsonReader_get_Value_m1080459110 (JsonReader_t1009895007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::PopulateParseTable()
extern "C"  void JsonReader_PopulateParseTable_m2847928308 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
extern "C"  void JsonReader_TableAddCol_m3306800517 (Il2CppObject * __this /* static, unused */, int32_t ___row0, int32_t ___col1, Int32U5BU5D_t3230847821* ___symbols2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
extern "C"  void JsonReader_TableAddRow_m1951884653 (Il2CppObject * __this /* static, unused */, int32_t ___rule0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
extern "C"  void JsonReader_ProcessNumber_m1614863063 (JsonReader_t1009895007 * __this, String_t* ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessSymbol()
extern "C"  void JsonReader_ProcessSymbol_m348549274 (JsonReader_t1009895007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::ReadToken()
extern "C"  bool JsonReader_ReadToken_m1632730778 (JsonReader_t1009895007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::Close()
extern "C"  void JsonReader_Close_m4107612011 (JsonReader_t1009895007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::Read()
extern "C"  bool JsonReader_Read_m1069941505 (JsonReader_t1009895007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
