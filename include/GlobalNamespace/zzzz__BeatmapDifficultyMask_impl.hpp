#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatmapDifficultyMask::BeatmapDifficultyMask(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::BeatmapDifficultyMask::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::GlobalNamespace::BeatmapDifficultyMask::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask  ::GlobalNamespace::BeatmapDifficultyMask::Easy{1u};
constexpr ::GlobalNamespace::BeatmapDifficultyMask  ::GlobalNamespace::BeatmapDifficultyMask::Normal{2u};
constexpr ::GlobalNamespace::BeatmapDifficultyMask  ::GlobalNamespace::BeatmapDifficultyMask::Hard{4u};
constexpr ::GlobalNamespace::BeatmapDifficultyMask  ::GlobalNamespace::BeatmapDifficultyMask::Expert{8u};
constexpr ::GlobalNamespace::BeatmapDifficultyMask  ::GlobalNamespace::BeatmapDifficultyMask::ExpertPlus{16u};
constexpr ::GlobalNamespace::BeatmapDifficultyMask  ::GlobalNamespace::BeatmapDifficultyMask::All{31u};
} // end anonymous namespace
