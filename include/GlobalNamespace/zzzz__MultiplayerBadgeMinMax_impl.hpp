#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MultiplayerBadgeMinMax_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerBadgeMinMax::MultiplayerBadgeMinMax(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::MultiplayerBadgeMinMax::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::MultiplayerBadgeMinMax::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::MultiplayerBadgeMinMax  ::GlobalNamespace::MultiplayerBadgeMinMax::Min{0};
constexpr ::GlobalNamespace::MultiplayerBadgeMinMax  ::GlobalNamespace::MultiplayerBadgeMinMax::Max{1};
} // end anonymous namespace