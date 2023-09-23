#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__IntersectionMaskRectangle_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_flTopLeftX", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flTopLeftY", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::IntersectionMaskRectangle_t::IntersectionMaskRectangle_t(float_t m_flTopLeftX, float_t m_flTopLeftY, float_t m_flWidth, float_t m_flHeight) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_flTopLeftX = m_flTopLeftX;
this->m_flTopLeftY = m_flTopLeftY;
this->m_flWidth = m_flWidth;
this->m_flHeight = m_flHeight;
}
constexpr void OVR::OpenVR::IntersectionMaskRectangle_t::__set_m_flTopLeftX(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::IntersectionMaskRectangle_t::__get_m_flTopLeftX() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::IntersectionMaskRectangle_t::__set_m_flTopLeftY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::IntersectionMaskRectangle_t::__get_m_flTopLeftY() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void OVR::OpenVR::IntersectionMaskRectangle_t::__set_m_flWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::IntersectionMaskRectangle_t::__get_m_flWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void OVR::OpenVR::IntersectionMaskRectangle_t::__set_m_flHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t OVR::OpenVR::IntersectionMaskRectangle_t::__get_m_flHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
