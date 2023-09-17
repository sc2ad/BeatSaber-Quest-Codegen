#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__VREvent_SpatialAnchor_t_def.hpp"
// Ctor Parameters [CppParam { name: "unHandle", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_SpatialAnchor_t::VREvent_SpatialAnchor_t(uint32_t unHandle) noexcept : ::bs_hook::ValueTypeWrapper() {this->unHandle = unHandle;
}
constexpr void ::OVR::OpenVR::VREvent_SpatialAnchor_t::__set_unHandle(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::VREvent_SpatialAnchor_t::__get_unHandle() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
} // end anonymous namespace
