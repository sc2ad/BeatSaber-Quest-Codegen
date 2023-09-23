#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__FireworkItemController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem::*)()>(&GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x224f928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem::__set__particleSystem(UnityEngine::ParticleSystem value)  {
::cordl_internals::setInstanceField<UnityEngine::ParticleSystem, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ParticleSystem>(value));
}
constexpr UnityEngine::ParticleSystem GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem::__get__particleSystem() const {
return ::cordl_internals::getInstanceField<UnityEngine::ParticleSystem, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem::__set__isSubemitter(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem::__get__isSubemitter() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem::__set__useMainColor(bool value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem::__get__useMainColor() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem::__set__useOwnGradient(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem::__get__useOwnGradient() const {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem::__set__particleColorGradient(UnityEngine::Gradient value)  {
::cordl_internals::setInstanceField<UnityEngine::Gradient, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Gradient>(value));
}
constexpr UnityEngine::Gradient GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem::__get__particleColorGradient() const {
return ::cordl_internals::getInstanceField<UnityEngine::Gradient, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem::__set__randomizeSpeed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem::__get__randomizeSpeed() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__FireworkItemController__FireworkItemParticleSystem>())) {}
 void GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::FireworkItemController.set_directionalLight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)(GlobalNamespace::DirectionalLight)>(&GlobalNamespace::FireworkItemController::set_directionalLight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224e144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "set_directionalLight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DirectionalLight>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FireworkItemController.set_directionalLightIntensity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)(float_t)>(&GlobalNamespace::FireworkItemController::set_directionalLightIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224e14c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "set_directionalLightIntensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FireworkItemController.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)(System::Action_1<GlobalNamespace::FireworkItemController>)>(&GlobalNamespace::FireworkItemController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x224e154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::FireworkItemController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FireworkItemController.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)(System::Action_1<GlobalNamespace::FireworkItemController>)>(&GlobalNamespace::FireworkItemController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x224e204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::FireworkItemController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FireworkItemController.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)()>(&GlobalNamespace::FireworkItemController::Awake)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x224e2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FireworkItemController.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)()>(&GlobalNamespace::FireworkItemController::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x224e338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FireworkItemController.Fire
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)()>(&GlobalNamespace::FireworkItemController::Fire)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x224e490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "Fire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FireworkItemController.FireCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::FireworkItemController::*)()>(&GlobalNamespace::FireworkItemController::FireCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x224e4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "FireCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FireworkItemController.SetLightsColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)(float_t)>(&GlobalNamespace::FireworkItemController::SetLightsColor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x224e390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "SetLightsColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FireworkItemController.PlayExplosionSound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)()>(&GlobalNamespace::FireworkItemController::PlayExplosionSound)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x224e518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "PlayExplosionSound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FireworkItemController.InitializeParticleSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)()>(&GlobalNamespace::FireworkItemController::InitializeParticleSystem)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x224e5f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "InitializeParticleSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FireworkItemController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworkItemController::*)()>(&GlobalNamespace::FireworkItemController::_ctor)> {
  constexpr static std::size_t size = 0x1020;
  constexpr static std::size_t addrs = 0x224e908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FireworkItemController::__set__particleSystems(::ArrayW<GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem> GlobalNamespace::FireworkItemController::__get__particleSystems() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FireworkItemController::__set__lights(::ArrayW<GlobalNamespace::TubeBloomPrePassLight> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::TubeBloomPrePassLight>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::TubeBloomPrePassLight>>(value));
}
constexpr ::ArrayW<GlobalNamespace::TubeBloomPrePassLight> GlobalNamespace::FireworkItemController::__get__lights() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::TubeBloomPrePassLight>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FireworkItemController::__set__audioSource(UnityEngine::AudioSource value)  {
::cordl_internals::setInstanceField<UnityEngine::AudioSource, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AudioSource>(value));
}
constexpr UnityEngine::AudioSource GlobalNamespace::FireworkItemController::__get__audioSource() const {
return ::cordl_internals::getInstanceField<UnityEngine::AudioSource, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FireworkItemController::__set__lightFlashDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::FireworkItemController::__get__lightFlashDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FireworkItemController::__set__lightIntensityCurve(UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationCurve, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationCurve>(value));
}
constexpr UnityEngine::AnimationCurve GlobalNamespace::FireworkItemController::__get__lightIntensityCurve() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationCurve, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FireworkItemController::__set__lightIntensityMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::FireworkItemController::__get__lightIntensityMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FireworkItemController::__set__randomizeColor(bool value)  {
::cordl_internals::setInstanceField<bool, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::FireworkItemController::__get__randomizeColor() const {
return ::cordl_internals::getInstanceField<bool, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FireworkItemController::__set__lightsColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::FireworkItemController::__get__lightsColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FireworkItemController::__set__lightsColorGradient(UnityEngine::Gradient value)  {
::cordl_internals::setInstanceField<UnityEngine::Gradient, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Gradient>(value));
}
constexpr UnityEngine::Gradient GlobalNamespace::FireworkItemController::__get__lightsColorGradient() const {
return ::cordl_internals::getInstanceField<UnityEngine::Gradient, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FireworkItemController::__set__randomizeSpeed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::FireworkItemController::__get__randomizeSpeed() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FireworkItemController::__set__minSpeedMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::FireworkItemController::__get__minSpeedMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FireworkItemController::__set__maxSpeedMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::FireworkItemController::__get__maxSpeedMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FireworkItemController::__set__explosionClips(::ArrayW<UnityEngine::AudioClip> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::AudioClip>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::AudioClip>>(value));
}
constexpr ::ArrayW<UnityEngine::AudioClip> GlobalNamespace::FireworkItemController::__get__explosionClips() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::AudioClip>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FireworkItemController::__set__randomAudioPicker(GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip>>(value));
}
constexpr GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> GlobalNamespace::FireworkItemController::__get__randomAudioPicker() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FireworkItemController::__set__directionalLight(GlobalNamespace::DirectionalLight value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DirectionalLight, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DirectionalLight>(value));
}
constexpr GlobalNamespace::DirectionalLight GlobalNamespace::FireworkItemController::__get__directionalLight() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DirectionalLight, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FireworkItemController::__set__directionalLightIntensity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::FireworkItemController::__get__directionalLightIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FireworkItemController::__set__initialized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::FireworkItemController::__get__initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FireworkItemController::__set_didFinishEvent(System::Action_1<GlobalNamespace::FireworkItemController> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::FireworkItemController>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::FireworkItemController>>(value));
}
constexpr System::Action_1<GlobalNamespace::FireworkItemController> GlobalNamespace::FireworkItemController::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::FireworkItemController>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::FireworkItemController::set_directionalLight(GlobalNamespace::DirectionalLight value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "set_directionalLight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DirectionalLight>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::FireworkItemController::set_directionalLightIntensity(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "set_directionalLightIntensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::FireworkItemController::add_didFinishEvent(System::Action_1<GlobalNamespace::FireworkItemController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::FireworkItemController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::FireworkItemController::remove_didFinishEvent(System::Action_1<GlobalNamespace::FireworkItemController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::FireworkItemController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::FireworkItemController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::FireworkItemController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::FireworkItemController::Fire()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "Fire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::FireworkItemController::FireCoroutine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "FireCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::FireworkItemController::SetLightsColor(float_t intensity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "SetLightsColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, intensity);
}
 void GlobalNamespace::FireworkItemController::PlayExplosionSound()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "PlayExplosionSound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::FireworkItemController::InitializeParticleSystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            "InitializeParticleSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::FireworkItemController::FireworkItemController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<FireworkItemController>())) {}
 void GlobalNamespace::FireworkItemController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworkItemController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__FireworkItemController__Pool._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__FireworkItemController__Pool::*)()>(&GlobalNamespace::GlobalNamespace__FireworkItemController__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x224f938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FireworkItemController__Pool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__FireworkItemController__Pool::GlobalNamespace__FireworkItemController__Pool()  : Zenject::MonoMemoryPool_1<GlobalNamespace::FireworkItemController>(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__FireworkItemController__Pool>())) {}
 void GlobalNamespace::GlobalNamespace__FireworkItemController__Pool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FireworkItemController__Pool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x224f980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::*)()>(&GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x224f9a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::*)()>(&GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x224f9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::*)()>(&GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224fbf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::*)()>(&GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x224fbf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::*)()>(&GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224fc38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::operator System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::__set___4__this(GlobalNamespace::FireworkItemController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FireworkItemController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FireworkItemController>(value));
}
constexpr GlobalNamespace::FireworkItemController GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FireworkItemController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::__set__soundTimeToCenter_5__2(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::__get__soundTimeToCenter_5__2() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::__set__elapsedTime_5__3(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::__get__elapsedTime_5__3() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::__set__explosionSoundFired_5__4(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::__get__explosionSoundFired_5__4() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::GlobalNamespace__FireworkItemController___FireCoroutine_d__29(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__FireworkItemController___FireCoroutine_d__29>(__1__state))) {}
 void GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
