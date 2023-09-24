#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
// Type: ::BeatmapDifficultyMask
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14904))
// CS Name: BeatmapDifficultyMask
struct CORDL_TYPE BeatmapDifficultyMask : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr BeatmapDifficultyMask(uint8_t value__) noexcept;


                    constexpr BeatmapDifficultyMask(BeatmapDifficultyMask const&) = default;
                    constexpr BeatmapDifficultyMask(BeatmapDifficultyMask&&) = default;
                    constexpr BeatmapDifficultyMask& operator=(BeatmapDifficultyMask const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BeatmapDifficultyMask& operator=(BeatmapDifficultyMask&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BeatmapDifficultyMask(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BeatmapDifficultyMask_Unwrapped : uint8_t {
__Easy = 1u,
__Normal = 2u,
__Hard = 4u,
__Expert = 8u,
__ExpertPlus = 16u,
__All = 31u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BeatmapDifficultyMask_Unwrapped () const noexcept {
return std::bit_cast<__BeatmapDifficultyMask_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint8_t;


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Easy offset 0
static GlobalNamespace::BeatmapDifficultyMask const Easy;

/// @brief Field Normal offset 0
static GlobalNamespace::BeatmapDifficultyMask const Normal;

/// @brief Field Hard offset 0
static GlobalNamespace::BeatmapDifficultyMask const Hard;

/// @brief Field Expert offset 0
static GlobalNamespace::BeatmapDifficultyMask const Expert;

/// @brief Field ExpertPlus offset 0
static GlobalNamespace::BeatmapDifficultyMask const ExpertPlus;

/// @brief Field All offset 0
static GlobalNamespace::BeatmapDifficultyMask const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDifficultyMask, "", "BeatmapDifficultyMask");
