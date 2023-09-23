#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Scroll_t_def.hpp"
// Ctor Parameters [CppParam { name: "xdelta", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ydelta", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "repeatCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VREvent_Scroll_t::VREvent_Scroll_t(float_t xdelta, float_t ydelta, uint32_t repeatCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->xdelta = xdelta;
this->ydelta = ydelta;
this->repeatCount = repeatCount;
}
constexpr void OVR::OpenVR::VREvent_Scroll_t::__set_xdelta(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::VREvent_Scroll_t::__get_xdelta() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Scroll_t::__set_ydelta(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::VREvent_Scroll_t::__get_ydelta() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Scroll_t::__set_repeatCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::VREvent_Scroll_t::__get_repeatCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
