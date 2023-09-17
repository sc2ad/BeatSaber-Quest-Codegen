#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__EVRSkeletalMotionRange_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRSkeletalMotionRange::EVRSkeletalMotionRange(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::EVRSkeletalMotionRange::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::EVRSkeletalMotionRange::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::EVRSkeletalMotionRange  ::OVR::OpenVR::EVRSkeletalMotionRange::WithController{0};
constexpr ::OVR::OpenVR::EVRSkeletalMotionRange  ::OVR::OpenVR::EVRSkeletalMotionRange::WithoutController{1};
} // end anonymous namespace