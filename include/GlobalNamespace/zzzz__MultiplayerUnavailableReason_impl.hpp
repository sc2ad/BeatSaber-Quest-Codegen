#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MultiplayerUnavailableReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerUnavailableReason::MultiplayerUnavailableReason(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::MultiplayerUnavailableReason::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::MultiplayerUnavailableReason::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::MultiplayerUnavailableReason  ::GlobalNamespace::MultiplayerUnavailableReason::NetworkUnreachable{1};
constexpr ::GlobalNamespace::MultiplayerUnavailableReason  ::GlobalNamespace::MultiplayerUnavailableReason::UpdateRequired{2};
constexpr ::GlobalNamespace::MultiplayerUnavailableReason  ::GlobalNamespace::MultiplayerUnavailableReason::ServerOffline{3};
constexpr ::GlobalNamespace::MultiplayerUnavailableReason  ::GlobalNamespace::MultiplayerUnavailableReason::MaintenanceMode{4};
} // end anonymous namespace
