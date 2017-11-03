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

// WMG_Data_Source
struct WMG_Data_Source_t1473700674;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void WMG_Data_Source::.ctor()
extern "C"  void WMG_Data_Source__ctor_m89091689 (WMG_Data_Source_t1473700674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Data_Source::Start()
extern "C"  void WMG_Data_Source_Start_m3331196777 (WMG_Data_Source_t1473700674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Data_Source::parseStrings()
extern "C"  void WMG_Data_Source_parseStrings_m1769574442 (WMG_Data_Source_t1473700674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Data_Source::parseString(System.String,System.String&,System.String&)
extern "C"  void WMG_Data_Source_parseString_m1047615959 (WMG_Data_Source_t1473700674 * __this, String_t* ___inputString0, String_t** ___stringPart11, String_t** ___stringPart22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Data_Source::setVariableNames(System.Collections.Generic.List`1<System.String>)
extern "C"  void WMG_Data_Source_setVariableNames_m1102884665 (WMG_Data_Source_t1473700674 * __this, List_1_t1375417109 * ___variableNames0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Data_Source::setVariableName(System.String)
extern "C"  void WMG_Data_Source_setVariableName_m1369504370 (WMG_Data_Source_t1473700674 * __this, String_t* ___variableName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Data_Source::addVariableNameToList(System.String)
extern "C"  void WMG_Data_Source_addVariableNameToList_m353266266 (WMG_Data_Source_t1473700674 * __this, String_t* ___variableName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Data_Source::removeVariableNameFromList(System.String)
extern "C"  void WMG_Data_Source_removeVariableNameFromList_m3830887956 (WMG_Data_Source_t1473700674 * __this, String_t* ___variableName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
