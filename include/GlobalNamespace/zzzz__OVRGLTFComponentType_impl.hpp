#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFComponentType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::OVRGLTFComponentType::OVRGLTFComponentType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::OVRGLTFComponentType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVRGLTFComponentType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::OVRGLTFComponentType  GlobalNamespace::OVRGLTFComponentType::BYTE{5120};
constexpr GlobalNamespace::OVRGLTFComponentType  GlobalNamespace::OVRGLTFComponentType::UNSIGNED_BYTE{5121};
constexpr GlobalNamespace::OVRGLTFComponentType  GlobalNamespace::OVRGLTFComponentType::SHORT{5122};
constexpr GlobalNamespace::OVRGLTFComponentType  GlobalNamespace::OVRGLTFComponentType::UNSIGNED_SHORT{5123};
constexpr GlobalNamespace::OVRGLTFComponentType  GlobalNamespace::OVRGLTFComponentType::UNSIGNED_INT{5125};
constexpr GlobalNamespace::OVRGLTFComponentType  GlobalNamespace::OVRGLTFComponentType::FLOAT{5126};
