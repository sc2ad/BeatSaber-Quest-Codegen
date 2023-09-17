#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__EVRScreenshotType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRScreenshotType::EVRScreenshotType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::EVRScreenshotType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::EVRScreenshotType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::EVRScreenshotType  ::OVR::OpenVR::EVRScreenshotType::None{0};
constexpr ::OVR::OpenVR::EVRScreenshotType  ::OVR::OpenVR::EVRScreenshotType::Mono{1};
constexpr ::OVR::OpenVR::EVRScreenshotType  ::OVR::OpenVR::EVRScreenshotType::Stereo{2};
constexpr ::OVR::OpenVR::EVRScreenshotType  ::OVR::OpenVR::EVRScreenshotType::Cubemap{3};
constexpr ::OVR::OpenVR::EVRScreenshotType  ::OVR::OpenVR::EVRScreenshotType::MonoPanorama{4};
constexpr ::OVR::OpenVR::EVRScreenshotType  ::OVR::OpenVR::EVRScreenshotType::StereoPanorama{5};
} // end anonymous namespace
