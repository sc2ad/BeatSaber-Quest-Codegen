#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus::AsyncOperationStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus::None{0};
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus::Succeeded{1};
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus::Failed{2};
} // end anonymous namespace
