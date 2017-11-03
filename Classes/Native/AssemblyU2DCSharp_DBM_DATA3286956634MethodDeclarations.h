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

// DBM_DATA
struct DBM_DATA_t3286956634;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_LogType4286006228.h"

// System.Void DBM_DATA::.ctor()
extern "C"  void DBM_DATA__ctor_m2787166593 (DBM_DATA_t3286956634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DBM_DATA::.cctor()
extern "C"  void DBM_DATA__cctor_m20722252 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DBM_DATA::Awake()
extern "C"  void DBM_DATA_Awake_m3024771812 (DBM_DATA_t3286956634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DBM_DATA::Start()
extern "C"  void DBM_DATA_Start_m1734304385 (DBM_DATA_t3286956634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DBM_DATA::createLocalDataFile()
extern "C"  void DBM_DATA_createLocalDataFile_m2586205748 (DBM_DATA_t3286956634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DBM_DATA::ShowTips(System.String,System.String,UnityEngine.LogType)
extern "C"  void DBM_DATA_ShowTips_m2676884107 (DBM_DATA_t3286956634 * __this, String_t* ___msg0, String_t* ___stackTrace1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DBM_DATA::Update()
extern "C"  void DBM_DATA_Update_m2229680556 (DBM_DATA_t3286956634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DBM_DATA::getNum(System.String)
extern "C"  String_t* DBM_DATA_getNum_m713518092 (DBM_DATA_t3286956634 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DBM_DATA::ConnectToTheDatabase_People()
extern "C"  Il2CppObject * DBM_DATA_ConnectToTheDatabase_People_m207949374 (DBM_DATA_t3286956634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DBM_DATA::ConnectToTheDatabase_ENV()
extern "C"  Il2CppObject * DBM_DATA_ConnectToTheDatabase_ENV_m190253824 (DBM_DATA_t3286956634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DBM_DATA::ConnectToTheDatabase_Area(System.Collections.Generic.List`1<System.String>)
extern "C"  Il2CppObject * DBM_DATA_ConnectToTheDatabase_Area_m1875546224 (DBM_DATA_t3286956634 * __this, List_1_t1375417109 * ___URLS0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DBM_DATA::ConnectToTheDatabase_Survey(System.String)
extern "C"  Il2CppObject * DBM_DATA_ConnectToTheDatabase_Survey_m3119325529 (DBM_DATA_t3286956634 * __this, String_t* ___URL0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DBM_DATA::ConnectToTheDatabase_ProjectDetails(System.String)
extern "C"  Il2CppObject * DBM_DATA_ConnectToTheDatabase_ProjectDetails_m2932467178 (DBM_DATA_t3286956634 * __this, String_t* ___URL0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DBM_DATA::ConnectToTheDatabase_WorkType_Category(System.Collections.Generic.List`1<System.String>)
extern "C"  Il2CppObject * DBM_DATA_ConnectToTheDatabase_WorkType_Category_m2993497209 (DBM_DATA_t3286956634 * __this, List_1_t1375417109 * ___URLS0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DBM_DATA::backToUnity()
extern "C"  void DBM_DATA_backToUnity_m4064421458 (DBM_DATA_t3286956634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DBM_DATA::goToDetail(System.String)
extern "C"  void DBM_DATA_goToDetail_m3070685099 (DBM_DATA_t3286956634 * __this, String_t* ___project_ID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
