#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__DistortionCoordinates_t_def.hpp"
// Ctor Parameters [CppParam { name: "rfRed0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rfRed1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rfGreen0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rfGreen1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rfBlue0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rfBlue1", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::DistortionCoordinates_t::DistortionCoordinates_t(float_t rfRed0, float_t rfRed1, float_t rfGreen0, float_t rfGreen1, float_t rfBlue0, float_t rfBlue1) noexcept : ::bs_hook::ValueTypeWrapper() {this->rfRed0 = rfRed0;
this->rfRed1 = rfRed1;
this->rfGreen0 = rfGreen0;
this->rfGreen1 = rfGreen1;
this->rfBlue0 = rfBlue0;
this->rfBlue1 = rfBlue1;
}
constexpr void OVR::OpenVR::DistortionCoordinates_t::__set_rfRed0(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::DistortionCoordinates_t::__get_rfRed0() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::DistortionCoordinates_t::__set_rfRed1(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::DistortionCoordinates_t::__get_rfRed1() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void OVR::OpenVR::DistortionCoordinates_t::__set_rfGreen0(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::DistortionCoordinates_t::__get_rfGreen0() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void OVR::OpenVR::DistortionCoordinates_t::__set_rfGreen1(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::DistortionCoordinates_t::__get_rfGreen1() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
constexpr void OVR::OpenVR::DistortionCoordinates_t::__set_rfBlue0(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::DistortionCoordinates_t::__get_rfBlue0() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
constexpr void OVR::OpenVR::DistortionCoordinates_t::__set_rfBlue1(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::DistortionCoordinates_t::__get_rfBlue1() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->__instance);
}
