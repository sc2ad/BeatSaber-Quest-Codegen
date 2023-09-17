#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct GameplayModifierMask;
}
// Type: ::GameplayModifierMask
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15088))
// CS Name: GameplayModifierMask
struct CORDL_TYPE GameplayModifierMask : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr GameplayModifierMask(uint16_t value__) noexcept;


                    constexpr GameplayModifierMask(GameplayModifierMask const&) = default;
                    constexpr GameplayModifierMask(GameplayModifierMask&&) = default;
                    constexpr GameplayModifierMask& operator=(GameplayModifierMask const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GameplayModifierMask& operator=(GameplayModifierMask&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GameplayModifierMask(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GameplayModifierMask_Unwrapped : uint16_t {
__None = 0u,
__BatteryEnergy = 1u,
__NoFail = 2u,
__InstaFail = 4u,
__NoObstacles = 8u,
__NoBombs = 16u,
__FastNotes = 32u,
__StrictAngles = 64u,
__DisappearingArrows = 128u,
__FasterSong = 256u,
__SlowerSong = 512u,
__NoArrows = 1024u,
__GhostNotes = 2048u,
__SuperFastSong = 4096u,
__ProMode = 8192u,
__ZenMode = 16384u,
__SmallCubes = 32768u,
__All = 65535u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GameplayModifierMask_Unwrapped () const noexcept {
return std::bit_cast<__GameplayModifierMask_Unwrapped>(__instance);
}


// Fields

 uint16_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint16_t value) ;

constexpr uint16_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::GameplayModifierMask const None;

/// @brief Field BatteryEnergy offset 0
static ::GlobalNamespace::GameplayModifierMask const BatteryEnergy;

/// @brief Field NoFail offset 0
static ::GlobalNamespace::GameplayModifierMask const NoFail;

/// @brief Field InstaFail offset 0
static ::GlobalNamespace::GameplayModifierMask const InstaFail;

/// @brief Field NoObstacles offset 0
static ::GlobalNamespace::GameplayModifierMask const NoObstacles;

/// @brief Field NoBombs offset 0
static ::GlobalNamespace::GameplayModifierMask const NoBombs;

/// @brief Field FastNotes offset 0
static ::GlobalNamespace::GameplayModifierMask const FastNotes;

/// @brief Field StrictAngles offset 0
static ::GlobalNamespace::GameplayModifierMask const StrictAngles;

/// @brief Field DisappearingArrows offset 0
static ::GlobalNamespace::GameplayModifierMask const DisappearingArrows;

/// @brief Field FasterSong offset 0
static ::GlobalNamespace::GameplayModifierMask const FasterSong;

/// @brief Field SlowerSong offset 0
static ::GlobalNamespace::GameplayModifierMask const SlowerSong;

/// @brief Field NoArrows offset 0
static ::GlobalNamespace::GameplayModifierMask const NoArrows;

/// @brief Field GhostNotes offset 0
static ::GlobalNamespace::GameplayModifierMask const GhostNotes;

/// @brief Field SuperFastSong offset 0
static ::GlobalNamespace::GameplayModifierMask const SuperFastSong;

/// @brief Field ProMode offset 0
static ::GlobalNamespace::GameplayModifierMask const ProMode;

/// @brief Field ZenMode offset 0
static ::GlobalNamespace::GameplayModifierMask const ZenMode;

/// @brief Field SmallCubes offset 0
static ::GlobalNamespace::GameplayModifierMask const SmallCubes;

/// @brief Field All offset 0
static ::GlobalNamespace::GameplayModifierMask const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifierMask, "", "GameplayModifierMask");
