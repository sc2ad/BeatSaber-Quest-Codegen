#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Diagnostics {
struct ProcessWindowStyle;
}
// Type: System.Diagnostics::ProcessWindowStyle
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7811))
// CS Name: System.Diagnostics.ProcessWindowStyle
struct CORDL_TYPE ProcessWindowStyle : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ProcessWindowStyle(int32_t value__) noexcept;


                    constexpr ProcessWindowStyle(ProcessWindowStyle const&) = default;
                    constexpr ProcessWindowStyle(ProcessWindowStyle&&) = default;
                    constexpr ProcessWindowStyle& operator=(ProcessWindowStyle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ProcessWindowStyle& operator=(ProcessWindowStyle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ProcessWindowStyle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ProcessWindowStyle_Unwrapped : int32_t {
__Hidden = 1,
__Maximized = 3,
__Minimized = 2,
__Normal = 0,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProcessWindowStyle_Unwrapped () const noexcept {
return std::bit_cast<__ProcessWindowStyle_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Hidden offset 0
static System::Diagnostics::ProcessWindowStyle const Hidden;

/// @brief Field Maximized offset 0
static System::Diagnostics::ProcessWindowStyle const Maximized;

/// @brief Field Minimized offset 0
static System::Diagnostics::ProcessWindowStyle const Minimized;

/// @brief Field Normal offset 0
static System::Diagnostics::ProcessWindowStyle const Normal;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::ProcessWindowStyle, "System.Diagnostics", "ProcessWindowStyle");
