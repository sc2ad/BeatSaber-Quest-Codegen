#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Globalization {
struct FORMATFLAGS;
}
// Type: System.Globalization::FORMATFLAGS
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3651))
// CS Name: System.Globalization.FORMATFLAGS
struct CORDL_TYPE FORMATFLAGS : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FORMATFLAGS(int32_t value__) noexcept;


                    constexpr FORMATFLAGS(FORMATFLAGS const&) = default;
                    constexpr FORMATFLAGS(FORMATFLAGS&&) = default;
                    constexpr FORMATFLAGS& operator=(FORMATFLAGS const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FORMATFLAGS& operator=(FORMATFLAGS&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FORMATFLAGS(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FORMATFLAGS_Unwrapped : int32_t {
__None = 0,
__UseGenitiveMonth = 1,
__UseLeapYearMonth = 2,
__UseSpacesInMonthNames = 4,
__UseHebrewParsing = 8,
__UseSpacesInDayNames = 16,
__UseDigitPrefixInTokens = 32,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FORMATFLAGS_Unwrapped () const noexcept {
return std::bit_cast<__FORMATFLAGS_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Globalization::FORMATFLAGS const None;

/// @brief Field UseGenitiveMonth offset 0
static System::Globalization::FORMATFLAGS const UseGenitiveMonth;

/// @brief Field UseLeapYearMonth offset 0
static System::Globalization::FORMATFLAGS const UseLeapYearMonth;

/// @brief Field UseSpacesInMonthNames offset 0
static System::Globalization::FORMATFLAGS const UseSpacesInMonthNames;

/// @brief Field UseHebrewParsing offset 0
static System::Globalization::FORMATFLAGS const UseHebrewParsing;

/// @brief Field UseSpacesInDayNames offset 0
static System::Globalization::FORMATFLAGS const UseSpacesInDayNames;

/// @brief Field UseDigitPrefixInTokens offset 0
static System::Globalization::FORMATFLAGS const UseDigitPrefixInTokens;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::FORMATFLAGS, "System.Globalization", "FORMATFLAGS");
