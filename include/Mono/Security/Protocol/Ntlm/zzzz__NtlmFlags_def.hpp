#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
struct NtlmFlags;
}
// Type: Mono.Security.Protocol.Ntlm::NtlmFlags
namespace Mono::Security::Protocol::Ntlm {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13978))
// CS Name: Mono.Security.Protocol.Ntlm.NtlmFlags
struct CORDL_TYPE NtlmFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NtlmFlags(int32_t value__) noexcept;


                    constexpr NtlmFlags(NtlmFlags const&) = default;
                    constexpr NtlmFlags(NtlmFlags&&) = default;
                    constexpr NtlmFlags& operator=(NtlmFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NtlmFlags& operator=(NtlmFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NtlmFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NtlmFlags_Unwrapped : int32_t {
__NegotiateUnicode = 1,
__NegotiateOem = 2,
__RequestTarget = 4,
__NegotiateNtlm = 512,
__NegotiateDomainSupplied = 4096,
__NegotiateWorkstationSupplied = 8192,
__NegotiateAlwaysSign = 32768,
__NegotiateNtlm2Key = 524288,
__Negotiate128 = 536870912,
__Negotiate56 = -2147483648,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NtlmFlags_Unwrapped () const noexcept {
return std::bit_cast<__NtlmFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NegotiateUnicode offset 0
static ::Mono::Security::Protocol::Ntlm::NtlmFlags const NegotiateUnicode;

/// @brief Field NegotiateOem offset 0
static ::Mono::Security::Protocol::Ntlm::NtlmFlags const NegotiateOem;

/// @brief Field RequestTarget offset 0
static ::Mono::Security::Protocol::Ntlm::NtlmFlags const RequestTarget;

/// @brief Field NegotiateNtlm offset 0
static ::Mono::Security::Protocol::Ntlm::NtlmFlags const NegotiateNtlm;

/// @brief Field NegotiateDomainSupplied offset 0
static ::Mono::Security::Protocol::Ntlm::NtlmFlags const NegotiateDomainSupplied;

/// @brief Field NegotiateWorkstationSupplied offset 0
static ::Mono::Security::Protocol::Ntlm::NtlmFlags const NegotiateWorkstationSupplied;

/// @brief Field NegotiateAlwaysSign offset 0
static ::Mono::Security::Protocol::Ntlm::NtlmFlags const NegotiateAlwaysSign;

/// @brief Field NegotiateNtlm2Key offset 0
static ::Mono::Security::Protocol::Ntlm::NtlmFlags const NegotiateNtlm2Key;

/// @brief Field Negotiate128 offset 0
static ::Mono::Security::Protocol::Ntlm::NtlmFlags const Negotiate128;

/// @brief Field Negotiate56 offset 0
static ::Mono::Security::Protocol::Ntlm::NtlmFlags const Negotiate56;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Security::Protocol::Ntlm
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::NtlmFlags, "Mono.Security.Protocol.Ntlm", "NtlmFlags");
