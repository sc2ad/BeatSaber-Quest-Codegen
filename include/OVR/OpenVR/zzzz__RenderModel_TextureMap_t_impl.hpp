#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_TextureMap_t_def.hpp"
// Ctor Parameters [CppParam { name: "unWidth", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unHeight", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rubTextureMapData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::RenderModel_TextureMap_t::RenderModel_TextureMap_t(uint16_t unWidth, uint16_t unHeight, ::cordl_internals::intptr_t rubTextureMapData) noexcept : ::bs_hook::ValueTypeWrapper() {this->unWidth = unWidth;
this->unHeight = unHeight;
this->rubTextureMapData = rubTextureMapData;
}
constexpr void OVR::OpenVR::RenderModel_TextureMap_t::__set_unWidth(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t OVR::OpenVR::RenderModel_TextureMap_t::__get_unWidth() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::RenderModel_TextureMap_t::__set_unHeight(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x2>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t OVR::OpenVR::RenderModel_TextureMap_t::__get_unHeight() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x2>(this->__instance);
}
constexpr void OVR::OpenVR::RenderModel_TextureMap_t::__set_rubTextureMapData(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t OVR::OpenVR::RenderModel_TextureMap_t::__get_rubTextureMapData() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
