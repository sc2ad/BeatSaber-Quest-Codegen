#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::EnvironmentEffectsFilterPreset::EnvironmentEffectsFilterPreset(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::EnvironmentEffectsFilterPreset::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::EnvironmentEffectsFilterPreset::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::EnvironmentEffectsFilterPreset  GlobalNamespace::EnvironmentEffectsFilterPreset::AllEffects{0};
constexpr GlobalNamespace::EnvironmentEffectsFilterPreset  GlobalNamespace::EnvironmentEffectsFilterPreset::StrobeFilter{1};
constexpr GlobalNamespace::EnvironmentEffectsFilterPreset  GlobalNamespace::EnvironmentEffectsFilterPreset::NoEffects{10};
