#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlacementErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::MultiplayerPlacementErrorCode::MultiplayerPlacementErrorCode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::MultiplayerPlacementErrorCode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::MultiplayerPlacementErrorCode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::MultiplayerPlacementErrorCode  GlobalNamespace::MultiplayerPlacementErrorCode::Success{0};
constexpr GlobalNamespace::MultiplayerPlacementErrorCode  GlobalNamespace::MultiplayerPlacementErrorCode::Unknown{1};
constexpr GlobalNamespace::MultiplayerPlacementErrorCode  GlobalNamespace::MultiplayerPlacementErrorCode::ConnectionCanceled{2};
constexpr GlobalNamespace::MultiplayerPlacementErrorCode  GlobalNamespace::MultiplayerPlacementErrorCode::ServerDoesNotExist{3};
constexpr GlobalNamespace::MultiplayerPlacementErrorCode  GlobalNamespace::MultiplayerPlacementErrorCode::ServerAtCapacity{4};
constexpr GlobalNamespace::MultiplayerPlacementErrorCode  GlobalNamespace::MultiplayerPlacementErrorCode::AuthenticationFailed{5};
constexpr GlobalNamespace::MultiplayerPlacementErrorCode  GlobalNamespace::MultiplayerPlacementErrorCode::RequestTimeout{6};
constexpr GlobalNamespace::MultiplayerPlacementErrorCode  GlobalNamespace::MultiplayerPlacementErrorCode::MatchmakingTimeout{7};
