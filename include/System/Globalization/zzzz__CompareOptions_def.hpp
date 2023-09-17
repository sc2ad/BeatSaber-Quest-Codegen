#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Globalization {
struct CompareOptions;
}
// Type: System.Globalization::CompareOptions
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3644))
// CS Name: System.Globalization.CompareOptions
struct CORDL_TYPE CompareOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CompareOptions(int32_t value__) noexcept;


                    constexpr CompareOptions(CompareOptions const&) = default;
                    constexpr CompareOptions(CompareOptions&&) = default;
                    constexpr CompareOptions& operator=(CompareOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CompareOptions& operator=(CompareOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CompareOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CompareOptions_Unwrapped : int32_t {
__None = 0,
__IgnoreCase = 1,
__IgnoreNonSpace = 2,
__IgnoreSymbols = 4,
__IgnoreKanaType = 8,
__IgnoreWidth = 16,
__OrdinalIgnoreCase = 268435456,
__StringSort = 536870912,
__Ordinal = 1073741824,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CompareOptions_Unwrapped () const noexcept {
return std::bit_cast<__CompareOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Globalization::CompareOptions const None;

/// @brief Field IgnoreCase offset 0
static ::System::Globalization::CompareOptions const IgnoreCase;

/// @brief Field IgnoreNonSpace offset 0
static ::System::Globalization::CompareOptions const IgnoreNonSpace;

/// @brief Field IgnoreSymbols offset 0
static ::System::Globalization::CompareOptions const IgnoreSymbols;

/// @brief Field IgnoreKanaType offset 0
static ::System::Globalization::CompareOptions const IgnoreKanaType;

/// @brief Field IgnoreWidth offset 0
static ::System::Globalization::CompareOptions const IgnoreWidth;

/// @brief Field OrdinalIgnoreCase offset 0
static ::System::Globalization::CompareOptions const OrdinalIgnoreCase;

/// @brief Field StringSort offset 0
static ::System::Globalization::CompareOptions const StringSort;

/// @brief Field Ordinal offset 0
static ::System::Globalization::CompareOptions const Ordinal;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CompareOptions, "System.Globalization", "CompareOptions");
