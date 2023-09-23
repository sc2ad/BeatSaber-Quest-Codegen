#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBufferExecutionFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Rendering::CommandBufferExecutionFlags::CommandBufferExecutionFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Rendering::CommandBufferExecutionFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Rendering::CommandBufferExecutionFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Rendering::CommandBufferExecutionFlags  UnityEngine::Rendering::CommandBufferExecutionFlags::None{0};
constexpr UnityEngine::Rendering::CommandBufferExecutionFlags  UnityEngine::Rendering::CommandBufferExecutionFlags::AsyncCompute{2};
