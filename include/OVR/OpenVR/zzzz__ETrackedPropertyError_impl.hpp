#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__ETrackedPropertyError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::ETrackedPropertyError::ETrackedPropertyError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::ETrackedPropertyError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::ETrackedPropertyError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::ETrackedPropertyError  ::OVR::OpenVR::ETrackedPropertyError::TrackedProp_Success{0};
constexpr ::OVR::OpenVR::ETrackedPropertyError  ::OVR::OpenVR::ETrackedPropertyError::TrackedProp_WrongDataType{1};
constexpr ::OVR::OpenVR::ETrackedPropertyError  ::OVR::OpenVR::ETrackedPropertyError::TrackedProp_WrongDeviceClass{2};
constexpr ::OVR::OpenVR::ETrackedPropertyError  ::OVR::OpenVR::ETrackedPropertyError::TrackedProp_BufferTooSmall{3};
constexpr ::OVR::OpenVR::ETrackedPropertyError  ::OVR::OpenVR::ETrackedPropertyError::TrackedProp_UnknownProperty{4};
constexpr ::OVR::OpenVR::ETrackedPropertyError  ::OVR::OpenVR::ETrackedPropertyError::TrackedProp_InvalidDevice{5};
constexpr ::OVR::OpenVR::ETrackedPropertyError  ::OVR::OpenVR::ETrackedPropertyError::TrackedProp_CouldNotContactServer{6};
constexpr ::OVR::OpenVR::ETrackedPropertyError  ::OVR::OpenVR::ETrackedPropertyError::TrackedProp_ValueNotProvidedByDevice{7};
constexpr ::OVR::OpenVR::ETrackedPropertyError  ::OVR::OpenVR::ETrackedPropertyError::TrackedProp_StringExceedsMaximumLength{8};
constexpr ::OVR::OpenVR::ETrackedPropertyError  ::OVR::OpenVR::ETrackedPropertyError::TrackedProp_NotYetAvailable{9};
constexpr ::OVR::OpenVR::ETrackedPropertyError  ::OVR::OpenVR::ETrackedPropertyError::TrackedProp_PermissionDenied{10};
constexpr ::OVR::OpenVR::ETrackedPropertyError  ::OVR::OpenVR::ETrackedPropertyError::TrackedProp_InvalidOperation{11};
constexpr ::OVR::OpenVR::ETrackedPropertyError  ::OVR::OpenVR::ETrackedPropertyError::TrackedProp_CannotWriteToWildcards{12};
} // end anonymous namespace
