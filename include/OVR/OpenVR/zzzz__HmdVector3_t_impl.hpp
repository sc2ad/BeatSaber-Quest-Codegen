#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__HmdVector3_t_def.hpp"
// Ctor Parameters [CppParam { name: "v0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "v1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "v2", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::HmdVector3_t::HmdVector3_t(float_t v0, float_t v1, float_t v2) noexcept : ::bs_hook::ValueTypeWrapper() {this->v0 = v0;
this->v1 = v1;
this->v2 = v2;
}
constexpr void ::OVR::OpenVR::HmdVector3_t::__set_v0(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::HmdVector3_t::__get_v0() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::HmdVector3_t::__set_v1(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::HmdVector3_t::__get_v1() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void ::OVR::OpenVR::HmdVector3_t::__set_v2(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::HmdVector3_t::__get_v2() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
} // end anonymous namespace