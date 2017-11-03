﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InvDatabase[]
struct InvDatabaseU5BU5D_t3324850277;
// System.Collections.Generic.List`1<InvBaseItem>
struct List_1_t3004638021;
// UIAtlas
struct UIAtlas_t281921111;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InvDatabase
struct  InvDatabase_t852767852  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 InvDatabase::databaseID
	int32_t ___databaseID_4;
	// System.Collections.Generic.List`1<InvBaseItem> InvDatabase::items
	List_1_t3004638021 * ___items_5;
	// UIAtlas InvDatabase::iconAtlas
	UIAtlas_t281921111 * ___iconAtlas_6;

public:
	inline static int32_t get_offset_of_databaseID_4() { return static_cast<int32_t>(offsetof(InvDatabase_t852767852, ___databaseID_4)); }
	inline int32_t get_databaseID_4() const { return ___databaseID_4; }
	inline int32_t* get_address_of_databaseID_4() { return &___databaseID_4; }
	inline void set_databaseID_4(int32_t value)
	{
		___databaseID_4 = value;
	}

	inline static int32_t get_offset_of_items_5() { return static_cast<int32_t>(offsetof(InvDatabase_t852767852, ___items_5)); }
	inline List_1_t3004638021 * get_items_5() const { return ___items_5; }
	inline List_1_t3004638021 ** get_address_of_items_5() { return &___items_5; }
	inline void set_items_5(List_1_t3004638021 * value)
	{
		___items_5 = value;
		Il2CppCodeGenWriteBarrier(&___items_5, value);
	}

	inline static int32_t get_offset_of_iconAtlas_6() { return static_cast<int32_t>(offsetof(InvDatabase_t852767852, ___iconAtlas_6)); }
	inline UIAtlas_t281921111 * get_iconAtlas_6() const { return ___iconAtlas_6; }
	inline UIAtlas_t281921111 ** get_address_of_iconAtlas_6() { return &___iconAtlas_6; }
	inline void set_iconAtlas_6(UIAtlas_t281921111 * value)
	{
		___iconAtlas_6 = value;
		Il2CppCodeGenWriteBarrier(&___iconAtlas_6, value);
	}
};

struct InvDatabase_t852767852_StaticFields
{
public:
	// InvDatabase[] InvDatabase::mList
	InvDatabaseU5BU5D_t3324850277* ___mList_2;
	// System.Boolean InvDatabase::mIsDirty
	bool ___mIsDirty_3;

public:
	inline static int32_t get_offset_of_mList_2() { return static_cast<int32_t>(offsetof(InvDatabase_t852767852_StaticFields, ___mList_2)); }
	inline InvDatabaseU5BU5D_t3324850277* get_mList_2() const { return ___mList_2; }
	inline InvDatabaseU5BU5D_t3324850277** get_address_of_mList_2() { return &___mList_2; }
	inline void set_mList_2(InvDatabaseU5BU5D_t3324850277* value)
	{
		___mList_2 = value;
		Il2CppCodeGenWriteBarrier(&___mList_2, value);
	}

	inline static int32_t get_offset_of_mIsDirty_3() { return static_cast<int32_t>(offsetof(InvDatabase_t852767852_StaticFields, ___mIsDirty_3)); }
	inline bool get_mIsDirty_3() const { return ___mIsDirty_3; }
	inline bool* get_address_of_mIsDirty_3() { return &___mIsDirty_3; }
	inline void set_mIsDirty_3(bool value)
	{
		___mIsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
