#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__UpdateConnectionStateReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::UpdateConnectionStateReason::UpdateConnectionStateReason(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::UpdateConnectionStateReason::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::UpdateConnectionStateReason::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::Init{0};
constexpr GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::PlayerOrderChanged{1};
constexpr GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::Connected{2};
constexpr GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::StartSession{3};
constexpr GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::StartDedicatedServer{4};
constexpr GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::SyncTimeInitialized{5};
constexpr GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::ManualDisconnect{6};
constexpr GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::RemoteDisconnect{7};
constexpr GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::ConnectionFailed{8};
constexpr GlobalNamespace::UpdateConnectionStateReason  GlobalNamespace::UpdateConnectionStateReason::OnDestroy{9};
