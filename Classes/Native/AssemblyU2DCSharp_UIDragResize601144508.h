#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIWidget
struct UIWidget_t769069560;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot240933195.h"
#include "UnityEngine_UnityEngine_Plane4206452690.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDragResize
struct  UIDragResize_t601144508  : public MonoBehaviour_t667441552
{
public:
	// UIWidget UIDragResize::target
	UIWidget_t769069560 * ___target_2;
	// UIWidget/Pivot UIDragResize::pivot
	int32_t ___pivot_3;
	// System.Int32 UIDragResize::minWidth
	int32_t ___minWidth_4;
	// System.Int32 UIDragResize::minHeight
	int32_t ___minHeight_5;
	// System.Int32 UIDragResize::maxWidth
	int32_t ___maxWidth_6;
	// System.Int32 UIDragResize::maxHeight
	int32_t ___maxHeight_7;
	// System.Boolean UIDragResize::updateAnchors
	bool ___updateAnchors_8;
	// UnityEngine.Plane UIDragResize::mPlane
	Plane_t4206452690  ___mPlane_9;
	// UnityEngine.Vector3 UIDragResize::mRayPos
	Vector3_t4282066566  ___mRayPos_10;
	// UnityEngine.Vector3 UIDragResize::mLocalPos
	Vector3_t4282066566  ___mLocalPos_11;
	// System.Int32 UIDragResize::mWidth
	int32_t ___mWidth_12;
	// System.Int32 UIDragResize::mHeight
	int32_t ___mHeight_13;
	// System.Boolean UIDragResize::mDragging
	bool ___mDragging_14;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(UIDragResize_t601144508, ___target_2)); }
	inline UIWidget_t769069560 * get_target_2() const { return ___target_2; }
	inline UIWidget_t769069560 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(UIWidget_t769069560 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_pivot_3() { return static_cast<int32_t>(offsetof(UIDragResize_t601144508, ___pivot_3)); }
	inline int32_t get_pivot_3() const { return ___pivot_3; }
	inline int32_t* get_address_of_pivot_3() { return &___pivot_3; }
	inline void set_pivot_3(int32_t value)
	{
		___pivot_3 = value;
	}

	inline static int32_t get_offset_of_minWidth_4() { return static_cast<int32_t>(offsetof(UIDragResize_t601144508, ___minWidth_4)); }
	inline int32_t get_minWidth_4() const { return ___minWidth_4; }
	inline int32_t* get_address_of_minWidth_4() { return &___minWidth_4; }
	inline void set_minWidth_4(int32_t value)
	{
		___minWidth_4 = value;
	}

	inline static int32_t get_offset_of_minHeight_5() { return static_cast<int32_t>(offsetof(UIDragResize_t601144508, ___minHeight_5)); }
	inline int32_t get_minHeight_5() const { return ___minHeight_5; }
	inline int32_t* get_address_of_minHeight_5() { return &___minHeight_5; }
	inline void set_minHeight_5(int32_t value)
	{
		___minHeight_5 = value;
	}

	inline static int32_t get_offset_of_maxWidth_6() { return static_cast<int32_t>(offsetof(UIDragResize_t601144508, ___maxWidth_6)); }
	inline int32_t get_maxWidth_6() const { return ___maxWidth_6; }
	inline int32_t* get_address_of_maxWidth_6() { return &___maxWidth_6; }
	inline void set_maxWidth_6(int32_t value)
	{
		___maxWidth_6 = value;
	}

	inline static int32_t get_offset_of_maxHeight_7() { return static_cast<int32_t>(offsetof(UIDragResize_t601144508, ___maxHeight_7)); }
	inline int32_t get_maxHeight_7() const { return ___maxHeight_7; }
	inline int32_t* get_address_of_maxHeight_7() { return &___maxHeight_7; }
	inline void set_maxHeight_7(int32_t value)
	{
		___maxHeight_7 = value;
	}

	inline static int32_t get_offset_of_updateAnchors_8() { return static_cast<int32_t>(offsetof(UIDragResize_t601144508, ___updateAnchors_8)); }
	inline bool get_updateAnchors_8() const { return ___updateAnchors_8; }
	inline bool* get_address_of_updateAnchors_8() { return &___updateAnchors_8; }
	inline void set_updateAnchors_8(bool value)
	{
		___updateAnchors_8 = value;
	}

	inline static int32_t get_offset_of_mPlane_9() { return static_cast<int32_t>(offsetof(UIDragResize_t601144508, ___mPlane_9)); }
	inline Plane_t4206452690  get_mPlane_9() const { return ___mPlane_9; }
	inline Plane_t4206452690 * get_address_of_mPlane_9() { return &___mPlane_9; }
	inline void set_mPlane_9(Plane_t4206452690  value)
	{
		___mPlane_9 = value;
	}

	inline static int32_t get_offset_of_mRayPos_10() { return static_cast<int32_t>(offsetof(UIDragResize_t601144508, ___mRayPos_10)); }
	inline Vector3_t4282066566  get_mRayPos_10() const { return ___mRayPos_10; }
	inline Vector3_t4282066566 * get_address_of_mRayPos_10() { return &___mRayPos_10; }
	inline void set_mRayPos_10(Vector3_t4282066566  value)
	{
		___mRayPos_10 = value;
	}

	inline static int32_t get_offset_of_mLocalPos_11() { return static_cast<int32_t>(offsetof(UIDragResize_t601144508, ___mLocalPos_11)); }
	inline Vector3_t4282066566  get_mLocalPos_11() const { return ___mLocalPos_11; }
	inline Vector3_t4282066566 * get_address_of_mLocalPos_11() { return &___mLocalPos_11; }
	inline void set_mLocalPos_11(Vector3_t4282066566  value)
	{
		___mLocalPos_11 = value;
	}

	inline static int32_t get_offset_of_mWidth_12() { return static_cast<int32_t>(offsetof(UIDragResize_t601144508, ___mWidth_12)); }
	inline int32_t get_mWidth_12() const { return ___mWidth_12; }
	inline int32_t* get_address_of_mWidth_12() { return &___mWidth_12; }
	inline void set_mWidth_12(int32_t value)
	{
		___mWidth_12 = value;
	}

	inline static int32_t get_offset_of_mHeight_13() { return static_cast<int32_t>(offsetof(UIDragResize_t601144508, ___mHeight_13)); }
	inline int32_t get_mHeight_13() const { return ___mHeight_13; }
	inline int32_t* get_address_of_mHeight_13() { return &___mHeight_13; }
	inline void set_mHeight_13(int32_t value)
	{
		___mHeight_13 = value;
	}

	inline static int32_t get_offset_of_mDragging_14() { return static_cast<int32_t>(offsetof(UIDragResize_t601144508, ___mDragging_14)); }
	inline bool get_mDragging_14() const { return ___mDragging_14; }
	inline bool* get_address_of_mDragging_14() { return &___mDragging_14; }
	inline void set_mDragging_14(bool value)
	{
		___mDragging_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
