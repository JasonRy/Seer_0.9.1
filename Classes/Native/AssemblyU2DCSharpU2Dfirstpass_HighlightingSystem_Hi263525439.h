#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t1654378665;
// HighlightingSystem.HighlightingBlitter
struct HighlightingBlitter_t3401068508;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;
// UnityEngine.Camera
struct Camera_t2727095145;
// System.String[]
struct StringU5BU5D_t4054002952;
// UnityEngine.Shader[]
struct ShaderU5BU5D_t3604329748;
// UnityEngine.Material[]
struct MaterialU5BU5D_t170856778;
// UnityEngine.Material
struct Material_t3870600107;
// System.Collections.Generic.HashSet`1<UnityEngine.Camera>
struct HashSet_1_t1881523921;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Rendering_CameraEvent3586806131.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "UnityEngine_UnityEngine_Rendering_RenderTargetIden1322160672.h"
#include "UnityEngine_UnityEngine_Rendering_GraphicsDeviceTy3609427819.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightingSystem.HighlightingBase
struct  HighlightingBase_t263525439  : public MonoBehaviour_t667441552
{
public:
	// System.Single HighlightingSystem.HighlightingBase::offsetFactor
	float ___offsetFactor_12;
	// System.Single HighlightingSystem.HighlightingBase::offsetUnits
	float ___offsetUnits_13;
	// UnityEngine.Rendering.CommandBuffer HighlightingSystem.HighlightingBase::renderBuffer
	CommandBuffer_t1654378665 * ___renderBuffer_14;
	// System.Int32 HighlightingSystem.HighlightingBase::cachedWidth
	int32_t ___cachedWidth_15;
	// System.Int32 HighlightingSystem.HighlightingBase::cachedHeight
	int32_t ___cachedHeight_16;
	// System.Int32 HighlightingSystem.HighlightingBase::cachedAA
	int32_t ___cachedAA_17;
	// System.Int32 HighlightingSystem.HighlightingBase::_downsampleFactor
	int32_t ____downsampleFactor_18;
	// System.Int32 HighlightingSystem.HighlightingBase::_iterations
	int32_t ____iterations_19;
	// System.Single HighlightingSystem.HighlightingBase::_blurMinSpread
	float ____blurMinSpread_20;
	// System.Single HighlightingSystem.HighlightingBase::_blurSpread
	float ____blurSpread_21;
	// System.Single HighlightingSystem.HighlightingBase::_blurIntensity
	float ____blurIntensity_22;
	// HighlightingSystem.HighlightingBlitter HighlightingSystem.HighlightingBase::_blitter
	HighlightingBlitter_t3401068508 * ____blitter_23;
	// UnityEngine.Rendering.RenderTargetIdentifier HighlightingSystem.HighlightingBase::highlightingBufferID
	RenderTargetIdentifier_t1322160672  ___highlightingBufferID_24;
	// UnityEngine.RenderTexture HighlightingSystem.HighlightingBase::highlightingBuffer
	RenderTexture_t1963041563 * ___highlightingBuffer_25;
	// UnityEngine.Camera HighlightingSystem.HighlightingBase::cam
	Camera_t2727095145 * ___cam_26;
	// System.Boolean HighlightingSystem.HighlightingBase::isDepthAvailable
	bool ___isDepthAvailable_27;
	// UnityEngine.Material HighlightingSystem.HighlightingBase::blurMaterial
	Material_t3870600107 * ___blurMaterial_31;
	// UnityEngine.Material HighlightingSystem.HighlightingBase::cutMaterial
	Material_t3870600107 * ___cutMaterial_32;
	// UnityEngine.Material HighlightingSystem.HighlightingBase::compMaterial
	Material_t3870600107 * ___compMaterial_33;

public:
	inline static int32_t get_offset_of_offsetFactor_12() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439, ___offsetFactor_12)); }
	inline float get_offsetFactor_12() const { return ___offsetFactor_12; }
	inline float* get_address_of_offsetFactor_12() { return &___offsetFactor_12; }
	inline void set_offsetFactor_12(float value)
	{
		___offsetFactor_12 = value;
	}

	inline static int32_t get_offset_of_offsetUnits_13() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439, ___offsetUnits_13)); }
	inline float get_offsetUnits_13() const { return ___offsetUnits_13; }
	inline float* get_address_of_offsetUnits_13() { return &___offsetUnits_13; }
	inline void set_offsetUnits_13(float value)
	{
		___offsetUnits_13 = value;
	}

	inline static int32_t get_offset_of_renderBuffer_14() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439, ___renderBuffer_14)); }
	inline CommandBuffer_t1654378665 * get_renderBuffer_14() const { return ___renderBuffer_14; }
	inline CommandBuffer_t1654378665 ** get_address_of_renderBuffer_14() { return &___renderBuffer_14; }
	inline void set_renderBuffer_14(CommandBuffer_t1654378665 * value)
	{
		___renderBuffer_14 = value;
		Il2CppCodeGenWriteBarrier(&___renderBuffer_14, value);
	}

	inline static int32_t get_offset_of_cachedWidth_15() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439, ___cachedWidth_15)); }
	inline int32_t get_cachedWidth_15() const { return ___cachedWidth_15; }
	inline int32_t* get_address_of_cachedWidth_15() { return &___cachedWidth_15; }
	inline void set_cachedWidth_15(int32_t value)
	{
		___cachedWidth_15 = value;
	}

	inline static int32_t get_offset_of_cachedHeight_16() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439, ___cachedHeight_16)); }
	inline int32_t get_cachedHeight_16() const { return ___cachedHeight_16; }
	inline int32_t* get_address_of_cachedHeight_16() { return &___cachedHeight_16; }
	inline void set_cachedHeight_16(int32_t value)
	{
		___cachedHeight_16 = value;
	}

	inline static int32_t get_offset_of_cachedAA_17() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439, ___cachedAA_17)); }
	inline int32_t get_cachedAA_17() const { return ___cachedAA_17; }
	inline int32_t* get_address_of_cachedAA_17() { return &___cachedAA_17; }
	inline void set_cachedAA_17(int32_t value)
	{
		___cachedAA_17 = value;
	}

	inline static int32_t get_offset_of__downsampleFactor_18() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439, ____downsampleFactor_18)); }
	inline int32_t get__downsampleFactor_18() const { return ____downsampleFactor_18; }
	inline int32_t* get_address_of__downsampleFactor_18() { return &____downsampleFactor_18; }
	inline void set__downsampleFactor_18(int32_t value)
	{
		____downsampleFactor_18 = value;
	}

	inline static int32_t get_offset_of__iterations_19() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439, ____iterations_19)); }
	inline int32_t get__iterations_19() const { return ____iterations_19; }
	inline int32_t* get_address_of__iterations_19() { return &____iterations_19; }
	inline void set__iterations_19(int32_t value)
	{
		____iterations_19 = value;
	}

	inline static int32_t get_offset_of__blurMinSpread_20() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439, ____blurMinSpread_20)); }
	inline float get__blurMinSpread_20() const { return ____blurMinSpread_20; }
	inline float* get_address_of__blurMinSpread_20() { return &____blurMinSpread_20; }
	inline void set__blurMinSpread_20(float value)
	{
		____blurMinSpread_20 = value;
	}

	inline static int32_t get_offset_of__blurSpread_21() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439, ____blurSpread_21)); }
	inline float get__blurSpread_21() const { return ____blurSpread_21; }
	inline float* get_address_of__blurSpread_21() { return &____blurSpread_21; }
	inline void set__blurSpread_21(float value)
	{
		____blurSpread_21 = value;
	}

	inline static int32_t get_offset_of__blurIntensity_22() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439, ____blurIntensity_22)); }
	inline float get__blurIntensity_22() const { return ____blurIntensity_22; }
	inline float* get_address_of__blurIntensity_22() { return &____blurIntensity_22; }
	inline void set__blurIntensity_22(float value)
	{
		____blurIntensity_22 = value;
	}

	inline static int32_t get_offset_of__blitter_23() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439, ____blitter_23)); }
	inline HighlightingBlitter_t3401068508 * get__blitter_23() const { return ____blitter_23; }
	inline HighlightingBlitter_t3401068508 ** get_address_of__blitter_23() { return &____blitter_23; }
	inline void set__blitter_23(HighlightingBlitter_t3401068508 * value)
	{
		____blitter_23 = value;
		Il2CppCodeGenWriteBarrier(&____blitter_23, value);
	}

	inline static int32_t get_offset_of_highlightingBufferID_24() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439, ___highlightingBufferID_24)); }
	inline RenderTargetIdentifier_t1322160672  get_highlightingBufferID_24() const { return ___highlightingBufferID_24; }
	inline RenderTargetIdentifier_t1322160672 * get_address_of_highlightingBufferID_24() { return &___highlightingBufferID_24; }
	inline void set_highlightingBufferID_24(RenderTargetIdentifier_t1322160672  value)
	{
		___highlightingBufferID_24 = value;
	}

	inline static int32_t get_offset_of_highlightingBuffer_25() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439, ___highlightingBuffer_25)); }
	inline RenderTexture_t1963041563 * get_highlightingBuffer_25() const { return ___highlightingBuffer_25; }
	inline RenderTexture_t1963041563 ** get_address_of_highlightingBuffer_25() { return &___highlightingBuffer_25; }
	inline void set_highlightingBuffer_25(RenderTexture_t1963041563 * value)
	{
		___highlightingBuffer_25 = value;
		Il2CppCodeGenWriteBarrier(&___highlightingBuffer_25, value);
	}

	inline static int32_t get_offset_of_cam_26() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439, ___cam_26)); }
	inline Camera_t2727095145 * get_cam_26() const { return ___cam_26; }
	inline Camera_t2727095145 ** get_address_of_cam_26() { return &___cam_26; }
	inline void set_cam_26(Camera_t2727095145 * value)
	{
		___cam_26 = value;
		Il2CppCodeGenWriteBarrier(&___cam_26, value);
	}

	inline static int32_t get_offset_of_isDepthAvailable_27() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439, ___isDepthAvailable_27)); }
	inline bool get_isDepthAvailable_27() const { return ___isDepthAvailable_27; }
	inline bool* get_address_of_isDepthAvailable_27() { return &___isDepthAvailable_27; }
	inline void set_isDepthAvailable_27(bool value)
	{
		___isDepthAvailable_27 = value;
	}

	inline static int32_t get_offset_of_blurMaterial_31() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439, ___blurMaterial_31)); }
	inline Material_t3870600107 * get_blurMaterial_31() const { return ___blurMaterial_31; }
	inline Material_t3870600107 ** get_address_of_blurMaterial_31() { return &___blurMaterial_31; }
	inline void set_blurMaterial_31(Material_t3870600107 * value)
	{
		___blurMaterial_31 = value;
		Il2CppCodeGenWriteBarrier(&___blurMaterial_31, value);
	}

	inline static int32_t get_offset_of_cutMaterial_32() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439, ___cutMaterial_32)); }
	inline Material_t3870600107 * get_cutMaterial_32() const { return ___cutMaterial_32; }
	inline Material_t3870600107 ** get_address_of_cutMaterial_32() { return &___cutMaterial_32; }
	inline void set_cutMaterial_32(Material_t3870600107 * value)
	{
		___cutMaterial_32 = value;
		Il2CppCodeGenWriteBarrier(&___cutMaterial_32, value);
	}

	inline static int32_t get_offset_of_compMaterial_33() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439, ___compMaterial_33)); }
	inline Material_t3870600107 * get_compMaterial_33() const { return ___compMaterial_33; }
	inline Material_t3870600107 ** get_address_of_compMaterial_33() { return &___compMaterial_33; }
	inline void set_compMaterial_33(Material_t3870600107 * value)
	{
		___compMaterial_33 = value;
		Il2CppCodeGenWriteBarrier(&___compMaterial_33, value);
	}
};

struct HighlightingBase_t263525439_StaticFields
{
public:
	// UnityEngine.Color HighlightingSystem.HighlightingBase::colorClear
	Color_t4194546905  ___colorClear_6;
	// System.String HighlightingSystem.HighlightingBase::renderBufferName
	String_t* ___renderBufferName_7;
	// UnityEngine.Matrix4x4 HighlightingSystem.HighlightingBase::identityMatrix
	Matrix4x4_t1651859333  ___identityMatrix_8;
	// UnityEngine.Rendering.RenderTargetIdentifier HighlightingSystem.HighlightingBase::cameraTargetID
	RenderTargetIdentifier_t1322160672  ___cameraTargetID_9;
	// UnityEngine.Mesh HighlightingSystem.HighlightingBase::quad
	Mesh_t4241756145 * ___quad_10;
	// UnityEngine.Rendering.GraphicsDeviceType HighlightingSystem.HighlightingBase::device
	int32_t ___device_11;
	// System.String[] HighlightingSystem.HighlightingBase::shaderPaths
	StringU5BU5D_t4054002952* ___shaderPaths_28;
	// UnityEngine.Shader[] HighlightingSystem.HighlightingBase::shaders
	ShaderU5BU5D_t3604329748* ___shaders_29;
	// UnityEngine.Material[] HighlightingSystem.HighlightingBase::materials
	MaterialU5BU5D_t170856778* ___materials_30;
	// System.Boolean HighlightingSystem.HighlightingBase::initialized
	bool ___initialized_34;
	// System.Collections.Generic.HashSet`1<UnityEngine.Camera> HighlightingSystem.HighlightingBase::cameras
	HashSet_1_t1881523921 * ___cameras_35;

public:
	inline static int32_t get_offset_of_colorClear_6() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439_StaticFields, ___colorClear_6)); }
	inline Color_t4194546905  get_colorClear_6() const { return ___colorClear_6; }
	inline Color_t4194546905 * get_address_of_colorClear_6() { return &___colorClear_6; }
	inline void set_colorClear_6(Color_t4194546905  value)
	{
		___colorClear_6 = value;
	}

	inline static int32_t get_offset_of_renderBufferName_7() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439_StaticFields, ___renderBufferName_7)); }
	inline String_t* get_renderBufferName_7() const { return ___renderBufferName_7; }
	inline String_t** get_address_of_renderBufferName_7() { return &___renderBufferName_7; }
	inline void set_renderBufferName_7(String_t* value)
	{
		___renderBufferName_7 = value;
		Il2CppCodeGenWriteBarrier(&___renderBufferName_7, value);
	}

	inline static int32_t get_offset_of_identityMatrix_8() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439_StaticFields, ___identityMatrix_8)); }
	inline Matrix4x4_t1651859333  get_identityMatrix_8() const { return ___identityMatrix_8; }
	inline Matrix4x4_t1651859333 * get_address_of_identityMatrix_8() { return &___identityMatrix_8; }
	inline void set_identityMatrix_8(Matrix4x4_t1651859333  value)
	{
		___identityMatrix_8 = value;
	}

	inline static int32_t get_offset_of_cameraTargetID_9() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439_StaticFields, ___cameraTargetID_9)); }
	inline RenderTargetIdentifier_t1322160672  get_cameraTargetID_9() const { return ___cameraTargetID_9; }
	inline RenderTargetIdentifier_t1322160672 * get_address_of_cameraTargetID_9() { return &___cameraTargetID_9; }
	inline void set_cameraTargetID_9(RenderTargetIdentifier_t1322160672  value)
	{
		___cameraTargetID_9 = value;
	}

	inline static int32_t get_offset_of_quad_10() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439_StaticFields, ___quad_10)); }
	inline Mesh_t4241756145 * get_quad_10() const { return ___quad_10; }
	inline Mesh_t4241756145 ** get_address_of_quad_10() { return &___quad_10; }
	inline void set_quad_10(Mesh_t4241756145 * value)
	{
		___quad_10 = value;
		Il2CppCodeGenWriteBarrier(&___quad_10, value);
	}

	inline static int32_t get_offset_of_device_11() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439_StaticFields, ___device_11)); }
	inline int32_t get_device_11() const { return ___device_11; }
	inline int32_t* get_address_of_device_11() { return &___device_11; }
	inline void set_device_11(int32_t value)
	{
		___device_11 = value;
	}

	inline static int32_t get_offset_of_shaderPaths_28() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439_StaticFields, ___shaderPaths_28)); }
	inline StringU5BU5D_t4054002952* get_shaderPaths_28() const { return ___shaderPaths_28; }
	inline StringU5BU5D_t4054002952** get_address_of_shaderPaths_28() { return &___shaderPaths_28; }
	inline void set_shaderPaths_28(StringU5BU5D_t4054002952* value)
	{
		___shaderPaths_28 = value;
		Il2CppCodeGenWriteBarrier(&___shaderPaths_28, value);
	}

	inline static int32_t get_offset_of_shaders_29() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439_StaticFields, ___shaders_29)); }
	inline ShaderU5BU5D_t3604329748* get_shaders_29() const { return ___shaders_29; }
	inline ShaderU5BU5D_t3604329748** get_address_of_shaders_29() { return &___shaders_29; }
	inline void set_shaders_29(ShaderU5BU5D_t3604329748* value)
	{
		___shaders_29 = value;
		Il2CppCodeGenWriteBarrier(&___shaders_29, value);
	}

	inline static int32_t get_offset_of_materials_30() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439_StaticFields, ___materials_30)); }
	inline MaterialU5BU5D_t170856778* get_materials_30() const { return ___materials_30; }
	inline MaterialU5BU5D_t170856778** get_address_of_materials_30() { return &___materials_30; }
	inline void set_materials_30(MaterialU5BU5D_t170856778* value)
	{
		___materials_30 = value;
		Il2CppCodeGenWriteBarrier(&___materials_30, value);
	}

	inline static int32_t get_offset_of_initialized_34() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439_StaticFields, ___initialized_34)); }
	inline bool get_initialized_34() const { return ___initialized_34; }
	inline bool* get_address_of_initialized_34() { return &___initialized_34; }
	inline void set_initialized_34(bool value)
	{
		___initialized_34 = value;
	}

	inline static int32_t get_offset_of_cameras_35() { return static_cast<int32_t>(offsetof(HighlightingBase_t263525439_StaticFields, ___cameras_35)); }
	inline HashSet_1_t1881523921 * get_cameras_35() const { return ___cameras_35; }
	inline HashSet_1_t1881523921 ** get_address_of_cameras_35() { return &___cameras_35; }
	inline void set_cameras_35(HashSet_1_t1881523921 * value)
	{
		___cameras_35 = value;
		Il2CppCodeGenWriteBarrier(&___cameras_35, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
