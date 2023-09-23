#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventTransitionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::BeatmapEventTransitionType::BeatmapEventTransitionType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::BeatmapEventTransitionType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::BeatmapEventTransitionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::BeatmapEventTransitionType  GlobalNamespace::BeatmapEventTransitionType::Instant{0};
constexpr GlobalNamespace::BeatmapEventTransitionType  GlobalNamespace::BeatmapEventTransitionType::Interpolate{1};
constexpr GlobalNamespace::BeatmapEventTransitionType  GlobalNamespace::BeatmapEventTransitionType::Extend{2};
