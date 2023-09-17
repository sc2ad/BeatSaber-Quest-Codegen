#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPackingMode;
}
// Type: UnityEngine.TextCore.LowLevel::GlyphPackingMode
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15511))
// CS Name: UnityEngine.TextCore.LowLevel.GlyphPackingMode
struct CORDL_TYPE GlyphPackingMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlyphPackingMode(int32_t value__) noexcept;


                    constexpr GlyphPackingMode(GlyphPackingMode const&) = default;
                    constexpr GlyphPackingMode(GlyphPackingMode&&) = default;
                    constexpr GlyphPackingMode& operator=(GlyphPackingMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlyphPackingMode& operator=(GlyphPackingMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlyphPackingMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlyphPackingMode_Unwrapped : int32_t {
__BestShortSideFit = 0,
__BestLongSideFit = 1,
__BestAreaFit = 2,
__BottomLeftRule = 3,
__ContactPointRule = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlyphPackingMode_Unwrapped () const noexcept {
return std::bit_cast<__GlyphPackingMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field BestShortSideFit offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode const BestShortSideFit;

/// @brief Field BestLongSideFit offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode const BestLongSideFit;

/// @brief Field BestAreaFit offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode const BestAreaFit;

/// @brief Field BottomLeftRule offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode const BottomLeftRule;

/// @brief Field ContactPointRule offset 0
static ::UnityEngine::TextCore::LowLevel::GlyphPackingMode const ContactPointRule;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphPackingMode, "UnityEngine.TextCore.LowLevel", "GlyphPackingMode");
