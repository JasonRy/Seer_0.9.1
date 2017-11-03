#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// DG.Tweening.TweenCallback
struct TweenCallback_t4095062394;
// System.String
struct String_t;
// DG.Tweening.Sequence
struct Sequence_t3817835907;
// DG.Tweening.Core.DOGetter`1<System.Int32>
struct DOGetter_1_t2804116836;
// DG.Tweening.Core.DOSetter`1<System.Int32>
struct DOSetter_1_t3840756664;
// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_t1647230012;
// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_t2683869840;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>
struct DOGetter_1_t1637377605;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>
struct DOSetter_1_t2674017433;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "DOTween_DG_Tweening_Ease1564688304.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "DOTween_DG_Tweening_TweenCallback4095062394.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_String7231557.h"
#include "DOTween_DG_Tweening_Sequence3817835907.h"

// System.Void WMG_Anim::animFill(UnityEngine.GameObject,System.Single,DG.Tweening.Ease,System.Single)
extern "C"  void WMG_Anim_animFill_m2474439192 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___obj0, float ___duration1, int32_t ___easeType2, float ___animTo3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Anim::animColor(UnityEngine.GameObject,System.Single,DG.Tweening.Ease,UnityEngine.Color)
extern "C"  void WMG_Anim_animColor_m3052506723 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___obj0, float ___duration1, int32_t ___easeType2, Color_t4194546905  ___animTo3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Anim::animRotation(UnityEngine.GameObject,System.Single,DG.Tweening.Ease,UnityEngine.Vector3,System.Boolean)
extern "C"  void WMG_Anim_animRotation_m601210482 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___obj0, float ___duration1, int32_t ___easeType2, Vector3_t4282066566  ___animTo3, bool ___relative4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Anim::animRotationCallbackC(UnityEngine.GameObject,System.Single,DG.Tweening.Ease,UnityEngine.Vector3,System.Boolean,DG.Tweening.TweenCallback)
extern "C"  void WMG_Anim_animRotationCallbackC_m3337190764 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___obj0, float ___duration1, int32_t ___easeType2, Vector3_t4282066566  ___animTo3, bool ___relative4, TweenCallback_t4095062394 * ___onComp5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Anim::animRotationCallbackU(UnityEngine.GameObject,System.Single,DG.Tweening.Ease,UnityEngine.Vector3,System.Boolean,DG.Tweening.TweenCallback)
extern "C"  void WMG_Anim_animRotationCallbackU_m724068478 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___obj0, float ___duration1, int32_t ___easeType2, Vector3_t4282066566  ___animTo3, bool ___relative4, TweenCallback_t4095062394 * ___onUpd5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Anim::animRotationCallbacks(UnityEngine.GameObject,System.Single,DG.Tweening.Ease,UnityEngine.Vector3,System.Boolean,DG.Tweening.TweenCallback,DG.Tweening.TweenCallback)
extern "C"  void WMG_Anim_animRotationCallbacks_m2233866244 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___obj0, float ___duration1, int32_t ___easeType2, Vector3_t4282066566  ___animTo3, bool ___relative4, TweenCallback_t4095062394 * ___onUpd5, TweenCallback_t4095062394 * ___onComp6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Anim::animPositionCallbackC(UnityEngine.GameObject,System.Single,DG.Tweening.Ease,UnityEngine.Vector3,DG.Tweening.TweenCallback)
extern "C"  void WMG_Anim_animPositionCallbackC_m1034790892 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___obj0, float ___duration1, int32_t ___easeType2, Vector3_t4282066566  ___animTo3, TweenCallback_t4095062394 * ___onComp4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Anim::animPosition(UnityEngine.GameObject,System.Single,DG.Tweening.Ease,UnityEngine.Vector3)
extern "C"  void WMG_Anim_animPosition_m423415584 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___obj0, float ___duration1, int32_t ___easeType2, Vector3_t4282066566  ___animTo3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Anim::animSize(UnityEngine.GameObject,System.Single,DG.Tweening.Ease,UnityEngine.Vector2)
extern "C"  void WMG_Anim_animSize_m1644201257 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___obj0, float ___duration1, int32_t ___easeType2, Vector2_t4282066565  ___animTo3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Anim::animPositionCallbacks(UnityEngine.GameObject,System.Single,DG.Tweening.Ease,UnityEngine.Vector3,DG.Tweening.TweenCallback,DG.Tweening.TweenCallback,System.String)
extern "C"  void WMG_Anim_animPositionCallbacks_m2618001760 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___obj0, float ___duration1, int32_t ___easeType2, Vector3_t4282066566  ___animTo3, TweenCallback_t4095062394 * ___onUpd4, TweenCallback_t4095062394 * ___onComp5, String_t* ___tid6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Anim::animScale(UnityEngine.GameObject,System.Single,DG.Tweening.Ease,UnityEngine.Vector3,System.Single)
extern "C"  void WMG_Anim_animScale_m2556261684 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___obj0, float ___duration1, int32_t ___easeType2, Vector3_t4282066566  ___animTo3, float ___delay4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Anim::animScaleCallbackC(UnityEngine.GameObject,System.Single,DG.Tweening.Ease,UnityEngine.Vector3,DG.Tweening.TweenCallback)
extern "C"  void WMG_Anim_animScaleCallbackC_m1076213789 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___obj0, float ___duration1, int32_t ___easeType2, Vector3_t4282066566  ___animTo3, TweenCallback_t4095062394 * ___onComp4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Anim::animScaleSeqInsert(DG.Tweening.Sequence&,System.Single,UnityEngine.GameObject,System.Single,DG.Tweening.Ease,UnityEngine.Vector3,System.Single)
extern "C"  void WMG_Anim_animScaleSeqInsert_m3941293048 (Il2CppObject * __this /* static, unused */, Sequence_t3817835907 ** ___seq0, float ___insTime1, GameObject_t3674682005 * ___obj2, float ___duration3, int32_t ___easeType4, Vector3_t4282066566  ___animTo5, float ___delay6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Anim::animScaleSeqAppend(DG.Tweening.Sequence&,UnityEngine.GameObject,System.Single,DG.Tweening.Ease,UnityEngine.Vector3,System.Single)
extern "C"  void WMG_Anim_animScaleSeqAppend_m2946789650 (Il2CppObject * __this /* static, unused */, Sequence_t3817835907 ** ___seq0, GameObject_t3674682005 * ___obj1, float ___duration2, int32_t ___easeType3, Vector3_t4282066566  ___animTo4, float ___delay5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Anim::animInt(DG.Tweening.Core.DOGetter`1<System.Int32>,DG.Tweening.Core.DOSetter`1<System.Int32>,System.Single,System.Int32)
extern "C"  void WMG_Anim_animInt_m4075890426 (Il2CppObject * __this /* static, unused */, DOGetter_1_t2804116836 * ___getter0, DOSetter_1_t3840756664 * ___setter1, float ___duration2, int32_t ___animTo3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Anim::animFloat(DG.Tweening.Core.DOGetter`1<System.Single>,DG.Tweening.Core.DOSetter`1<System.Single>,System.Single,System.Single)
extern "C"  void WMG_Anim_animFloat_m1109971711 (Il2CppObject * __this /* static, unused */, DOGetter_1_t1647230012 * ___getter0, DOSetter_1_t2683869840 * ___setter1, float ___duration2, float ___animTo3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Anim::animFloatCallbackU(DG.Tweening.Core.DOGetter`1<System.Single>,DG.Tweening.Core.DOSetter`1<System.Single>,System.Single,System.Single,DG.Tweening.TweenCallback,DG.Tweening.Ease)
extern "C"  void WMG_Anim_animFloatCallbackU_m599728845 (Il2CppObject * __this /* static, unused */, DOGetter_1_t1647230012 * ___getter0, DOSetter_1_t2683869840 * ___setter1, float ___duration2, float ___animTo3, TweenCallback_t4095062394 * ___onUpd4, int32_t ___easeType5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Anim::animFloatCallbacks(DG.Tweening.Core.DOGetter`1<System.Single>,DG.Tweening.Core.DOSetter`1<System.Single>,System.Single,System.Single,DG.Tweening.TweenCallback,DG.Tweening.TweenCallback,DG.Tweening.Ease)
extern "C"  void WMG_Anim_animFloatCallbacks_m2973143363 (Il2CppObject * __this /* static, unused */, DOGetter_1_t1647230012 * ___getter0, DOSetter_1_t2683869840 * ___setter1, float ___duration2, float ___animTo3, TweenCallback_t4095062394 * ___onUpd4, TweenCallback_t4095062394 * ___onComp5, int32_t ___easeType6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Anim::animVec2(DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>,System.Single,UnityEngine.Vector2,DG.Tweening.Ease)
extern "C"  void WMG_Anim_animVec2_m1528497616 (Il2CppObject * __this /* static, unused */, DOGetter_1_t1637377605 * ___getter0, DOSetter_1_t2674017433 * ___setter1, float ___duration2, Vector2_t4282066565  ___animTo3, int32_t ___easeType4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Anim::animVec2CallbackU(DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>,System.Single,UnityEngine.Vector2,DG.Tweening.TweenCallback,DG.Tweening.Ease)
extern "C"  void WMG_Anim_animVec2CallbackU_m2027054668 (Il2CppObject * __this /* static, unused */, DOGetter_1_t1637377605 * ___getter0, DOSetter_1_t2674017433 * ___setter1, float ___duration2, Vector2_t4282066565  ___animTo3, TweenCallback_t4095062394 * ___onUpd4, int32_t ___easeType5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
