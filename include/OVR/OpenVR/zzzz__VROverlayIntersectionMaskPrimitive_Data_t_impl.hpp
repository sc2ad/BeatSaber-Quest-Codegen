#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionMaskPrimitive_Data_t_def.hpp"
#include "OVR/OpenVR/zzzz__IntersectionMaskCircle_t_def.hpp"
#include "OVR/OpenVR/zzzz__IntersectionMaskRectangle_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_Rectangle", ty: "OVR::OpenVR::IntersectionMaskRectangle_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Circle", ty: "OVR::OpenVR::IntersectionMaskCircle_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::VROverlayIntersectionMaskPrimitive_Data_t(OVR::OpenVR::IntersectionMaskRectangle_t m_Rectangle, OVR::OpenVR::IntersectionMaskCircle_t m_Circle) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Rectangle = m_Rectangle;
this->m_Circle = m_Circle;
}
constexpr void OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::__set_m_Rectangle(OVR::OpenVR::IntersectionMaskRectangle_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::IntersectionMaskRectangle_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::IntersectionMaskRectangle_t>(value));
}
constexpr OVR::OpenVR::IntersectionMaskRectangle_t OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::__get_m_Rectangle() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::IntersectionMaskRectangle_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::__set_m_Circle(OVR::OpenVR::IntersectionMaskCircle_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::IntersectionMaskCircle_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::IntersectionMaskCircle_t>(value));
}
constexpr OVR::OpenVR::IntersectionMaskCircle_t OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t::__get_m_Circle() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::IntersectionMaskCircle_t, 0x0>(this->__instance);
}
