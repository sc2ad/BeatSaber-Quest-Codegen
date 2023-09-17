#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__OVRHeadsetEmulator_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__CursorLockMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode::____GlobalNamespace__OVRHeadsetEmulator__OpMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode  ::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode::Off{0};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode  ::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode::EditorOnly{1};
constexpr ::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode  ::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode::AlwaysOn{2};
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25bc1bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::Update)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x25bc1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator.IsEmulationActivated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::IsEmulationActivated)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25bc608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator>::get(),
                            "IsEmulationActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator.IsTweakingPitch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::IsTweakingPitch)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x25bc898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator>::get(),
                            "IsTweakingPitch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHeadsetEmulator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRHeadsetEmulator::*)()>(&::GlobalNamespace::OVRHeadsetEmulator::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x25bc914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::OVRHeadsetEmulator::__set_opMode(::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode ::GlobalNamespace::OVRHeadsetEmulator::__get_opMode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRHeadsetEmulator::__set_resetHmdPoseOnRelease(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRHeadsetEmulator::__get_resetHmdPoseOnRelease() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRHeadsetEmulator::__set_resetHmdPoseByMiddleMouseButton(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRHeadsetEmulator::__get_resetHmdPoseByMiddleMouseButton() const {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRHeadsetEmulator::__set_activateKeys(::ArrayW<::UnityEngine::KeyCode> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::KeyCode>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::KeyCode>>(value));
}
constexpr ::ArrayW<::UnityEngine::KeyCode> ::GlobalNamespace::OVRHeadsetEmulator::__get_activateKeys() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::KeyCode>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRHeadsetEmulator::__set_pitchKeys(::ArrayW<::UnityEngine::KeyCode> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::KeyCode>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::KeyCode>>(value));
}
constexpr ::ArrayW<::UnityEngine::KeyCode> ::GlobalNamespace::OVRHeadsetEmulator::__get_pitchKeys() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::KeyCode>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRHeadsetEmulator::__set_manager(::GlobalNamespace::OVRManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OVRManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::OVRManager>(value));
}
constexpr ::GlobalNamespace::OVRManager ::GlobalNamespace::OVRHeadsetEmulator::__get_manager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OVRManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRHeadsetEmulator::__set_lastFrameEmulationActivated(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRHeadsetEmulator::__get_lastFrameEmulationActivated() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRHeadsetEmulator::__set_recordedHeadPoseRelativeOffsetTranslation(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::OVRHeadsetEmulator::__get_recordedHeadPoseRelativeOffsetTranslation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRHeadsetEmulator::__set_recordedHeadPoseRelativeOffsetRotation(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::OVRHeadsetEmulator::__get_recordedHeadPoseRelativeOffsetRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRHeadsetEmulator::__set_hasSentEvent(bool value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRHeadsetEmulator::__get_hasSentEvent() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRHeadsetEmulator::__set_emulatorHasInitialized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x55>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::OVRHeadsetEmulator::__get_emulatorHasInitialized() const {
return ::cordl_internals::getInstanceField<bool, 0x55>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::OVRHeadsetEmulator::__set_previousCursorLockMode(::UnityEngine::CursorLockMode value)  {
::cordl_internals::setInstanceField<::UnityEngine::CursorLockMode, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::CursorLockMode>(value));
}
constexpr ::UnityEngine::CursorLockMode ::GlobalNamespace::OVRHeadsetEmulator::__get_previousCursorLockMode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::CursorLockMode, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::OVRHeadsetEmulator::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::OVRHeadsetEmulator::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::OVRHeadsetEmulator::IsEmulationActivated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator>::get(),
                            "IsEmulationActivated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::OVRHeadsetEmulator::IsTweakingPitch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator>::get(),
                            "IsTweakingPitch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::OVRHeadsetEmulator::OVRHeadsetEmulator()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<OVRHeadsetEmulator>())) {}
 void ::GlobalNamespace::OVRHeadsetEmulator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRHeadsetEmulator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
