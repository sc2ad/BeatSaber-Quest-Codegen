#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SavedStructState_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserChange_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserAccountHandle_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserPairingOptions_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ISavedState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax.AndPairRemainingDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax (UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax::*)()>(&UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax::AndPairRemainingDevices)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x293b848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax>::get(),
                            "AndPairRemainingDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_UserIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax::UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax(int32_t m_UserIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_UserIndex = m_UserIndex;
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax::__set_m_UserIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax::__get_m_UserIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
 UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax::AndPairRemainingDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax>::get(),
                            "AndPairRemainingDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserFlags::UnityEngine__InputSystem__Users__InputUser__UserFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserFlags  UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserFlags::BindToAllDevices{1};
constexpr UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserFlags  UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserFlags::UserAccountSelectionInProgress{2};
// Ctor Parameters [CppParam { name: "platformUserAccountHandle", ty: "System::Nullable_1<UnityEngine::InputSystem::Users::InputUserAccountHandle>", modifiers: "", def_value: Some("{}") }, CppParam { name: "platformUserAccountName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "platformUserAccountId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "deviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "actions", ty: "UnityEngine::InputSystem::IInputActionCollection", modifiers: "", def_value: Some("csnull") }, CppParam { name: "controlScheme", ty: "System::Nullable_1<UnityEngine::InputSystem::InputControlScheme>", modifiers: "", def_value: Some("{}") }, CppParam { name: "controlSchemeMatch", ty: "UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__MatchResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "lostDeviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lostDeviceStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserFlags", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::UnityEngine__InputSystem__Users__InputUser__UserData(System::Nullable_1<UnityEngine::InputSystem::Users::InputUserAccountHandle> platformUserAccountHandle, ::StringW platformUserAccountName, ::StringW platformUserAccountId, int32_t deviceCount, int32_t deviceStartIndex, UnityEngine::InputSystem::IInputActionCollection actions, System::Nullable_1<UnityEngine::InputSystem::InputControlScheme> controlScheme, UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__MatchResult controlSchemeMatch, int32_t lostDeviceCount, int32_t lostDeviceStartIndex, UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserFlags flags) noexcept : ::bs_hook::ValueTypeWrapper() {this->platformUserAccountHandle = platformUserAccountHandle;
this->platformUserAccountName = platformUserAccountName;
this->platformUserAccountId = platformUserAccountId;
this->deviceCount = deviceCount;
this->deviceStartIndex = deviceStartIndex;
this->actions = actions;
this->controlScheme = controlScheme;
this->controlSchemeMatch = controlSchemeMatch;
this->lostDeviceCount = lostDeviceCount;
this->lostDeviceStartIndex = lostDeviceStartIndex;
this->flags = flags;
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__set_platformUserAccountHandle(System::Nullable_1<UnityEngine::InputSystem::Users::InputUserAccountHandle> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<UnityEngine::InputSystem::Users::InputUserAccountHandle>, 0x0>(this->__instance, std::forward<System::Nullable_1<UnityEngine::InputSystem::Users::InputUserAccountHandle>>(value));
}
constexpr System::Nullable_1<UnityEngine::InputSystem::Users::InputUserAccountHandle> UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__get_platformUserAccountHandle() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<UnityEngine::InputSystem::Users::InputUserAccountHandle>, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__set_platformUserAccountName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__get_platformUserAccountName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__set_platformUserAccountId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__get_platformUserAccountId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__set_deviceCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__get_deviceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__set_deviceStartIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__get_deviceStartIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__set_actions(UnityEngine::InputSystem::IInputActionCollection value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::IInputActionCollection, 0x30>(this->__instance, std::forward<UnityEngine::InputSystem::IInputActionCollection>(value));
}
constexpr UnityEngine::InputSystem::IInputActionCollection UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__get_actions() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::IInputActionCollection, 0x30>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__set_controlScheme(System::Nullable_1<UnityEngine::InputSystem::InputControlScheme> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<UnityEngine::InputSystem::InputControlScheme>, 0x38>(this->__instance, std::forward<System::Nullable_1<UnityEngine::InputSystem::InputControlScheme>>(value));
}
constexpr System::Nullable_1<UnityEngine::InputSystem::InputControlScheme> UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__get_controlScheme() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<UnityEngine::InputSystem::InputControlScheme>, 0x38>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__set_controlSchemeMatch(UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__MatchResult value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__MatchResult, 0x58>(this->__instance, std::forward<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__MatchResult>(value));
}
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__MatchResult UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__get_controlSchemeMatch() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__MatchResult, 0x58>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__set_lostDeviceCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xa8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__get_lostDeviceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__set_lostDeviceStartIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xac>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__get_lostDeviceStartIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xac>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__set_flags(UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserFlags value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserFlags, 0xb0>(this->__instance, std::forward<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserFlags>(value));
}
constexpr UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserFlags UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData::__get_flags() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserFlags, 0xb0>(this->__instance);
}
//  Writing Method size for method: UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount::*)(UnityEngine::InputSystem::InputDevice, UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount::Compare)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x293b86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount.GetUserAccountHandleForDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<UnityEngine::InputSystem::Users::InputUserAccountHandle> (*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount::GetUserAccountHandleForDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x293b8a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount>::get(),
                            "GetUserAccountHandleForDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IComparer_1<UnityEngine::InputSystem::InputDevice>
constexpr  UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount::operator System::Collections::Generic::IComparer_1<UnityEngine::InputSystem::InputDevice>() const {
return System::Collections::Generic::IComparer_1<UnityEngine::InputSystem::InputDevice>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "platformUserAccountHandle", ty: "UnityEngine::InputSystem::Users::InputUserAccountHandle", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount::UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount(UnityEngine::InputSystem::Users::InputUserAccountHandle platformUserAccountHandle) noexcept : ::bs_hook::ValueTypeWrapper() {this->platformUserAccountHandle = platformUserAccountHandle;
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount::__set_platformUserAccountHandle(UnityEngine::InputSystem::Users::InputUserAccountHandle value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Users::InputUserAccountHandle, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::Users::InputUserAccountHandle>(value));
}
constexpr UnityEngine::InputSystem::Users::InputUserAccountHandle UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount::__get_platformUserAccountHandle() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Users::InputUserAccountHandle, 0x0>(this->__instance);
}
 int32_t UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount::Compare(UnityEngine::InputSystem::InputDevice x, UnityEngine::InputSystem::InputDevice y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, x, y);
}
 System::Nullable_1<UnityEngine::InputSystem::Users::InputUserAccountHandle> UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount::GetUserAccountHandleForDevice(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__CompareDevicesByUserAccount>::get(),
                            "GetUserAccountHandleForDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<UnityEngine::InputSystem::Users::InputUserAccountHandle>, false>(nullptr, ___internal_method, device);
}
// Ctor Parameters [CppParam { name: "device", ty: "UnityEngine::InputSystem::InputDevice", modifiers: "", def_value: Some("csnull") }, CppParam { name: "userId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection::UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection(UnityEngine::InputSystem::InputDevice device, uint32_t userId) noexcept : ::bs_hook::ValueTypeWrapper() {this->device = device;
this->userId = userId;
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection::__set_device(UnityEngine::InputSystem::InputDevice value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputDevice, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::InputDevice>(value));
}
constexpr UnityEngine::InputSystem::InputDevice UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection::__get_device() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputDevice, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection::__set_userId(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection::__get_userId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
// Ctor Parameters [CppParam { name: "pairingStateVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastUserId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allUserCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allPairedDeviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allLostDeviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allUsers", ty: "::ArrayW<UnityEngine::InputSystem::Users::InputUser>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "allUserData", ty: "::ArrayW<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "allPairedDevices", ty: "::ArrayW<UnityEngine::InputSystem::InputDevice>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "allLostDevices", ty: "::ArrayW<UnityEngine::InputSystem::InputDevice>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ongoingAccountSelections", ty: "UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection>", modifiers: "", def_value: Some("{}") }, CppParam { name: "onChange", ty: "UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_3<UnityEngine::InputSystem::Users::InputUser,UnityEngine::InputSystem::Users::InputUserChange,UnityEngine::InputSystem::InputDevice>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "onUnpairedDeviceUsed", ty: "UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::InputControl,UnityEngine::InputSystem::LowLevel::InputEventPtr>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "onPreFilterUnpairedDeviceUsed", ty: "UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Func_3<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "actionChangeDelegate", ty: "System::Action_2<::bs_hook::Il2CppWrapperType,UnityEngine::InputSystem::InputActionChange>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "onDeviceChangeDelegate", ty: "System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "onEventDelegate", ty: "System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "onActionChangeHooked", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "onDeviceChangeHooked", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "onEventHooked", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "listenForUnpairedDeviceActivity", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::UnityEngine__InputSystem__Users__InputUser__GlobalState(int32_t pairingStateVersion, uint32_t lastUserId, int32_t allUserCount, int32_t allPairedDeviceCount, int32_t allLostDeviceCount, ::ArrayW<UnityEngine::InputSystem::Users::InputUser> allUsers, ::ArrayW<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData> allUserData, ::ArrayW<UnityEngine::InputSystem::InputDevice> allPairedDevices, ::ArrayW<UnityEngine::InputSystem::InputDevice> allLostDevices, UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> ongoingAccountSelections, UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_3<UnityEngine::InputSystem::Users::InputUser,UnityEngine::InputSystem::Users::InputUserChange,UnityEngine::InputSystem::InputDevice>> onChange, UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::InputControl,UnityEngine::InputSystem::LowLevel::InputEventPtr>> onUnpairedDeviceUsed, UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Func_3<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>> onPreFilterUnpairedDeviceUsed, System::Action_2<::bs_hook::Il2CppWrapperType,UnityEngine::InputSystem::InputActionChange> actionChangeDelegate, System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange> onDeviceChangeDelegate, System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice> onEventDelegate, bool onActionChangeHooked, bool onDeviceChangeHooked, bool onEventHooked, int32_t listenForUnpairedDeviceActivity) noexcept : ::bs_hook::ValueTypeWrapper() {this->pairingStateVersion = pairingStateVersion;
this->lastUserId = lastUserId;
this->allUserCount = allUserCount;
this->allPairedDeviceCount = allPairedDeviceCount;
this->allLostDeviceCount = allLostDeviceCount;
this->allUsers = allUsers;
this->allUserData = allUserData;
this->allPairedDevices = allPairedDevices;
this->allLostDevices = allLostDevices;
this->ongoingAccountSelections = ongoingAccountSelections;
this->onChange = onChange;
this->onUnpairedDeviceUsed = onUnpairedDeviceUsed;
this->onPreFilterUnpairedDeviceUsed = onPreFilterUnpairedDeviceUsed;
this->actionChangeDelegate = actionChangeDelegate;
this->onDeviceChangeDelegate = onDeviceChangeDelegate;
this->onEventDelegate = onEventDelegate;
this->onActionChangeHooked = onActionChangeHooked;
this->onDeviceChangeHooked = onDeviceChangeHooked;
this->onEventHooked = onEventHooked;
this->listenForUnpairedDeviceActivity = listenForUnpairedDeviceActivity;
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_pairingStateVersion(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_pairingStateVersion() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_lastUserId(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_lastUserId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_allUserCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_allUserCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_allPairedDeviceCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_allPairedDeviceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_allLostDeviceCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_allLostDeviceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_allUsers(::ArrayW<UnityEngine::InputSystem::Users::InputUser> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::Users::InputUser>, 0x18>(this->__instance, std::forward<::ArrayW<UnityEngine::InputSystem::Users::InputUser>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::Users::InputUser> UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_allUsers() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::Users::InputUser>, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_allUserData(::ArrayW<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData>, 0x20>(this->__instance, std::forward<::ArrayW<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData> UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_allUserData() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__UserData>, 0x20>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_allPairedDevices(::ArrayW<UnityEngine::InputSystem::InputDevice> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::InputDevice>, 0x28>(this->__instance, std::forward<::ArrayW<UnityEngine::InputSystem::InputDevice>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::InputDevice> UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_allPairedDevices() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::InputDevice>, 0x28>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_allLostDevices(::ArrayW<UnityEngine::InputSystem::InputDevice> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::InputDevice>, 0x30>(this->__instance, std::forward<::ArrayW<UnityEngine::InputSystem::InputDevice>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::InputDevice> UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_allLostDevices() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::InputDevice>, 0x30>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_ongoingAccountSelections(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection>, 0x38>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_ongoingAccountSelections() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection>, 0x38>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_onChange(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_3<UnityEngine::InputSystem::Users::InputUser,UnityEngine::InputSystem::Users::InputUserChange,UnityEngine::InputSystem::InputDevice>> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_3<UnityEngine::InputSystem::Users::InputUser,UnityEngine::InputSystem::Users::InputUserChange,UnityEngine::InputSystem::InputDevice>>, 0x58>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_3<UnityEngine::InputSystem::Users::InputUser,UnityEngine::InputSystem::Users::InputUserChange,UnityEngine::InputSystem::InputDevice>>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_3<UnityEngine::InputSystem::Users::InputUser,UnityEngine::InputSystem::Users::InputUserChange,UnityEngine::InputSystem::InputDevice>> UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_onChange() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_3<UnityEngine::InputSystem::Users::InputUser,UnityEngine::InputSystem::Users::InputUserChange,UnityEngine::InputSystem::InputDevice>>, 0x58>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_onUnpairedDeviceUsed(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::InputControl,UnityEngine::InputSystem::LowLevel::InputEventPtr>> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::InputControl,UnityEngine::InputSystem::LowLevel::InputEventPtr>>, 0xa8>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::InputControl,UnityEngine::InputSystem::LowLevel::InputEventPtr>>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::InputControl,UnityEngine::InputSystem::LowLevel::InputEventPtr>> UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_onUnpairedDeviceUsed() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_2<UnityEngine::InputSystem::InputControl,UnityEngine::InputSystem::LowLevel::InputEventPtr>>, 0xa8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_onPreFilterUnpairedDeviceUsed(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Func_3<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Func_3<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>>, 0xf8>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Func_3<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Func_3<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>> UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_onPreFilterUnpairedDeviceUsed() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Func_3<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>>, 0xf8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_actionChangeDelegate(System::Action_2<::bs_hook::Il2CppWrapperType,UnityEngine::InputSystem::InputActionChange> value)  {
::cordl_internals::setInstanceField<System::Action_2<::bs_hook::Il2CppWrapperType,UnityEngine::InputSystem::InputActionChange>, 0x148>(this->__instance, std::forward<System::Action_2<::bs_hook::Il2CppWrapperType,UnityEngine::InputSystem::InputActionChange>>(value));
}
constexpr System::Action_2<::bs_hook::Il2CppWrapperType,UnityEngine::InputSystem::InputActionChange> UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_actionChangeDelegate() const {
return ::cordl_internals::getInstanceField<System::Action_2<::bs_hook::Il2CppWrapperType,UnityEngine::InputSystem::InputActionChange>, 0x148>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_onDeviceChangeDelegate(System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange> value)  {
::cordl_internals::setInstanceField<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange>, 0x150>(this->__instance, std::forward<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange>>(value));
}
constexpr System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange> UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_onDeviceChangeDelegate() const {
return ::cordl_internals::getInstanceField<System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange>, 0x150>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_onEventDelegate(System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice> value)  {
::cordl_internals::setInstanceField<System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>, 0x158>(this->__instance, std::forward<System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>>(value));
}
constexpr System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice> UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_onEventDelegate() const {
return ::cordl_internals::getInstanceField<System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice>, 0x158>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_onActionChangeHooked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x160>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_onActionChangeHooked() const {
return ::cordl_internals::getInstanceField<bool, 0x160>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_onDeviceChangeHooked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x161>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_onDeviceChangeHooked() const {
return ::cordl_internals::getInstanceField<bool, 0x161>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_onEventHooked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x162>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_onEventHooked() const {
return ::cordl_internals::getInstanceField<bool, 0x162>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__set_listenForUnpairedDeviceActivity(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x164>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState::__get_listenForUnpairedDeviceActivity() const {
return ::cordl_internals::getInstanceField<int32_t, 0x164>(this->__instance);
}
//  Writing Method size for method: UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c::*)()>(&UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x293b944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c._SaveAndResetState_b__86_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c::*)(ByRef<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState>)>(&UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c::_SaveAndResetState_b__86_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x293b94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c>::get(),
                            "<SaveAndResetState>b__86_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c._SaveAndResetState_b__86_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c::*)()>(&UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c::_SaveAndResetState_b__86_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x293b9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c>::get(),
                            "<SaveAndResetState>b__86_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c::__set___9(UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c>::get>(std::forward<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c>(value));
}
 UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c::__get___9()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c>::get>();
}
 void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c::__set___9__86_0(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState> value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState>, "<>9__86_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c>::get>(std::forward<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState>>(value));
}
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState> UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c::__get___9__86_0()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState>, "<>9__86_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c>::get>();
}
 void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c::__set___9__86_1(System::Action value)  {
::cordl_internals::setStaticField<System::Action, "<>9__86_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c>::get>(std::forward<System::Action>(value));
}
 System::Action UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c::__get___9__86_1()  {
return ::cordl_internals::getStaticField<System::Action, "<>9__86_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c>::get>();
}
// Ctor Parameters []
 UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c::UnityEngine__InputSystem__Users__InputUser____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__InputSystem__Users__InputUser____c>())) {}
 void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c::_SaveAndResetState_b__86_0(ByRef<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState> state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c>::get(),
                            "<SaveAndResetState>b__86_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 void UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c::_SaveAndResetState_b__86_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser____c>::get(),
                            "<SaveAndResetState>b__86_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.get_valid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Users::InputUser::*)()>(&UnityEngine::InputSystem::Users::InputUser::get_valid)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x292a8a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_valid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.get_index
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::Users::InputUser::*)()>(&UnityEngine::InputSystem::Users::InputUser::get_index)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2937200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_index",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::InputSystem::Users::InputUser::*)()>(&UnityEngine::InputSystem::Users::InputUser::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2937388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.get_platformUserAccountHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<UnityEngine::InputSystem::Users::InputUserAccountHandle> (UnityEngine::InputSystem::Users::InputUser::*)()>(&UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountHandle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2937390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_platformUserAccountHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.get_platformUserAccountName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Users::InputUser::*)()>(&UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountName)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2937420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_platformUserAccountName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.get_platformUserAccountId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Users::InputUser::*)()>(&UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountId)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2937498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_platformUserAccountId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.get_pairedDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice> (UnityEngine::InputSystem::Users::InputUser::*)()>(&UnityEngine::InputSystem::Users::InputUser::get_pairedDevices)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x292b610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_pairedDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.get_lostDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice> (UnityEngine::InputSystem::Users::InputUser::*)()>(&UnityEngine::InputSystem::Users::InputUser::get_lostDevices)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2937510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_lostDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.get_actions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::IInputActionCollection (UnityEngine::InputSystem::Users::InputUser::*)()>(&UnityEngine::InputSystem::Users::InputUser::get_actions)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x29375bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_actions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.get_controlScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<UnityEngine::InputSystem::InputControlScheme> (UnityEngine::InputSystem::Users::InputUser::*)()>(&UnityEngine::InputSystem::Users::InputUser::get_controlScheme)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x292a94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_controlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.get_controlSchemeMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__MatchResult (UnityEngine::InputSystem::Users::InputUser::*)()>(&UnityEngine::InputSystem::Users::InputUser::get_controlSchemeMatch)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2937634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_controlSchemeMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.get_hasMissingRequiredDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Users::InputUser::*)()>(&UnityEngine::InputSystem::Users::InputUser::get_hasMissingRequiredDevices)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x292b704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_hasMissingRequiredDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.get_all
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Users::InputUser> (*)()>(&UnityEngine::InputSystem::Users::InputUser::get_all)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x29376c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_all",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.add_onChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_3<UnityEngine::InputSystem::Users::InputUser,UnityEngine::InputSystem::Users::InputUserChange,UnityEngine::InputSystem::InputDevice>)>(&UnityEngine::InputSystem::Users::InputUser::add_onChange)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x292e934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "add_onChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<UnityEngine::InputSystem::Users::InputUser,UnityEngine::InputSystem::Users::InputUserChange,UnityEngine::InputSystem::InputDevice>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.remove_onChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_3<UnityEngine::InputSystem::Users::InputUser,UnityEngine::InputSystem::Users::InputUserChange,UnityEngine::InputSystem::InputDevice>)>(&UnityEngine::InputSystem::Users::InputUser::remove_onChange)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x292f4cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "remove_onChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<UnityEngine::InputSystem::Users::InputUser,UnityEngine::InputSystem::Users::InputUserChange,UnityEngine::InputSystem::InputDevice>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.add_onUnpairedDeviceUsed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_2<UnityEngine::InputSystem::InputControl,UnityEngine::InputSystem::LowLevel::InputEventPtr>)>(&UnityEngine::InputSystem::Users::InputUser::add_onUnpairedDeviceUsed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x292ecf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "add_onUnpairedDeviceUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::InputControl,UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.remove_onUnpairedDeviceUsed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_2<UnityEngine::InputSystem::InputControl,UnityEngine::InputSystem::LowLevel::InputEventPtr>)>(&UnityEngine::InputSystem::Users::InputUser::remove_onUnpairedDeviceUsed)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x292efc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "remove_onUnpairedDeviceUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::InputControl,UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.add_onPrefilterUnpairedDeviceActivity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Func_3<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>)>(&UnityEngine::InputSystem::Users::InputUser::add_onPrefilterUnpairedDeviceActivity)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x292edd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "add_onPrefilterUnpairedDeviceActivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.remove_onPrefilterUnpairedDeviceActivity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Func_3<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>)>(&UnityEngine::InputSystem::Users::InputUser::remove_onPrefilterUnpairedDeviceActivity)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x292f0b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "remove_onPrefilterUnpairedDeviceActivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.get_listenForUnpairedDeviceActivity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&UnityEngine::InputSystem::Users::InputUser::get_listenForUnpairedDeviceActivity)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x292ee88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_listenForUnpairedDeviceActivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.set_listenForUnpairedDeviceActivity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&UnityEngine::InputSystem::Users::InputUser::set_listenForUnpairedDeviceActivity)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x292eed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "set_listenForUnpairedDeviceActivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Users::InputUser::*)()>(&UnityEngine::InputSystem::Users::InputUser::ToString)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x29378f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Users::InputUser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.AssociateActionsWithUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Users::InputUser::*)(UnityEngine::InputSystem::IInputActionCollection)>(&UnityEngine::InputSystem::Users::InputUser::AssociateActionsWithUser)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x292db98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "AssociateActionsWithUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::IInputActionCollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.ActivateControlScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax (UnityEngine::InputSystem::Users::InputUser::*)(::StringW)>(&UnityEngine::InputSystem::Users::InputUser::ActivateControlScheme)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x292e1ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "ActivateControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.TryFindControlScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Users::InputUser::*)(::StringW, ByRef<UnityEngine::InputSystem::InputControlScheme>)>(&UnityEngine::InputSystem::Users::InputUser::TryFindControlScheme)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2938010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "TryFindControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputControlScheme>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.FindControlScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Users::InputUser::*)(::StringW, ByRef<UnityEngine::InputSystem::InputControlScheme>)>(&UnityEngine::InputSystem::Users::InputUser::FindControlScheme)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x292c188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "FindControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputControlScheme>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.ActivateControlScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax (UnityEngine::InputSystem::Users::InputUser::*)(UnityEngine::InputSystem::InputControlScheme)>(&UnityEngine::InputSystem::Users::InputUser::ActivateControlScheme)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x292e018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "ActivateControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControlScheme>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.ActivateControlSchemeInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Users::InputUser::*)(int32_t, UnityEngine::InputSystem::InputControlScheme)>(&UnityEngine::InputSystem::Users::InputUser::ActivateControlSchemeInternal)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x2937c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "ActivateControlSchemeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControlScheme>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.UnpairDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Users::InputUser::*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::Users::InputUser::UnpairDevice)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x29302dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnpairDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.UnpairDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Users::InputUser::*)()>(&UnityEngine::InputSystem::Users::InputUser::UnpairDevices)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x292d400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnpairDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.RemoveLostDevicesForUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&UnityEngine::InputSystem::Users::InputUser::RemoveLostDevicesForUser)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2938dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "RemoveLostDevicesForUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.UnpairDevicesAndRemoveUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Users::InputUser::*)()>(&UnityEngine::InputSystem::Users::InputUser::UnpairDevicesAndRemoveUser)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x292df88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnpairDevicesAndRemoveUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.GetUnpairedInputDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputDevice> (*)()>(&UnityEngine::InputSystem::Users::InputUser::GetUnpairedInputDevices)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x292da1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "GetUnpairedInputDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.GetUnpairedInputDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputDevice>>)>(&UnityEngine::InputSystem::Users::InputUser::GetUnpairedInputDevices)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2939604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "GetUnpairedInputDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputDevice>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.FindUserPairedToDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<UnityEngine::InputSystem::Users::InputUser> (*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::Users::InputUser::FindUserPairedToDevice)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2939818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "FindUserPairedToDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.FindUserByAccount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<UnityEngine::InputSystem::Users::InputUser> (*)(UnityEngine::InputSystem::Users::InputUserAccountHandle)>(&UnityEngine::InputSystem::Users::InputUser::FindUserByAccount)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2939a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "FindUserByAccount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUserAccountHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.CreateUserWithoutPairedDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Users::InputUser (*)()>(&UnityEngine::InputSystem::Users::InputUser::CreateUserWithoutPairedDevices)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x292dfac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "CreateUserWithoutPairedDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.PerformPairingWithDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Users::InputUser (*)(UnityEngine::InputSystem::InputDevice, UnityEngine::InputSystem::Users::InputUser, UnityEngine::InputSystem::Users::InputUserPairingOptions)>(&UnityEngine::InputSystem::Users::InputUser::PerformPairingWithDevice)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x292d678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "PerformPairingWithDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUserPairingOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.InitiateUserAccountSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, UnityEngine::InputSystem::InputDevice, UnityEngine::InputSystem::Users::InputUserPairingOptions)>(&UnityEngine::InputSystem::Users::InputUser::InitiateUserAccountSelection)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2939d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "InitiateUserAccountSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUserPairingOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Users::InputUser::*)(UnityEngine::InputSystem::Users::InputUser)>(&UnityEngine::InputSystem::Users::InputUser::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x293a75c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUser>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Users::InputUser::*)(::bs_hook::Il2CppWrapperType)>(&UnityEngine::InputSystem::Users::InputUser::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x293a76c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Users::InputUser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::Users::InputUser::*)()>(&UnityEngine::InputSystem::Users::InputUser::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x293a7e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Users::InputUser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::Users::InputUser, UnityEngine::InputSystem::Users::InputUser)>(&UnityEngine::InputSystem::Users::InputUser::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x292fac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUser>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::Users::InputUser, UnityEngine::InputSystem::Users::InputUser)>(&UnityEngine::InputSystem::Users::InputUser::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2939d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUser>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.AddUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&UnityEngine::InputSystem::Users::InputUser::AddUser)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2939c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "AddUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.RemoveUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&UnityEngine::InputSystem::Users::InputUser::RemoveUser)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x293934c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "RemoveUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.Notify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, UnityEngine::InputSystem::Users::InputUserChange, UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::Users::InputUser::Notify)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x2938290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "Notify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUserChange>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.TryFindUserIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(uint32_t)>(&UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x29372f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "TryFindUserIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.TryFindUserIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::InputSystem::Users::InputUserAccountHandle)>(&UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2939b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "TryFindUserIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUserAccountHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.TryFindUserIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2939918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "TryFindUserIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.AddDeviceToUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, UnityEngine::InputSystem::InputDevice, bool, bool)>(&UnityEngine::InputSystem::Users::InputUser::AddDeviceToUser)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x2939e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "AddDeviceToUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.RemoveDeviceFromUser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, UnityEngine::InputSystem::InputDevice, bool)>(&UnityEngine::InputSystem::Users::InputUser::RemoveDeviceFromUser)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x2938eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "RemoveDeviceFromUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.UpdateControlSchemeMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, bool)>(&UnityEngine::InputSystem::Users::InputUser::UpdateControlSchemeMatch)> {
  constexpr static std::size_t size = 0x828;
  constexpr static std::size_t addrs = 0x2938598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UpdateControlSchemeMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.UpdatePlatformUserAccount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int32_t, UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::Users::InputUser::UpdatePlatformUserAccount)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x293a244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UpdatePlatformUserAccount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.QueryPairedPlatformUserAccount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(UnityEngine::InputSystem::InputDevice, ByRef<System::Nullable_1<UnityEngine::InputSystem::Users::InputUserAccountHandle>>, ByRef<::StringW>, ByRef<::StringW>)>(&UnityEngine::InputSystem::Users::InputUser::QueryPairedPlatformUserAccount)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x293a94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "QueryPairedPlatformUserAccount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Nullable_1<UnityEngine::InputSystem::Users::InputUserAccountHandle>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.InitiateUserAccountSelectionAtPlatformLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::Users::InputUser::InitiateUserAccountSelectionAtPlatformLevel)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x293a5b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "InitiateUserAccountSelectionAtPlatformLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.OnActionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, UnityEngine::InputSystem::InputActionChange)>(&UnityEngine::InputSystem::Users::InputUser::OnActionChange)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x293aad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "OnActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionChange>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.OnDeviceChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputDevice, UnityEngine::InputSystem::InputDeviceChange)>(&UnityEngine::InputSystem::Users::InputUser::OnDeviceChange)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x293ab98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "OnDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDeviceChange>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.FindLostDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::InputSystem::InputDevice, int32_t)>(&UnityEngine::InputSystem::Users::InputUser::FindLostDevice)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x293b020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "FindLostDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.OnEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::LowLevel::InputEventPtr, UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::Users::InputUser::OnEvent)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x293b0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "OnEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.SaveAndResetState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::ISavedState (*)()>(&UnityEngine::InputSystem::Users::InputUser::SaveAndResetState)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x293b594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "SaveAndResetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.HookIntoActionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::Users::InputUser::HookIntoActionChange)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2937b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "HookIntoActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.UnhookFromActionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::Users::InputUser::UnhookFromActionChange)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x293a878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnhookFromActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.HookIntoDeviceChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::Users::InputUser::HookIntoDeviceChange)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x293a670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "HookIntoDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.UnhookFromDeviceChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::Users::InputUser::UnhookFromDeviceChange)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x293a7ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnhookFromDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.HookIntoEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::Users::InputUser::HookIntoEvents)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2937740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "HookIntoEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.UnhookFromDeviceStateChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::Users::InputUser::UnhookFromDeviceStateChange)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x293784c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnhookFromDeviceStateChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.DisposeAndResetGlobalState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::Users::InputUser::DisposeAndResetGlobalState)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x293b778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "DisposeAndResetGlobalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Users::InputUser.ResetGlobals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::Users::InputUser::ResetGlobals)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x293b830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "ResetGlobals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::Users::InputUser>
constexpr  UnityEngine::InputSystem::Users::InputUser::operator System::IEquatable_1<UnityEngine::InputSystem::Users::InputUser>() const {
return System::IEquatable_1<UnityEngine::InputSystem::Users::InputUser>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Id", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Users::InputUser::InputUser(uint32_t m_Id) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Id = m_Id;
}
constexpr void UnityEngine::InputSystem::Users::InputUser::__set_m_Id(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::Users::InputUser::__get_m_Id() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
 void UnityEngine::InputSystem::Users::InputUser::__set_s_GlobalState(UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState, "s_GlobalState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get>(std::forward<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState>(value));
}
 UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState UnityEngine::InputSystem::Users::InputUser::__get_s_GlobalState()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState, "s_GlobalState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get>();
}
 bool UnityEngine::InputSystem::Users::InputUser::get_valid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_valid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t UnityEngine::InputSystem::Users::InputUser::get_index()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_index",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 uint32_t UnityEngine::InputSystem::Users::InputUser::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Nullable_1<UnityEngine::InputSystem::Users::InputUserAccountHandle> UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_platformUserAccountHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<UnityEngine::InputSystem::Users::InputUserAccountHandle>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_platformUserAccountName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW UnityEngine::InputSystem::Users::InputUser::get_platformUserAccountId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_platformUserAccountId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice> UnityEngine::InputSystem::Users::InputUser::get_pairedDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_pairedDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice> UnityEngine::InputSystem::Users::InputUser::get_lostDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_lostDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::IInputActionCollection UnityEngine::InputSystem::Users::InputUser::get_actions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_actions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::IInputActionCollection, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Nullable_1<UnityEngine::InputSystem::InputControlScheme> UnityEngine::InputSystem::Users::InputUser::get_controlScheme()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_controlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<UnityEngine::InputSystem::InputControlScheme>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__MatchResult UnityEngine::InputSystem::Users::InputUser::get_controlSchemeMatch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_controlSchemeMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__MatchResult, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::InputSystem::Users::InputUser::get_hasMissingRequiredDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_hasMissingRequiredDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Users::InputUser> UnityEngine::InputSystem::Users::InputUser::get_all()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_all",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Users::InputUser>, false>(nullptr, ___internal_method);
}
 void UnityEngine::InputSystem::Users::InputUser::add_onChange(System::Action_3<UnityEngine::InputSystem::Users::InputUser,UnityEngine::InputSystem::Users::InputUserChange,UnityEngine::InputSystem::InputDevice> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "add_onChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<UnityEngine::InputSystem::Users::InputUser,UnityEngine::InputSystem::Users::InputUserChange,UnityEngine::InputSystem::InputDevice>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void UnityEngine::InputSystem::Users::InputUser::remove_onChange(System::Action_3<UnityEngine::InputSystem::Users::InputUser,UnityEngine::InputSystem::Users::InputUserChange,UnityEngine::InputSystem::InputDevice> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "remove_onChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<UnityEngine::InputSystem::Users::InputUser,UnityEngine::InputSystem::Users::InputUserChange,UnityEngine::InputSystem::InputDevice>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void UnityEngine::InputSystem::Users::InputUser::add_onUnpairedDeviceUsed(System::Action_2<UnityEngine::InputSystem::InputControl,UnityEngine::InputSystem::LowLevel::InputEventPtr> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "add_onUnpairedDeviceUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::InputControl,UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void UnityEngine::InputSystem::Users::InputUser::remove_onUnpairedDeviceUsed(System::Action_2<UnityEngine::InputSystem::InputControl,UnityEngine::InputSystem::LowLevel::InputEventPtr> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "remove_onUnpairedDeviceUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<UnityEngine::InputSystem::InputControl,UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void UnityEngine::InputSystem::Users::InputUser::add_onPrefilterUnpairedDeviceActivity(System::Func_3<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "add_onPrefilterUnpairedDeviceActivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void UnityEngine::InputSystem::Users::InputUser::remove_onPrefilterUnpairedDeviceActivity(System::Func_3<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "remove_onPrefilterUnpairedDeviceActivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::Users::InputUser::get_listenForUnpairedDeviceActivity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "get_listenForUnpairedDeviceActivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 void UnityEngine::InputSystem::Users::InputUser::set_listenForUnpairedDeviceActivity(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "set_listenForUnpairedDeviceActivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 ::StringW UnityEngine::InputSystem::Users::InputUser::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Users::InputUser::AssociateActionsWithUser(UnityEngine::InputSystem::IInputActionCollection actions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "AssociateActionsWithUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::IInputActionCollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, actions);
}
 UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax UnityEngine::InputSystem::Users::InputUser::ActivateControlScheme(::StringW schemeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "ActivateControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, schemeName);
}
 bool UnityEngine::InputSystem::Users::InputUser::TryFindControlScheme(::StringW schemeName, ByRef<UnityEngine::InputSystem::InputControlScheme> scheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "TryFindControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputControlScheme>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, schemeName, scheme);
}
 void UnityEngine::InputSystem::Users::InputUser::FindControlScheme(::StringW schemeName, ByRef<UnityEngine::InputSystem::InputControlScheme> scheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "FindControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputControlScheme>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, schemeName, scheme);
}
 UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax UnityEngine::InputSystem::Users::InputUser::ActivateControlScheme(UnityEngine::InputSystem::InputControlScheme scheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "ActivateControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControlScheme>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__ControlSchemeChangeSyntax, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, scheme);
}
 void UnityEngine::InputSystem::Users::InputUser::ActivateControlSchemeInternal(int32_t userIndex, UnityEngine::InputSystem::InputControlScheme scheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "ActivateControlSchemeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControlScheme>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, userIndex, scheme);
}
 void UnityEngine::InputSystem::Users::InputUser::UnpairDevice(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnpairDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, device);
}
 void UnityEngine::InputSystem::Users::InputUser::UnpairDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnpairDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Users::InputUser::RemoveLostDevicesForUser(int32_t userIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "RemoveLostDevicesForUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userIndex);
}
 void UnityEngine::InputSystem::Users::InputUser::UnpairDevicesAndRemoveUser()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnpairDevicesAndRemoveUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputDevice> UnityEngine::InputSystem::Users::InputUser::GetUnpairedInputDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "GetUnpairedInputDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputDevice>, false>(nullptr, ___internal_method);
}
 int32_t UnityEngine::InputSystem::Users::InputUser::GetUnpairedInputDevices(ByRef<UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputDevice>> list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "GetUnpairedInputDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputControlList_1<UnityEngine::InputSystem::InputDevice>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, list);
}
 System::Nullable_1<UnityEngine::InputSystem::Users::InputUser> UnityEngine::InputSystem::Users::InputUser::FindUserPairedToDevice(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "FindUserPairedToDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<UnityEngine::InputSystem::Users::InputUser>, false>(nullptr, ___internal_method, device);
}
 System::Nullable_1<UnityEngine::InputSystem::Users::InputUser> UnityEngine::InputSystem::Users::InputUser::FindUserByAccount(UnityEngine::InputSystem::Users::InputUserAccountHandle platformUserAccountHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "FindUserByAccount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUserAccountHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<UnityEngine::InputSystem::Users::InputUser>, false>(nullptr, ___internal_method, platformUserAccountHandle);
}
 UnityEngine::InputSystem::Users::InputUser UnityEngine::InputSystem::Users::InputUser::CreateUserWithoutPairedDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "CreateUserWithoutPairedDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Users::InputUser, false>(nullptr, ___internal_method);
}
/// @param user: UnityEngine::InputSystem::Users::InputUser (default: {})
/// @param options: UnityEngine::InputSystem::Users::InputUserPairingOptions (default: 0)
 UnityEngine::InputSystem::Users::InputUser UnityEngine::InputSystem::Users::InputUser::PerformPairingWithDevice(UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::Users::InputUser user, UnityEngine::InputSystem::Users::InputUserPairingOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "PerformPairingWithDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUserPairingOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Users::InputUser, false>(nullptr, ___internal_method, device, user, options);
}
 bool UnityEngine::InputSystem::Users::InputUser::InitiateUserAccountSelection(int32_t userIndex, UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::Users::InputUserPairingOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "InitiateUserAccountSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUserPairingOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, userIndex, device, options);
}
 bool UnityEngine::InputSystem::Users::InputUser::Equals(UnityEngine::InputSystem::Users::InputUser other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool UnityEngine::InputSystem::Users::InputUser::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 int32_t UnityEngine::InputSystem::Users::InputUser::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::InputSystem::Users::InputUser::op_Equality(UnityEngine::InputSystem::Users::InputUser left, UnityEngine::InputSystem::Users::InputUser right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 bool UnityEngine::InputSystem::Users::InputUser::op_Inequality(UnityEngine::InputSystem::Users::InputUser left, UnityEngine::InputSystem::Users::InputUser right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 int32_t UnityEngine::InputSystem::Users::InputUser::AddUser()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "AddUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 void UnityEngine::InputSystem::Users::InputUser::RemoveUser(int32_t userIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "RemoveUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userIndex);
}
 void UnityEngine::InputSystem::Users::InputUser::Notify(int32_t userIndex, UnityEngine::InputSystem::Users::InputUserChange change, UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "Notify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUserChange>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userIndex, change, device);
}
 int32_t UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex(uint32_t userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "TryFindUserIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, userId);
}
 int32_t UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex(UnityEngine::InputSystem::Users::InputUserAccountHandle platformHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "TryFindUserIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Users::InputUserAccountHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, platformHandle);
}
 int32_t UnityEngine::InputSystem::Users::InputUser::TryFindUserIndex(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "TryFindUserIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, device);
}
/// @param asLostDevice: bool (default: false)
/// @param dontUpdateControlScheme: bool (default: false)
 void UnityEngine::InputSystem::Users::InputUser::AddDeviceToUser(int32_t userIndex, UnityEngine::InputSystem::InputDevice device, bool asLostDevice, bool dontUpdateControlScheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "AddDeviceToUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userIndex, device, asLostDevice, dontUpdateControlScheme);
}
/// @param asLostDevice: bool (default: false)
 void UnityEngine::InputSystem::Users::InputUser::RemoveDeviceFromUser(int32_t userIndex, UnityEngine::InputSystem::InputDevice device, bool asLostDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "RemoveDeviceFromUser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userIndex, device, asLostDevice);
}
/// @param autoPairMissing: bool (default: false)
 void UnityEngine::InputSystem::Users::InputUser::UpdateControlSchemeMatch(int32_t userIndex, bool autoPairMissing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UpdateControlSchemeMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userIndex, autoPairMissing);
}
 int64_t UnityEngine::InputSystem::Users::InputUser::UpdatePlatformUserAccount(int32_t userIndex, UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UpdatePlatformUserAccount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, userIndex, device);
}
 int64_t UnityEngine::InputSystem::Users::InputUser::QueryPairedPlatformUserAccount(UnityEngine::InputSystem::InputDevice device, ByRef<System::Nullable_1<UnityEngine::InputSystem::Users::InputUserAccountHandle>> platformAccountHandle, ByRef<::StringW> platformAccountName, ByRef<::StringW> platformAccountId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "QueryPairedPlatformUserAccount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Nullable_1<UnityEngine::InputSystem::Users::InputUserAccountHandle>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, device, platformAccountHandle, platformAccountName, platformAccountId);
}
 bool UnityEngine::InputSystem::Users::InputUser::InitiateUserAccountSelectionAtPlatformLevel(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "InitiateUserAccountSelectionAtPlatformLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, device);
}
 void UnityEngine::InputSystem::Users::InputUser::OnActionChange(::bs_hook::Il2CppWrapperType obj, UnityEngine::InputSystem::InputActionChange change)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "OnActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionChange>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, change);
}
 void UnityEngine::InputSystem::Users::InputUser::OnDeviceChange(UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::InputDeviceChange change)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "OnDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDeviceChange>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, change);
}
/// @param startIndex: int32_t (default: 0)
 int32_t UnityEngine::InputSystem::Users::InputUser::FindLostDevice(UnityEngine::InputSystem::InputDevice device, int32_t startIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "FindLostDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, device, startIndex);
}
 void UnityEngine::InputSystem::Users::InputUser::OnEvent(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "OnEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, eventPtr, device);
}
 UnityEngine::InputSystem::Utilities::ISavedState UnityEngine::InputSystem::Users::InputUser::SaveAndResetState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "SaveAndResetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::ISavedState, false>(nullptr, ___internal_method);
}
 void UnityEngine::InputSystem::Users::InputUser::HookIntoActionChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "HookIntoActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::InputSystem::Users::InputUser::UnhookFromActionChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnhookFromActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::InputSystem::Users::InputUser::HookIntoDeviceChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "HookIntoDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::InputSystem::Users::InputUser::UnhookFromDeviceChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnhookFromDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::InputSystem::Users::InputUser::HookIntoEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "HookIntoEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::InputSystem::Users::InputUser::UnhookFromDeviceStateChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "UnhookFromDeviceStateChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::InputSystem::Users::InputUser::DisposeAndResetGlobalState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "DisposeAndResetGlobalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::InputSystem::Users::InputUser::ResetGlobals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Users::InputUser>::get(),
                            "ResetGlobals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
