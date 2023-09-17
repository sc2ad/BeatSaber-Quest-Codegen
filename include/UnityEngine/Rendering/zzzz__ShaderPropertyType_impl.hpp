#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Rendering/zzzz__ShaderPropertyType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShaderPropertyType::ShaderPropertyType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Rendering::ShaderPropertyType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Rendering::ShaderPropertyType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Rendering::ShaderPropertyType  ::UnityEngine::Rendering::ShaderPropertyType::Color{0};
constexpr ::UnityEngine::Rendering::ShaderPropertyType  ::UnityEngine::Rendering::ShaderPropertyType::Vector{1};
constexpr ::UnityEngine::Rendering::ShaderPropertyType  ::UnityEngine::Rendering::ShaderPropertyType::Float{2};
constexpr ::UnityEngine::Rendering::ShaderPropertyType  ::UnityEngine::Rendering::ShaderPropertyType::Range{3};
constexpr ::UnityEngine::Rendering::ShaderPropertyType  ::UnityEngine::Rendering::ShaderPropertyType::Texture{4};
constexpr ::UnityEngine::Rendering::ShaderPropertyType  ::UnityEngine::Rendering::ShaderPropertyType::Int{5};
} // end anonymous namespace
