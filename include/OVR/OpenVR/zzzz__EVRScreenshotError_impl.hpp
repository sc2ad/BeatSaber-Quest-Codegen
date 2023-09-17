#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__EVRScreenshotError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRScreenshotError::EVRScreenshotError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::EVRScreenshotError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::EVRScreenshotError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::EVRScreenshotError  ::OVR::OpenVR::EVRScreenshotError::None{0};
constexpr ::OVR::OpenVR::EVRScreenshotError  ::OVR::OpenVR::EVRScreenshotError::RequestFailed{1};
constexpr ::OVR::OpenVR::EVRScreenshotError  ::OVR::OpenVR::EVRScreenshotError::IncompatibleVersion{100};
constexpr ::OVR::OpenVR::EVRScreenshotError  ::OVR::OpenVR::EVRScreenshotError::NotFound{101};
constexpr ::OVR::OpenVR::EVRScreenshotError  ::OVR::OpenVR::EVRScreenshotError::BufferTooSmall{102};
constexpr ::OVR::OpenVR::EVRScreenshotError  ::OVR::OpenVR::EVRScreenshotError::ScreenshotAlreadyInProgress{108};
} // end anonymous namespace
