#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
// Type: System.Text.RegularExpressions::RegexOptions
namespace System::Text::RegularExpressions {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7776))
// CS Name: System.Text.RegularExpressions.RegexOptions
struct CORDL_TYPE RegexOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RegexOptions(int32_t value__) noexcept;


                    constexpr RegexOptions(RegexOptions const&) = default;
                    constexpr RegexOptions(RegexOptions&&) = default;
                    constexpr RegexOptions& operator=(RegexOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RegexOptions& operator=(RegexOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RegexOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RegexOptions_Unwrapped : int32_t {
__None = 0,
__IgnoreCase = 1,
__Multiline = 2,
__ExplicitCapture = 4,
__Compiled = 8,
__Singleline = 16,
__IgnorePatternWhitespace = 32,
__RightToLeft = 64,
__ECMAScript = 256,
__CultureInvariant = 512,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RegexOptions_Unwrapped () const noexcept {
return std::bit_cast<__RegexOptions_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Text::RegularExpressions::RegexOptions const None;

/// @brief Field IgnoreCase offset 0
static System::Text::RegularExpressions::RegexOptions const IgnoreCase;

/// @brief Field Multiline offset 0
static System::Text::RegularExpressions::RegexOptions const Multiline;

/// @brief Field ExplicitCapture offset 0
static System::Text::RegularExpressions::RegexOptions const ExplicitCapture;

/// @brief Field Compiled offset 0
static System::Text::RegularExpressions::RegexOptions const Compiled;

/// @brief Field Singleline offset 0
static System::Text::RegularExpressions::RegexOptions const Singleline;

/// @brief Field IgnorePatternWhitespace offset 0
static System::Text::RegularExpressions::RegexOptions const IgnorePatternWhitespace;

/// @brief Field RightToLeft offset 0
static System::Text::RegularExpressions::RegexOptions const RightToLeft;

/// @brief Field ECMAScript offset 0
static System::Text::RegularExpressions::RegexOptions const ECMAScript;

/// @brief Field CultureInvariant offset 0
static System::Text::RegularExpressions::RegexOptions const CultureInvariant;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexOptions, "System.Text.RegularExpressions", "RegexOptions");
