#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Rendering/zzzz__ShaderPropertyFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags::ShaderPropertyFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Rendering::ShaderPropertyFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Rendering::ShaderPropertyFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  ::UnityEngine::Rendering::ShaderPropertyFlags::None{0};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  ::UnityEngine::Rendering::ShaderPropertyFlags::HideInInspector{1};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  ::UnityEngine::Rendering::ShaderPropertyFlags::PerRendererData{2};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  ::UnityEngine::Rendering::ShaderPropertyFlags::NoScaleOffset{4};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  ::UnityEngine::Rendering::ShaderPropertyFlags::Normal{8};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  ::UnityEngine::Rendering::ShaderPropertyFlags::HDR{16};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  ::UnityEngine::Rendering::ShaderPropertyFlags::Gamma{32};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  ::UnityEngine::Rendering::ShaderPropertyFlags::NonModifiableTextureData{64};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  ::UnityEngine::Rendering::ShaderPropertyFlags::MainTexture{128};
constexpr ::UnityEngine::Rendering::ShaderPropertyFlags  ::UnityEngine::Rendering::ShaderPropertyFlags::MainColor{256};
} // end anonymous namespace
