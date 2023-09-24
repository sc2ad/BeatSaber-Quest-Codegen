#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509FindType;
}
// Type: System.Security.Cryptography.X509Certificates::X509FindType
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7834))
// CS Name: System.Security.Cryptography.X509Certificates.X509FindType
struct CORDL_TYPE X509FindType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr X509FindType(int32_t value__) noexcept;


                    constexpr X509FindType(X509FindType const&) = default;
                    constexpr X509FindType(X509FindType&&) = default;
                    constexpr X509FindType& operator=(X509FindType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr X509FindType& operator=(X509FindType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit X509FindType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __X509FindType_Unwrapped : int32_t {
__FindByThumbprint = 0,
__FindBySubjectName = 1,
__FindBySubjectDistinguishedName = 2,
__FindByIssuerName = 3,
__FindByIssuerDistinguishedName = 4,
__FindBySerialNumber = 5,
__FindByTimeValid = 6,
__FindByTimeNotYetValid = 7,
__FindByTimeExpired = 8,
__FindByTemplateName = 9,
__FindByApplicationPolicy = 10,
__FindByCertificatePolicy = 11,
__FindByExtension = 12,
__FindByKeyUsage = 13,
__FindBySubjectKeyIdentifier = 14,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __X509FindType_Unwrapped () const noexcept {
return std::bit_cast<__X509FindType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field FindByThumbprint offset 0
static System::Security::Cryptography::X509Certificates::X509FindType const FindByThumbprint;

/// @brief Field FindBySubjectName offset 0
static System::Security::Cryptography::X509Certificates::X509FindType const FindBySubjectName;

/// @brief Field FindBySubjectDistinguishedName offset 0
static System::Security::Cryptography::X509Certificates::X509FindType const FindBySubjectDistinguishedName;

/// @brief Field FindByIssuerName offset 0
static System::Security::Cryptography::X509Certificates::X509FindType const FindByIssuerName;

/// @brief Field FindByIssuerDistinguishedName offset 0
static System::Security::Cryptography::X509Certificates::X509FindType const FindByIssuerDistinguishedName;

/// @brief Field FindBySerialNumber offset 0
static System::Security::Cryptography::X509Certificates::X509FindType const FindBySerialNumber;

/// @brief Field FindByTimeValid offset 0
static System::Security::Cryptography::X509Certificates::X509FindType const FindByTimeValid;

/// @brief Field FindByTimeNotYetValid offset 0
static System::Security::Cryptography::X509Certificates::X509FindType const FindByTimeNotYetValid;

/// @brief Field FindByTimeExpired offset 0
static System::Security::Cryptography::X509Certificates::X509FindType const FindByTimeExpired;

/// @brief Field FindByTemplateName offset 0
static System::Security::Cryptography::X509Certificates::X509FindType const FindByTemplateName;

/// @brief Field FindByApplicationPolicy offset 0
static System::Security::Cryptography::X509Certificates::X509FindType const FindByApplicationPolicy;

/// @brief Field FindByCertificatePolicy offset 0
static System::Security::Cryptography::X509Certificates::X509FindType const FindByCertificatePolicy;

/// @brief Field FindByExtension offset 0
static System::Security::Cryptography::X509Certificates::X509FindType const FindByExtension;

/// @brief Field FindByKeyUsage offset 0
static System::Security::Cryptography::X509Certificates::X509FindType const FindByKeyUsage;

/// @brief Field FindBySubjectKeyIdentifier offset 0
static System::Security::Cryptography::X509Certificates::X509FindType const FindBySubjectKeyIdentifier;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509FindType, "System.Security.Cryptography.X509Certificates", "X509FindType");
