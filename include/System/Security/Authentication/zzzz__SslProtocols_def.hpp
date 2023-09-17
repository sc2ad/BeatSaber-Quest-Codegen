#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Security::Authentication {
struct SslProtocols;
}
// Type: System.Security.Authentication::SslProtocols
namespace System::Security::Authentication {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7815))
// CS Name: System.Security.Authentication.SslProtocols
struct CORDL_TYPE SslProtocols : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SslProtocols(int32_t value__) noexcept;


                    constexpr SslProtocols(SslProtocols const&) = default;
                    constexpr SslProtocols(SslProtocols&&) = default;
                    constexpr SslProtocols& operator=(SslProtocols const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SslProtocols& operator=(SslProtocols&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SslProtocols(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SslProtocols_Unwrapped : int32_t {
__None = 0,
__Ssl2 = 12,
__Ssl3 = 48,
__Tls = 192,
__Tls11 = 768,
__Tls12 = 3072,
__Tls13 = 12288,
__Default = 240,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SslProtocols_Unwrapped () const noexcept {
return std::bit_cast<__SslProtocols_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Security::Authentication::SslProtocols const None;

/// @brief Field Ssl2 offset 0
static ::System::Security::Authentication::SslProtocols const Ssl2;

/// @brief Field Ssl3 offset 0
static ::System::Security::Authentication::SslProtocols const Ssl3;

/// @brief Field Tls offset 0
static ::System::Security::Authentication::SslProtocols const Tls;

/// @brief Field Tls11 offset 0
static ::System::Security::Authentication::SslProtocols const Tls11;

/// @brief Field Tls12 offset 0
static ::System::Security::Authentication::SslProtocols const Tls12;

/// @brief Field Tls13 offset 0
static ::System::Security::Authentication::SslProtocols const Tls13;

/// @brief Field Default offset 0
static ::System::Security::Authentication::SslProtocols const Default;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Authentication
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Authentication::SslProtocols, "System.Security.Authentication", "SslProtocols");
