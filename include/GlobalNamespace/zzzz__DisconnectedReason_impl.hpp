#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::DisconnectedReason::DisconnectedReason(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::DisconnectedReason::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::DisconnectedReason::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::Unknown{1};
constexpr GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::UserInitiated{2};
constexpr GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::Timeout{3};
constexpr GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::Kicked{4};
constexpr GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::ServerAtCapacity{5};
constexpr GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::ServerConnectionClosed{6};
constexpr GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::MasterServerUnreachable{7};
constexpr GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::ClientConnectionClosed{8};
constexpr GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::NetworkDisconnected{9};
constexpr GlobalNamespace::DisconnectedReason  GlobalNamespace::DisconnectedReason::ServerTerminated{10};
