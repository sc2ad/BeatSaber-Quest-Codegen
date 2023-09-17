#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__EVRScreenshotPropertyFilenames_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRScreenshotPropertyFilenames::EVRScreenshotPropertyFilenames(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::EVRScreenshotPropertyFilenames::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::EVRScreenshotPropertyFilenames::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::EVRScreenshotPropertyFilenames  ::OVR::OpenVR::EVRScreenshotPropertyFilenames::Preview{0};
constexpr ::OVR::OpenVR::EVRScreenshotPropertyFilenames  ::OVR::OpenVR::EVRScreenshotPropertyFilenames::VR{1};
} // end anonymous namespace
