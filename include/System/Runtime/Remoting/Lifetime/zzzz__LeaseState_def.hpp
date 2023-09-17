#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::Remoting::Lifetime {
struct LeaseState;
}
// Type: System.Runtime.Remoting.Lifetime::LeaseState
namespace System::Runtime::Remoting::Lifetime {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3092))
// CS Name: System.Runtime.Remoting.Lifetime.LeaseState
struct CORDL_TYPE LeaseState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LeaseState(int32_t value__) noexcept;


                    constexpr LeaseState(LeaseState const&) = default;
                    constexpr LeaseState(LeaseState&&) = default;
                    constexpr LeaseState& operator=(LeaseState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LeaseState& operator=(LeaseState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LeaseState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LeaseState_Unwrapped : int32_t {
__Null = 0,
__Initial = 1,
__Active = 2,
__Renewing = 3,
__Expired = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LeaseState_Unwrapped () const noexcept {
return std::bit_cast<__LeaseState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Null offset 0
static ::System::Runtime::Remoting::Lifetime::LeaseState const Null;

/// @brief Field Initial offset 0
static ::System::Runtime::Remoting::Lifetime::LeaseState const Initial;

/// @brief Field Active offset 0
static ::System::Runtime::Remoting::Lifetime::LeaseState const Active;

/// @brief Field Renewing offset 0
static ::System::Runtime::Remoting::Lifetime::LeaseState const Renewing;

/// @brief Field Expired offset 0
static ::System::Runtime::Remoting::Lifetime::LeaseState const Expired;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Lifetime
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::LeaseState, "System.Runtime.Remoting.Lifetime", "LeaseState");
