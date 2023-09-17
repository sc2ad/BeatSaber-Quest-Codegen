#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ParticleSystemContinuousEventEffect_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemContinuousEventEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemContinuousEventEffect::*)()>(&::GlobalNamespace::ParticleSystemContinuousEventEffect::Start)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2264ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemContinuousEventEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemContinuousEventEffect.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemContinuousEventEffect::*)()>(&::GlobalNamespace::ParticleSystemContinuousEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2264dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemContinuousEventEffect>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemContinuousEventEffect.HandleBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemContinuousEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData)>(&::GlobalNamespace::ParticleSystemContinuousEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2264de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemContinuousEventEffect>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemContinuousEventEffect.ToggleEmitting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemContinuousEventEffect::*)(bool)>(&::GlobalNamespace::ParticleSystemContinuousEventEffect::ToggleEmitting)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2264e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemContinuousEventEffect>::get(),
                            "ToggleEmitting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemContinuousEventEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemContinuousEventEffect::*)()>(&::GlobalNamespace::ParticleSystemContinuousEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2264eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemContinuousEventEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::ParticleSystemContinuousEventEffect::__set__beatmapEvent(::GlobalNamespace::BasicBeatmapEventType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType ::GlobalNamespace::ParticleSystemContinuousEventEffect::__get__beatmapEvent() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ParticleSystemContinuousEventEffect::__set__particleSystems(::ArrayW<::UnityEngine::ParticleSystem> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::ParticleSystem>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::ParticleSystem>>(value));
}
constexpr ::ArrayW<::UnityEngine::ParticleSystem> ::GlobalNamespace::ParticleSystemContinuousEventEffect::__get__particleSystems() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ParticleSystem>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ParticleSystemContinuousEventEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapCallbacksController>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController ::GlobalNamespace::ParticleSystemContinuousEventEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ParticleSystemContinuousEventEffect::__set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper ::GlobalNamespace::ParticleSystemContinuousEventEffect::__get__beatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::ParticleSystemContinuousEventEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemContinuousEventEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::ParticleSystemContinuousEventEffect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemContinuousEventEffect>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::ParticleSystemContinuousEventEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemContinuousEventEffect>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, basicBeatmapEventData);
}
 void ::GlobalNamespace::ParticleSystemContinuousEventEffect::ToggleEmitting(bool shouldPlay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemContinuousEventEffect>::get(),
                            "ToggleEmitting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shouldPlay);
}
// Ctor Parameters []
 ::GlobalNamespace::ParticleSystemContinuousEventEffect::ParticleSystemContinuousEventEffect()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ParticleSystemContinuousEventEffect>())) {}
 void ::GlobalNamespace::ParticleSystemContinuousEventEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemContinuousEventEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
