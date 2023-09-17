#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__TrackLaneRingsRotationEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRingsRotationEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType::____GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType  ::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType::Range0ToMax{0};
constexpr ::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType  ::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType::Range{1};
constexpr ::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType  ::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType::MaxOr0{2};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)()>(&::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::Start)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x226d7ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)()>(&::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x226d8d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner.HandleBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)(::GlobalNamespace::BasicBeatmapEventData)>(&::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x226d8ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)()>(&::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x226d9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__set__trackLaneRingsRotationEffect(::GlobalNamespace::TrackLaneRingsRotationEffect value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::TrackLaneRingsRotationEffect, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::TrackLaneRingsRotationEffect>(value));
}
constexpr ::GlobalNamespace::TrackLaneRingsRotationEffect ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__trackLaneRingsRotationEffect() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TrackLaneRingsRotationEffect, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__beatmapEventType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__set__rotation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__rotation() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__set__rotationStep(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__rotationStep() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__set__rotationStepType(::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__rotationStepType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__TrackLaneRingsRotationEffectSpawner__RotationStepType, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__set__rotationPropagationSpeed(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__rotationPropagationSpeed() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__set__rotationFlexySpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__rotationFlexySpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapCallbacksController>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__beatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, basicBeatmapEventData);
}
// Ctor Parameters []
 ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::TrackLaneRingsRotationEffectSpawner()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<TrackLaneRingsRotationEffectSpawner>())) {}
 void ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
