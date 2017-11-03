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

// LitJson.JsonWriter
struct JsonWriter_t1165300239;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.IO.TextWriter
struct TextWriter_t2304124208;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"
#include "mscorlib_System_IO_TextWriter2304124208.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_Condition853519089.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Decimal1954350631.h"

// System.Void LitJson.JsonWriter::.ctor()
extern "C"  void JsonWriter__ctor_m3080348837 (JsonWriter_t1165300239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.ctor(System.Text.StringBuilder)
extern "C"  void JsonWriter__ctor_m961082085 (JsonWriter_t1165300239 * __this, StringBuilder_t243639308 * ___sb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
extern "C"  void JsonWriter__ctor_m3227328316 (JsonWriter_t1165300239 * __this, TextWriter_t2304124208 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.cctor()
extern "C"  void JsonWriter__cctor_m519437224 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonWriter::get_IndentValue()
extern "C"  int32_t JsonWriter_get_IndentValue_m1578540233 (JsonWriter_t1165300239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::set_IndentValue(System.Int32)
extern "C"  void JsonWriter_set_IndentValue_m3255741916 (JsonWriter_t1165300239 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonWriter::get_PrettyPrint()
extern "C"  bool JsonWriter_get_PrettyPrint_m3732336661 (JsonWriter_t1165300239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::set_PrettyPrint(System.Boolean)
extern "C"  void JsonWriter_set_PrettyPrint_m391613172 (JsonWriter_t1165300239 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
extern "C"  TextWriter_t2304124208 * JsonWriter_get_TextWriter_m1433593988 (JsonWriter_t1165300239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonWriter::get_Validate()
extern "C"  bool JsonWriter_get_Validate_m2451589306 (JsonWriter_t1165300239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::set_Validate(System.Boolean)
extern "C"  void JsonWriter_set_Validate_m1032385417 (JsonWriter_t1165300239 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
extern "C"  void JsonWriter_DoValidation_m3164772067 (JsonWriter_t1165300239 * __this, int32_t ___cond0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Init()
extern "C"  void JsonWriter_Init_m2821849359 (JsonWriter_t1165300239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
extern "C"  void JsonWriter_IntToHex_m3814107190 (Il2CppObject * __this /* static, unused */, int32_t ___n0, CharU5BU5D_t3324145743* ___hex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Indent()
extern "C"  void JsonWriter_Indent_m1518030379 (JsonWriter_t1165300239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Put(System.String)
extern "C"  void JsonWriter_Put_m2280423088 (JsonWriter_t1165300239 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutNewline()
extern "C"  void JsonWriter_PutNewline_m2627390404 (JsonWriter_t1165300239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
extern "C"  void JsonWriter_PutNewline_m1388288571 (JsonWriter_t1165300239 * __this, bool ___add_comma0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutString(System.String)
extern "C"  void JsonWriter_PutString_m198271775 (JsonWriter_t1165300239 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Unindent()
extern "C"  void JsonWriter_Unindent_m3993816132 (JsonWriter_t1165300239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonWriter::ToString()
extern "C"  String_t* JsonWriter_ToString_m3046355022 (JsonWriter_t1165300239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Reset()
extern "C"  void JsonWriter_Reset_m726781778 (JsonWriter_t1165300239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Boolean)
extern "C"  void JsonWriter_Write_m2203019225 (JsonWriter_t1165300239 * __this, bool ___boolean0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Decimal)
extern "C"  void JsonWriter_Write_m762488272 (JsonWriter_t1165300239 * __this, Decimal_t1954350631  ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Double)
extern "C"  void JsonWriter_Write_m2959701152 (JsonWriter_t1165300239 * __this, double ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Int32)
extern "C"  void JsonWriter_Write_m4116944947 (JsonWriter_t1165300239 * __this, int32_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Int64)
extern "C"  void JsonWriter_Write_m4116947892 (JsonWriter_t1165300239 * __this, int64_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.String)
extern "C"  void JsonWriter_Write_m3527940192 (JsonWriter_t1165300239 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.UInt64)
extern "C"  void JsonWriter_Write_m4068472281 (JsonWriter_t1165300239 * __this, uint64_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteArrayEnd()
extern "C"  void JsonWriter_WriteArrayEnd_m52100164 (JsonWriter_t1165300239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteArrayStart()
extern "C"  void JsonWriter_WriteArrayStart_m2535049227 (JsonWriter_t1165300239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteObjectEnd()
extern "C"  void JsonWriter_WriteObjectEnd_m4290695996 (JsonWriter_t1165300239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteObjectStart()
extern "C"  void JsonWriter_WriteObjectStart_m4196647171 (JsonWriter_t1165300239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
extern "C"  void JsonWriter_WritePropertyName_m3380920256 (JsonWriter_t1165300239 * __this, String_t* ___property_name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
