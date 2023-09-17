#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "GlobalNamespace/zzzz__RumbleHapticFeedbackPlayer_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__IHapticFeedbackPlayer_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HapticFeedbackManager.get_continuousRumblePreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Libraries::HM::HMLib::VR::HapticPresetSO (::GlobalNamespace::HapticFeedbackManager::*)()>(&::GlobalNamespace::HapticFeedbackManager::get_continuousRumblePreset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f84d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackManager>::get(),
                            "get_continuousRumblePreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticFeedbackManager.PlayHapticFeedback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HapticFeedbackManager::*)(::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO)>(&::GlobalNamespace::HapticFeedbackManager::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1f84d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackManager>::get(),
                            "PlayHapticFeedback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HapticFeedbackManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HapticFeedbackManager::*)()>(&::GlobalNamespace::HapticFeedbackManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f84ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::HapticFeedbackManager::__set__controllersRumbleEnabled(::GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BoolSO>(value));
}
constexpr ::GlobalNamespace::BoolSO ::GlobalNamespace::HapticFeedbackManager::__get__controllersRumbleEnabled() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::HapticFeedbackManager::__set__continuousRumblePreset(::Libraries::HM::HMLib::VR::HapticPresetSO value)  {
::cordl_internals::setInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Libraries::HM::HMLib::VR::HapticPresetSO>(value));
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO ::GlobalNamespace::HapticFeedbackManager::__get__continuousRumblePreset() const {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::HapticFeedbackManager::__set__rumbleHapticFeedbackPlayer(::GlobalNamespace::RumbleHapticFeedbackPlayer value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RumbleHapticFeedbackPlayer, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::RumbleHapticFeedbackPlayer>(value));
}
constexpr ::GlobalNamespace::RumbleHapticFeedbackPlayer ::GlobalNamespace::HapticFeedbackManager::__get__rumbleHapticFeedbackPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RumbleHapticFeedbackPlayer, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::HapticFeedbackManager::__set__advancedHapticFeedbackPlayer(::GlobalNamespace::IHapticFeedbackPlayer value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IHapticFeedbackPlayer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IHapticFeedbackPlayer>(value));
}
constexpr ::GlobalNamespace::IHapticFeedbackPlayer ::GlobalNamespace::HapticFeedbackManager::__get__advancedHapticFeedbackPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IHapticFeedbackPlayer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::Libraries::HM::HMLib::VR::HapticPresetSO ::GlobalNamespace::HapticFeedbackManager::get_continuousRumblePreset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackManager>::get(),
                            "get_continuousRumblePreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Libraries::HM::HMLib::VR::HapticPresetSO, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::HapticFeedbackManager::PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackManager>::get(),
                            "PlayHapticFeedback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, hapticPreset);
}
// Ctor Parameters []
 ::GlobalNamespace::HapticFeedbackManager::HapticFeedbackManager()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<HapticFeedbackManager>())) {}
 void ::GlobalNamespace::HapticFeedbackManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HapticFeedbackManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
