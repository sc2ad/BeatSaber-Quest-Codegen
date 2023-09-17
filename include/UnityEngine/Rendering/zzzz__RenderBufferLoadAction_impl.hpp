#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderBufferLoadAction::RenderBufferLoadAction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Rendering::RenderBufferLoadAction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Rendering::RenderBufferLoadAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Rendering::RenderBufferLoadAction  ::UnityEngine::Rendering::RenderBufferLoadAction::Load{0};
constexpr ::UnityEngine::Rendering::RenderBufferLoadAction  ::UnityEngine::Rendering::RenderBufferLoadAction::Clear{1};
constexpr ::UnityEngine::Rendering::RenderBufferLoadAction  ::UnityEngine::Rendering::RenderBufferLoadAction::DontCare{2};
} // end anonymous namespace
