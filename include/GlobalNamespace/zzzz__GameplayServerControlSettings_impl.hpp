#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__GameplayServerControlSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayServerControlSettings::GameplayServerControlSettings(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::GameplayServerControlSettings::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::GameplayServerControlSettings::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::GameplayServerControlSettings  ::GlobalNamespace::GameplayServerControlSettings::None{0};
constexpr ::GlobalNamespace::GameplayServerControlSettings  ::GlobalNamespace::GameplayServerControlSettings::AllowModifierSelection{1};
constexpr ::GlobalNamespace::GameplayServerControlSettings  ::GlobalNamespace::GameplayServerControlSettings::AllowSpectate{2};
constexpr ::GlobalNamespace::GameplayServerControlSettings  ::GlobalNamespace::GameplayServerControlSettings::All{3};
} // end anonymous namespace