#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Rendering::RenderBufferStoreAction::RenderBufferStoreAction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Rendering::RenderBufferStoreAction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Rendering::RenderBufferStoreAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Rendering::RenderBufferStoreAction  UnityEngine::Rendering::RenderBufferStoreAction::Store{0};
constexpr UnityEngine::Rendering::RenderBufferStoreAction  UnityEngine::Rendering::RenderBufferStoreAction::Resolve{1};
constexpr UnityEngine::Rendering::RenderBufferStoreAction  UnityEngine::Rendering::RenderBufferStoreAction::StoreAndResolve{2};
constexpr UnityEngine::Rendering::RenderBufferStoreAction  UnityEngine::Rendering::RenderBufferStoreAction::DontCare{3};
