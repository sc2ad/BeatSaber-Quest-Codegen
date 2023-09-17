#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__GameplayServerMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayServerMode::GameplayServerMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::GameplayServerMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::GameplayServerMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::GameplayServerMode  ::GlobalNamespace::GameplayServerMode::Countdown{0};
constexpr ::GlobalNamespace::GameplayServerMode  ::GlobalNamespace::GameplayServerMode::Managed{1};
constexpr ::GlobalNamespace::GameplayServerMode  ::GlobalNamespace::GameplayServerMode::QuickStartOneSong{2};
} // end anonymous namespace
