#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__VREvent_ScreenshotProgress_t_def.hpp"
// Ctor Parameters [CppParam { name: "progress", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_ScreenshotProgress_t::VREvent_ScreenshotProgress_t(float_t progress) noexcept : ::bs_hook::ValueTypeWrapper() {this->progress = progress;
}
constexpr void ::OVR::OpenVR::VREvent_ScreenshotProgress_t::__set_progress(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::VREvent_ScreenshotProgress_t::__get_progress() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
} // end anonymous namespace
