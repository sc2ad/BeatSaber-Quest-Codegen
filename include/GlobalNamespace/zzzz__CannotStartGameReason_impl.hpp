#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::CannotStartGameReason::CannotStartGameReason(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::CannotStartGameReason::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::CannotStartGameReason::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::CannotStartGameReason  GlobalNamespace::CannotStartGameReason::None{1};
constexpr GlobalNamespace::CannotStartGameReason  GlobalNamespace::CannotStartGameReason::AllPlayersSpectating{2};
constexpr GlobalNamespace::CannotStartGameReason  GlobalNamespace::CannotStartGameReason::NoSongSelected{3};
constexpr GlobalNamespace::CannotStartGameReason  GlobalNamespace::CannotStartGameReason::AllPlayersNotInLobby{4};
constexpr GlobalNamespace::CannotStartGameReason  GlobalNamespace::CannotStartGameReason::DoNotOwnSong{5};
