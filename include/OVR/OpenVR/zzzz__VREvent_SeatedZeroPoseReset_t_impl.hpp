#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__VREvent_SeatedZeroPoseReset_t_def.hpp"
// Ctor Parameters [CppParam { name: "bResetBySystemMenu", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VREvent_SeatedZeroPoseReset_t::VREvent_SeatedZeroPoseReset_t(bool bResetBySystemMenu) noexcept : ::bs_hook::ValueTypeWrapper() {this->bResetBySystemMenu = bResetBySystemMenu;
}
constexpr void OVR::OpenVR::VREvent_SeatedZeroPoseReset_t::__set_bResetBySystemMenu(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool OVR::OpenVR::VREvent_SeatedZeroPoseReset_t::__get_bResetBySystemMenu() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
