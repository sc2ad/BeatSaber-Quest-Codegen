#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTextureSubElement_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Rendering::RenderTextureSubElement::RenderTextureSubElement(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Rendering::RenderTextureSubElement::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Rendering::RenderTextureSubElement::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Rendering::RenderTextureSubElement  UnityEngine::Rendering::RenderTextureSubElement::Color{0};
constexpr UnityEngine::Rendering::RenderTextureSubElement  UnityEngine::Rendering::RenderTextureSubElement::Depth{1};
constexpr UnityEngine::Rendering::RenderTextureSubElement  UnityEngine::Rendering::RenderTextureSubElement::Stencil{2};
constexpr UnityEngine::Rendering::RenderTextureSubElement  UnityEngine::Rendering::RenderTextureSubElement::Default{3};
