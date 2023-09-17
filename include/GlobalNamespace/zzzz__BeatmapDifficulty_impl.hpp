#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapDifficulty::BeatmapDifficulty(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::BeatmapDifficulty::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::BeatmapDifficulty::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::BeatmapDifficulty  ::GlobalNamespace::BeatmapDifficulty::Easy{0};
constexpr ::GlobalNamespace::BeatmapDifficulty  ::GlobalNamespace::BeatmapDifficulty::Normal{1};
constexpr ::GlobalNamespace::BeatmapDifficulty  ::GlobalNamespace::BeatmapDifficulty::Hard{2};
constexpr ::GlobalNamespace::BeatmapDifficulty  ::GlobalNamespace::BeatmapDifficulty::Expert{3};
constexpr ::GlobalNamespace::BeatmapDifficulty  ::GlobalNamespace::BeatmapDifficulty::ExpertPlus{4};
} // end anonymous namespace
