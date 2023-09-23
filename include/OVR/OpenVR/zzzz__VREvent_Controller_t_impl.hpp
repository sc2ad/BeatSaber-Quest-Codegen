#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Controller_t_def.hpp"
// Ctor Parameters [CppParam { name: "button", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VREvent_Controller_t::VREvent_Controller_t(uint32_t button) noexcept : ::bs_hook::ValueTypeWrapper() {this->button = button;
}
constexpr void OVR::OpenVR::VREvent_Controller_t::__set_button(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::VREvent_Controller_t::__get_button() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
