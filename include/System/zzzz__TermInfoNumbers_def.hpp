#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct TermInfoNumbers;
}
// Type: System::TermInfoNumbers
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2623))
// CS Name: System.TermInfoNumbers
struct CORDL_TYPE TermInfoNumbers : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TermInfoNumbers(int32_t value__) noexcept;


                    constexpr TermInfoNumbers(TermInfoNumbers const&) = default;
                    constexpr TermInfoNumbers(TermInfoNumbers&&) = default;
                    constexpr TermInfoNumbers& operator=(TermInfoNumbers const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TermInfoNumbers& operator=(TermInfoNumbers&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TermInfoNumbers(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TermInfoNumbers_Unwrapped : int32_t {
__Columns = 0,
__InitTabs = 1,
__Lines = 2,
__LinesOfMemory = 3,
__MagicCookieGlitch = 4,
__PaddingBaudRate = 5,
__VirtualTerminal = 6,
__WidthStatusLine = 7,
__NumLabels = 8,
__LabelHeight = 9,
__LabelWidth = 10,
__MaxAttributes = 11,
__MaximumWindows = 12,
__MaxColors = 13,
__MaxPairs = 14,
__NoColorVideo = 15,
__BufferCapacity = 16,
__DotVertSpacing = 17,
__DotHorzSpacing = 18,
__MaxMicroAddress = 19,
__MaxMicroJump = 20,
__MicroColSize = 21,
__MicroLineSize = 22,
__NumberOfPins = 23,
__OutputResChar = 24,
__OutputResLine = 25,
__OutputResHorzInch = 26,
__OutputResVertInch = 27,
__PrintRate = 28,
__WideCharSize = 29,
__Buttons = 30,
__BitImageEntwining = 31,
__BitImageType = 32,
__Last = 33,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TermInfoNumbers_Unwrapped () const noexcept {
return std::bit_cast<__TermInfoNumbers_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Columns offset 0
static System::TermInfoNumbers const Columns;

/// @brief Field InitTabs offset 0
static System::TermInfoNumbers const InitTabs;

/// @brief Field Lines offset 0
static System::TermInfoNumbers const Lines;

/// @brief Field LinesOfMemory offset 0
static System::TermInfoNumbers const LinesOfMemory;

/// @brief Field MagicCookieGlitch offset 0
static System::TermInfoNumbers const MagicCookieGlitch;

/// @brief Field PaddingBaudRate offset 0
static System::TermInfoNumbers const PaddingBaudRate;

/// @brief Field VirtualTerminal offset 0
static System::TermInfoNumbers const VirtualTerminal;

/// @brief Field WidthStatusLine offset 0
static System::TermInfoNumbers const WidthStatusLine;

/// @brief Field NumLabels offset 0
static System::TermInfoNumbers const NumLabels;

/// @brief Field LabelHeight offset 0
static System::TermInfoNumbers const LabelHeight;

/// @brief Field LabelWidth offset 0
static System::TermInfoNumbers const LabelWidth;

/// @brief Field MaxAttributes offset 0
static System::TermInfoNumbers const MaxAttributes;

/// @brief Field MaximumWindows offset 0
static System::TermInfoNumbers const MaximumWindows;

/// @brief Field MaxColors offset 0
static System::TermInfoNumbers const MaxColors;

/// @brief Field MaxPairs offset 0
static System::TermInfoNumbers const MaxPairs;

/// @brief Field NoColorVideo offset 0
static System::TermInfoNumbers const NoColorVideo;

/// @brief Field BufferCapacity offset 0
static System::TermInfoNumbers const BufferCapacity;

/// @brief Field DotVertSpacing offset 0
static System::TermInfoNumbers const DotVertSpacing;

/// @brief Field DotHorzSpacing offset 0
static System::TermInfoNumbers const DotHorzSpacing;

/// @brief Field MaxMicroAddress offset 0
static System::TermInfoNumbers const MaxMicroAddress;

/// @brief Field MaxMicroJump offset 0
static System::TermInfoNumbers const MaxMicroJump;

/// @brief Field MicroColSize offset 0
static System::TermInfoNumbers const MicroColSize;

/// @brief Field MicroLineSize offset 0
static System::TermInfoNumbers const MicroLineSize;

/// @brief Field NumberOfPins offset 0
static System::TermInfoNumbers const NumberOfPins;

/// @brief Field OutputResChar offset 0
static System::TermInfoNumbers const OutputResChar;

/// @brief Field OutputResLine offset 0
static System::TermInfoNumbers const OutputResLine;

/// @brief Field OutputResHorzInch offset 0
static System::TermInfoNumbers const OutputResHorzInch;

/// @brief Field OutputResVertInch offset 0
static System::TermInfoNumbers const OutputResVertInch;

/// @brief Field PrintRate offset 0
static System::TermInfoNumbers const PrintRate;

/// @brief Field WideCharSize offset 0
static System::TermInfoNumbers const WideCharSize;

/// @brief Field Buttons offset 0
static System::TermInfoNumbers const Buttons;

/// @brief Field BitImageEntwining offset 0
static System::TermInfoNumbers const BitImageEntwining;

/// @brief Field BitImageType offset 0
static System::TermInfoNumbers const BitImageType;

/// @brief Field Last offset 0
static System::TermInfoNumbers const Last;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::TermInfoNumbers, "System", "TermInfoNumbers");
