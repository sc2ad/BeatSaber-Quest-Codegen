#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net {
struct AuthenticationSchemes;
}
// Type: System.Net::AuthenticationSchemes
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7907))
// CS Name: System.Net.AuthenticationSchemes
struct CORDL_TYPE AuthenticationSchemes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AuthenticationSchemes(int32_t value__) noexcept;


                    constexpr AuthenticationSchemes(AuthenticationSchemes const&) = default;
                    constexpr AuthenticationSchemes(AuthenticationSchemes&&) = default;
                    constexpr AuthenticationSchemes& operator=(AuthenticationSchemes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AuthenticationSchemes& operator=(AuthenticationSchemes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AuthenticationSchemes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AuthenticationSchemes_Unwrapped : int32_t {
__None = 0,
__Digest = 1,
__Negotiate = 2,
__Ntlm = 4,
__Basic = 8,
__Anonymous = 32768,
__IntegratedWindowsAuthentication = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AuthenticationSchemes_Unwrapped () const noexcept {
return std::bit_cast<__AuthenticationSchemes_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Net::AuthenticationSchemes const None;

/// @brief Field Digest offset 0
static ::System::Net::AuthenticationSchemes const Digest;

/// @brief Field Negotiate offset 0
static ::System::Net::AuthenticationSchemes const Negotiate;

/// @brief Field Ntlm offset 0
static ::System::Net::AuthenticationSchemes const Ntlm;

/// @brief Field Basic offset 0
static ::System::Net::AuthenticationSchemes const Basic;

/// @brief Field Anonymous offset 0
static ::System::Net::AuthenticationSchemes const Anonymous;

/// @brief Field IntegratedWindowsAuthentication offset 0
static ::System::Net::AuthenticationSchemes const IntegratedWindowsAuthentication;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::AuthenticationSchemes, "System.Net", "AuthenticationSchemes");
