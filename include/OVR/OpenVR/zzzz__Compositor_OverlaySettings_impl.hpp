#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__Compositor_OverlaySettings_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix44_t_def.hpp"
// Ctor Parameters [CppParam { name: "size", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "curved", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "antialias", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "alpha", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "gridDivs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "gridWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "gridScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "transform", ty: "::OVR::OpenVR::HmdMatrix44_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::Compositor_OverlaySettings::Compositor_OverlaySettings(uint32_t size, bool curved, bool antialias, float_t scale, float_t distance, float_t alpha, float_t uOffset, float_t vOffset, float_t uScale, float_t vScale, float_t gridDivs, float_t gridWidth, float_t gridScale, ::OVR::OpenVR::HmdMatrix44_t transform) noexcept : ::bs_hook::ValueTypeWrapper() {this->size = size;
this->curved = curved;
this->antialias = antialias;
this->scale = scale;
this->distance = distance;
this->alpha = alpha;
this->uOffset = uOffset;
this->vOffset = vOffset;
this->uScale = uScale;
this->vScale = vScale;
this->gridDivs = gridDivs;
this->gridWidth = gridWidth;
this->gridScale = gridScale;
this->transform = transform;
}
constexpr void ::OVR::OpenVR::Compositor_OverlaySettings::__set_size(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::Compositor_OverlaySettings::__get_size() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_OverlaySettings::__set_curved(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::OVR::OpenVR::Compositor_OverlaySettings::__get_curved() const {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_OverlaySettings::__set_antialias(bool value)  {
::cordl_internals::setInstanceField<bool, 0x5>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::OVR::OpenVR::Compositor_OverlaySettings::__get_antialias() const {
return ::cordl_internals::getInstanceField<bool, 0x5>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_OverlaySettings::__set_scale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::Compositor_OverlaySettings::__get_scale() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_OverlaySettings::__set_distance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::Compositor_OverlaySettings::__get_distance() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_OverlaySettings::__set_alpha(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::Compositor_OverlaySettings::__get_alpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_OverlaySettings::__set_uOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::Compositor_OverlaySettings::__get_uOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_OverlaySettings::__set_vOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::Compositor_OverlaySettings::__get_vOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_OverlaySettings::__set_uScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::Compositor_OverlaySettings::__get_uScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_OverlaySettings::__set_vScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::Compositor_OverlaySettings::__get_vScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_OverlaySettings::__set_gridDivs(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::Compositor_OverlaySettings::__get_gridDivs() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_OverlaySettings::__set_gridWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::Compositor_OverlaySettings::__get_gridWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_OverlaySettings::__set_gridScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::OVR::OpenVR::Compositor_OverlaySettings::__get_gridScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->__instance);
}
constexpr void ::OVR::OpenVR::Compositor_OverlaySettings::__set_transform(::OVR::OpenVR::HmdMatrix44_t value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::HmdMatrix44_t, 0x30>(this->__instance, std::forward<::OVR::OpenVR::HmdMatrix44_t>(value));
}
constexpr ::OVR::OpenVR::HmdMatrix44_t ::OVR::OpenVR::Compositor_OverlaySettings::__get_transform() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::HmdMatrix44_t, 0x30>(this->__instance);
}
} // end anonymous namespace
