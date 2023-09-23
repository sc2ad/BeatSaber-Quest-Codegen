#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_t_def.hpp"
// Ctor Parameters [CppParam { name: "rVertexData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unVertexCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rIndexData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unTriangleCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "diffuseTextureId", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::RenderModel_t::RenderModel_t(::cordl_internals::intptr_t rVertexData, uint32_t unVertexCount, ::cordl_internals::intptr_t rIndexData, uint32_t unTriangleCount, int32_t diffuseTextureId) noexcept : ::bs_hook::ValueTypeWrapper() {this->rVertexData = rVertexData;
this->unVertexCount = unVertexCount;
this->rIndexData = rIndexData;
this->unTriangleCount = unTriangleCount;
this->diffuseTextureId = diffuseTextureId;
}
constexpr void OVR::OpenVR::RenderModel_t::__set_rVertexData(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t OVR::OpenVR::RenderModel_t::__get_rVertexData() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::RenderModel_t::__set_unVertexCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::RenderModel_t::__get_unVertexCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
constexpr void OVR::OpenVR::RenderModel_t::__set_rIndexData(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t OVR::OpenVR::RenderModel_t::__get_rIndexData() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance);
}
constexpr void OVR::OpenVR::RenderModel_t::__set_unTriangleCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t OVR::OpenVR::RenderModel_t::__get_unTriangleCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->__instance);
}
constexpr void OVR::OpenVR::RenderModel_t::__set_diffuseTextureId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t OVR::OpenVR::RenderModel_t::__get_diffuseTextureId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
