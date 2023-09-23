#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "OVR/OpenVR/zzzz__EVRSpatialAnchorError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::EVRSpatialAnchorError::EVRSpatialAnchorError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void OVR::OpenVR::EVRSpatialAnchorError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t OVR::OpenVR::EVRSpatialAnchorError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::Success{0};
constexpr OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::Internal{1};
constexpr OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::UnknownHandle{2};
constexpr OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::ArrayTooSmall{3};
constexpr OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::InvalidDescriptorChar{4};
constexpr OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::NotYetAvailable{5};
constexpr OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::NotAvailableInThisUniverse{6};
constexpr OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::PermanentlyUnavailable{7};
constexpr OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::WrongDriver{8};
constexpr OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::DescriptorTooLong{9};
constexpr OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::Unknown{10};
constexpr OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::NoRoomCalibration{11};
constexpr OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::InvalidArgument{12};
constexpr OVR::OpenVR::EVRSpatialAnchorError  OVR::OpenVR::EVRSpatialAnchorError::UnknownDriver{13};
