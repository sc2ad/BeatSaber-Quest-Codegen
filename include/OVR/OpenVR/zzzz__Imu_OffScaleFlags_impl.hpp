#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "OVR/OpenVR/zzzz__Imu_OffScaleFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::Imu_OffScaleFlags::Imu_OffScaleFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void OVR::OpenVR::Imu_OffScaleFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t OVR::OpenVR::Imu_OffScaleFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr OVR::OpenVR::Imu_OffScaleFlags  OVR::OpenVR::Imu_OffScaleFlags::OffScale_AccelX{1};
constexpr OVR::OpenVR::Imu_OffScaleFlags  OVR::OpenVR::Imu_OffScaleFlags::OffScale_AccelY{2};
constexpr OVR::OpenVR::Imu_OffScaleFlags  OVR::OpenVR::Imu_OffScaleFlags::OffScale_AccelZ{4};
constexpr OVR::OpenVR::Imu_OffScaleFlags  OVR::OpenVR::Imu_OffScaleFlags::OffScale_GyroX{8};
constexpr OVR::OpenVR::Imu_OffScaleFlags  OVR::OpenVR::Imu_OffScaleFlags::OffScale_GyroY{16};
constexpr OVR::OpenVR::Imu_OffScaleFlags  OVR::OpenVR::Imu_OffScaleFlags::OffScale_GyroZ{32};
