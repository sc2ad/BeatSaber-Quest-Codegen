#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__NetSyncConnectionStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::NetSyncConnectionStatus::NetSyncConnectionStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::NetSyncConnectionStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Oculus::Platform::NetSyncConnectionStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::NetSyncConnectionStatus  ::Oculus::Platform::NetSyncConnectionStatus::Unknown{0};
constexpr ::Oculus::Platform::NetSyncConnectionStatus  ::Oculus::Platform::NetSyncConnectionStatus::Connecting{1};
constexpr ::Oculus::Platform::NetSyncConnectionStatus  ::Oculus::Platform::NetSyncConnectionStatus::Disconnected{2};
constexpr ::Oculus::Platform::NetSyncConnectionStatus  ::Oculus::Platform::NetSyncConnectionStatus::Connected{3};
} // end anonymous namespace
