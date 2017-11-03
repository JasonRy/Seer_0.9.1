#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;
// UnityStandardAssets.CinematicEffects.FXAA/Preset[]
struct PresetU5BU5D_t3127678117;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Cin8910124.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CinematicEffects.FXAA
struct  FXAA_t3127672684  : public Il2CppObject
{
public:
	// UnityEngine.Shader UnityStandardAssets.CinematicEffects.FXAA::m_Shader
	Shader_t3191267369 * ___m_Shader_0;
	// UnityEngine.Material UnityStandardAssets.CinematicEffects.FXAA::m_Material
	Material_t3870600107 * ___m_Material_1;
	// UnityStandardAssets.CinematicEffects.FXAA/Preset UnityStandardAssets.CinematicEffects.FXAA::preset
	Preset_t8910124  ___preset_2;
	// System.Boolean UnityStandardAssets.CinematicEffects.FXAA::<validSourceFormat>k__BackingField
	bool ___U3CvalidSourceFormatU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_m_Shader_0() { return static_cast<int32_t>(offsetof(FXAA_t3127672684, ___m_Shader_0)); }
	inline Shader_t3191267369 * get_m_Shader_0() const { return ___m_Shader_0; }
	inline Shader_t3191267369 ** get_address_of_m_Shader_0() { return &___m_Shader_0; }
	inline void set_m_Shader_0(Shader_t3191267369 * value)
	{
		___m_Shader_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Shader_0, value);
	}

	inline static int32_t get_offset_of_m_Material_1() { return static_cast<int32_t>(offsetof(FXAA_t3127672684, ___m_Material_1)); }
	inline Material_t3870600107 * get_m_Material_1() const { return ___m_Material_1; }
	inline Material_t3870600107 ** get_address_of_m_Material_1() { return &___m_Material_1; }
	inline void set_m_Material_1(Material_t3870600107 * value)
	{
		___m_Material_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Material_1, value);
	}

	inline static int32_t get_offset_of_preset_2() { return static_cast<int32_t>(offsetof(FXAA_t3127672684, ___preset_2)); }
	inline Preset_t8910124  get_preset_2() const { return ___preset_2; }
	inline Preset_t8910124 * get_address_of_preset_2() { return &___preset_2; }
	inline void set_preset_2(Preset_t8910124  value)
	{
		___preset_2 = value;
	}

	inline static int32_t get_offset_of_U3CvalidSourceFormatU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FXAA_t3127672684, ___U3CvalidSourceFormatU3Ek__BackingField_4)); }
	inline bool get_U3CvalidSourceFormatU3Ek__BackingField_4() const { return ___U3CvalidSourceFormatU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CvalidSourceFormatU3Ek__BackingField_4() { return &___U3CvalidSourceFormatU3Ek__BackingField_4; }
	inline void set_U3CvalidSourceFormatU3Ek__BackingField_4(bool value)
	{
		___U3CvalidSourceFormatU3Ek__BackingField_4 = value;
	}
};

struct FXAA_t3127672684_StaticFields
{
public:
	// UnityStandardAssets.CinematicEffects.FXAA/Preset[] UnityStandardAssets.CinematicEffects.FXAA::availablePresets
	PresetU5BU5D_t3127678117* ___availablePresets_3;

public:
	inline static int32_t get_offset_of_availablePresets_3() { return static_cast<int32_t>(offsetof(FXAA_t3127672684_StaticFields, ___availablePresets_3)); }
	inline PresetU5BU5D_t3127678117* get_availablePresets_3() const { return ___availablePresets_3; }
	inline PresetU5BU5D_t3127678117** get_address_of_availablePresets_3() { return &___availablePresets_3; }
	inline void set_availablePresets_3(PresetU5BU5D_t3127678117* value)
	{
		___availablePresets_3 = value;
		Il2CppCodeGenWriteBarrier(&___availablePresets_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
