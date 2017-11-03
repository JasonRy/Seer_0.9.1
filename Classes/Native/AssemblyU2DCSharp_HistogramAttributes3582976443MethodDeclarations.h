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

// HistogramAttributes
struct HistogramAttributes_t3582976443;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.String
struct String_t;
// AreaData.Worktype_Category/Category
struct Category_t3849709554;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_AllSingleton_workTypeList3233913742.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_HistogramAttributes3582976443.h"

// System.Void HistogramAttributes::.ctor()
extern "C"  void HistogramAttributes__ctor_m2608919568 (HistogramAttributes_t3582976443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HistogramAttributes::Start()
extern "C"  void HistogramAttributes_Start_m1556057360 (HistogramAttributes_t3582976443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HistogramAttributes::Update()
extern "C"  void HistogramAttributes_Update_m998990077 (HistogramAttributes_t3582976443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HistogramAttributes::set_setHistogram_workType(AllSingleton/workTypeList)
extern "C"  void HistogramAttributes_set_setHistogram_workType_m2644333611 (HistogramAttributes_t3582976443 * __this, workTypeList_t3233913742  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HistogramAttributes::setAttributes(AllSingleton/workTypeList,System.Int32,System.Int32)
extern "C"  void HistogramAttributes_setAttributes_m2284814845 (HistogramAttributes_t3582976443 * __this, workTypeList_t3233913742  ___WT0, int32_t ___index1, int32_t ___allValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HistogramAttributes::set_Sprite(System.Boolean)
extern "C"  void HistogramAttributes_set_Sprite_m2266660013 (HistogramAttributes_t3582976443 * __this, bool ___isClick0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator HistogramAttributes::aloneCategory(System.String,HistogramAttributes)
extern "C"  Il2CppObject * HistogramAttributes_aloneCategory_m2856234340 (HistogramAttributes_t3582976443 * __this, String_t* ___URL0, HistogramAttributes_t3582976443 * ___HA1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HistogramAttributes::oneDepData()
extern "C"  void HistogramAttributes_oneDepData_m4267232039 (HistogramAttributes_t3582976443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AreaData.Worktype_Category/Category HistogramAttributes::get__oneDepInfo()
extern "C"  Category_t3849709554 * HistogramAttributes_get__oneDepInfo_m356491324 (HistogramAttributes_t3582976443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HistogramAttributes::get_uft8(System.String)
extern "C"  String_t* HistogramAttributes_get_uft8_m679564275 (HistogramAttributes_t3582976443 * __this, String_t* ___unicodeString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
