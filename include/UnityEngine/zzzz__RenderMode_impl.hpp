#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__RenderMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RenderMode::RenderMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::RenderMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::RenderMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::RenderMode  ::UnityEngine::RenderMode::ScreenSpaceOverlay{0};
constexpr ::UnityEngine::RenderMode  ::UnityEngine::RenderMode::ScreenSpaceCamera{1};
constexpr ::UnityEngine::RenderMode  ::UnityEngine::RenderMode::WorldSpace{2};
} // end anonymous namespace
