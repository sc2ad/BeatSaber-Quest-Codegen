#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__Texture_t_def.hpp"
#include "OVR/OpenVR/zzzz__EColorSpace_def.hpp"
#include "OVR/OpenVR/zzzz__ETextureType_def.hpp"
// Ctor Parameters [CppParam { name: "handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eType", ty: "OVR::OpenVR::ETextureType", modifiers: "", def_value: Some("{}") }, CppParam { name: "eColorSpace", ty: "OVR::OpenVR::EColorSpace", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::Texture_t::Texture_t(::cordl_internals::intptr_t handle, OVR::OpenVR::ETextureType eType, OVR::OpenVR::EColorSpace eColorSpace) noexcept : ::bs_hook::ValueTypeWrapper() {this->handle = handle;
this->eType = eType;
this->eColorSpace = eColorSpace;
}
constexpr void OVR::OpenVR::Texture_t::__set_handle(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t OVR::OpenVR::Texture_t::__get_handle() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::Texture_t::__set_eType(OVR::OpenVR::ETextureType value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::ETextureType, 0x8>(this->__instance, std::forward<OVR::OpenVR::ETextureType>(value));
}
constexpr OVR::OpenVR::ETextureType OVR::OpenVR::Texture_t::__get_eType() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::ETextureType, 0x8>(this->__instance);
}
constexpr void OVR::OpenVR::Texture_t::__set_eColorSpace(OVR::OpenVR::EColorSpace value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::EColorSpace, 0xc>(this->__instance, std::forward<OVR::OpenVR::EColorSpace>(value));
}
constexpr OVR::OpenVR::EColorSpace OVR::OpenVR::Texture_t::__get_eColorSpace() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::EColorSpace, 0xc>(this->__instance);
}
