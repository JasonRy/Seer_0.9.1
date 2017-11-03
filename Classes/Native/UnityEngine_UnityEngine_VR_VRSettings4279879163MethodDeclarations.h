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

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_VR_VRDeviceType4084270792.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.VR.VRSettings::set_enabled(System.Boolean)
extern "C"  void VRSettings_set_enabled_m1323672641 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.VR.VRSettings::set_showDeviceView(System.Boolean)
extern "C"  void VRSettings_set_showDeviceView_m508268136 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.VR.VRDeviceType UnityEngine.VR.VRSettings::get_loadedDevice()
extern "C"  int32_t VRSettings_get_loadedDevice_m1234549204 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.VR.VRSettings::set_loadedDevice(UnityEngine.VR.VRDeviceType)
extern "C"  void VRSettings_set_loadedDevice_m2941855255 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.VR.VRSettings::get_loadedDeviceName()
extern "C"  String_t* VRSettings_get_loadedDeviceName_m2761945768 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.VR.VRSettings::LoadDeviceByName(System.String)
extern "C"  void VRSettings_LoadDeviceByName_m1609316072 (Il2CppObject * __this /* static, unused */, String_t* ___deviceName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.VR.VRSettings::LoadDeviceByName(System.String[])
extern "C"  void VRSettings_LoadDeviceByName_m364569606 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t4054002952* ___prioritizedDeviceNameList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
