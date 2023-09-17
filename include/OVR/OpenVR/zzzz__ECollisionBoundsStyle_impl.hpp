#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__ECollisionBoundsStyle_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::ECollisionBoundsStyle::ECollisionBoundsStyle(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::ECollisionBoundsStyle::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::ECollisionBoundsStyle::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::ECollisionBoundsStyle  ::OVR::OpenVR::ECollisionBoundsStyle::COLLISION_BOUNDS_STYLE_BEGINNER{0};
constexpr ::OVR::OpenVR::ECollisionBoundsStyle  ::OVR::OpenVR::ECollisionBoundsStyle::COLLISION_BOUNDS_STYLE_INTERMEDIATE{1};
constexpr ::OVR::OpenVR::ECollisionBoundsStyle  ::OVR::OpenVR::ECollisionBoundsStyle::COLLISION_BOUNDS_STYLE_SQUARES{2};
constexpr ::OVR::OpenVR::ECollisionBoundsStyle  ::OVR::OpenVR::ECollisionBoundsStyle::COLLISION_BOUNDS_STYLE_ADVANCED{3};
constexpr ::OVR::OpenVR::ECollisionBoundsStyle  ::OVR::OpenVR::ECollisionBoundsStyle::COLLISION_BOUNDS_STYLE_NONE{4};
constexpr ::OVR::OpenVR::ECollisionBoundsStyle  ::OVR::OpenVR::ECollisionBoundsStyle::COLLISION_BOUNDS_STYLE_COUNT{5};
} // end anonymous namespace
