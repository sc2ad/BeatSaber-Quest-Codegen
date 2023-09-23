#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Mono::Security::Interface {
struct TlsProtocols;
}
// Type: Mono.Security.Interface::TlsProtocols
namespace Mono::Security::Interface {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13997))
// CS Name: Mono.Security.Interface.TlsProtocols
struct CORDL_TYPE TlsProtocols : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TlsProtocols(int32_t value__) noexcept;


                    constexpr TlsProtocols(TlsProtocols const&) = default;
                    constexpr TlsProtocols(TlsProtocols&&) = default;
                    constexpr TlsProtocols& operator=(TlsProtocols const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TlsProtocols& operator=(TlsProtocols&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TlsProtocols(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TlsProtocols_Unwrapped : int32_t {
__Zero = 0,
__Tls10Client = 128,
__Tls10Server = 64,
__Tls10 = 192,
__Tls11Client = 512,
__Tls11Server = 256,
__Tls11 = 768,
__Tls12Client = 2048,
__Tls12Server = 1024,
__Tls12 = 3072,
__ClientMask = 2688,
__ServerMask = 1344,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TlsProtocols_Unwrapped () const noexcept {
return std::bit_cast<__TlsProtocols_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Zero offset 0
static Mono::Security::Interface::TlsProtocols const Zero;

/// @brief Field Tls10Client offset 0
static Mono::Security::Interface::TlsProtocols const Tls10Client;

/// @brief Field Tls10Server offset 0
static Mono::Security::Interface::TlsProtocols const Tls10Server;

/// @brief Field Tls10 offset 0
static Mono::Security::Interface::TlsProtocols const Tls10;

/// @brief Field Tls11Client offset 0
static Mono::Security::Interface::TlsProtocols const Tls11Client;

/// @brief Field Tls11Server offset 0
static Mono::Security::Interface::TlsProtocols const Tls11Server;

/// @brief Field Tls11 offset 0
static Mono::Security::Interface::TlsProtocols const Tls11;

/// @brief Field Tls12Client offset 0
static Mono::Security::Interface::TlsProtocols const Tls12Client;

/// @brief Field Tls12Server offset 0
static Mono::Security::Interface::TlsProtocols const Tls12Server;

/// @brief Field Tls12 offset 0
static Mono::Security::Interface::TlsProtocols const Tls12;

/// @brief Field ClientMask offset 0
static Mono::Security::Interface::TlsProtocols const ClientMask;

/// @brief Field ServerMask offset 0
static Mono::Security::Interface::TlsProtocols const ServerMask;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Security::Interface
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::TlsProtocols, "Mono.Security.Interface", "TlsProtocols");
