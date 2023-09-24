#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RumbleHapticFeedbackPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__RumbleHapticFeedbackPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__IHapticFeedbackPlayer_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData::*)()>(&GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f8b940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData::__set_active(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData::__get_active() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData::__set_continuous(bool value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData::__get_continuous() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData::__set_strength(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData::__get_strength() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData::__set_endTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData::__get_endTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData::__set_frequency(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData::__get_frequency() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData::New_ctor()  {
GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::RumbleHapticFeedbackPlayer.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RumbleHapticFeedbackPlayer::*)()>(&GlobalNamespace::RumbleHapticFeedbackPlayer::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1f8b1b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RumbleHapticFeedbackPlayer>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RumbleHapticFeedbackPlayer.PlayHapticFeedback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RumbleHapticFeedbackPlayer::*)(UnityEngine::XR::XRNode, Libraries::HM::HMLib::VR::HapticPresetSO)>(&GlobalNamespace::RumbleHapticFeedbackPlayer::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x1f8b290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RumbleHapticFeedbackPlayer>::get(),
                            "PlayHapticFeedback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Libraries::HM::HMLib::VR::HapticPresetSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RumbleHapticFeedbackPlayer.CanPlayHapticPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::RumbleHapticFeedbackPlayer::*)(Libraries::HM::HMLib::VR::HapticPresetSO)>(&GlobalNamespace::RumbleHapticFeedbackPlayer::CanPlayHapticPreset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1f8b478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RumbleHapticFeedbackPlayer>::get(),
                            "CanPlayHapticPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Libraries::HM::HMLib::VR::HapticPresetSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RumbleHapticFeedbackPlayer.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RumbleHapticFeedbackPlayer::*)()>(&GlobalNamespace::RumbleHapticFeedbackPlayer::LateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1f8b4b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RumbleHapticFeedbackPlayer>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RumbleHapticFeedbackPlayer.UpdateRumbles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RumbleHapticFeedbackPlayer::*)()>(&GlobalNamespace::RumbleHapticFeedbackPlayer::UpdateRumbles)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x1f8b4bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RumbleHapticFeedbackPlayer>::get(),
                            "UpdateRumbles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RumbleHapticFeedbackPlayer.GetRumble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData (GlobalNamespace::RumbleHapticFeedbackPlayer::*)(UnityEngine::XR::XRNode, ::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::RumbleHapticFeedbackPlayer::GetRumble)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1f8b358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RumbleHapticFeedbackPlayer>::get(),
                            "GetRumble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RumbleHapticFeedbackPlayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RumbleHapticFeedbackPlayer::*)()>(&GlobalNamespace::RumbleHapticFeedbackPlayer::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1f8b948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RumbleHapticFeedbackPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IHapticFeedbackPlayer
constexpr  GlobalNamespace::RumbleHapticFeedbackPlayer::operator GlobalNamespace::IHapticFeedbackPlayer() const noexcept {
return GlobalNamespace::IHapticFeedbackPlayer(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RumbleHapticFeedbackPlayer::__set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IVRPlatformHelper, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IVRPlatformHelper>(value));
}
constexpr GlobalNamespace::IVRPlatformHelper GlobalNamespace::RumbleHapticFeedbackPlayer::__get__vrPlatformHelper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IVRPlatformHelper, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RumbleHapticFeedbackPlayer::__set__rumblesByNode(System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData>> GlobalNamespace::RumbleHapticFeedbackPlayer::__get__rumblesByNode() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::RumbleHapticFeedbackPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RumbleHapticFeedbackPlayer>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::RumbleHapticFeedbackPlayer::PlayHapticFeedback(UnityEngine::XR::XRNode node, Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RumbleHapticFeedbackPlayer>::get(),
                            "PlayHapticFeedback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Libraries::HM::HMLib::VR::HapticPresetSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, hapticPreset);
}
 bool GlobalNamespace::RumbleHapticFeedbackPlayer::CanPlayHapticPreset(Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RumbleHapticFeedbackPlayer>::get(),
                            "CanPlayHapticPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Libraries::HM::HMLib::VR::HapticPresetSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, hapticPreset);
}
 void GlobalNamespace::RumbleHapticFeedbackPlayer::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RumbleHapticFeedbackPlayer>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::RumbleHapticFeedbackPlayer::UpdateRumbles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RumbleHapticFeedbackPlayer>::get(),
                            "UpdateRumbles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData GlobalNamespace::RumbleHapticFeedbackPlayer::GetRumble(UnityEngine::XR::XRNode node, ::bs_hook::Il2CppWrapperType preset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RumbleHapticFeedbackPlayer>::get(),
                            "GetRumble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__RumbleHapticFeedbackPlayer__RumbleData, false>(const_cast<void*>(instance), ___internal_method, node, preset);
}
 GlobalNamespace::RumbleHapticFeedbackPlayer GlobalNamespace::RumbleHapticFeedbackPlayer::New_ctor()  {
GlobalNamespace::RumbleHapticFeedbackPlayer o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::RumbleHapticFeedbackPlayer>())};
return o;
}
 void GlobalNamespace::RumbleHapticFeedbackPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RumbleHapticFeedbackPlayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
