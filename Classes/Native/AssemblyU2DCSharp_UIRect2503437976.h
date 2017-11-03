#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIRect/AnchorPoint
struct AnchorPoint_t3581172420;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Transform
struct Transform_t1659122786;
// BetterList`1<UIRect>
struct BetterList_1_t4000405988;
// UIRoot
struct UIRoot_t2503447958;
// UIRect
struct UIRect_t2503437976;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_UIRect_AnchorUpdate3786070549.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIRect
struct  UIRect_t2503437976  : public MonoBehaviour_t667441552
{
public:
	// UIRect/AnchorPoint UIRect::leftAnchor
	AnchorPoint_t3581172420 * ___leftAnchor_2;
	// UIRect/AnchorPoint UIRect::rightAnchor
	AnchorPoint_t3581172420 * ___rightAnchor_3;
	// UIRect/AnchorPoint UIRect::bottomAnchor
	AnchorPoint_t3581172420 * ___bottomAnchor_4;
	// UIRect/AnchorPoint UIRect::topAnchor
	AnchorPoint_t3581172420 * ___topAnchor_5;
	// UIRect/AnchorUpdate UIRect::updateAnchors
	int32_t ___updateAnchors_6;
	// UnityEngine.GameObject UIRect::mGo
	GameObject_t3674682005 * ___mGo_7;
	// UnityEngine.Transform UIRect::mTrans
	Transform_t1659122786 * ___mTrans_8;
	// BetterList`1<UIRect> UIRect::mChildren
	BetterList_1_t4000405988 * ___mChildren_9;
	// System.Boolean UIRect::mChanged
	bool ___mChanged_10;
	// System.Boolean UIRect::mParentFound
	bool ___mParentFound_11;
	// System.Boolean UIRect::mUpdateAnchors
	bool ___mUpdateAnchors_12;
	// System.Int32 UIRect::mUpdateFrame
	int32_t ___mUpdateFrame_13;
	// System.Boolean UIRect::mAnchorsCached
	bool ___mAnchorsCached_14;
	// UIRoot UIRect::mRoot
	UIRoot_t2503447958 * ___mRoot_15;
	// UIRect UIRect::mParent
	UIRect_t2503437976 * ___mParent_16;
	// System.Boolean UIRect::mRootSet
	bool ___mRootSet_17;
	// UnityEngine.Camera UIRect::mCam
	Camera_t2727095145 * ___mCam_18;
	// System.Boolean UIRect::mStarted
	bool ___mStarted_19;
	// System.Single UIRect::finalAlpha
	float ___finalAlpha_20;

public:
	inline static int32_t get_offset_of_leftAnchor_2() { return static_cast<int32_t>(offsetof(UIRect_t2503437976, ___leftAnchor_2)); }
	inline AnchorPoint_t3581172420 * get_leftAnchor_2() const { return ___leftAnchor_2; }
	inline AnchorPoint_t3581172420 ** get_address_of_leftAnchor_2() { return &___leftAnchor_2; }
	inline void set_leftAnchor_2(AnchorPoint_t3581172420 * value)
	{
		___leftAnchor_2 = value;
		Il2CppCodeGenWriteBarrier(&___leftAnchor_2, value);
	}

	inline static int32_t get_offset_of_rightAnchor_3() { return static_cast<int32_t>(offsetof(UIRect_t2503437976, ___rightAnchor_3)); }
	inline AnchorPoint_t3581172420 * get_rightAnchor_3() const { return ___rightAnchor_3; }
	inline AnchorPoint_t3581172420 ** get_address_of_rightAnchor_3() { return &___rightAnchor_3; }
	inline void set_rightAnchor_3(AnchorPoint_t3581172420 * value)
	{
		___rightAnchor_3 = value;
		Il2CppCodeGenWriteBarrier(&___rightAnchor_3, value);
	}

	inline static int32_t get_offset_of_bottomAnchor_4() { return static_cast<int32_t>(offsetof(UIRect_t2503437976, ___bottomAnchor_4)); }
	inline AnchorPoint_t3581172420 * get_bottomAnchor_4() const { return ___bottomAnchor_4; }
	inline AnchorPoint_t3581172420 ** get_address_of_bottomAnchor_4() { return &___bottomAnchor_4; }
	inline void set_bottomAnchor_4(AnchorPoint_t3581172420 * value)
	{
		___bottomAnchor_4 = value;
		Il2CppCodeGenWriteBarrier(&___bottomAnchor_4, value);
	}

	inline static int32_t get_offset_of_topAnchor_5() { return static_cast<int32_t>(offsetof(UIRect_t2503437976, ___topAnchor_5)); }
	inline AnchorPoint_t3581172420 * get_topAnchor_5() const { return ___topAnchor_5; }
	inline AnchorPoint_t3581172420 ** get_address_of_topAnchor_5() { return &___topAnchor_5; }
	inline void set_topAnchor_5(AnchorPoint_t3581172420 * value)
	{
		___topAnchor_5 = value;
		Il2CppCodeGenWriteBarrier(&___topAnchor_5, value);
	}

	inline static int32_t get_offset_of_updateAnchors_6() { return static_cast<int32_t>(offsetof(UIRect_t2503437976, ___updateAnchors_6)); }
	inline int32_t get_updateAnchors_6() const { return ___updateAnchors_6; }
	inline int32_t* get_address_of_updateAnchors_6() { return &___updateAnchors_6; }
	inline void set_updateAnchors_6(int32_t value)
	{
		___updateAnchors_6 = value;
	}

	inline static int32_t get_offset_of_mGo_7() { return static_cast<int32_t>(offsetof(UIRect_t2503437976, ___mGo_7)); }
	inline GameObject_t3674682005 * get_mGo_7() const { return ___mGo_7; }
	inline GameObject_t3674682005 ** get_address_of_mGo_7() { return &___mGo_7; }
	inline void set_mGo_7(GameObject_t3674682005 * value)
	{
		___mGo_7 = value;
		Il2CppCodeGenWriteBarrier(&___mGo_7, value);
	}

	inline static int32_t get_offset_of_mTrans_8() { return static_cast<int32_t>(offsetof(UIRect_t2503437976, ___mTrans_8)); }
	inline Transform_t1659122786 * get_mTrans_8() const { return ___mTrans_8; }
	inline Transform_t1659122786 ** get_address_of_mTrans_8() { return &___mTrans_8; }
	inline void set_mTrans_8(Transform_t1659122786 * value)
	{
		___mTrans_8 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_8, value);
	}

	inline static int32_t get_offset_of_mChildren_9() { return static_cast<int32_t>(offsetof(UIRect_t2503437976, ___mChildren_9)); }
	inline BetterList_1_t4000405988 * get_mChildren_9() const { return ___mChildren_9; }
	inline BetterList_1_t4000405988 ** get_address_of_mChildren_9() { return &___mChildren_9; }
	inline void set_mChildren_9(BetterList_1_t4000405988 * value)
	{
		___mChildren_9 = value;
		Il2CppCodeGenWriteBarrier(&___mChildren_9, value);
	}

	inline static int32_t get_offset_of_mChanged_10() { return static_cast<int32_t>(offsetof(UIRect_t2503437976, ___mChanged_10)); }
	inline bool get_mChanged_10() const { return ___mChanged_10; }
	inline bool* get_address_of_mChanged_10() { return &___mChanged_10; }
	inline void set_mChanged_10(bool value)
	{
		___mChanged_10 = value;
	}

	inline static int32_t get_offset_of_mParentFound_11() { return static_cast<int32_t>(offsetof(UIRect_t2503437976, ___mParentFound_11)); }
	inline bool get_mParentFound_11() const { return ___mParentFound_11; }
	inline bool* get_address_of_mParentFound_11() { return &___mParentFound_11; }
	inline void set_mParentFound_11(bool value)
	{
		___mParentFound_11 = value;
	}

	inline static int32_t get_offset_of_mUpdateAnchors_12() { return static_cast<int32_t>(offsetof(UIRect_t2503437976, ___mUpdateAnchors_12)); }
	inline bool get_mUpdateAnchors_12() const { return ___mUpdateAnchors_12; }
	inline bool* get_address_of_mUpdateAnchors_12() { return &___mUpdateAnchors_12; }
	inline void set_mUpdateAnchors_12(bool value)
	{
		___mUpdateAnchors_12 = value;
	}

	inline static int32_t get_offset_of_mUpdateFrame_13() { return static_cast<int32_t>(offsetof(UIRect_t2503437976, ___mUpdateFrame_13)); }
	inline int32_t get_mUpdateFrame_13() const { return ___mUpdateFrame_13; }
	inline int32_t* get_address_of_mUpdateFrame_13() { return &___mUpdateFrame_13; }
	inline void set_mUpdateFrame_13(int32_t value)
	{
		___mUpdateFrame_13 = value;
	}

	inline static int32_t get_offset_of_mAnchorsCached_14() { return static_cast<int32_t>(offsetof(UIRect_t2503437976, ___mAnchorsCached_14)); }
	inline bool get_mAnchorsCached_14() const { return ___mAnchorsCached_14; }
	inline bool* get_address_of_mAnchorsCached_14() { return &___mAnchorsCached_14; }
	inline void set_mAnchorsCached_14(bool value)
	{
		___mAnchorsCached_14 = value;
	}

	inline static int32_t get_offset_of_mRoot_15() { return static_cast<int32_t>(offsetof(UIRect_t2503437976, ___mRoot_15)); }
	inline UIRoot_t2503447958 * get_mRoot_15() const { return ___mRoot_15; }
	inline UIRoot_t2503447958 ** get_address_of_mRoot_15() { return &___mRoot_15; }
	inline void set_mRoot_15(UIRoot_t2503447958 * value)
	{
		___mRoot_15 = value;
		Il2CppCodeGenWriteBarrier(&___mRoot_15, value);
	}

	inline static int32_t get_offset_of_mParent_16() { return static_cast<int32_t>(offsetof(UIRect_t2503437976, ___mParent_16)); }
	inline UIRect_t2503437976 * get_mParent_16() const { return ___mParent_16; }
	inline UIRect_t2503437976 ** get_address_of_mParent_16() { return &___mParent_16; }
	inline void set_mParent_16(UIRect_t2503437976 * value)
	{
		___mParent_16 = value;
		Il2CppCodeGenWriteBarrier(&___mParent_16, value);
	}

	inline static int32_t get_offset_of_mRootSet_17() { return static_cast<int32_t>(offsetof(UIRect_t2503437976, ___mRootSet_17)); }
	inline bool get_mRootSet_17() const { return ___mRootSet_17; }
	inline bool* get_address_of_mRootSet_17() { return &___mRootSet_17; }
	inline void set_mRootSet_17(bool value)
	{
		___mRootSet_17 = value;
	}

	inline static int32_t get_offset_of_mCam_18() { return static_cast<int32_t>(offsetof(UIRect_t2503437976, ___mCam_18)); }
	inline Camera_t2727095145 * get_mCam_18() const { return ___mCam_18; }
	inline Camera_t2727095145 ** get_address_of_mCam_18() { return &___mCam_18; }
	inline void set_mCam_18(Camera_t2727095145 * value)
	{
		___mCam_18 = value;
		Il2CppCodeGenWriteBarrier(&___mCam_18, value);
	}

	inline static int32_t get_offset_of_mStarted_19() { return static_cast<int32_t>(offsetof(UIRect_t2503437976, ___mStarted_19)); }
	inline bool get_mStarted_19() const { return ___mStarted_19; }
	inline bool* get_address_of_mStarted_19() { return &___mStarted_19; }
	inline void set_mStarted_19(bool value)
	{
		___mStarted_19 = value;
	}

	inline static int32_t get_offset_of_finalAlpha_20() { return static_cast<int32_t>(offsetof(UIRect_t2503437976, ___finalAlpha_20)); }
	inline float get_finalAlpha_20() const { return ___finalAlpha_20; }
	inline float* get_address_of_finalAlpha_20() { return &___finalAlpha_20; }
	inline void set_finalAlpha_20(float value)
	{
		___finalAlpha_20 = value;
	}
};

struct UIRect_t2503437976_StaticFields
{
public:
	// UnityEngine.Vector3[] UIRect::mSides
	Vector3U5BU5D_t215400611* ___mSides_21;

public:
	inline static int32_t get_offset_of_mSides_21() { return static_cast<int32_t>(offsetof(UIRect_t2503437976_StaticFields, ___mSides_21)); }
	inline Vector3U5BU5D_t215400611* get_mSides_21() const { return ___mSides_21; }
	inline Vector3U5BU5D_t215400611** get_address_of_mSides_21() { return &___mSides_21; }
	inline void set_mSides_21(Vector3U5BU5D_t215400611* value)
	{
		___mSides_21 = value;
		Il2CppCodeGenWriteBarrier(&___mSides_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
