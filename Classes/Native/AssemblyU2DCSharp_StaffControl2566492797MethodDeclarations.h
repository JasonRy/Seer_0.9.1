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

// StaffControl
struct StaffControl_t2566492797;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Transform
struct Transform_t1659122786;
// System.Collections.Generic.List`1<ConsoleApplication.LocalProcessing/StaffInformatino>
struct List_1_t13119972;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "AssemblyU2DCSharp_ConsoleApplication_LocalProcessi2939901716.h"
#include "mscorlib_System_String7231557.h"

// System.Void StaffControl::.ctor()
extern "C"  void StaffControl__ctor_m558816446 (StaffControl_t2566492797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StaffControl::Awake()
extern "C"  void StaffControl_Awake_m796421665 (StaffControl_t2566492797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StaffControl::Start()
extern "C"  void StaffControl_Start_m3800921534 (StaffControl_t2566492797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StaffControl::OnEnable()
extern "C"  void StaffControl_OnEnable_m2479081992 (StaffControl_t2566492797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StaffControl::Update()
extern "C"  void StaffControl_Update_m1870302735 (StaffControl_t2566492797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StaffControl::staffControlFunction(System.Boolean)
extern "C"  void StaffControl_staffControlFunction_m810919154 (StaffControl_t2566492797 * __this, bool ___isEnd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StaffControl::getAllStaffInfo()
extern "C"  Il2CppObject * StaffControl_getAllStaffInfo_m1054210487 (StaffControl_t2566492797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject StaffControl::addItem(UnityEngine.GameObject,System.Int32,UnityEngine.Transform)
extern "C"  GameObject_t3674682005 * StaffControl_addItem_m4020762299 (StaffControl_t2566492797 * __this, GameObject_t3674682005 * ___go0, int32_t ___index1, Transform_t1659122786 * ___parent2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StaffControl::attributesAreAssigned(ConsoleApplication.LocalProcessing/StaffInformatino,UnityEngine.GameObject)
extern "C"  void StaffControl_attributesAreAssigned_m667057735 (StaffControl_t2566492797 * __this, StaffInformatino_t2939901716  ___LPS0, GameObject_t3674682005 * ___go1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StaffControl::openStaffCard(System.Collections.Generic.List`1<ConsoleApplication.LocalProcessing/StaffInformatino>)
extern "C"  void StaffControl_openStaffCard_m2079600058 (StaffControl_t2566492797 * __this, List_1_t13119972 * ___LPSS0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StaffControl::calculateCharacterNumber(System.Collections.Generic.List`1<System.String>)
extern "C"  void StaffControl_calculateCharacterNumber_m3342105830 (StaffControl_t2566492797 * __this, List_1_t1375417109 * ___iList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StaffControl::clickPeopleName(System.String)
extern "C"  void StaffControl_clickPeopleName_m591702692 (StaffControl_t2566492797 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StaffControl::staffPosition(System.String,System.String)
extern "C"  void StaffControl_staffPosition_m1265761209 (StaffControl_t2566492797 * __this, String_t* ___str0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StaffControl::ClickDropdown(System.String,System.String)
extern "C"  void StaffControl_ClickDropdown_m1145535561 (StaffControl_t2566492797 * __this, String_t* ___str0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StaffControl::<attributesAreAssigned>m__C()
extern "C"  void StaffControl_U3CattributesAreAssignedU3Em__C_m2391509569 (StaffControl_t2566492797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
