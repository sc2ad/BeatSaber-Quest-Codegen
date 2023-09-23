#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GameplayModifierMask::GameplayModifierMask(uint16_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GameplayModifierMask::__set_value__(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t GlobalNamespace::GameplayModifierMask::__get_value__() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::None{0u};
constexpr GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::BatteryEnergy{1u};
constexpr GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::NoFail{2u};
constexpr GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::InstaFail{4u};
constexpr GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::NoObstacles{8u};
constexpr GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::NoBombs{16u};
constexpr GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::FastNotes{32u};
constexpr GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::StrictAngles{64u};
constexpr GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::DisappearingArrows{128u};
constexpr GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::FasterSong{256u};
constexpr GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::SlowerSong{512u};
constexpr GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::NoArrows{1024u};
constexpr GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::GhostNotes{2048u};
constexpr GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::SuperFastSong{4096u};
constexpr GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::ProMode{8192u};
constexpr GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::ZenMode{16384u};
constexpr GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::SmallCubes{32768u};
constexpr GlobalNamespace::GameplayModifierMask  GlobalNamespace::GameplayModifierMask::All{65535u};
