#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Threading {
struct LockRecursionPolicy;
}
// Type: System.Threading::LockRecursionPolicy
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14598))
// CS Name: System.Threading.LockRecursionPolicy
struct CORDL_TYPE LockRecursionPolicy : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LockRecursionPolicy(int32_t value__) noexcept;


                    constexpr LockRecursionPolicy(LockRecursionPolicy const&) = default;
                    constexpr LockRecursionPolicy(LockRecursionPolicy&&) = default;
                    constexpr LockRecursionPolicy& operator=(LockRecursionPolicy const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LockRecursionPolicy& operator=(LockRecursionPolicy&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LockRecursionPolicy(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LockRecursionPolicy_Unwrapped : int32_t {
__NoRecursion = 0,
__SupportsRecursion = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LockRecursionPolicy_Unwrapped () const noexcept {
return std::bit_cast<__LockRecursionPolicy_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoRecursion offset 0
static ::System::Threading::LockRecursionPolicy const NoRecursion;

/// @brief Field SupportsRecursion offset 0
static ::System::Threading::LockRecursionPolicy const SupportsRecursion;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::LockRecursionPolicy, "System.Threading", "LockRecursionPolicy");
