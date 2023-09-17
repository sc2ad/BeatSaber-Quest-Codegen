#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
// Type: System.Security.Cryptography.X509Certificates::X509ChainStatusFlags
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7833))
// CS Name: System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
struct CORDL_TYPE X509ChainStatusFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr X509ChainStatusFlags(int32_t value__) noexcept;


                    constexpr X509ChainStatusFlags(X509ChainStatusFlags const&) = default;
                    constexpr X509ChainStatusFlags(X509ChainStatusFlags&&) = default;
                    constexpr X509ChainStatusFlags& operator=(X509ChainStatusFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr X509ChainStatusFlags& operator=(X509ChainStatusFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit X509ChainStatusFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __X509ChainStatusFlags_Unwrapped : int32_t {
__NoError = 0,
__NotTimeValid = 1,
__NotTimeNested = 2,
__Revoked = 4,
__NotSignatureValid = 8,
__NotValidForUsage = 16,
__UntrustedRoot = 32,
__RevocationStatusUnknown = 64,
__Cyclic = 128,
__InvalidExtension = 256,
__InvalidPolicyConstraints = 512,
__InvalidBasicConstraints = 1024,
__InvalidNameConstraints = 2048,
__HasNotSupportedNameConstraint = 4096,
__HasNotDefinedNameConstraint = 8192,
__HasNotPermittedNameConstraint = 16384,
__HasExcludedNameConstraint = 32768,
__PartialChain = 65536,
__CtlNotTimeValid = 131072,
__CtlNotSignatureValid = 262144,
__CtlNotValidForUsage = 524288,
__OfflineRevocation = 16777216,
__NoIssuanceChainPolicy = 33554432,
__ExplicitDistrust = 67108864,
__HasNotSupportedCriticalExtension = 134217728,
__HasWeakSignature = 1048576,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __X509ChainStatusFlags_Unwrapped () const noexcept {
return std::bit_cast<__X509ChainStatusFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoError offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const NoError;

/// @brief Field NotTimeValid offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const NotTimeValid;

/// @brief Field NotTimeNested offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const NotTimeNested;

/// @brief Field Revoked offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const Revoked;

/// @brief Field NotSignatureValid offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const NotSignatureValid;

/// @brief Field NotValidForUsage offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const NotValidForUsage;

/// @brief Field UntrustedRoot offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const UntrustedRoot;

/// @brief Field RevocationStatusUnknown offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const RevocationStatusUnknown;

/// @brief Field Cyclic offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const Cyclic;

/// @brief Field InvalidExtension offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const InvalidExtension;

/// @brief Field InvalidPolicyConstraints offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const InvalidPolicyConstraints;

/// @brief Field InvalidBasicConstraints offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const InvalidBasicConstraints;

/// @brief Field InvalidNameConstraints offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const InvalidNameConstraints;

/// @brief Field HasNotSupportedNameConstraint offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const HasNotSupportedNameConstraint;

/// @brief Field HasNotDefinedNameConstraint offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const HasNotDefinedNameConstraint;

/// @brief Field HasNotPermittedNameConstraint offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const HasNotPermittedNameConstraint;

/// @brief Field HasExcludedNameConstraint offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const HasExcludedNameConstraint;

/// @brief Field PartialChain offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const PartialChain;

/// @brief Field CtlNotTimeValid offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const CtlNotTimeValid;

/// @brief Field CtlNotSignatureValid offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const CtlNotSignatureValid;

/// @brief Field CtlNotValidForUsage offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const CtlNotValidForUsage;

/// @brief Field OfflineRevocation offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const OfflineRevocation;

/// @brief Field NoIssuanceChainPolicy offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const NoIssuanceChainPolicy;

/// @brief Field ExplicitDistrust offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const ExplicitDistrust;

/// @brief Field HasNotSupportedCriticalExtension offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const HasNotSupportedCriticalExtension;

/// @brief Field HasWeakSignature offset 0
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const HasWeakSignature;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, "System.Security.Cryptography.X509Certificates", "X509ChainStatusFlags");