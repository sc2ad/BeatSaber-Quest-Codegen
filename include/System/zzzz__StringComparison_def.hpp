#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct StringComparison;
}
// Type: System::StringComparison
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2478))
// CS Name: System.StringComparison
struct CORDL_TYPE StringComparison : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StringComparison(int32_t value__) noexcept;


                    constexpr StringComparison(StringComparison const&) = default;
                    constexpr StringComparison(StringComparison&&) = default;
                    constexpr StringComparison& operator=(StringComparison const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StringComparison& operator=(StringComparison&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StringComparison(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __StringComparison_Unwrapped : int32_t {
__CurrentCulture = 0,
__CurrentCultureIgnoreCase = 1,
__InvariantCulture = 2,
__InvariantCultureIgnoreCase = 3,
__Ordinal = 4,
__OrdinalIgnoreCase = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StringComparison_Unwrapped () const noexcept {
return std::bit_cast<__StringComparison_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CurrentCulture offset 0
static System::StringComparison const CurrentCulture;

/// @brief Field CurrentCultureIgnoreCase offset 0
static System::StringComparison const CurrentCultureIgnoreCase;

/// @brief Field InvariantCulture offset 0
static System::StringComparison const InvariantCulture;

/// @brief Field InvariantCultureIgnoreCase offset 0
static System::StringComparison const InvariantCultureIgnoreCase;

/// @brief Field Ordinal offset 0
static System::StringComparison const Ordinal;

/// @brief Field OrdinalIgnoreCase offset 0
static System::StringComparison const OrdinalIgnoreCase;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::StringComparison, "System", "StringComparison");
