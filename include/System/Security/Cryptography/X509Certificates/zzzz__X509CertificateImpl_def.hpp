#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class RSA;
}
namespace System {
class IDisposable;
}
namespace System::Security::Cryptography {
class DSA;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
// Type: System.Security.Cryptography.X509Certificates::X509CertificateImpl
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2988))
// CS Name: System.Security.Cryptography.X509Certificates.X509CertificateImpl
class CORDL_TYPE X509CertificateImpl : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X509CertificateImpl() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateImpl", modifiers: " const&", def_value: None }]
constexpr X509CertificateImpl(X509CertificateImpl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateImpl", modifiers: "&&", def_value: None }]
constexpr X509CertificateImpl(X509CertificateImpl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509CertificateImpl(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509CertificateImpl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509CertificateImpl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509CertificateImpl& operator=(X509CertificateImpl&& o) noexcept = default;
  constexpr X509CertificateImpl& operator=(X509CertificateImpl const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_IsValid))  IsValid;

 ::StringW __declspec(property(get=get_Issuer))  Issuer;

 ::StringW __declspec(property(get=get_Subject))  Subject;

 ::ArrayW<uint8_t> __declspec(property(get=get_RawData))  RawData;

 System::DateTime __declspec(property(get=get_NotAfter))  NotAfter;

 System::DateTime __declspec(property(get=get_NotBefore))  NotBefore;

 ::ArrayW<uint8_t> __declspec(property(get=get_Thumbprint))  Thumbprint;

 ::StringW __declspec(property(get=get_KeyAlgorithm))  KeyAlgorithm;

 ::ArrayW<uint8_t> __declspec(property(get=get_KeyAlgorithmParameters))  KeyAlgorithmParameters;

 ::ArrayW<uint8_t> __declspec(property(get=get_PublicKeyValue))  PublicKeyValue;

 ::ArrayW<uint8_t> __declspec(property(get=get_SerialNumber))  SerialNumber;

 bool __declspec(property(get=get_HasPrivateKey))  HasPrivateKey;


// Methods

/// @brief Method get_IsValid addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsValid() ;

/// @brief Method ThrowIfContextInvalid addr 0x230abc4 size 0x3c virtual false final false
 void ThrowIfContextInvalid() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::Cryptography::X509Certificates::X509CertificateImpl Clone() ;

/// @brief Method get_Issuer addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Issuer() ;

/// @brief Method get_Subject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Subject() ;

/// @brief Method get_RawData addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> get_RawData() ;

/// @brief Method get_NotAfter addr 0x0 size 0xffffffffffffffff virtual true final false
 System::DateTime get_NotAfter() ;

/// @brief Method get_NotBefore addr 0x0 size 0xffffffffffffffff virtual true final false
 System::DateTime get_NotBefore() ;

/// @brief Method get_Thumbprint addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> get_Thumbprint() ;

/// @brief Method GetHashCode addr 0x230ac88 size 0x90 virtual true final true
 int32_t GetHashCode() ;

/// @brief Method get_KeyAlgorithm addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_KeyAlgorithm() ;

/// @brief Method get_KeyAlgorithmParameters addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> get_KeyAlgorithmParameters() ;

/// @brief Method get_PublicKeyValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> get_PublicKeyValue() ;

/// @brief Method get_SerialNumber addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> get_SerialNumber() ;

/// @brief Method get_HasPrivateKey addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_HasPrivateKey() ;

/// @brief Method GetRSAPrivateKey addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::Cryptography::RSA GetRSAPrivateKey() ;

/// @brief Method GetDSAPrivateKey addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::Cryptography::DSA GetDSAPrivateKey() ;

/// @brief Method CopyWithPrivateKey addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::Cryptography::X509Certificates::X509CertificateImpl CopyWithPrivateKey(System::Security::Cryptography::RSA privateKey) ;

/// @brief Method Equals addr 0x230ad18 size 0x180 virtual true final true
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Dispose addr 0x230ae98 size 0x70 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x230af08 size 0x4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Finalize addr 0x230af0c size 0xa4 virtual true final false
 void Finalize() ;

static System::Security::Cryptography::X509Certificates::X509CertificateImpl New_ctor() ;

/// @brief Method .ctor addr 0x230afb0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X509CertificateImpl);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509CertificateImpl, "System.Security.Cryptography.X509Certificates", "X509CertificateImpl");
