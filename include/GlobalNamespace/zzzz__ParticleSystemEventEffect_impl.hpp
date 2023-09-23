#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: GlobalNamespace::ParticleSystemEventEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEventEffect::*)()>(&GlobalNamespace::ParticleSystemEventEffect::Start)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2266348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemEventEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ParticleSystemEventEffect.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEventEffect::*)()>(&GlobalNamespace::ParticleSystemEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22668e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemEventEffect>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ParticleSystemEventEffect.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEventEffect::*)()>(&GlobalNamespace::ParticleSystemEventEffect::Update)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x22668fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemEventEffect>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ParticleSystemEventEffect.HandleBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEventEffect::*)(GlobalNamespace::BasicBeatmapEventData)>(&GlobalNamespace::ParticleSystemEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x22669c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemEventEffect>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ParticleSystemEventEffect.RefreshParticles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEventEffect::*)()>(&GlobalNamespace::ParticleSystemEventEffect::RefreshParticles)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x2266520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemEventEffect>::get(),
                            "RefreshParticles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ParticleSystemEventEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEventEffect::*)()>(&GlobalNamespace::ParticleSystemEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2266b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemEventEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__lightColor0(GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSO>(value));
}
constexpr GlobalNamespace::ColorSO GlobalNamespace::ParticleSystemEventEffect::__get__lightColor0() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__lightColor1(GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSO>(value));
}
constexpr GlobalNamespace::ColorSO GlobalNamespace::ParticleSystemEventEffect::__get__lightColor1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__highlightColor0(GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSO>(value));
}
constexpr GlobalNamespace::ColorSO GlobalNamespace::ParticleSystemEventEffect::__get__highlightColor0() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__highlightColor1(GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSO>(value));
}
constexpr GlobalNamespace::ColorSO GlobalNamespace::ParticleSystemEventEffect::__get__highlightColor1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__lightOnStart(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::ParticleSystemEventEffect::__get__lightOnStart() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__colorEvent(GlobalNamespace::BasicBeatmapEventType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BasicBeatmapEventType, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr GlobalNamespace::BasicBeatmapEventType GlobalNamespace::ParticleSystemEventEffect::__get__colorEvent() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BasicBeatmapEventType, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__particleSystem(UnityEngine::ParticleSystem value)  {
::cordl_internals::setInstanceField<UnityEngine::ParticleSystem, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ParticleSystem>(value));
}
constexpr UnityEngine::ParticleSystem GlobalNamespace::ParticleSystemEventEffect::__get__particleSystem() const {
return ::cordl_internals::getInstanceField<UnityEngine::ParticleSystem, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCallbacksController>(value));
}
constexpr GlobalNamespace::BeatmapCallbacksController GlobalNamespace::ParticleSystemEventEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__lightIsOn(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::ParticleSystemEventEffect::__get__lightIsOn() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__offColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::ParticleSystemEventEffect::__get__offColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__highlightValue(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::ParticleSystemEventEffect::__get__highlightValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__afterHighlightColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::ParticleSystemEventEffect::__get__afterHighlightColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__highlightColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::ParticleSystemEventEffect::__get__highlightColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set_kFadeSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::ParticleSystemEventEffect::__get_kFadeSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__mainModule(UnityEngine::UnityEngine__ParticleSystem__MainModule value)  {
::cordl_internals::setInstanceField<UnityEngine::UnityEngine__ParticleSystem__MainModule, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UnityEngine__ParticleSystem__MainModule>(value));
}
constexpr UnityEngine::UnityEngine__ParticleSystem__MainModule GlobalNamespace::ParticleSystemEventEffect::__get__mainModule() const {
return ::cordl_internals::getInstanceField<UnityEngine::UnityEngine__ParticleSystem__MainModule, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__particles(::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle>>(value));
}
constexpr ::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle> GlobalNamespace::ParticleSystemEventEffect::__get__particles() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__particleColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::ParticleSystemEventEffect::__get__particleColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__beatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr GlobalNamespace::BeatmapDataCallbackWrapper GlobalNamespace::ParticleSystemEventEffect::__get__beatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::ParticleSystemEventEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemEventEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ParticleSystemEventEffect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemEventEffect>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ParticleSystemEventEffect::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemEventEffect>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ParticleSystemEventEffect::HandleBeatmapEvent(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemEventEffect>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, basicBeatmapEventData);
}
 void GlobalNamespace::ParticleSystemEventEffect::RefreshParticles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemEventEffect>::get(),
                            "RefreshParticles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::ParticleSystemEventEffect::ParticleSystemEventEffect()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ParticleSystemEventEffect>())) {}
 void GlobalNamespace::ParticleSystemEventEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemEventEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
