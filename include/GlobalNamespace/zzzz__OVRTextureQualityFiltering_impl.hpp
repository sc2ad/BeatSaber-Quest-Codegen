#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__OVRTextureQualityFiltering_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRTextureQualityFiltering::OVRTextureQualityFiltering(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::OVRTextureQualityFiltering::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::OVRTextureQualityFiltering::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  ::GlobalNamespace::OVRTextureQualityFiltering::None{-1};
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  ::GlobalNamespace::OVRTextureQualityFiltering::Bilinear{0};
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  ::GlobalNamespace::OVRTextureQualityFiltering::Trilinear{1};
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  ::GlobalNamespace::OVRTextureQualityFiltering::Aniso2x{2};
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  ::GlobalNamespace::OVRTextureQualityFiltering::Aniso4x{3};
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  ::GlobalNamespace::OVRTextureQualityFiltering::Aniso8x{4};
constexpr ::GlobalNamespace::OVRTextureQualityFiltering  ::GlobalNamespace::OVRTextureQualityFiltering::Aniso16x{5};
} // end anonymous namespace
