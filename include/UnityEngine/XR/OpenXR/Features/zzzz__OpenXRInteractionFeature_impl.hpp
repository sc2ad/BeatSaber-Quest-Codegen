#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType  UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType::Binary{0};
constexpr UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType  UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType::Axis1D{1};
constexpr UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType  UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType::Axis2D{2};
constexpr UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType  UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType::Pose{3};
constexpr UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType  UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType::Vibrate{4};
constexpr UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType  UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType::Count{5};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding::*)()>(&UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af0b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding::__set_interactionProfileName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding::__get_interactionProfileName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding::__set_interactionPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding::__get_interactionPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding::__set_userPaths(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding::__get_userPaths() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding>())) {}
 void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig::*)()>(&UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af0b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig::__set_type(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType value)  {
::cordl_internals::setInstanceField<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType>(value));
}
constexpr UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig::__get_type() const {
return ::cordl_internals::getInstanceField<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig::__set_localizedName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig::__get_localizedName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig::__set_bindings(System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding> UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig::__get_bindings() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig::__set_usages(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig::__get_usages() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig>())) {}
 void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig::*)()>(&UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af0b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig::__set_characteristics(UnityEngine::XR::InputDeviceCharacteristics value)  {
::cordl_internals::setInstanceField<UnityEngine::XR::InputDeviceCharacteristics, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::XR::InputDeviceCharacteristics>(value));
}
constexpr UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig::__get_characteristics() const {
return ::cordl_internals::getInstanceField<UnityEngine::XR::InputDeviceCharacteristics, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig::__set_userPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig::__get_userPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig>())) {}
 void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig::*)()>(&UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af0b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig::__set_localizedName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig::__get_localizedName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig::__set_deviceInfos(System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig> UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig::__get_deviceInfos() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig::__set_actions(System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig> UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig::__get_actions() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionConfig>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig::__set_desiredInteractionProfile(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig::__get_desiredInteractionProfile() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig::__set_manufacturer(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig::__get_manufacturer() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig::__set_serialNumber(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig::__get_serialNumber() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig>())) {}
 void UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.RegisterDeviceLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)()>(&UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::RegisterDeviceLayout)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0984;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.UnregisterDeviceLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)()>(&UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::UnregisterDeviceLayout)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0988;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.RegisterActionMapsWithRuntime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)()>(&UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::RegisterActionMapsWithRuntime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af098c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.OnInstanceCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)(uint64_t)>(&UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2af0990;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.CreateActionMaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)(System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig>)>(&UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::CreateActionMaps)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2aedb78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(),
                            "CreateActionMaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.AddActionMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig)>(&UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::AddActionMap)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2af09b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(),
                            "AddActionMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.OnEnabledChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)()>(&UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::OnEnabledChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af0af8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature.RegisterLayouts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::RegisterLayouts)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2aed924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(),
                            "RegisterLayouts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::*)()>(&UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af0afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::__set_m_CreatedActionMaps(System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig>, "m_CreatedActionMaps", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get>(std::forward<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig>>(value));
}
 System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig> UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::__get_m_CreatedActionMaps()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig>, "m_CreatedActionMaps", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get>();
}
 void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::RegisterDeviceLayout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(),
                            "RegisterDeviceLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::UnregisterDeviceLayout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(),
                            "UnregisterDeviceLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::RegisterActionMapsWithRuntime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(),
                            "RegisterActionMapsWithRuntime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::OnInstanceCreate(uint64_t xrSession)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(),
                            "OnInstanceCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, xrSession);
}
 void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::CreateActionMaps(System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig> configs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(),
                            "CreateActionMaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, configs);
}
 void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::AddActionMap(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig map)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(),
                            "AddActionMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, map);
}
 void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::OnEnabledChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(),
                            "OnEnabledChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::RegisterLayouts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(),
                            "RegisterLayouts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
 UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::OpenXRInteractionFeature()  : UnityEngine::XR::OpenXR::Features::OpenXRFeature(THROW_UNLESS(::il2cpp_utils::New<OpenXRInteractionFeature>())) {}
 void UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
