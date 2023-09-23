#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "OVR/OpenVR/zzzz__EVROverlayIntersectionMaskPrimitiveType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType::EVROverlayIntersectionMaskPrimitiveType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType  OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType::OverlayIntersectionPrimitiveType_Rectangle{0};
constexpr OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType  OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType::OverlayIntersectionPrimitiveType_Circle{1};
