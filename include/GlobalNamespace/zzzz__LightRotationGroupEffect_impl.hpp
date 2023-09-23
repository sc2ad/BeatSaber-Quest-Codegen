#pragma once
#include "GlobalNamespace/zzzz__LightRotationGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationBeatmapEventData_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData::*)(int32_t, int32_t, GlobalNamespace::LightAxis, bool, UnityEngine::Transform)>(&GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x225ee60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LightAxis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData::__set_groupId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData::__get_groupId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData::__set_elementId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData::__get_elementId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData::__set_axis(GlobalNamespace::LightAxis value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LightAxis, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LightAxis>(value));
}
constexpr GlobalNamespace::LightAxis GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData::__get_axis() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LightAxis, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData::__set_mirrored(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData::__get_mirrored() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData::__set_transform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData::__get_transform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "groupId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "elementId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "axis", ty: "GlobalNamespace::LightAxis", modifiers: "", def_value: None }, CppParam { name: "mirrored", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "transform", ty: "UnityEngine::Transform", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData::GlobalNamespace__LightRotationGroupEffect__InitData(int32_t groupId, int32_t elementId, GlobalNamespace::LightAxis axis, bool mirrored, UnityEngine::Transform transform)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__LightRotationGroupEffect__InitData>(groupId, elementId, axis, mirrored, transform))) {}
 void GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData::_ctor(int32_t groupId, int32_t elementId, GlobalNamespace::LightAxis axis, bool mirrored, UnityEngine::Transform transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LightAxis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, groupId, elementId, axis, mirrored, transform);
}
//  Writing Method size for method: GlobalNamespace::LightRotationGroupEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationGroupEffect::*)(GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData, Tweening::SongTimeTweeningManager, GlobalNamespace::BeatmapCallbacksController)>(&GlobalNamespace::LightRotationGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x225e864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationGroupEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tweening::SongTimeTweeningManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCallbacksController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightRotationGroupEffect.Cleanup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationGroupEffect::*)()>(&GlobalNamespace::LightRotationGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x225ea84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationGroupEffect>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightRotationGroupEffect.HandleRotationChangeBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationGroupEffect::*)(GlobalNamespace::LightRotationBeatmapEventData)>(&GlobalNamespace::LightRotationGroupEffect::HandleRotationChangeBeatmapEvent)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x225eb20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationGroupEffect>::get(),
                            "HandleRotationChangeBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LightRotationBeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightRotationGroupEffect.SetRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationGroupEffect::*)(float_t)>(&GlobalNamespace::LightRotationGroupEffect::SetRotation)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x225eca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationGroupEffect>::get(),
                            "SetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightRotationGroupEffect.ComputeTargetAngle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t, int32_t, GlobalNamespace::LightRotationDirection)>(&GlobalNamespace::LightRotationGroupEffect::ComputeTargetAngle)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x225ed7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationGroupEffect>::get(),
                            "ComputeTargetAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LightRotationDirection>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightRotationGroupEffect::__set__transform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::LightRotationGroupEffect::__get__transform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationGroupEffect::__set__axis(GlobalNamespace::LightAxis value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LightAxis, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LightAxis>(value));
}
constexpr GlobalNamespace::LightAxis GlobalNamespace::LightRotationGroupEffect::__get__axis() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LightAxis, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationGroupEffect::__set__mirrored(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LightRotationGroupEffect::__get__mirrored() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationGroupEffect::__set__tweeningManager(Tweening::SongTimeTweeningManager value)  {
::cordl_internals::setInstanceField<Tweening::SongTimeTweeningManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tweening::SongTimeTweeningManager>(value));
}
constexpr Tweening::SongTimeTweeningManager GlobalNamespace::LightRotationGroupEffect::__get__tweeningManager() const {
return ::cordl_internals::getInstanceField<Tweening::SongTimeTweeningManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationGroupEffect::__set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCallbacksController>(value));
}
constexpr GlobalNamespace::BeatmapCallbacksController GlobalNamespace::LightRotationGroupEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationGroupEffect::__set__rotationTween(Tweening::FloatTween value)  {
::cordl_internals::setInstanceField<Tweening::FloatTween, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tweening::FloatTween>(value));
}
constexpr Tweening::FloatTween GlobalNamespace::LightRotationGroupEffect::__get__rotationTween() const {
return ::cordl_internals::getInstanceField<Tweening::FloatTween, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationGroupEffect::__set__lightRotationBeatmapEventCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr GlobalNamespace::BeatmapDataCallbackWrapper GlobalNamespace::LightRotationGroupEffect::__get__lightRotationBeatmapEventCallbackWrapper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "initData", ty: "GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData", modifiers: "", def_value: None }, CppParam { name: "tweeningManager", ty: "Tweening::SongTimeTweeningManager", modifiers: "", def_value: None }, CppParam { name: "beatmapCallbacksController", ty: "GlobalNamespace::BeatmapCallbacksController", modifiers: "", def_value: None }]
 GlobalNamespace::LightRotationGroupEffect::LightRotationGroupEffect(GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData initData, Tweening::SongTimeTweeningManager tweeningManager, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LightRotationGroupEffect>(initData, tweeningManager, beatmapCallbacksController))) {}
 void GlobalNamespace::LightRotationGroupEffect::_ctor(GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData initData, Tweening::SongTimeTweeningManager tweeningManager, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationGroupEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LightRotationGroupEffect__InitData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tweening::SongTimeTweeningManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCallbacksController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initData, tweeningManager, beatmapCallbacksController);
}
 void GlobalNamespace::LightRotationGroupEffect::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationGroupEffect>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LightRotationGroupEffect::HandleRotationChangeBeatmapEvent(GlobalNamespace::LightRotationBeatmapEventData currentEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationGroupEffect>::get(),
                            "HandleRotationChangeBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LightRotationBeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, currentEventData);
}
 void GlobalNamespace::LightRotationGroupEffect::SetRotation(float_t rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationGroupEffect>::get(),
                            "SetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rotation);
}
 float_t GlobalNamespace::LightRotationGroupEffect::ComputeTargetAngle(float_t startAngle, float_t targetAngle, int32_t loopCount, GlobalNamespace::LightRotationDirection rotationOrientation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationGroupEffect>::get(),
                            "ComputeTargetAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LightRotationDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, startAngle, targetAngle, loopCount, rotationOrientation);
}
