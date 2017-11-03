﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t1484067282;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t1484067281;
// BetterList`1<UnityEngine.Color>
struct BetterList_1_t1396547621;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIGeometry
struct  UIGeometry_t3586695974  : public Il2CppObject
{
public:
	// BetterList`1<UnityEngine.Vector3> UIGeometry::verts
	BetterList_1_t1484067282 * ___verts_0;
	// BetterList`1<UnityEngine.Vector2> UIGeometry::uvs
	BetterList_1_t1484067281 * ___uvs_1;
	// BetterList`1<UnityEngine.Color> UIGeometry::cols
	BetterList_1_t1396547621 * ___cols_2;
	// BetterList`1<UnityEngine.Vector3> UIGeometry::mRtpVerts
	BetterList_1_t1484067282 * ___mRtpVerts_3;
	// UnityEngine.Vector3 UIGeometry::mRtpNormal
	Vector3_t4282066566  ___mRtpNormal_4;
	// UnityEngine.Vector4 UIGeometry::mRtpTan
	Vector4_t4282066567  ___mRtpTan_5;

public:
	inline static int32_t get_offset_of_verts_0() { return static_cast<int32_t>(offsetof(UIGeometry_t3586695974, ___verts_0)); }
	inline BetterList_1_t1484067282 * get_verts_0() const { return ___verts_0; }
	inline BetterList_1_t1484067282 ** get_address_of_verts_0() { return &___verts_0; }
	inline void set_verts_0(BetterList_1_t1484067282 * value)
	{
		___verts_0 = value;
		Il2CppCodeGenWriteBarrier(&___verts_0, value);
	}

	inline static int32_t get_offset_of_uvs_1() { return static_cast<int32_t>(offsetof(UIGeometry_t3586695974, ___uvs_1)); }
	inline BetterList_1_t1484067281 * get_uvs_1() const { return ___uvs_1; }
	inline BetterList_1_t1484067281 ** get_address_of_uvs_1() { return &___uvs_1; }
	inline void set_uvs_1(BetterList_1_t1484067281 * value)
	{
		___uvs_1 = value;
		Il2CppCodeGenWriteBarrier(&___uvs_1, value);
	}

	inline static int32_t get_offset_of_cols_2() { return static_cast<int32_t>(offsetof(UIGeometry_t3586695974, ___cols_2)); }
	inline BetterList_1_t1396547621 * get_cols_2() const { return ___cols_2; }
	inline BetterList_1_t1396547621 ** get_address_of_cols_2() { return &___cols_2; }
	inline void set_cols_2(BetterList_1_t1396547621 * value)
	{
		___cols_2 = value;
		Il2CppCodeGenWriteBarrier(&___cols_2, value);
	}

	inline static int32_t get_offset_of_mRtpVerts_3() { return static_cast<int32_t>(offsetof(UIGeometry_t3586695974, ___mRtpVerts_3)); }
	inline BetterList_1_t1484067282 * get_mRtpVerts_3() const { return ___mRtpVerts_3; }
	inline BetterList_1_t1484067282 ** get_address_of_mRtpVerts_3() { return &___mRtpVerts_3; }
	inline void set_mRtpVerts_3(BetterList_1_t1484067282 * value)
	{
		___mRtpVerts_3 = value;
		Il2CppCodeGenWriteBarrier(&___mRtpVerts_3, value);
	}

	inline static int32_t get_offset_of_mRtpNormal_4() { return static_cast<int32_t>(offsetof(UIGeometry_t3586695974, ___mRtpNormal_4)); }
	inline Vector3_t4282066566  get_mRtpNormal_4() const { return ___mRtpNormal_4; }
	inline Vector3_t4282066566 * get_address_of_mRtpNormal_4() { return &___mRtpNormal_4; }
	inline void set_mRtpNormal_4(Vector3_t4282066566  value)
	{
		___mRtpNormal_4 = value;
	}

	inline static int32_t get_offset_of_mRtpTan_5() { return static_cast<int32_t>(offsetof(UIGeometry_t3586695974, ___mRtpTan_5)); }
	inline Vector4_t4282066567  get_mRtpTan_5() const { return ___mRtpTan_5; }
	inline Vector4_t4282066567 * get_address_of_mRtpTan_5() { return &___mRtpTan_5; }
	inline void set_mRtpTan_5(Vector4_t4282066567  value)
	{
		___mRtpTan_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
