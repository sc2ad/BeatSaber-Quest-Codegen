#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__SpritePackingRotation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SpritePackingRotation::SpritePackingRotation(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::SpritePackingRotation::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::SpritePackingRotation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::SpritePackingRotation  ::UnityEngine::SpritePackingRotation::None{0};
constexpr ::UnityEngine::SpritePackingRotation  ::UnityEngine::SpritePackingRotation::FlipHorizontal{1};
constexpr ::UnityEngine::SpritePackingRotation  ::UnityEngine::SpritePackingRotation::FlipVertical{2};
constexpr ::UnityEngine::SpritePackingRotation  ::UnityEngine::SpritePackingRotation::Rotate180{3};
constexpr ::UnityEngine::SpritePackingRotation  ::UnityEngine::SpritePackingRotation::Any{15};
} // end anonymous namespace
