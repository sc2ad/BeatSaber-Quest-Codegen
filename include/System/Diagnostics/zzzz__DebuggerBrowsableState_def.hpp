#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Diagnostics {
struct DebuggerBrowsableState;
}
// Type: System.Diagnostics::DebuggerBrowsableState
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3719))
// CS Name: System.Diagnostics.DebuggerBrowsableState
struct CORDL_TYPE DebuggerBrowsableState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DebuggerBrowsableState(int32_t value__) noexcept;


                    constexpr DebuggerBrowsableState(DebuggerBrowsableState const&) = default;
                    constexpr DebuggerBrowsableState(DebuggerBrowsableState&&) = default;
                    constexpr DebuggerBrowsableState& operator=(DebuggerBrowsableState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DebuggerBrowsableState& operator=(DebuggerBrowsableState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DebuggerBrowsableState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DebuggerBrowsableState_Unwrapped : int32_t {
__Never = 0,
__Collapsed = 2,
__RootHidden = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DebuggerBrowsableState_Unwrapped () const noexcept {
return std::bit_cast<__DebuggerBrowsableState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Never offset 0
static System::Diagnostics::DebuggerBrowsableState const Never;

/// @brief Field Collapsed offset 0
static System::Diagnostics::DebuggerBrowsableState const Collapsed;

/// @brief Field RootHidden offset 0
static System::Diagnostics::DebuggerBrowsableState const RootHidden;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DebuggerBrowsableState, "System.Diagnostics", "DebuggerBrowsableState");
