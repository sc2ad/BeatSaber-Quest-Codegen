#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::TextureDimension::TextureDimension(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Rendering::TextureDimension::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Rendering::TextureDimension::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Rendering::TextureDimension  ::UnityEngine::Rendering::TextureDimension::Unknown{-1};
constexpr ::UnityEngine::Rendering::TextureDimension  ::UnityEngine::Rendering::TextureDimension::None{0};
constexpr ::UnityEngine::Rendering::TextureDimension  ::UnityEngine::Rendering::TextureDimension::Any{1};
constexpr ::UnityEngine::Rendering::TextureDimension  ::UnityEngine::Rendering::TextureDimension::Tex2D{2};
constexpr ::UnityEngine::Rendering::TextureDimension  ::UnityEngine::Rendering::TextureDimension::Tex3D{3};
constexpr ::UnityEngine::Rendering::TextureDimension  ::UnityEngine::Rendering::TextureDimension::Cube{4};
constexpr ::UnityEngine::Rendering::TextureDimension  ::UnityEngine::Rendering::TextureDimension::Tex2DArray{5};
constexpr ::UnityEngine::Rendering::TextureDimension  ::UnityEngine::Rendering::TextureDimension::CubeArray{6};
} // end anonymous namespace
