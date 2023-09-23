#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Ipd_t_def.hpp"
// Ctor Parameters [CppParam { name: "ipdMeters", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VREvent_Ipd_t::VREvent_Ipd_t(float_t ipdMeters) noexcept : ::bs_hook::ValueTypeWrapper() {this->ipdMeters = ipdMeters;
}
constexpr void OVR::OpenVR::VREvent_Ipd_t::__set_ipdMeters(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::VREvent_Ipd_t::__get_ipdMeters() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
