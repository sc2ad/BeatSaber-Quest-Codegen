#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRKeyboard_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
// Ctor Parameters [CppParam { name: "isPositionValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isPositionTracked", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isOrientationValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isOrientationTracked", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeInSeconds", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardState::GlobalNamespace__OVRKeyboard__TrackedKeyboardState(bool isPositionValid, bool isPositionTracked, bool isOrientationValid, bool isOrientationTracked, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, double_t timeInSeconds) noexcept : ::bs_hook::ValueTypeWrapper() {this->isPositionValid = isPositionValid;
this->isPositionTracked = isPositionTracked;
this->isOrientationValid = isOrientationValid;
this->isOrientationTracked = isOrientationTracked;
this->position = position;
this->rotation = rotation;
this->timeInSeconds = timeInSeconds;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardState::__set_isPositionValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardState::__get_isPositionValid() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardState::__set_isPositionTracked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardState::__get_isPositionTracked() const {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardState::__set_isOrientationValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardState::__get_isOrientationValid() const {
return ::cordl_internals::getInstanceField<bool, 0x2>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardState::__set_isOrientationTracked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardState::__get_isOrientationTracked() const {
return ::cordl_internals::getInstanceField<bool, 0x3>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardState::__set_position(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x4>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardState::__get_position() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x4>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardState::__set_rotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x10>(this->__instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardState::__get_rotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardState::__set_timeInSeconds(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x20>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardState::__get_timeInSeconds() const {
return ::cordl_internals::getInstanceField<double_t, 0x20>(this->__instance);
}
// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Identifier", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Dimensions", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "KeyboardFlags", ty: "GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "SupportedPresentationStyles", ty: "GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo(::StringW Name, uint64_t Identifier, UnityEngine::Vector3 Dimensions, GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardFlags KeyboardFlags, GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles SupportedPresentationStyles) noexcept : ::bs_hook::ValueTypeWrapper() {this->Name = Name;
this->Identifier = Identifier;
this->Dimensions = Dimensions;
this->KeyboardFlags = KeyboardFlags;
this->SupportedPresentationStyles = SupportedPresentationStyles;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo::__set_Name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo::__get_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo::__set_Identifier(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo::__get_Identifier() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo::__set_Dimensions(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x10>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo::__get_Dimensions() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo::__set_KeyboardFlags(GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardFlags value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardFlags, 0x1c>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardFlags>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardFlags GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo::__get_KeyboardFlags() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardFlags, 0x1c>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo::__set_SupportedPresentationStyles(GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles, 0x20>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo::__get_SupportedPresentationStyles() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles, 0x20>(this->__instance);
}
//  Writing Method size for method: GlobalNamespace::OVRKeyboard.GetKeyboardState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardState (*)()>(&GlobalNamespace::OVRKeyboard::GetKeyboardState)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2612a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRKeyboard>::get(),
                            "GetKeyboardState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRKeyboard.GetSystemKeyboardInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags, ByRef<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo>)>(&GlobalNamespace::OVRKeyboard::GetSystemKeyboardInfo)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2612b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRKeyboard>::get(),
                            "GetSystemKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRKeyboard.StopKeyboardTracking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo)>(&GlobalNamespace::OVRKeyboard::StopKeyboardTracking)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2612c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRKeyboard>::get(),
                            "StopKeyboardTracking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo>::get()}
                        )));
    return ___internal_method;
  }
};
 GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardState GlobalNamespace::OVRKeyboard::GetKeyboardState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRKeyboard>::get(),
                            "GetKeyboardState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardState, false>(nullptr, ___internal_method);
}
 bool GlobalNamespace::OVRKeyboard::GetSystemKeyboardInfo(GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags keyboardQueryFlags, ByRef<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo> keyboardInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRKeyboard>::get(),
                            "GetSystemKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, keyboardQueryFlags, keyboardInfo);
}
 bool GlobalNamespace::OVRKeyboard::StopKeyboardTracking(GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo keyboardInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRKeyboard>::get(),
                            "StopKeyboardTracking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, keyboardInfo);
}
