#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace TMPro {
struct TextAlignmentOptions;
}
// Type: TMPro::TextAlignmentOptions
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12371))
// CS Name: TMPro.TextAlignmentOptions
struct CORDL_TYPE TextAlignmentOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextAlignmentOptions(int32_t value__) noexcept;


                    constexpr TextAlignmentOptions(TextAlignmentOptions const&) = default;
                    constexpr TextAlignmentOptions(TextAlignmentOptions&&) = default;
                    constexpr TextAlignmentOptions& operator=(TextAlignmentOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextAlignmentOptions& operator=(TextAlignmentOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextAlignmentOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TextAlignmentOptions_Unwrapped : int32_t {
__TopLeft = 257,
__Top = 258,
__TopRight = 260,
__TopJustified = 264,
__TopFlush = 272,
__TopGeoAligned = 288,
__Left = 513,
__Center = 514,
__Right = 516,
__Justified = 520,
__Flush = 528,
__CenterGeoAligned = 544,
__BottomLeft = 1025,
__Bottom = 1026,
__BottomRight = 1028,
__BottomJustified = 1032,
__BottomFlush = 1040,
__BottomGeoAligned = 1056,
__BaselineLeft = 2049,
__Baseline = 2050,
__BaselineRight = 2052,
__BaselineJustified = 2056,
__BaselineFlush = 2064,
__BaselineGeoAligned = 2080,
__MidlineLeft = 4097,
__Midline = 4098,
__MidlineRight = 4100,
__MidlineJustified = 4104,
__MidlineFlush = 4112,
__MidlineGeoAligned = 4128,
__CaplineLeft = 8193,
__Capline = 8194,
__CaplineRight = 8196,
__CaplineJustified = 8200,
__CaplineFlush = 8208,
__CaplineGeoAligned = 8224,
__Converted = 65535,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextAlignmentOptions_Unwrapped () const noexcept {
return std::bit_cast<__TextAlignmentOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field TopLeft offset 0
static ::TMPro::TextAlignmentOptions const TopLeft;

/// @brief Field Top offset 0
static ::TMPro::TextAlignmentOptions const Top;

/// @brief Field TopRight offset 0
static ::TMPro::TextAlignmentOptions const TopRight;

/// @brief Field TopJustified offset 0
static ::TMPro::TextAlignmentOptions const TopJustified;

/// @brief Field TopFlush offset 0
static ::TMPro::TextAlignmentOptions const TopFlush;

/// @brief Field TopGeoAligned offset 0
static ::TMPro::TextAlignmentOptions const TopGeoAligned;

/// @brief Field Left offset 0
static ::TMPro::TextAlignmentOptions const Left;

/// @brief Field Center offset 0
static ::TMPro::TextAlignmentOptions const Center;

/// @brief Field Right offset 0
static ::TMPro::TextAlignmentOptions const Right;

/// @brief Field Justified offset 0
static ::TMPro::TextAlignmentOptions const Justified;

/// @brief Field Flush offset 0
static ::TMPro::TextAlignmentOptions const Flush;

/// @brief Field CenterGeoAligned offset 0
static ::TMPro::TextAlignmentOptions const CenterGeoAligned;

/// @brief Field BottomLeft offset 0
static ::TMPro::TextAlignmentOptions const BottomLeft;

/// @brief Field Bottom offset 0
static ::TMPro::TextAlignmentOptions const Bottom;

/// @brief Field BottomRight offset 0
static ::TMPro::TextAlignmentOptions const BottomRight;

/// @brief Field BottomJustified offset 0
static ::TMPro::TextAlignmentOptions const BottomJustified;

/// @brief Field BottomFlush offset 0
static ::TMPro::TextAlignmentOptions const BottomFlush;

/// @brief Field BottomGeoAligned offset 0
static ::TMPro::TextAlignmentOptions const BottomGeoAligned;

/// @brief Field BaselineLeft offset 0
static ::TMPro::TextAlignmentOptions const BaselineLeft;

/// @brief Field Baseline offset 0
static ::TMPro::TextAlignmentOptions const Baseline;

/// @brief Field BaselineRight offset 0
static ::TMPro::TextAlignmentOptions const BaselineRight;

/// @brief Field BaselineJustified offset 0
static ::TMPro::TextAlignmentOptions const BaselineJustified;

/// @brief Field BaselineFlush offset 0
static ::TMPro::TextAlignmentOptions const BaselineFlush;

/// @brief Field BaselineGeoAligned offset 0
static ::TMPro::TextAlignmentOptions const BaselineGeoAligned;

/// @brief Field MidlineLeft offset 0
static ::TMPro::TextAlignmentOptions const MidlineLeft;

/// @brief Field Midline offset 0
static ::TMPro::TextAlignmentOptions const Midline;

/// @brief Field MidlineRight offset 0
static ::TMPro::TextAlignmentOptions const MidlineRight;

/// @brief Field MidlineJustified offset 0
static ::TMPro::TextAlignmentOptions const MidlineJustified;

/// @brief Field MidlineFlush offset 0
static ::TMPro::TextAlignmentOptions const MidlineFlush;

/// @brief Field MidlineGeoAligned offset 0
static ::TMPro::TextAlignmentOptions const MidlineGeoAligned;

/// @brief Field CaplineLeft offset 0
static ::TMPro::TextAlignmentOptions const CaplineLeft;

/// @brief Field Capline offset 0
static ::TMPro::TextAlignmentOptions const Capline;

/// @brief Field CaplineRight offset 0
static ::TMPro::TextAlignmentOptions const CaplineRight;

/// @brief Field CaplineJustified offset 0
static ::TMPro::TextAlignmentOptions const CaplineJustified;

/// @brief Field CaplineFlush offset 0
static ::TMPro::TextAlignmentOptions const CaplineFlush;

/// @brief Field CaplineGeoAligned offset 0
static ::TMPro::TextAlignmentOptions const CaplineGeoAligned;

/// @brief Field Converted offset 0
static ::TMPro::TextAlignmentOptions const Converted;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextAlignmentOptions, "TMPro", "TextAlignmentOptions");
