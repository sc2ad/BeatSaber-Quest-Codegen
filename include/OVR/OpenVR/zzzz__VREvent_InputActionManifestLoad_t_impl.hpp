#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__VREvent_InputActionManifestLoad_t_def.hpp"
// Ctor Parameters [CppParam { name: "pathAppKey", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pathMessage", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pathMessageParam", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pathManifestPath", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_InputActionManifestLoad_t::VREvent_InputActionManifestLoad_t(uint64_t pathAppKey, uint64_t pathMessage, uint64_t pathMessageParam, uint64_t pathManifestPath) noexcept : ::bs_hook::ValueTypeWrapper() {this->pathAppKey = pathAppKey;
this->pathMessage = pathMessage;
this->pathMessageParam = pathMessageParam;
this->pathManifestPath = pathManifestPath;
}
constexpr void ::OVR::OpenVR::VREvent_InputActionManifestLoad_t::__set_pathAppKey(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::OVR::OpenVR::VREvent_InputActionManifestLoad_t::__get_pathAppKey() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::VREvent_InputActionManifestLoad_t::__set_pathMessage(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::OVR::OpenVR::VREvent_InputActionManifestLoad_t::__get_pathMessage() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
constexpr void ::OVR::OpenVR::VREvent_InputActionManifestLoad_t::__set_pathMessageParam(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::OVR::OpenVR::VREvent_InputActionManifestLoad_t::__get_pathMessageParam() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->__instance);
}
constexpr void ::OVR::OpenVR::VREvent_InputActionManifestLoad_t::__set_pathManifestPath(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x18>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::OVR::OpenVR::VREvent_InputActionManifestLoad_t::__get_pathManifestPath() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this->__instance);
}
} // end anonymous namespace
