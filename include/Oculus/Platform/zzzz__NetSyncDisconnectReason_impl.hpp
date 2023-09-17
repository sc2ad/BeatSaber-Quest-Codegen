#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__NetSyncDisconnectReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::NetSyncDisconnectReason::NetSyncDisconnectReason(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::NetSyncDisconnectReason::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Oculus::Platform::NetSyncDisconnectReason::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::NetSyncDisconnectReason  ::Oculus::Platform::NetSyncDisconnectReason::Unknown{0};
constexpr ::Oculus::Platform::NetSyncDisconnectReason  ::Oculus::Platform::NetSyncDisconnectReason::LocalTerminated{1};
constexpr ::Oculus::Platform::NetSyncDisconnectReason  ::Oculus::Platform::NetSyncDisconnectReason::ServerTerminated{2};
constexpr ::Oculus::Platform::NetSyncDisconnectReason  ::Oculus::Platform::NetSyncDisconnectReason::Failed{3};
constexpr ::Oculus::Platform::NetSyncDisconnectReason  ::Oculus::Platform::NetSyncDisconnectReason::Lost{4};
} // end anonymous namespace
