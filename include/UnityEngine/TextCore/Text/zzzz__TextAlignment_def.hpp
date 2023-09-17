#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextAlignment;
}
// Type: UnityEngine.TextCore.Text::TextAlignment
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13531))
// CS Name: UnityEngine.TextCore.Text.TextAlignment
struct CORDL_TYPE TextAlignment : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextAlignment(int32_t value__) noexcept;


                    constexpr TextAlignment(TextAlignment const&) = default;
                    constexpr TextAlignment(TextAlignment&&) = default;
                    constexpr TextAlignment& operator=(TextAlignment const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextAlignment& operator=(TextAlignment&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextAlignment(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TextAlignment_Unwrapped : int32_t {
__TopLeft = 257,
__TopCenter = 258,
__TopRight = 260,
__TopJustified = 264,
__TopFlush = 272,
__TopGeoAligned = 288,
__MiddleLeft = 513,
__MiddleCenter = 514,
__MiddleRight = 516,
__MiddleJustified = 520,
__MiddleFlush = 528,
__MiddleGeoAligned = 544,
__BottomLeft = 1025,
__BottomCenter = 1026,
__BottomRight = 1028,
__BottomJustified = 1032,
__BottomFlush = 1040,
__BottomGeoAligned = 1056,
__BaselineLeft = 2049,
__BaselineCenter = 2050,
__BaselineRight = 2052,
__BaselineJustified = 2056,
__BaselineFlush = 2064,
__BaselineGeoAligned = 2080,
__MidlineLeft = 4097,
__MidlineCenter = 4098,
__MidlineRight = 4100,
__MidlineJustified = 4104,
__MidlineFlush = 4112,
__MidlineGeoAligned = 4128,
__CaplineLeft = 8193,
__CaplineCenter = 8194,
__CaplineRight = 8196,
__CaplineJustified = 8200,
__CaplineFlush = 8208,
__CaplineGeoAligned = 8224,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextAlignment_Unwrapped () const noexcept {
return std::bit_cast<__TextAlignment_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field TopLeft offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const TopLeft;

/// @brief Field TopCenter offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const TopCenter;

/// @brief Field TopRight offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const TopRight;

/// @brief Field TopJustified offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const TopJustified;

/// @brief Field TopFlush offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const TopFlush;

/// @brief Field TopGeoAligned offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const TopGeoAligned;

/// @brief Field MiddleLeft offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const MiddleLeft;

/// @brief Field MiddleCenter offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const MiddleCenter;

/// @brief Field MiddleRight offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const MiddleRight;

/// @brief Field MiddleJustified offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const MiddleJustified;

/// @brief Field MiddleFlush offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const MiddleFlush;

/// @brief Field MiddleGeoAligned offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const MiddleGeoAligned;

/// @brief Field BottomLeft offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const BottomLeft;

/// @brief Field BottomCenter offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const BottomCenter;

/// @brief Field BottomRight offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const BottomRight;

/// @brief Field BottomJustified offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const BottomJustified;

/// @brief Field BottomFlush offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const BottomFlush;

/// @brief Field BottomGeoAligned offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const BottomGeoAligned;

/// @brief Field BaselineLeft offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const BaselineLeft;

/// @brief Field BaselineCenter offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const BaselineCenter;

/// @brief Field BaselineRight offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const BaselineRight;

/// @brief Field BaselineJustified offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const BaselineJustified;

/// @brief Field BaselineFlush offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const BaselineFlush;

/// @brief Field BaselineGeoAligned offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const BaselineGeoAligned;

/// @brief Field MidlineLeft offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const MidlineLeft;

/// @brief Field MidlineCenter offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const MidlineCenter;

/// @brief Field MidlineRight offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const MidlineRight;

/// @brief Field MidlineJustified offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const MidlineJustified;

/// @brief Field MidlineFlush offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const MidlineFlush;

/// @brief Field MidlineGeoAligned offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const MidlineGeoAligned;

/// @brief Field CaplineLeft offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const CaplineLeft;

/// @brief Field CaplineCenter offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const CaplineCenter;

/// @brief Field CaplineRight offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const CaplineRight;

/// @brief Field CaplineJustified offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const CaplineJustified;

/// @brief Field CaplineFlush offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const CaplineFlush;

/// @brief Field CaplineGeoAligned offset 0
static ::UnityEngine::TextCore::Text::TextAlignment const CaplineGeoAligned;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextAlignment, "UnityEngine.TextCore.Text", "TextAlignment");
