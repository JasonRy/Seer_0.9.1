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

// AllSingleton
struct AllSingleton_t4059019146;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Transform
struct Transform_t1659122786;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// System.Collections.Generic.List`1<ConsoleApplication.LocalProcessing/peopleOrderPatrol>
struct List_1_t1366174677;
// System.Collections.Generic.List`1<ConsoleApplication.LocalProcessing/peoplePatrol>
struct List_1_t3891158129;
// UnityEngine.Material[]
struct MaterialU5BU5D_t170856778;
// SingleAttribute
struct SingleAttribute_t76566292;
// System.String
struct String_t;
// UnityEngine.Canvas
struct Canvas_t2727140764;
// UnityEngine.Camera
struct Camera_t2727095145;
// DeviceAttributes
struct DeviceAttributes_t2503308397;
// DeviceProperties
struct DeviceProperties_t1171609673;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t941444821;
// SetRingsGraph
struct SetRingsGraph_t2559073453;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_ConsoleApplication_LocalProcessi2492701999.h"
#include "AssemblyU2DCSharp_ConsoleApplication_LocalProcessi2939901716.h"
#include "AssemblyU2DCSharp_AllSingleton_Contacts352143704.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "AssemblyU2DCSharp_SingleAttribute76566292.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Color32598853688.h"
#include "UnityEngine_UnityEngine_Canvas2727140764.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "AssemblyU2DCSharp_DeviceAttributes2503308397.h"
#include "AssemblyU2DCSharp_DeviceProperties1171609673.h"
#include "AssemblyU2DCSharp_SetRingsGraph2559073453.h"
#include "AssemblyU2DCSharp_AllSingleton_areaProperty2430975975.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void AllSingleton::.ctor()
extern "C"  void AllSingleton__ctor_m2183992913 (AllSingleton_t4059019146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AllSingleton::.cctor()
extern "C"  void AllSingleton__cctor_m2797174652 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AllSingleton AllSingleton::CreateInstance()
extern "C"  AllSingleton_t4059019146 * AllSingleton_CreateInstance_m2625343607 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AllSingleton::addItem(UnityEngine.GameObject,System.Int32,UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C"  Il2CppObject * AllSingleton_addItem_m102944143 (AllSingleton_t4059019146 * __this, GameObject_t3674682005 * ___go0, int32_t ___index1, Transform_t1659122786 * ___parent2, List_1_t747900261 * ___ls3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject AllSingleton::createEnvironmentCard(UnityEngine.GameObject,UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  GameObject_t3674682005 * AllSingleton_createEnvironmentCard_m577318755 (AllSingleton_t4059019146 * __this, GameObject_t3674682005 * ___go0, Transform_t1659122786 * ___parent1, Vector3_t4282066566  ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject AllSingleton::createDeviceCard(UnityEngine.GameObject,ConsoleApplication.LocalProcessing/DeviceProperties,UnityEngine.Transform)
extern "C"  GameObject_t3674682005 * AllSingleton_createDeviceCard_m3415225878 (AllSingleton_t4059019146 * __this, GameObject_t3674682005 * ___go0, DeviceProperties_t2492701999  ___LD1, Transform_t1659122786 * ___parent2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject AllSingleton::createStaffCard(UnityEngine.GameObject,ConsoleApplication.LocalProcessing/StaffInformatino,UnityEngine.Transform)
extern "C"  GameObject_t3674682005 * AllSingleton_createStaffCard_m2061743669 (AllSingleton_t4059019146 * __this, GameObject_t3674682005 * ___go0, StaffInformatino_t2939901716  ___LS1, Transform_t1659122786 * ___parent2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AllSingleton::createDeviceInformation(UnityEngine.GameObject,ConsoleApplication.LocalProcessing/DeviceProperties,UnityEngine.Transform,UnityEngine.GameObject)
extern "C"  void AllSingleton_createDeviceInformation_m4234472809 (AllSingleton_t4059019146 * __this, GameObject_t3674682005 * ___go0, DeviceProperties_t2492701999  ___LD1, Transform_t1659122786 * ___parent2, GameObject_t3674682005 * ___dp3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject AllSingleton::createContactSheet(UnityEngine.GameObject,AllSingleton/Contacts,UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  GameObject_t3674682005 * AllSingleton_createContactSheet_m4205281913 (AllSingleton_t4059019146 * __this, GameObject_t3674682005 * ___go0, Contacts_t352143704  ___AC1, Transform_t1659122786 * ___parent2, Vector3_t4282066566  ___localPosition3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject AllSingleton::createDeviceInformation_N(UnityEngine.GameObject,ConsoleApplication.LocalProcessing/DeviceProperties,UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.GameObject>,UnityEngine.GameObject,System.Collections.Generic.List`1<ConsoleApplication.LocalProcessing/peopleOrderPatrol>,System.Collections.Generic.List`1<ConsoleApplication.LocalProcessing/peoplePatrol>)
extern "C"  GameObject_t3674682005 * AllSingleton_createDeviceInformation_N_m3668035583 (AllSingleton_t4059019146 * __this, GameObject_t3674682005 * ___go0, DeviceProperties_t2492701999  ___LD1, Transform_t1659122786 * ___parent2, List_1_t747900261 * ___objs3, GameObject_t3674682005 * ___go14, List_1_t1366174677 * ___orderLPPS5, List_1_t3891158129 * ___LPPS6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AllSingleton::refreshTargetColor(UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>,UnityEngine.Material[],UnityEngine.Color,SingleAttribute)
extern "C"  Il2CppObject * AllSingleton_refreshTargetColor_m1829323680 (AllSingleton_t4059019146 * __this, GameObject_t3674682005 * ___go0, List_1_t747900261 * ___gos1, MaterialU5BU5D_t170856778* ___mas2, Color_t4194546905  ___color3, SingleAttribute_t76566292 * ___SA4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color AllSingleton::deviceNormalOrError(UnityEngine.GameObject)
extern "C"  Color_t4194546905  AllSingleton_deviceNormalOrError_m1525035816 (AllSingleton_t4059019146 * __this, GameObject_t3674682005 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AllSingleton::refreshCamera()
extern "C"  void AllSingleton_refreshCamera_m4160417647 (AllSingleton_t4059019146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AllSingleton::destoryObjSpectrumControllerFunction(System.Collections.Generic.List`1<UnityEngine.GameObject>,UnityEngine.Material[])
extern "C"  void AllSingleton_destoryObjSpectrumControllerFunction_m792658855 (AllSingleton_t4059019146 * __this, List_1_t747900261 * ___mList0, MaterialU5BU5D_t170856778* ___mas1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AllSingleton::duibishijian(System.String,System.Int32)
extern "C"  bool AllSingleton_duibishijian_m2398123389 (AllSingleton_t4059019146 * __this, String_t* ___time0, int32_t ___interval1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AllSingleton::resetAllSelectionMode()
extern "C"  void AllSingleton_resetAllSelectionMode_m2951402732 (AllSingleton_t4059019146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 AllSingleton::hexToColor(System.String)
extern "C"  Color32_t598853688  AllSingleton_hexToColor_m2752902650 (AllSingleton_t4059019146 * __this, String_t* ___hex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AllSingleton::WorldToUIPoint(UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Camera,UnityEngine.GameObject)
extern "C"  void AllSingleton_WorldToUIPoint_m756062384 (AllSingleton_t4059019146 * __this, Transform_t1659122786 * ___worldGo0, Canvas_t2727140764 * ___canvas1, Camera_t2727095145 * ___gameCamera2, GameObject_t3674682005 * ___trs3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AllSingleton::deivceTarget(System.String,DeviceAttributes,DeviceProperties)
extern "C"  String_t* AllSingleton_deivceTarget_m1898183759 (AllSingleton_t4059019146 * __this, String_t* ___name0, DeviceAttributes_t2503308397 * ___DA1, DeviceProperties_t1171609673 * ___DP2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AllSingleton::destoryAllCard()
extern "C"  void AllSingleton_destoryAllCard_m3589310352 (AllSingleton_t4059019146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AllSingleton::SRGFunction(System.Collections.Generic.List`1<System.Double>,SetRingsGraph)
extern "C"  Il2CppObject * AllSingleton_SRGFunction_m2426875418 (AllSingleton_t4059019146 * __this, List_1_t941444821 * ___ds0, SetRingsGraph_t2559073453 * ___SRG1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AllSingleton::RingsGraphLowLabelColorEffect(AllSingleton/areaProperty,SetRingsGraph)
extern "C"  void AllSingleton_RingsGraphLowLabelColorEffect_m26612146 (AllSingleton_t4059019146 * __this, areaProperty_t2430975975  ___AP0, SetRingsGraph_t2559073453 * ___SRG1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AllSingleton::getSpellCode(System.String)
extern "C"  String_t* AllSingleton_getSpellCode_m3383863821 (AllSingleton_t4059019146 * __this, String_t* ___cnStr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AllSingleton::getCharSpellCode(System.String)
extern "C"  String_t* AllSingleton_getCharSpellCode_m2274375427 (AllSingleton_t4059019146 * __this, String_t* ___cnChar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AllSingleton::CutString(System.String,System.Int32)
extern "C"  String_t* AllSingleton_CutString_m1090446388 (AllSingleton_t4059019146 * __this, String_t* ___str0, int32_t ___len1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AllSingleton::subTrueString(System.Object,System.Int32)
extern "C"  String_t* AllSingleton_subTrueString_m3354954798 (AllSingleton_t4059019146 * __this, Il2CppObject * ___content0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AllSingleton::GetStringLength(System.Object)
extern "C"  int32_t AllSingleton_GetStringLength_m3937811622 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AllSingleton::NoHTML(System.String)
extern "C"  String_t* AllSingleton_NoHTML_m4121600544 (Il2CppObject * __this /* static, unused */, String_t* ___Htmlstring0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
