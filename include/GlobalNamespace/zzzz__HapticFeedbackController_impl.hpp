#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackController_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
namespace {
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData::*)()>(&GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fa46c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData::__set_active(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData::__get_active() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData::__set_continuous(bool value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData::__get_continuous() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData::__set_strength(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData::__get_strength() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData::__set_endTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData::__get_endTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData::__set_frequency(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData::__get_frequency() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData::GlobalNamespace__HapticFeedbackController__RumbleData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__HapticFeedbackController__RumbleData>())) {}
 void GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::HapticFeedbackController.get_continuousRumblePreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Libraries::HM::HMLib::VR::HapticPresetSO (GlobalNamespace::HapticFeedbackController::*)()>(&GlobalNamespace::HapticFeedbackController::get_continuousRumblePreset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fa3f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticFeedbackController>::get(),
                            "get_continuousRumblePreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HapticFeedbackController.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticFeedbackController::*)()>(&GlobalNamespace::HapticFeedbackController::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1fa3f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticFeedbackController>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HapticFeedbackController.PlayHapticFeedback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticFeedbackController::*)(UnityEngine::XR::XRNode, Libraries::HM::HMLib::VR::HapticPresetSO)>(&GlobalNamespace::HapticFeedbackController::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1fa4034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticFeedbackController>::get(),
                            "PlayHapticFeedback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Libraries::HM::HMLib::VR::HapticPresetSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HapticFeedbackController.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticFeedbackController::*)()>(&GlobalNamespace::HapticFeedbackController::LateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fa4238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticFeedbackController>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HapticFeedbackController.UpdateRumbles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticFeedbackController::*)()>(&GlobalNamespace::HapticFeedbackController::UpdateRumbles)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x1fa423c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticFeedbackController>::get(),
                            "UpdateRumbles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HapticFeedbackController.GetRumble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData (GlobalNamespace::HapticFeedbackController::*)(UnityEngine::XR::XRNode, ::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::HapticFeedbackController::GetRumble)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1fa4118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticFeedbackController>::get(),
                            "GetRumble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::HapticFeedbackController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticFeedbackController::*)()>(&GlobalNamespace::HapticFeedbackController::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1fa46c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticFeedbackController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::HapticFeedbackController::__set__controllersRumbleEnabled(GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BoolSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BoolSO>(value));
}
constexpr GlobalNamespace::BoolSO GlobalNamespace::HapticFeedbackController::__get__controllersRumbleEnabled() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BoolSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HapticFeedbackController::__set__continuousRumblePreset(Libraries::HM::HMLib::VR::HapticPresetSO value)  {
::cordl_internals::setInstanceField<Libraries::HM::HMLib::VR::HapticPresetSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Libraries::HM::HMLib::VR::HapticPresetSO>(value));
}
constexpr Libraries::HM::HMLib::VR::HapticPresetSO GlobalNamespace::HapticFeedbackController::__get__continuousRumblePreset() const {
return ::cordl_internals::getInstanceField<Libraries::HM::HMLib::VR::HapticPresetSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HapticFeedbackController::__set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IVRPlatformHelper, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IVRPlatformHelper>(value));
}
constexpr GlobalNamespace::IVRPlatformHelper GlobalNamespace::HapticFeedbackController::__get__vrPlatformHelper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IVRPlatformHelper, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HapticFeedbackController::__set__rumblesByNode(System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData>> GlobalNamespace::HapticFeedbackController::__get__rumblesByNode() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::XR::XRNode,System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Libraries::HM::HMLib::VR::HapticPresetSO GlobalNamespace::HapticFeedbackController::get_continuousRumblePreset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticFeedbackController>::get(),
                            "get_continuousRumblePreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Libraries::HM::HMLib::VR::HapticPresetSO, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::HapticFeedbackController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticFeedbackController>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::HapticFeedbackController::PlayHapticFeedback(UnityEngine::XR::XRNode node, Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticFeedbackController>::get(),
                            "PlayHapticFeedback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Libraries::HM::HMLib::VR::HapticPresetSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, hapticPreset);
}
 void GlobalNamespace::HapticFeedbackController::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticFeedbackController>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::HapticFeedbackController::UpdateRumbles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticFeedbackController>::get(),
                            "UpdateRumbles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData GlobalNamespace::HapticFeedbackController::GetRumble(UnityEngine::XR::XRNode node, ::bs_hook::Il2CppWrapperType preset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticFeedbackController>::get(),
                            "GetRumble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__HapticFeedbackController__RumbleData, false>(const_cast<void*>(instance), ___internal_method, node, preset);
}
// Ctor Parameters []
 GlobalNamespace::HapticFeedbackController::HapticFeedbackController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<HapticFeedbackController>())) {}
 void GlobalNamespace::HapticFeedbackController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HapticFeedbackController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
