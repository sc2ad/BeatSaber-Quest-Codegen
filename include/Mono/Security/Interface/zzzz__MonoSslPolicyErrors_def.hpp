#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Mono::Security::Interface {
struct MonoSslPolicyErrors;
}
// Type: Mono.Security.Interface::MonoSslPolicyErrors
namespace Mono::Security::Interface {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13990))
// CS Name: Mono.Security.Interface.MonoSslPolicyErrors
struct CORDL_TYPE MonoSslPolicyErrors : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MonoSslPolicyErrors(int32_t value__) noexcept;


                    constexpr MonoSslPolicyErrors(MonoSslPolicyErrors const&) = default;
                    constexpr MonoSslPolicyErrors(MonoSslPolicyErrors&&) = default;
                    constexpr MonoSslPolicyErrors& operator=(MonoSslPolicyErrors const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MonoSslPolicyErrors& operator=(MonoSslPolicyErrors&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MonoSslPolicyErrors(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MonoSslPolicyErrors_Unwrapped : int32_t {
__None = 0,
__RemoteCertificateNotAvailable = 1,
__RemoteCertificateNameMismatch = 2,
__RemoteCertificateChainErrors = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MonoSslPolicyErrors_Unwrapped () const noexcept {
return std::bit_cast<__MonoSslPolicyErrors_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static Mono::Security::Interface::MonoSslPolicyErrors const None;

/// @brief Field RemoteCertificateNotAvailable offset 0
static Mono::Security::Interface::MonoSslPolicyErrors const RemoteCertificateNotAvailable;

/// @brief Field RemoteCertificateNameMismatch offset 0
static Mono::Security::Interface::MonoSslPolicyErrors const RemoteCertificateNameMismatch;

/// @brief Field RemoteCertificateChainErrors offset 0
static Mono::Security::Interface::MonoSslPolicyErrors const RemoteCertificateChainErrors;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Security::Interface
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::MonoSslPolicyErrors, "Mono.Security.Interface", "MonoSslPolicyErrors");
