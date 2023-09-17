#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__OVRGLTFType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRGLTFType::OVRGLTFType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::OVRGLTFType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::OVRGLTFType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::OVRGLTFType  ::GlobalNamespace::OVRGLTFType::NONE{0};
constexpr ::GlobalNamespace::OVRGLTFType  ::GlobalNamespace::OVRGLTFType::SCALAR{1};
constexpr ::GlobalNamespace::OVRGLTFType  ::GlobalNamespace::OVRGLTFType::VEC2{2};
constexpr ::GlobalNamespace::OVRGLTFType  ::GlobalNamespace::OVRGLTFType::VEC3{3};
constexpr ::GlobalNamespace::OVRGLTFType  ::GlobalNamespace::OVRGLTFType::VEC4{4};
constexpr ::GlobalNamespace::OVRGLTFType  ::GlobalNamespace::OVRGLTFType::MAT4{5};
} // end anonymous namespace
