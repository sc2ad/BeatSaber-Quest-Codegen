#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509VerificationFlags;
}
// Type: System.Security.Cryptography.X509Certificates::X509VerificationFlags
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7840))
// CS Name: System.Security.Cryptography.X509Certificates.X509VerificationFlags
struct CORDL_TYPE X509VerificationFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr X509VerificationFlags(int32_t value__) noexcept;


                    constexpr X509VerificationFlags(X509VerificationFlags const&) = default;
                    constexpr X509VerificationFlags(X509VerificationFlags&&) = default;
                    constexpr X509VerificationFlags& operator=(X509VerificationFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr X509VerificationFlags& operator=(X509VerificationFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit X509VerificationFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __X509VerificationFlags_Unwrapped : int32_t {
__NoFlag = 0,
__IgnoreNotTimeValid = 1,
__IgnoreCtlNotTimeValid = 2,
__IgnoreNotTimeNested = 4,
__IgnoreInvalidBasicConstraints = 8,
__AllowUnknownCertificateAuthority = 16,
__IgnoreWrongUsage = 32,
__IgnoreInvalidName = 64,
__IgnoreInvalidPolicy = 128,
__IgnoreEndRevocationUnknown = 256,
__IgnoreCtlSignerRevocationUnknown = 512,
__IgnoreCertificateAuthorityRevocationUnknown = 1024,
__IgnoreRootRevocationUnknown = 2048,
__AllFlags = 4095,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __X509VerificationFlags_Unwrapped () const noexcept {
return std::bit_cast<__X509VerificationFlags_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoFlag offset 0
static System::Security::Cryptography::X509Certificates::X509VerificationFlags const NoFlag;

/// @brief Field IgnoreNotTimeValid offset 0
static System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreNotTimeValid;

/// @brief Field IgnoreCtlNotTimeValid offset 0
static System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreCtlNotTimeValid;

/// @brief Field IgnoreNotTimeNested offset 0
static System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreNotTimeNested;

/// @brief Field IgnoreInvalidBasicConstraints offset 0
static System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreInvalidBasicConstraints;

/// @brief Field AllowUnknownCertificateAuthority offset 0
static System::Security::Cryptography::X509Certificates::X509VerificationFlags const AllowUnknownCertificateAuthority;

/// @brief Field IgnoreWrongUsage offset 0
static System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreWrongUsage;

/// @brief Field IgnoreInvalidName offset 0
static System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreInvalidName;

/// @brief Field IgnoreInvalidPolicy offset 0
static System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreInvalidPolicy;

/// @brief Field IgnoreEndRevocationUnknown offset 0
static System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreEndRevocationUnknown;

/// @brief Field IgnoreCtlSignerRevocationUnknown offset 0
static System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreCtlSignerRevocationUnknown;

/// @brief Field IgnoreCertificateAuthorityRevocationUnknown offset 0
static System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreCertificateAuthorityRevocationUnknown;

/// @brief Field IgnoreRootRevocationUnknown offset 0
static System::Security::Cryptography::X509Certificates::X509VerificationFlags const IgnoreRootRevocationUnknown;

/// @brief Field AllFlags offset 0
static System::Security::Cryptography::X509Certificates::X509VerificationFlags const AllFlags;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509VerificationFlags, "System.Security.Cryptography.X509Certificates", "X509VerificationFlags");
