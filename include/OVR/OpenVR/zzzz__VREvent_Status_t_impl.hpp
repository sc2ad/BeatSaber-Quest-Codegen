#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__VREvent_Status_t_def.hpp"
// Ctor Parameters [CppParam { name: "statusState", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Status_t::VREvent_Status_t(uint32_t statusState) noexcept : ::bs_hook::ValueTypeWrapper() {this->statusState = statusState;
}
constexpr void ::OVR::OpenVR::VREvent_Status_t::__set_statusState(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::VREvent_Status_t::__get_statusState() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
} // end anonymous namespace
