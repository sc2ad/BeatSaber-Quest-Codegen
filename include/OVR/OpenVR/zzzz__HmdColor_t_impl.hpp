#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__HmdColor_t_def.hpp"
// Ctor Parameters [CppParam { name: "r", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "g", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "b", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "a", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::HmdColor_t::HmdColor_t(float_t r, float_t g, float_t b, float_t a) noexcept : ::bs_hook::ValueTypeWrapper() {this->r = r;
this->g = g;
this->b = b;
this->a = a;
}
constexpr void ::OVR::OpenVR::HmdColor_t::__set_r(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::HmdColor_t::__get_r() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::HmdColor_t::__set_g(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::HmdColor_t::__get_g() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void ::OVR::OpenVR::HmdColor_t::__set_b(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::HmdColor_t::__get_b() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void ::OVR::OpenVR::HmdColor_t::__set_a(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::HmdColor_t::__get_a() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
} // end anonymous namespace
