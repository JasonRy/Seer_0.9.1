﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;
// System.Collections.Generic.List`1<UISpriteData>
struct List_1_t651564179;
// UIAtlas
struct UIAtlas_t281921111;
// System.Collections.Generic.List`1<UIAtlas/Sprite>
struct List_1_t4037108845;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;
// System.Comparison`1<UISpriteData>
struct Comparison_1_t2294707110;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_UIAtlas_Coordinates3883285027.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIAtlas
struct  UIAtlas_t281921111  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Material UIAtlas::material
	Material_t3870600107 * ___material_2;
	// System.Collections.Generic.List`1<UISpriteData> UIAtlas::mSprites
	List_1_t651564179 * ___mSprites_3;
	// System.Single UIAtlas::mPixelSize
	float ___mPixelSize_4;
	// UIAtlas UIAtlas::mReplacement
	UIAtlas_t281921111 * ___mReplacement_5;
	// UIAtlas/Coordinates UIAtlas::mCoordinates
	int32_t ___mCoordinates_6;
	// System.Collections.Generic.List`1<UIAtlas/Sprite> UIAtlas::sprites
	List_1_t4037108845 * ___sprites_7;
	// System.Int32 UIAtlas::mPMA
	int32_t ___mPMA_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UIAtlas::mSpriteIndices
	Dictionary_2_t1974256870 * ___mSpriteIndices_9;

public:
	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(UIAtlas_t281921111, ___material_2)); }
	inline Material_t3870600107 * get_material_2() const { return ___material_2; }
	inline Material_t3870600107 ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t3870600107 * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier(&___material_2, value);
	}

	inline static int32_t get_offset_of_mSprites_3() { return static_cast<int32_t>(offsetof(UIAtlas_t281921111, ___mSprites_3)); }
	inline List_1_t651564179 * get_mSprites_3() const { return ___mSprites_3; }
	inline List_1_t651564179 ** get_address_of_mSprites_3() { return &___mSprites_3; }
	inline void set_mSprites_3(List_1_t651564179 * value)
	{
		___mSprites_3 = value;
		Il2CppCodeGenWriteBarrier(&___mSprites_3, value);
	}

	inline static int32_t get_offset_of_mPixelSize_4() { return static_cast<int32_t>(offsetof(UIAtlas_t281921111, ___mPixelSize_4)); }
	inline float get_mPixelSize_4() const { return ___mPixelSize_4; }
	inline float* get_address_of_mPixelSize_4() { return &___mPixelSize_4; }
	inline void set_mPixelSize_4(float value)
	{
		___mPixelSize_4 = value;
	}

	inline static int32_t get_offset_of_mReplacement_5() { return static_cast<int32_t>(offsetof(UIAtlas_t281921111, ___mReplacement_5)); }
	inline UIAtlas_t281921111 * get_mReplacement_5() const { return ___mReplacement_5; }
	inline UIAtlas_t281921111 ** get_address_of_mReplacement_5() { return &___mReplacement_5; }
	inline void set_mReplacement_5(UIAtlas_t281921111 * value)
	{
		___mReplacement_5 = value;
		Il2CppCodeGenWriteBarrier(&___mReplacement_5, value);
	}

	inline static int32_t get_offset_of_mCoordinates_6() { return static_cast<int32_t>(offsetof(UIAtlas_t281921111, ___mCoordinates_6)); }
	inline int32_t get_mCoordinates_6() const { return ___mCoordinates_6; }
	inline int32_t* get_address_of_mCoordinates_6() { return &___mCoordinates_6; }
	inline void set_mCoordinates_6(int32_t value)
	{
		___mCoordinates_6 = value;
	}

	inline static int32_t get_offset_of_sprites_7() { return static_cast<int32_t>(offsetof(UIAtlas_t281921111, ___sprites_7)); }
	inline List_1_t4037108845 * get_sprites_7() const { return ___sprites_7; }
	inline List_1_t4037108845 ** get_address_of_sprites_7() { return &___sprites_7; }
	inline void set_sprites_7(List_1_t4037108845 * value)
	{
		___sprites_7 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_7, value);
	}

	inline static int32_t get_offset_of_mPMA_8() { return static_cast<int32_t>(offsetof(UIAtlas_t281921111, ___mPMA_8)); }
	inline int32_t get_mPMA_8() const { return ___mPMA_8; }
	inline int32_t* get_address_of_mPMA_8() { return &___mPMA_8; }
	inline void set_mPMA_8(int32_t value)
	{
		___mPMA_8 = value;
	}

	inline static int32_t get_offset_of_mSpriteIndices_9() { return static_cast<int32_t>(offsetof(UIAtlas_t281921111, ___mSpriteIndices_9)); }
	inline Dictionary_2_t1974256870 * get_mSpriteIndices_9() const { return ___mSpriteIndices_9; }
	inline Dictionary_2_t1974256870 ** get_address_of_mSpriteIndices_9() { return &___mSpriteIndices_9; }
	inline void set_mSpriteIndices_9(Dictionary_2_t1974256870 * value)
	{
		___mSpriteIndices_9 = value;
		Il2CppCodeGenWriteBarrier(&___mSpriteIndices_9, value);
	}
};

struct UIAtlas_t281921111_StaticFields
{
public:
	// System.Comparison`1<UISpriteData> UIAtlas::<>f__am$cache8
	Comparison_1_t2294707110 * ___U3CU3Ef__amU24cache8_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_10() { return static_cast<int32_t>(offsetof(UIAtlas_t281921111_StaticFields, ___U3CU3Ef__amU24cache8_10)); }
	inline Comparison_1_t2294707110 * get_U3CU3Ef__amU24cache8_10() const { return ___U3CU3Ef__amU24cache8_10; }
	inline Comparison_1_t2294707110 ** get_address_of_U3CU3Ef__amU24cache8_10() { return &___U3CU3Ef__amU24cache8_10; }
	inline void set_U3CU3Ef__amU24cache8_10(Comparison_1_t2294707110 * value)
	{
		___U3CU3Ef__amU24cache8_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif