#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct BeatmapEventTransitionType;
}
// Type: ::BeatmapEventTransitionType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14913))
// CS Name: BeatmapEventTransitionType
struct CORDL_TYPE BeatmapEventTransitionType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BeatmapEventTransitionType(int32_t value__) noexcept;


                    constexpr BeatmapEventTransitionType(BeatmapEventTransitionType const&) = default;
                    constexpr BeatmapEventTransitionType(BeatmapEventTransitionType&&) = default;
                    constexpr BeatmapEventTransitionType& operator=(BeatmapEventTransitionType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BeatmapEventTransitionType& operator=(BeatmapEventTransitionType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BeatmapEventTransitionType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BeatmapEventTransitionType_Unwrapped : int32_t {
__Instant = 0,
__Interpolate = 1,
__Extend = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BeatmapEventTransitionType_Unwrapped () const noexcept {
return std::bit_cast<__BeatmapEventTransitionType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Instant offset 0
static ::GlobalNamespace::BeatmapEventTransitionType const Instant;

/// @brief Field Interpolate offset 0
static ::GlobalNamespace::BeatmapEventTransitionType const Interpolate;

/// @brief Field Extend offset 0
static ::GlobalNamespace::BeatmapEventTransitionType const Extend;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventTransitionType, "", "BeatmapEventTransitionType");
