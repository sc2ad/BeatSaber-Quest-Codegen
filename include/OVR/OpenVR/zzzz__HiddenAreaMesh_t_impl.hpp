#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__HiddenAreaMesh_t_def.hpp"
// Ctor Parameters [CppParam { name: "pVertexData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unTriangleCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::HiddenAreaMesh_t::HiddenAreaMesh_t(::cordl_internals::intptr_t pVertexData, uint32_t unTriangleCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->pVertexData = pVertexData;
this->unTriangleCount = unTriangleCount;
}
constexpr void OVR::OpenVR::HiddenAreaMesh_t::__set_pVertexData(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t OVR::OpenVR::HiddenAreaMesh_t::__get_pVertexData() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::HiddenAreaMesh_t::__set_unTriangleCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::HiddenAreaMesh_t::__get_unTriangleCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
