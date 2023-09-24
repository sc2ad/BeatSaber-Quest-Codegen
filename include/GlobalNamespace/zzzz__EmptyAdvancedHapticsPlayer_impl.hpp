#pragma once
#include "GlobalNamespace/zzzz__EmptyAdvancedHapticsPlayer_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__IHapticFeedbackPlayer_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: GlobalNamespace::EmptyAdvancedHapticsPlayer.PlayHapticFeedback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EmptyAdvancedHapticsPlayer::*)(UnityEngine::XR::XRNode, Libraries::HM::HMLib::VR::HapticPresetSO)>(&GlobalNamespace::EmptyAdvancedHapticsPlayer::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1f87ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyAdvancedHapticsPlayer>::get(),
                            "PlayHapticFeedback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Libraries::HM::HMLib::VR::HapticPresetSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EmptyAdvancedHapticsPlayer.CanPlayHapticPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EmptyAdvancedHapticsPlayer::*)(Libraries::HM::HMLib::VR::HapticPresetSO)>(&GlobalNamespace::EmptyAdvancedHapticsPlayer::CanPlayHapticPreset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f87ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyAdvancedHapticsPlayer>::get(),
                            "CanPlayHapticPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Libraries::HM::HMLib::VR::HapticPresetSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EmptyAdvancedHapticsPlayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EmptyAdvancedHapticsPlayer::*)()>(&GlobalNamespace::EmptyAdvancedHapticsPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f87eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyAdvancedHapticsPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IHapticFeedbackPlayer
constexpr  GlobalNamespace::EmptyAdvancedHapticsPlayer::operator GlobalNamespace::IHapticFeedbackPlayer() const noexcept {
return GlobalNamespace::IHapticFeedbackPlayer(::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::EmptyAdvancedHapticsPlayer::PlayHapticFeedback(UnityEngine::XR::XRNode node, Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyAdvancedHapticsPlayer>::get(),
                            "PlayHapticFeedback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Libraries::HM::HMLib::VR::HapticPresetSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, hapticPreset);
}
 bool GlobalNamespace::EmptyAdvancedHapticsPlayer::CanPlayHapticPreset(Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyAdvancedHapticsPlayer>::get(),
                            "CanPlayHapticPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Libraries::HM::HMLib::VR::HapticPresetSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, hapticPreset);
}
 GlobalNamespace::EmptyAdvancedHapticsPlayer GlobalNamespace::EmptyAdvancedHapticsPlayer::New_ctor()  {
GlobalNamespace::EmptyAdvancedHapticsPlayer o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::EmptyAdvancedHapticsPlayer>())};
return o;
}
 void GlobalNamespace::EmptyAdvancedHapticsPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EmptyAdvancedHapticsPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
