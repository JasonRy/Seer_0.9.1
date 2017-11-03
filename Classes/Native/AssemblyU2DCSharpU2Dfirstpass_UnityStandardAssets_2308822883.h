#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.CinematicEffects.DepthOfField/QualitySettings[]
struct QualitySettingsU5BU5D_t3338790834;

#include "mscorlib_System_ValueType1744280289.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1171353544.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CinematicEffects.DepthOfField/QualitySettings
struct  QualitySettings_t2308822883 
{
public:
	// System.Boolean UnityStandardAssets.CinematicEffects.DepthOfField/QualitySettings::prefilterBlur
	bool ___prefilterBlur_0;
	// UnityStandardAssets.CinematicEffects.DepthOfField/FilterQuality UnityStandardAssets.CinematicEffects.DepthOfField/QualitySettings::medianFilter
	int32_t ___medianFilter_1;
	// System.Boolean UnityStandardAssets.CinematicEffects.DepthOfField/QualitySettings::dilateNearBlur
	bool ___dilateNearBlur_2;

public:
	inline static int32_t get_offset_of_prefilterBlur_0() { return static_cast<int32_t>(offsetof(QualitySettings_t2308822883, ___prefilterBlur_0)); }
	inline bool get_prefilterBlur_0() const { return ___prefilterBlur_0; }
	inline bool* get_address_of_prefilterBlur_0() { return &___prefilterBlur_0; }
	inline void set_prefilterBlur_0(bool value)
	{
		___prefilterBlur_0 = value;
	}

	inline static int32_t get_offset_of_medianFilter_1() { return static_cast<int32_t>(offsetof(QualitySettings_t2308822883, ___medianFilter_1)); }
	inline int32_t get_medianFilter_1() const { return ___medianFilter_1; }
	inline int32_t* get_address_of_medianFilter_1() { return &___medianFilter_1; }
	inline void set_medianFilter_1(int32_t value)
	{
		___medianFilter_1 = value;
	}

	inline static int32_t get_offset_of_dilateNearBlur_2() { return static_cast<int32_t>(offsetof(QualitySettings_t2308822883, ___dilateNearBlur_2)); }
	inline bool get_dilateNearBlur_2() const { return ___dilateNearBlur_2; }
	inline bool* get_address_of_dilateNearBlur_2() { return &___dilateNearBlur_2; }
	inline void set_dilateNearBlur_2(bool value)
	{
		___dilateNearBlur_2 = value;
	}
};

struct QualitySettings_t2308822883_StaticFields
{
public:
	// UnityStandardAssets.CinematicEffects.DepthOfField/QualitySettings[] UnityStandardAssets.CinematicEffects.DepthOfField/QualitySettings::presetQualitySettings
	QualitySettingsU5BU5D_t3338790834* ___presetQualitySettings_3;

public:
	inline static int32_t get_offset_of_presetQualitySettings_3() { return static_cast<int32_t>(offsetof(QualitySettings_t2308822883_StaticFields, ___presetQualitySettings_3)); }
	inline QualitySettingsU5BU5D_t3338790834* get_presetQualitySettings_3() const { return ___presetQualitySettings_3; }
	inline QualitySettingsU5BU5D_t3338790834** get_address_of_presetQualitySettings_3() { return &___presetQualitySettings_3; }
	inline void set_presetQualitySettings_3(QualitySettingsU5BU5D_t3338790834* value)
	{
		___presetQualitySettings_3 = value;
		Il2CppCodeGenWriteBarrier(&___presetQualitySettings_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityStandardAssets.CinematicEffects.DepthOfField/QualitySettings
struct QualitySettings_t2308822883_marshaled_pinvoke
{
	int32_t ___prefilterBlur_0;
	int32_t ___medianFilter_1;
	int32_t ___dilateNearBlur_2;
};
// Native definition for marshalling of: UnityStandardAssets.CinematicEffects.DepthOfField/QualitySettings
struct QualitySettings_t2308822883_marshaled_com
{
	int32_t ___prefilterBlur_0;
	int32_t ___medianFilter_1;
	int32_t ___dilateNearBlur_2;
};
