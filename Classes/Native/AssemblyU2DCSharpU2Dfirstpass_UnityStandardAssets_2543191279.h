#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.CinematicEffects.AmbientOcclusion/Settings
struct Settings_t2857069837;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t1654378665;
// UnityEngine.Mesh
struct Mesh_t4241756145;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3503888053.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CinematicEffects.AmbientOcclusion
struct  AmbientOcclusion_t2543191279  : public MonoBehaviour_t667441552
{
public:
	// UnityStandardAssets.CinematicEffects.AmbientOcclusion/Settings UnityStandardAssets.CinematicEffects.AmbientOcclusion::settings
	Settings_t2857069837 * ___settings_2;
	// UnityEngine.Shader UnityStandardAssets.CinematicEffects.AmbientOcclusion::_aoShader
	Shader_t3191267369 * ____aoShader_3;
	// UnityEngine.Material UnityStandardAssets.CinematicEffects.AmbientOcclusion::_aoMaterial
	Material_t3870600107 * ____aoMaterial_4;
	// UnityEngine.Rendering.CommandBuffer UnityStandardAssets.CinematicEffects.AmbientOcclusion::_aoCommands
	CommandBuffer_t1654378665 * ____aoCommands_5;
	// UnityEngine.Mesh UnityStandardAssets.CinematicEffects.AmbientOcclusion::_quadMesh
	Mesh_t4241756145 * ____quadMesh_6;
	// UnityStandardAssets.CinematicEffects.AmbientOcclusion/PropertyObserver UnityStandardAssets.CinematicEffects.AmbientOcclusion::<propertyObserver>k__BackingField
	PropertyObserver_t3503888053  ___U3CpropertyObserverU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_settings_2() { return static_cast<int32_t>(offsetof(AmbientOcclusion_t2543191279, ___settings_2)); }
	inline Settings_t2857069837 * get_settings_2() const { return ___settings_2; }
	inline Settings_t2857069837 ** get_address_of_settings_2() { return &___settings_2; }
	inline void set_settings_2(Settings_t2857069837 * value)
	{
		___settings_2 = value;
		Il2CppCodeGenWriteBarrier(&___settings_2, value);
	}

	inline static int32_t get_offset_of__aoShader_3() { return static_cast<int32_t>(offsetof(AmbientOcclusion_t2543191279, ____aoShader_3)); }
	inline Shader_t3191267369 * get__aoShader_3() const { return ____aoShader_3; }
	inline Shader_t3191267369 ** get_address_of__aoShader_3() { return &____aoShader_3; }
	inline void set__aoShader_3(Shader_t3191267369 * value)
	{
		____aoShader_3 = value;
		Il2CppCodeGenWriteBarrier(&____aoShader_3, value);
	}

	inline static int32_t get_offset_of__aoMaterial_4() { return static_cast<int32_t>(offsetof(AmbientOcclusion_t2543191279, ____aoMaterial_4)); }
	inline Material_t3870600107 * get__aoMaterial_4() const { return ____aoMaterial_4; }
	inline Material_t3870600107 ** get_address_of__aoMaterial_4() { return &____aoMaterial_4; }
	inline void set__aoMaterial_4(Material_t3870600107 * value)
	{
		____aoMaterial_4 = value;
		Il2CppCodeGenWriteBarrier(&____aoMaterial_4, value);
	}

	inline static int32_t get_offset_of__aoCommands_5() { return static_cast<int32_t>(offsetof(AmbientOcclusion_t2543191279, ____aoCommands_5)); }
	inline CommandBuffer_t1654378665 * get__aoCommands_5() const { return ____aoCommands_5; }
	inline CommandBuffer_t1654378665 ** get_address_of__aoCommands_5() { return &____aoCommands_5; }
	inline void set__aoCommands_5(CommandBuffer_t1654378665 * value)
	{
		____aoCommands_5 = value;
		Il2CppCodeGenWriteBarrier(&____aoCommands_5, value);
	}

	inline static int32_t get_offset_of__quadMesh_6() { return static_cast<int32_t>(offsetof(AmbientOcclusion_t2543191279, ____quadMesh_6)); }
	inline Mesh_t4241756145 * get__quadMesh_6() const { return ____quadMesh_6; }
	inline Mesh_t4241756145 ** get_address_of__quadMesh_6() { return &____quadMesh_6; }
	inline void set__quadMesh_6(Mesh_t4241756145 * value)
	{
		____quadMesh_6 = value;
		Il2CppCodeGenWriteBarrier(&____quadMesh_6, value);
	}

	inline static int32_t get_offset_of_U3CpropertyObserverU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AmbientOcclusion_t2543191279, ___U3CpropertyObserverU3Ek__BackingField_7)); }
	inline PropertyObserver_t3503888053  get_U3CpropertyObserverU3Ek__BackingField_7() const { return ___U3CpropertyObserverU3Ek__BackingField_7; }
	inline PropertyObserver_t3503888053 * get_address_of_U3CpropertyObserverU3Ek__BackingField_7() { return &___U3CpropertyObserverU3Ek__BackingField_7; }
	inline void set_U3CpropertyObserverU3Ek__BackingField_7(PropertyObserver_t3503888053  value)
	{
		___U3CpropertyObserverU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
