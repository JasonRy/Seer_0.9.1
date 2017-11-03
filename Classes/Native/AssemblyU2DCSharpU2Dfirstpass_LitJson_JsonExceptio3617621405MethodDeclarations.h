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

// LitJson.JsonException
struct JsonException_t3617621405;
// System.Exception
struct Exception_t3991598821;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_ParserToken608116400.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_String7231557.h"

// System.Void LitJson.JsonException::.ctor()
extern "C"  void JsonException__ctor_m2978097599 (JsonException_t3617621405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken)
extern "C"  void JsonException__ctor_m984279720 (JsonException_t3617621405 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
extern "C"  void JsonException__ctor_m2578874254 (JsonException_t3617621405 * __this, int32_t ___token0, Exception_t3991598821 * ___inner_exception1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.Int32)
extern "C"  void JsonException__ctor_m2229024912 (JsonException_t3617621405 * __this, int32_t ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.Int32,System.Exception)
extern "C"  void JsonException__ctor_m3705519782 (JsonException_t3617621405 * __this, int32_t ___c0, Exception_t3991598821 * ___inner_exception1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.String)
extern "C"  void JsonException__ctor_m836993955 (JsonException_t3617621405 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.String,System.Exception)
extern "C"  void JsonException__ctor_m1388944371 (JsonException_t3617621405 * __this, String_t* ___message0, Exception_t3991598821 * ___inner_exception1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
