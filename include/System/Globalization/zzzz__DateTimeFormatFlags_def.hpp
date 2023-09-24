#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Globalization {
struct DateTimeFormatFlags;
}
// Type: System.Globalization::DateTimeFormatFlags
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3648))
// CS Name: System.Globalization.DateTimeFormatFlags
struct CORDL_TYPE DateTimeFormatFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DateTimeFormatFlags(int32_t value__) noexcept;


                    constexpr DateTimeFormatFlags(DateTimeFormatFlags const&) = default;
                    constexpr DateTimeFormatFlags(DateTimeFormatFlags&&) = default;
                    constexpr DateTimeFormatFlags& operator=(DateTimeFormatFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DateTimeFormatFlags& operator=(DateTimeFormatFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DateTimeFormatFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DateTimeFormatFlags_Unwrapped : int32_t {
__None = 0,
__UseGenitiveMonth = 1,
__UseLeapYearMonth = 2,
__UseSpacesInMonthNames = 4,
__UseHebrewRule = 8,
__UseSpacesInDayNames = 16,
__UseDigitPrefixInTokens = 32,
__NotInitialized = -1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DateTimeFormatFlags_Unwrapped () const noexcept {
return std::bit_cast<__DateTimeFormatFlags_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Globalization::DateTimeFormatFlags const None;

/// @brief Field UseGenitiveMonth offset 0
static System::Globalization::DateTimeFormatFlags const UseGenitiveMonth;

/// @brief Field UseLeapYearMonth offset 0
static System::Globalization::DateTimeFormatFlags const UseLeapYearMonth;

/// @brief Field UseSpacesInMonthNames offset 0
static System::Globalization::DateTimeFormatFlags const UseSpacesInMonthNames;

/// @brief Field UseHebrewRule offset 0
static System::Globalization::DateTimeFormatFlags const UseHebrewRule;

/// @brief Field UseSpacesInDayNames offset 0
static System::Globalization::DateTimeFormatFlags const UseSpacesInDayNames;

/// @brief Field UseDigitPrefixInTokens offset 0
static System::Globalization::DateTimeFormatFlags const UseDigitPrefixInTokens;

/// @brief Field NotInitialized offset 0
static System::Globalization::DateTimeFormatFlags const NotInitialized;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::DateTimeFormatFlags, "System.Globalization", "DateTimeFormatFlags");
