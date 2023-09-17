#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__SaberClashEffect_def.hpp"
#include "GlobalNamespace/zzzz__SaberClashChecker_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberClashEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberClashEffect::*)()>(&::GlobalNamespace::SaberClashEffect::Start)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x226718c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashEffect.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberClashEffect::*)()>(&::GlobalNamespace::SaberClashEffect::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x226733c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashEffect.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberClashEffect::*)()>(&::GlobalNamespace::SaberClashEffect::LateUpdate)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x226734c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberClashEffect::*)()>(&::GlobalNamespace::SaberClashEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2267448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::SaberClashEffect::__set__sparkleParticleSystem(::UnityEngine::ParticleSystem value)  {
::cordl_internals::setInstanceField<::UnityEngine::ParticleSystem, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ParticleSystem>(value));
}
constexpr ::UnityEngine::ParticleSystem ::GlobalNamespace::SaberClashEffect::__get__sparkleParticleSystem() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberClashEffect::__set__glowParticleSystem(::UnityEngine::ParticleSystem value)  {
::cordl_internals::setInstanceField<::UnityEngine::ParticleSystem, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ParticleSystem>(value));
}
constexpr ::UnityEngine::ParticleSystem ::GlobalNamespace::SaberClashEffect::__get__glowParticleSystem() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberClashEffect::__set__rumblePreset(::Libraries::HM::HMLib::VR::HapticPresetSO value)  {
::cordl_internals::setInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Libraries::HM::HMLib::VR::HapticPresetSO>(value));
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO ::GlobalNamespace::SaberClashEffect::__get__rumblePreset() const {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberClashEffect::__set__saberClashChecker(::GlobalNamespace::SaberClashChecker value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SaberClashChecker, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::SaberClashChecker>(value));
}
constexpr ::GlobalNamespace::SaberClashChecker ::GlobalNamespace::SaberClashEffect::__get__saberClashChecker() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberClashChecker, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberClashEffect::__set__hapticFeedbackController(::GlobalNamespace::HapticFeedbackManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::HapticFeedbackManager, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::HapticFeedbackManager>(value));
}
constexpr ::GlobalNamespace::HapticFeedbackManager ::GlobalNamespace::SaberClashEffect::__get__hapticFeedbackController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HapticFeedbackManager, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberClashEffect::__set__colorManager(::GlobalNamespace::ColorManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ColorManager>(value));
}
constexpr ::GlobalNamespace::ColorManager ::GlobalNamespace::SaberClashEffect::__get__colorManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberClashEffect::__set__sparkleParticleSystemEmmisionModule(::UnityEngine::____UnityEngine__ParticleSystem__EmissionModule value)  {
::cordl_internals::setInstanceField<::UnityEngine::____UnityEngine__ParticleSystem__EmissionModule, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::____UnityEngine__ParticleSystem__EmissionModule>(value));
}
constexpr ::UnityEngine::____UnityEngine__ParticleSystem__EmissionModule ::GlobalNamespace::SaberClashEffect::__get__sparkleParticleSystemEmmisionModule() const {
return ::cordl_internals::getInstanceField<::UnityEngine::____UnityEngine__ParticleSystem__EmissionModule, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberClashEffect::__set__glowParticleSystemEmmisionModule(::UnityEngine::____UnityEngine__ParticleSystem__EmissionModule value)  {
::cordl_internals::setInstanceField<::UnityEngine::____UnityEngine__ParticleSystem__EmissionModule, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::____UnityEngine__ParticleSystem__EmissionModule>(value));
}
constexpr ::UnityEngine::____UnityEngine__ParticleSystem__EmissionModule ::GlobalNamespace::SaberClashEffect::__get__glowParticleSystemEmmisionModule() const {
return ::cordl_internals::getInstanceField<::UnityEngine::____UnityEngine__ParticleSystem__EmissionModule, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberClashEffect::__set__sabersAreClashing(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::SaberClashEffect::__get__sabersAreClashing() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::SaberClashEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::SaberClashEffect::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::SaberClashEffect::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::SaberClashEffect::SaberClashEffect()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<SaberClashEffect>())) {}
 void ::GlobalNamespace::SaberClashEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
