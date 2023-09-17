#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Globalization {
struct TimeSpanStyles;
}
// Type: System.Globalization::TimeSpanStyles
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3678))
// CS Name: System.Globalization.TimeSpanStyles
struct CORDL_TYPE TimeSpanStyles : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TimeSpanStyles(int32_t value__) noexcept;


                    constexpr TimeSpanStyles(TimeSpanStyles const&) = default;
                    constexpr TimeSpanStyles(TimeSpanStyles&&) = default;
                    constexpr TimeSpanStyles& operator=(TimeSpanStyles const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TimeSpanStyles& operator=(TimeSpanStyles&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TimeSpanStyles(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TimeSpanStyles_Unwrapped : int32_t {
__None = 0,
__AssumeNegative = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TimeSpanStyles_Unwrapped () const noexcept {
return std::bit_cast<__TimeSpanStyles_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Globalization::TimeSpanStyles const None;

/// @brief Field AssumeNegative offset 0
static ::System::Globalization::TimeSpanStyles const AssumeNegative;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanStyles, "System.Globalization", "TimeSpanStyles");
