#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "OVR/OpenVR/zzzz__EVRComponentProperty_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::EVRComponentProperty::EVRComponentProperty(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void OVR::OpenVR::EVRComponentProperty::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t OVR::OpenVR::EVRComponentProperty::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr OVR::OpenVR::EVRComponentProperty  OVR::OpenVR::EVRComponentProperty::IsStatic{1};
constexpr OVR::OpenVR::EVRComponentProperty  OVR::OpenVR::EVRComponentProperty::IsVisible{2};
constexpr OVR::OpenVR::EVRComponentProperty  OVR::OpenVR::EVRComponentProperty::IsTouched{4};
constexpr OVR::OpenVR::EVRComponentProperty  OVR::OpenVR::EVRComponentProperty::IsPressed{8};
constexpr OVR::OpenVR::EVRComponentProperty  OVR::OpenVR::EVRComponentProperty::IsScrolled{16};
