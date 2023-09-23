#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__HmdVector2_t_def.hpp"
// Ctor Parameters [CppParam { name: "v0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "v1", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::HmdVector2_t::HmdVector2_t(float_t v0, float_t v1) noexcept : ::bs_hook::ValueTypeWrapper() {this->v0 = v0;
this->v1 = v1;
}
constexpr void OVR::OpenVR::HmdVector2_t::__set_v0(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::HmdVector2_t::__get_v0() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::HmdVector2_t::__set_v1(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::HmdVector2_t::__get_v1() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
