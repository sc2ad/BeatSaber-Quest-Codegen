#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Globalization {
struct DateTimeStyles;
}
// Type: System.Globalization::DateTimeStyles
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3655))
// CS Name: System.Globalization.DateTimeStyles
struct CORDL_TYPE DateTimeStyles : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DateTimeStyles(int32_t value__) noexcept;


                    constexpr DateTimeStyles(DateTimeStyles const&) = default;
                    constexpr DateTimeStyles(DateTimeStyles&&) = default;
                    constexpr DateTimeStyles& operator=(DateTimeStyles const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DateTimeStyles& operator=(DateTimeStyles&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DateTimeStyles(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DateTimeStyles_Unwrapped : int32_t {
__None = 0,
__AllowLeadingWhite = 1,
__AllowTrailingWhite = 2,
__AllowInnerWhite = 4,
__AllowWhiteSpaces = 7,
__NoCurrentDateDefault = 8,
__AdjustToUniversal = 16,
__AssumeLocal = 32,
__AssumeUniversal = 64,
__RoundtripKind = 128,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DateTimeStyles_Unwrapped () const noexcept {
return std::bit_cast<__DateTimeStyles_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Globalization::DateTimeStyles const None;

/// @brief Field AllowLeadingWhite offset 0
static System::Globalization::DateTimeStyles const AllowLeadingWhite;

/// @brief Field AllowTrailingWhite offset 0
static System::Globalization::DateTimeStyles const AllowTrailingWhite;

/// @brief Field AllowInnerWhite offset 0
static System::Globalization::DateTimeStyles const AllowInnerWhite;

/// @brief Field AllowWhiteSpaces offset 0
static System::Globalization::DateTimeStyles const AllowWhiteSpaces;

/// @brief Field NoCurrentDateDefault offset 0
static System::Globalization::DateTimeStyles const NoCurrentDateDefault;

/// @brief Field AdjustToUniversal offset 0
static System::Globalization::DateTimeStyles const AdjustToUniversal;

/// @brief Field AssumeLocal offset 0
static System::Globalization::DateTimeStyles const AssumeLocal;

/// @brief Field AssumeUniversal offset 0
static System::Globalization::DateTimeStyles const AssumeUniversal;

/// @brief Field RoundtripKind offset 0
static System::Globalization::DateTimeStyles const RoundtripKind;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::DateTimeStyles, "System.Globalization", "DateTimeStyles");
