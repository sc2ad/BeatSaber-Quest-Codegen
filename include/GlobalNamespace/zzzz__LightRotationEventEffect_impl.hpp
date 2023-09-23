#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationEventEffect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: GlobalNamespace::LightRotationEventEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationEventEffect::*)()>(&GlobalNamespace::LightRotationEventEffect::Start)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2263398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationEventEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightRotationEventEffect.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationEventEffect::*)()>(&GlobalNamespace::LightRotationEventEffect::Update)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x22634ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationEventEffect>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightRotationEventEffect.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationEventEffect::*)()>(&GlobalNamespace::LightRotationEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22635d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationEventEffect>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightRotationEventEffect.HandleBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationEventEffect::*)(GlobalNamespace::BasicBeatmapEventData)>(&GlobalNamespace::LightRotationEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x22635f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationEventEffect>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightRotationEventEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationEventEffect::*)()>(&GlobalNamespace::LightRotationEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2263714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationEventEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightRotationEventEffect::__set__event(GlobalNamespace::BasicBeatmapEventType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BasicBeatmapEventType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr GlobalNamespace::BasicBeatmapEventType GlobalNamespace::LightRotationEventEffect::__get__event() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BasicBeatmapEventType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationEventEffect::__set__rotationVector(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::LightRotationEventEffect::__get__rotationVector() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationEventEffect::__set__rotationSpeedMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LightRotationEventEffect::__get__rotationSpeedMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationEventEffect::__set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCallbacksController>(value));
}
constexpr GlobalNamespace::BeatmapCallbacksController GlobalNamespace::LightRotationEventEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationEventEffect::__set__audioTimeSource(GlobalNamespace::IAudioTimeSource value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IAudioTimeSource, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IAudioTimeSource>(value));
}
constexpr GlobalNamespace::IAudioTimeSource GlobalNamespace::LightRotationEventEffect::__get__audioTimeSource() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IAudioTimeSource, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationEventEffect::__set__transform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::LightRotationEventEffect::__get__transform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationEventEffect::__set__startRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion GlobalNamespace::LightRotationEventEffect::__get__startRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationEventEffect::__set__rotationSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LightRotationEventEffect::__get__rotationSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationEventEffect::__set__beatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr GlobalNamespace::BeatmapDataCallbackWrapper GlobalNamespace::LightRotationEventEffect::__get__beatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::LightRotationEventEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationEventEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LightRotationEventEffect::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationEventEffect>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LightRotationEventEffect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationEventEffect>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LightRotationEventEffect::HandleBeatmapEvent(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationEventEffect>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, basicBeatmapEventData);
}
// Ctor Parameters []
 GlobalNamespace::LightRotationEventEffect::LightRotationEventEffect()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<LightRotationEventEffect>())) {}
 void GlobalNamespace::LightRotationEventEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationEventEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
