#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_ControllerMode_State_t_def.hpp"
// Ctor Parameters [CppParam { name: "bScrollWheelVisible", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::RenderModel_ControllerMode_State_t::RenderModel_ControllerMode_State_t(bool bScrollWheelVisible) noexcept : ::bs_hook::ValueTypeWrapper() {this->bScrollWheelVisible = bScrollWheelVisible;
}
constexpr void OVR::OpenVR::RenderModel_ControllerMode_State_t::__set_bScrollWheelVisible(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool OVR::OpenVR::RenderModel_ControllerMode_State_t::__get_bScrollWheelVisible() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
