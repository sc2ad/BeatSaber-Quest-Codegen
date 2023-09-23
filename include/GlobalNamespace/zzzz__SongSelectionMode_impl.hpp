#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__SongSelectionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::SongSelectionMode::SongSelectionMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::SongSelectionMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::SongSelectionMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::SongSelectionMode  GlobalNamespace::SongSelectionMode::Vote{0};
constexpr GlobalNamespace::SongSelectionMode  GlobalNamespace::SongSelectionMode::Random{1};
constexpr GlobalNamespace::SongSelectionMode  GlobalNamespace::SongSelectionMode::OwnerPicks{2};
constexpr GlobalNamespace::SongSelectionMode  GlobalNamespace::SongSelectionMode::RandomPlayerPicks{3};
