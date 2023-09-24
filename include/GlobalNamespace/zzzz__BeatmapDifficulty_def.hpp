#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
// Type: ::BeatmapDifficulty
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14902))
// CS Name: BeatmapDifficulty
struct CORDL_TYPE BeatmapDifficulty : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BeatmapDifficulty(int32_t value__) noexcept;


                    constexpr BeatmapDifficulty(BeatmapDifficulty const&) = default;
                    constexpr BeatmapDifficulty(BeatmapDifficulty&&) = default;
                    constexpr BeatmapDifficulty& operator=(BeatmapDifficulty const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BeatmapDifficulty& operator=(BeatmapDifficulty&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BeatmapDifficulty(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BeatmapDifficulty_Unwrapped : int32_t {
__Easy = 0,
__Normal = 1,
__Hard = 2,
__Expert = 3,
__ExpertPlus = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BeatmapDifficulty_Unwrapped () const noexcept {
return std::bit_cast<__BeatmapDifficulty_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Easy offset 0
static GlobalNamespace::BeatmapDifficulty const Easy;

/// @brief Field Normal offset 0
static GlobalNamespace::BeatmapDifficulty const Normal;

/// @brief Field Hard offset 0
static GlobalNamespace::BeatmapDifficulty const Hard;

/// @brief Field Expert offset 0
static GlobalNamespace::BeatmapDifficulty const Expert;

/// @brief Field ExpertPlus offset 0
static GlobalNamespace::BeatmapDifficulty const ExpertPlus;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDifficulty, "", "BeatmapDifficulty");
