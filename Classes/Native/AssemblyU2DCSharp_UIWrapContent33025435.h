#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIWrapContent/OnInitializeItem
struct OnInitializeItem_t2759048342;
// UnityEngine.Transform
struct Transform_t1659122786;
// UIPanel
struct UIPanel_t295209936;
// UIScrollView
struct UIScrollView_t2113479878;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t3027308338;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIWrapContent
struct  UIWrapContent_t33025435  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 UIWrapContent::itemSize
	int32_t ___itemSize_2;
	// System.Boolean UIWrapContent::cullContent
	bool ___cullContent_3;
	// System.Int32 UIWrapContent::minIndex
	int32_t ___minIndex_4;
	// System.Int32 UIWrapContent::maxIndex
	int32_t ___maxIndex_5;
	// System.Boolean UIWrapContent::hideInactive
	bool ___hideInactive_6;
	// UIWrapContent/OnInitializeItem UIWrapContent::onInitializeItem
	OnInitializeItem_t2759048342 * ___onInitializeItem_7;
	// UnityEngine.Transform UIWrapContent::mTrans
	Transform_t1659122786 * ___mTrans_8;
	// UIPanel UIWrapContent::mPanel
	UIPanel_t295209936 * ___mPanel_9;
	// UIScrollView UIWrapContent::mScroll
	UIScrollView_t2113479878 * ___mScroll_10;
	// System.Boolean UIWrapContent::mHorizontal
	bool ___mHorizontal_11;
	// System.Boolean UIWrapContent::mFirstTime
	bool ___mFirstTime_12;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UIWrapContent::mChildren
	List_1_t3027308338 * ___mChildren_13;

public:
	inline static int32_t get_offset_of_itemSize_2() { return static_cast<int32_t>(offsetof(UIWrapContent_t33025435, ___itemSize_2)); }
	inline int32_t get_itemSize_2() const { return ___itemSize_2; }
	inline int32_t* get_address_of_itemSize_2() { return &___itemSize_2; }
	inline void set_itemSize_2(int32_t value)
	{
		___itemSize_2 = value;
	}

	inline static int32_t get_offset_of_cullContent_3() { return static_cast<int32_t>(offsetof(UIWrapContent_t33025435, ___cullContent_3)); }
	inline bool get_cullContent_3() const { return ___cullContent_3; }
	inline bool* get_address_of_cullContent_3() { return &___cullContent_3; }
	inline void set_cullContent_3(bool value)
	{
		___cullContent_3 = value;
	}

	inline static int32_t get_offset_of_minIndex_4() { return static_cast<int32_t>(offsetof(UIWrapContent_t33025435, ___minIndex_4)); }
	inline int32_t get_minIndex_4() const { return ___minIndex_4; }
	inline int32_t* get_address_of_minIndex_4() { return &___minIndex_4; }
	inline void set_minIndex_4(int32_t value)
	{
		___minIndex_4 = value;
	}

	inline static int32_t get_offset_of_maxIndex_5() { return static_cast<int32_t>(offsetof(UIWrapContent_t33025435, ___maxIndex_5)); }
	inline int32_t get_maxIndex_5() const { return ___maxIndex_5; }
	inline int32_t* get_address_of_maxIndex_5() { return &___maxIndex_5; }
	inline void set_maxIndex_5(int32_t value)
	{
		___maxIndex_5 = value;
	}

	inline static int32_t get_offset_of_hideInactive_6() { return static_cast<int32_t>(offsetof(UIWrapContent_t33025435, ___hideInactive_6)); }
	inline bool get_hideInactive_6() const { return ___hideInactive_6; }
	inline bool* get_address_of_hideInactive_6() { return &___hideInactive_6; }
	inline void set_hideInactive_6(bool value)
	{
		___hideInactive_6 = value;
	}

	inline static int32_t get_offset_of_onInitializeItem_7() { return static_cast<int32_t>(offsetof(UIWrapContent_t33025435, ___onInitializeItem_7)); }
	inline OnInitializeItem_t2759048342 * get_onInitializeItem_7() const { return ___onInitializeItem_7; }
	inline OnInitializeItem_t2759048342 ** get_address_of_onInitializeItem_7() { return &___onInitializeItem_7; }
	inline void set_onInitializeItem_7(OnInitializeItem_t2759048342 * value)
	{
		___onInitializeItem_7 = value;
		Il2CppCodeGenWriteBarrier(&___onInitializeItem_7, value);
	}

	inline static int32_t get_offset_of_mTrans_8() { return static_cast<int32_t>(offsetof(UIWrapContent_t33025435, ___mTrans_8)); }
	inline Transform_t1659122786 * get_mTrans_8() const { return ___mTrans_8; }
	inline Transform_t1659122786 ** get_address_of_mTrans_8() { return &___mTrans_8; }
	inline void set_mTrans_8(Transform_t1659122786 * value)
	{
		___mTrans_8 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_8, value);
	}

	inline static int32_t get_offset_of_mPanel_9() { return static_cast<int32_t>(offsetof(UIWrapContent_t33025435, ___mPanel_9)); }
	inline UIPanel_t295209936 * get_mPanel_9() const { return ___mPanel_9; }
	inline UIPanel_t295209936 ** get_address_of_mPanel_9() { return &___mPanel_9; }
	inline void set_mPanel_9(UIPanel_t295209936 * value)
	{
		___mPanel_9 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_9, value);
	}

	inline static int32_t get_offset_of_mScroll_10() { return static_cast<int32_t>(offsetof(UIWrapContent_t33025435, ___mScroll_10)); }
	inline UIScrollView_t2113479878 * get_mScroll_10() const { return ___mScroll_10; }
	inline UIScrollView_t2113479878 ** get_address_of_mScroll_10() { return &___mScroll_10; }
	inline void set_mScroll_10(UIScrollView_t2113479878 * value)
	{
		___mScroll_10 = value;
		Il2CppCodeGenWriteBarrier(&___mScroll_10, value);
	}

	inline static int32_t get_offset_of_mHorizontal_11() { return static_cast<int32_t>(offsetof(UIWrapContent_t33025435, ___mHorizontal_11)); }
	inline bool get_mHorizontal_11() const { return ___mHorizontal_11; }
	inline bool* get_address_of_mHorizontal_11() { return &___mHorizontal_11; }
	inline void set_mHorizontal_11(bool value)
	{
		___mHorizontal_11 = value;
	}

	inline static int32_t get_offset_of_mFirstTime_12() { return static_cast<int32_t>(offsetof(UIWrapContent_t33025435, ___mFirstTime_12)); }
	inline bool get_mFirstTime_12() const { return ___mFirstTime_12; }
	inline bool* get_address_of_mFirstTime_12() { return &___mFirstTime_12; }
	inline void set_mFirstTime_12(bool value)
	{
		___mFirstTime_12 = value;
	}

	inline static int32_t get_offset_of_mChildren_13() { return static_cast<int32_t>(offsetof(UIWrapContent_t33025435, ___mChildren_13)); }
	inline List_1_t3027308338 * get_mChildren_13() const { return ___mChildren_13; }
	inline List_1_t3027308338 ** get_address_of_mChildren_13() { return &___mChildren_13; }
	inline void set_mChildren_13(List_1_t3027308338 * value)
	{
		___mChildren_13 = value;
		Il2CppCodeGenWriteBarrier(&___mChildren_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
