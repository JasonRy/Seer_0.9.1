#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t343690676;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.LineRenderer
struct LineRenderer_t1892709339;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t1907060817;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1355284822;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BackGroundEffect
struct  BackGroundEffect_t616462495  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Image BackGroundEffect::sprite1
	Image_t538875265 * ___sprite1_2;
	// UnityEngine.UI.Image BackGroundEffect::sprite2
	Image_t538875265 * ___sprite2_3;
	// UnityEngine.ParticleSystem BackGroundEffect::PE
	ParticleSystem_t381473177 * ___PE_4;
	// UnityEngine.ParticleSystem/Particle[] BackGroundEffect::partocles
	ParticleU5BU5D_t343690676* ___partocles_5;
	// UnityEngine.GameObject BackGroundEffect::line
	GameObject_t3674682005 * ___line_6;
	// UnityEngine.Material BackGroundEffect::lineMater
	Material_t3870600107 * ___lineMater_7;
	// UnityEngine.LineRenderer BackGroundEffect::LR
	LineRenderer_t1892709339 * ___LR_8;
	// UnityEngine.UI.Image BackGroundEffect::im
	Image_t538875265 * ___im_9;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> BackGroundEffect::IMS
	List_1_t1907060817 * ___IMS_10;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> BackGroundEffect::L1
	List_1_t1355284822 * ___L1_11;
	// UnityEngine.Transform BackGroundEffect::pointTrs
	Transform_t1659122786 * ___pointTrs_12;
	// UnityEngine.Transform BackGroundEffect::lineTrs
	Transform_t1659122786 * ___lineTrs_13;
	// UnityEngine.Camera BackGroundEffect::camera
	Camera_t2727095145 * ___camera_14;

public:
	inline static int32_t get_offset_of_sprite1_2() { return static_cast<int32_t>(offsetof(BackGroundEffect_t616462495, ___sprite1_2)); }
	inline Image_t538875265 * get_sprite1_2() const { return ___sprite1_2; }
	inline Image_t538875265 ** get_address_of_sprite1_2() { return &___sprite1_2; }
	inline void set_sprite1_2(Image_t538875265 * value)
	{
		___sprite1_2 = value;
		Il2CppCodeGenWriteBarrier(&___sprite1_2, value);
	}

	inline static int32_t get_offset_of_sprite2_3() { return static_cast<int32_t>(offsetof(BackGroundEffect_t616462495, ___sprite2_3)); }
	inline Image_t538875265 * get_sprite2_3() const { return ___sprite2_3; }
	inline Image_t538875265 ** get_address_of_sprite2_3() { return &___sprite2_3; }
	inline void set_sprite2_3(Image_t538875265 * value)
	{
		___sprite2_3 = value;
		Il2CppCodeGenWriteBarrier(&___sprite2_3, value);
	}

	inline static int32_t get_offset_of_PE_4() { return static_cast<int32_t>(offsetof(BackGroundEffect_t616462495, ___PE_4)); }
	inline ParticleSystem_t381473177 * get_PE_4() const { return ___PE_4; }
	inline ParticleSystem_t381473177 ** get_address_of_PE_4() { return &___PE_4; }
	inline void set_PE_4(ParticleSystem_t381473177 * value)
	{
		___PE_4 = value;
		Il2CppCodeGenWriteBarrier(&___PE_4, value);
	}

	inline static int32_t get_offset_of_partocles_5() { return static_cast<int32_t>(offsetof(BackGroundEffect_t616462495, ___partocles_5)); }
	inline ParticleU5BU5D_t343690676* get_partocles_5() const { return ___partocles_5; }
	inline ParticleU5BU5D_t343690676** get_address_of_partocles_5() { return &___partocles_5; }
	inline void set_partocles_5(ParticleU5BU5D_t343690676* value)
	{
		___partocles_5 = value;
		Il2CppCodeGenWriteBarrier(&___partocles_5, value);
	}

	inline static int32_t get_offset_of_line_6() { return static_cast<int32_t>(offsetof(BackGroundEffect_t616462495, ___line_6)); }
	inline GameObject_t3674682005 * get_line_6() const { return ___line_6; }
	inline GameObject_t3674682005 ** get_address_of_line_6() { return &___line_6; }
	inline void set_line_6(GameObject_t3674682005 * value)
	{
		___line_6 = value;
		Il2CppCodeGenWriteBarrier(&___line_6, value);
	}

	inline static int32_t get_offset_of_lineMater_7() { return static_cast<int32_t>(offsetof(BackGroundEffect_t616462495, ___lineMater_7)); }
	inline Material_t3870600107 * get_lineMater_7() const { return ___lineMater_7; }
	inline Material_t3870600107 ** get_address_of_lineMater_7() { return &___lineMater_7; }
	inline void set_lineMater_7(Material_t3870600107 * value)
	{
		___lineMater_7 = value;
		Il2CppCodeGenWriteBarrier(&___lineMater_7, value);
	}

	inline static int32_t get_offset_of_LR_8() { return static_cast<int32_t>(offsetof(BackGroundEffect_t616462495, ___LR_8)); }
	inline LineRenderer_t1892709339 * get_LR_8() const { return ___LR_8; }
	inline LineRenderer_t1892709339 ** get_address_of_LR_8() { return &___LR_8; }
	inline void set_LR_8(LineRenderer_t1892709339 * value)
	{
		___LR_8 = value;
		Il2CppCodeGenWriteBarrier(&___LR_8, value);
	}

	inline static int32_t get_offset_of_im_9() { return static_cast<int32_t>(offsetof(BackGroundEffect_t616462495, ___im_9)); }
	inline Image_t538875265 * get_im_9() const { return ___im_9; }
	inline Image_t538875265 ** get_address_of_im_9() { return &___im_9; }
	inline void set_im_9(Image_t538875265 * value)
	{
		___im_9 = value;
		Il2CppCodeGenWriteBarrier(&___im_9, value);
	}

	inline static int32_t get_offset_of_IMS_10() { return static_cast<int32_t>(offsetof(BackGroundEffect_t616462495, ___IMS_10)); }
	inline List_1_t1907060817 * get_IMS_10() const { return ___IMS_10; }
	inline List_1_t1907060817 ** get_address_of_IMS_10() { return &___IMS_10; }
	inline void set_IMS_10(List_1_t1907060817 * value)
	{
		___IMS_10 = value;
		Il2CppCodeGenWriteBarrier(&___IMS_10, value);
	}

	inline static int32_t get_offset_of_L1_11() { return static_cast<int32_t>(offsetof(BackGroundEffect_t616462495, ___L1_11)); }
	inline List_1_t1355284822 * get_L1_11() const { return ___L1_11; }
	inline List_1_t1355284822 ** get_address_of_L1_11() { return &___L1_11; }
	inline void set_L1_11(List_1_t1355284822 * value)
	{
		___L1_11 = value;
		Il2CppCodeGenWriteBarrier(&___L1_11, value);
	}

	inline static int32_t get_offset_of_pointTrs_12() { return static_cast<int32_t>(offsetof(BackGroundEffect_t616462495, ___pointTrs_12)); }
	inline Transform_t1659122786 * get_pointTrs_12() const { return ___pointTrs_12; }
	inline Transform_t1659122786 ** get_address_of_pointTrs_12() { return &___pointTrs_12; }
	inline void set_pointTrs_12(Transform_t1659122786 * value)
	{
		___pointTrs_12 = value;
		Il2CppCodeGenWriteBarrier(&___pointTrs_12, value);
	}

	inline static int32_t get_offset_of_lineTrs_13() { return static_cast<int32_t>(offsetof(BackGroundEffect_t616462495, ___lineTrs_13)); }
	inline Transform_t1659122786 * get_lineTrs_13() const { return ___lineTrs_13; }
	inline Transform_t1659122786 ** get_address_of_lineTrs_13() { return &___lineTrs_13; }
	inline void set_lineTrs_13(Transform_t1659122786 * value)
	{
		___lineTrs_13 = value;
		Il2CppCodeGenWriteBarrier(&___lineTrs_13, value);
	}

	inline static int32_t get_offset_of_camera_14() { return static_cast<int32_t>(offsetof(BackGroundEffect_t616462495, ___camera_14)); }
	inline Camera_t2727095145 * get_camera_14() const { return ___camera_14; }
	inline Camera_t2727095145 ** get_address_of_camera_14() { return &___camera_14; }
	inline void set_camera_14(Camera_t2727095145 * value)
	{
		___camera_14 = value;
		Il2CppCodeGenWriteBarrier(&___camera_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
