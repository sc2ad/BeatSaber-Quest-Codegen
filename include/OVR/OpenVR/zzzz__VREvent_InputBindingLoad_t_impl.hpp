#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__VREvent_InputBindingLoad_t_def.hpp"
// Ctor Parameters [CppParam { name: "ulAppContainer", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pathMessage", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pathUrl", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pathControllerType", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_InputBindingLoad_t::VREvent_InputBindingLoad_t(uint64_t ulAppContainer, uint64_t pathMessage, uint64_t pathUrl, uint64_t pathControllerType) noexcept : ::bs_hook::ValueTypeWrapper() {this->ulAppContainer = ulAppContainer;
this->pathMessage = pathMessage;
this->pathUrl = pathUrl;
this->pathControllerType = pathControllerType;
}
constexpr void ::OVR::OpenVR::VREvent_InputBindingLoad_t::__set_ulAppContainer(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::OVR::OpenVR::VREvent_InputBindingLoad_t::__get_ulAppContainer() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::VREvent_InputBindingLoad_t::__set_pathMessage(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::OVR::OpenVR::VREvent_InputBindingLoad_t::__get_pathMessage() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
constexpr void ::OVR::OpenVR::VREvent_InputBindingLoad_t::__set_pathUrl(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::OVR::OpenVR::VREvent_InputBindingLoad_t::__get_pathUrl() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->__instance);
}
constexpr void ::OVR::OpenVR::VREvent_InputBindingLoad_t::__set_pathControllerType(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x18>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::OVR::OpenVR::VREvent_InputBindingLoad_t::__get_pathControllerType() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this->__instance);
}
} // end anonymous namespace
