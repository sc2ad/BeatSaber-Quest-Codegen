#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__OVRTextureFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRTextureFormat::OVRTextureFormat(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::OVRTextureFormat::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::OVRTextureFormat::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::OVRTextureFormat  ::GlobalNamespace::OVRTextureFormat::NONE{0};
constexpr ::GlobalNamespace::OVRTextureFormat  ::GlobalNamespace::OVRTextureFormat::KTX2{1};
constexpr ::GlobalNamespace::OVRTextureFormat  ::GlobalNamespace::OVRTextureFormat::PNG{2};
constexpr ::GlobalNamespace::OVRTextureFormat  ::GlobalNamespace::OVRTextureFormat::JPEG{3};
} // end anonymous namespace
