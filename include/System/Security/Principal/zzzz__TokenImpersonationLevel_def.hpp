#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Security::Principal {
struct TokenImpersonationLevel;
}
// Type: System.Security.Principal::TokenImpersonationLevel
namespace System::Security::Principal {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2993))
// CS Name: System.Security.Principal.TokenImpersonationLevel
struct CORDL_TYPE TokenImpersonationLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TokenImpersonationLevel(int32_t value__) noexcept;


                    constexpr TokenImpersonationLevel(TokenImpersonationLevel const&) = default;
                    constexpr TokenImpersonationLevel(TokenImpersonationLevel&&) = default;
                    constexpr TokenImpersonationLevel& operator=(TokenImpersonationLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TokenImpersonationLevel& operator=(TokenImpersonationLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TokenImpersonationLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TokenImpersonationLevel_Unwrapped : int32_t {
__None = 0,
__Anonymous = 1,
__Identification = 2,
__Impersonation = 3,
__Delegation = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TokenImpersonationLevel_Unwrapped () const noexcept {
return std::bit_cast<__TokenImpersonationLevel_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Security::Principal::TokenImpersonationLevel const None;

/// @brief Field Anonymous offset 0
static ::System::Security::Principal::TokenImpersonationLevel const Anonymous;

/// @brief Field Identification offset 0
static ::System::Security::Principal::TokenImpersonationLevel const Identification;

/// @brief Field Impersonation offset 0
static ::System::Security::Principal::TokenImpersonationLevel const Impersonation;

/// @brief Field Delegation offset 0
static ::System::Security::Principal::TokenImpersonationLevel const Delegation;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Principal
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::TokenImpersonationLevel, "System.Security.Principal", "TokenImpersonationLevel");
