#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionMaskPrimitive_t_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionMaskPrimitive_Data_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVROverlayIntersectionMaskPrimitiveType_def.hpp"
// Ctor Parameters [CppParam { name: "m_nPrimitiveType", ty: "OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Primitive", ty: "OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t::VROverlayIntersectionMaskPrimitive_t(OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType m_nPrimitiveType, OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t m_Primitive) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_nPrimitiveType = m_nPrimitiveType;
this->m_Primitive = m_Primitive;
}
constexpr void OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t::__set_m_nPrimitiveType(OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType, 0x0>(this->__instance, std::forward<OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType>(value));
}
constexpr OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t::__get_m_nPrimitiveType() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t::__set_m_Primitive(OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t, 0x4>(this->__instance, std::forward<OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t>(value));
}
constexpr OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t::__get_m_Primitive() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t, 0x4>(this->__instance);
}
