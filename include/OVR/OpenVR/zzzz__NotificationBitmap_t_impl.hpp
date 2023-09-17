#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__NotificationBitmap_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_pImageData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nWidth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nHeight", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nBytesPerPixel", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::NotificationBitmap_t::NotificationBitmap_t(::cordl_internals::intptr_t m_pImageData, int32_t m_nWidth, int32_t m_nHeight, int32_t m_nBytesPerPixel) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_pImageData = m_pImageData;
this->m_nWidth = m_nWidth;
this->m_nHeight = m_nHeight;
this->m_nBytesPerPixel = m_nBytesPerPixel;
}
constexpr void ::OVR::OpenVR::NotificationBitmap_t::__set_m_pImageData(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::NotificationBitmap_t::__get_m_pImageData() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::NotificationBitmap_t::__set_m_nWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::NotificationBitmap_t::__get_m_nWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::OVR::OpenVR::NotificationBitmap_t::__set_m_nHeight(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::NotificationBitmap_t::__get_m_nHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void ::OVR::OpenVR::NotificationBitmap_t::__set_m_nBytesPerPixel(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::NotificationBitmap_t::__get_m_nBytesPerPixel() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
} // end anonymous namespace
