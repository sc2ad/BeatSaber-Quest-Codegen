#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__RenderTextureMemoryless_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RenderTextureMemoryless::RenderTextureMemoryless(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::RenderTextureMemoryless::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::RenderTextureMemoryless::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::RenderTextureMemoryless  ::UnityEngine::RenderTextureMemoryless::None{0};
constexpr ::UnityEngine::RenderTextureMemoryless  ::UnityEngine::RenderTextureMemoryless::Color{1};
constexpr ::UnityEngine::RenderTextureMemoryless  ::UnityEngine::RenderTextureMemoryless::Depth{2};
constexpr ::UnityEngine::RenderTextureMemoryless  ::UnityEngine::RenderTextureMemoryless::MSAA{4};
} // end anonymous namespace
