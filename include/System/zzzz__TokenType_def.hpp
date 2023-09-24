#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct TokenType;
}
// Type: System::TokenType
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2401))
// CS Name: System.TokenType
struct CORDL_TYPE TokenType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TokenType(int32_t value__) noexcept;


                    constexpr TokenType(TokenType const&) = default;
                    constexpr TokenType(TokenType&&) = default;
                    constexpr TokenType& operator=(TokenType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TokenType& operator=(TokenType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TokenType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TokenType_Unwrapped : int32_t {
__NumberToken = 1,
__YearNumberToken = 2,
__Am = 3,
__Pm = 4,
__MonthToken = 5,
__EndOfString = 6,
__DayOfWeekToken = 7,
__TimeZoneToken = 8,
__EraToken = 9,
__DateWordToken = 10,
__UnknownToken = 11,
__HebrewNumber = 12,
__JapaneseEraToken = 13,
__TEraToken = 14,
__IgnorableSymbol = 15,
__SEP_Unk = 256,
__SEP_End = 512,
__SEP_Space = 768,
__SEP_Am = 1024,
__SEP_Pm = 1280,
__SEP_Date = 1536,
__SEP_Time = 1792,
__SEP_YearSuff = 2048,
__SEP_MonthSuff = 2304,
__SEP_DaySuff = 2560,
__SEP_HourSuff = 2816,
__SEP_MinuteSuff = 3072,
__SEP_SecondSuff = 3328,
__SEP_LocalTimeMark = 3584,
__SEP_DateOrOffset = 3840,
__RegularTokenMask = 255,
__SeparatorTokenMask = 65280,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TokenType_Unwrapped () const noexcept {
return std::bit_cast<__TokenType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NumberToken offset 0
static System::TokenType const NumberToken;

/// @brief Field YearNumberToken offset 0
static System::TokenType const YearNumberToken;

/// @brief Field Am offset 0
static System::TokenType const Am;

/// @brief Field Pm offset 0
static System::TokenType const Pm;

/// @brief Field MonthToken offset 0
static System::TokenType const MonthToken;

/// @brief Field EndOfString offset 0
static System::TokenType const EndOfString;

/// @brief Field DayOfWeekToken offset 0
static System::TokenType const DayOfWeekToken;

/// @brief Field TimeZoneToken offset 0
static System::TokenType const TimeZoneToken;

/// @brief Field EraToken offset 0
static System::TokenType const EraToken;

/// @brief Field DateWordToken offset 0
static System::TokenType const DateWordToken;

/// @brief Field UnknownToken offset 0
static System::TokenType const UnknownToken;

/// @brief Field HebrewNumber offset 0
static System::TokenType const HebrewNumber;

/// @brief Field JapaneseEraToken offset 0
static System::TokenType const JapaneseEraToken;

/// @brief Field TEraToken offset 0
static System::TokenType const TEraToken;

/// @brief Field IgnorableSymbol offset 0
static System::TokenType const IgnorableSymbol;

/// @brief Field SEP_Unk offset 0
static System::TokenType const SEP_Unk;

/// @brief Field SEP_End offset 0
static System::TokenType const SEP_End;

/// @brief Field SEP_Space offset 0
static System::TokenType const SEP_Space;

/// @brief Field SEP_Am offset 0
static System::TokenType const SEP_Am;

/// @brief Field SEP_Pm offset 0
static System::TokenType const SEP_Pm;

/// @brief Field SEP_Date offset 0
static System::TokenType const SEP_Date;

/// @brief Field SEP_Time offset 0
static System::TokenType const SEP_Time;

/// @brief Field SEP_YearSuff offset 0
static System::TokenType const SEP_YearSuff;

/// @brief Field SEP_MonthSuff offset 0
static System::TokenType const SEP_MonthSuff;

/// @brief Field SEP_DaySuff offset 0
static System::TokenType const SEP_DaySuff;

/// @brief Field SEP_HourSuff offset 0
static System::TokenType const SEP_HourSuff;

/// @brief Field SEP_MinuteSuff offset 0
static System::TokenType const SEP_MinuteSuff;

/// @brief Field SEP_SecondSuff offset 0
static System::TokenType const SEP_SecondSuff;

/// @brief Field SEP_LocalTimeMark offset 0
static System::TokenType const SEP_LocalTimeMark;

/// @brief Field SEP_DateOrOffset offset 0
static System::TokenType const SEP_DateOrOffset;

/// @brief Field RegularTokenMask offset 0
static System::TokenType const RegularTokenMask;

/// @brief Field SeparatorTokenMask offset 0
static System::TokenType const SeparatorTokenMask;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::TokenType, "System", "TokenType");
