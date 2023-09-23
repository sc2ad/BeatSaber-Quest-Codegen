#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::Security {
struct AuthenticationLevel;
}
// Type: System.Net.Security::AuthenticationLevel
namespace System::Net::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8216))
// CS Name: System.Net.Security.AuthenticationLevel
struct CORDL_TYPE AuthenticationLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AuthenticationLevel(int32_t value__) noexcept;


                    constexpr AuthenticationLevel(AuthenticationLevel const&) = default;
                    constexpr AuthenticationLevel(AuthenticationLevel&&) = default;
                    constexpr AuthenticationLevel& operator=(AuthenticationLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AuthenticationLevel& operator=(AuthenticationLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AuthenticationLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AuthenticationLevel_Unwrapped : int32_t {
__None = 0,
__MutualAuthRequested = 1,
__MutualAuthRequired = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AuthenticationLevel_Unwrapped () const noexcept {
return std::bit_cast<__AuthenticationLevel_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Net::Security::AuthenticationLevel const None;

/// @brief Field MutualAuthRequested offset 0
static System::Net::Security::AuthenticationLevel const MutualAuthRequested;

/// @brief Field MutualAuthRequired offset 0
static System::Net::Security::AuthenticationLevel const MutualAuthRequired;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Security
DEFINE_IL2CPP_ARG_TYPE(System::Net::Security::AuthenticationLevel, "System.Net.Security", "AuthenticationLevel");
