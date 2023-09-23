#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Impl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Internal::Cryptography::Pal {
struct CertificateData;
}
namespace System::Security::Cryptography::X509Certificates {
class X500DistinguishedName;
}
namespace System {
struct DateTime;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Extension;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509NameType;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2ImplUnix;
}
// Type: System.Security.Cryptography.X509Certificates::X509Certificate2ImplUnix
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7847))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7849))
// CS Name: System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix
class CORDL_TYPE X509Certificate2ImplUnix : public System::Security::Cryptography::X509Certificates::X509Certificate2Impl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~X509Certificate2ImplUnix() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate2ImplUnix", modifiers: " const&", def_value: None }]
constexpr X509Certificate2ImplUnix(X509Certificate2ImplUnix const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate2ImplUnix", modifiers: "&&", def_value: None }]
constexpr X509Certificate2ImplUnix(X509Certificate2ImplUnix&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Certificate2ImplUnix(void* ptr) noexcept : System::Security::Cryptography::X509Certificates::X509Certificate2Impl(ptr) {
}


  constexpr X509Certificate2ImplUnix& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Certificate2ImplUnix& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Certificate2ImplUnix& operator=(X509Certificate2ImplUnix&& o) noexcept = default;
  constexpr X509Certificate2ImplUnix& operator=(X509Certificate2ImplUnix const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_readCertData, put=__set_readCertData))  readCertData;

constexpr void __set_readCertData(bool value) ;

constexpr bool __get_readCertData() const;

 Internal::Cryptography::Pal::CertificateData __declspec(property(get=__get_certData, put=__set_certData))  certData;

constexpr void __set_certData(Internal::Cryptography::Pal::CertificateData value) ;

constexpr Internal::Cryptography::Pal::CertificateData __get_certData() const;


// Properties

 ::StringW __declspec(property(get=get_KeyAlgorithm))  KeyAlgorithm;

 ::ArrayW<uint8_t> __declspec(property(get=get_KeyAlgorithmParameters))  KeyAlgorithmParameters;

 ::ArrayW<uint8_t> __declspec(property(get=get_PublicKeyValue))  PublicKeyValue;

 ::ArrayW<uint8_t> __declspec(property(get=get_SerialNumber))  SerialNumber;

 ::StringW __declspec(property(get=get_SignatureAlgorithm))  SignatureAlgorithm;

 int32_t __declspec(property(get=get_Version))  Version;

 System::Security::Cryptography::X509Certificates::X500DistinguishedName __declspec(property(get=get_SubjectName))  SubjectName;

 System::Security::Cryptography::X509Certificates::X500DistinguishedName __declspec(property(get=get_IssuerName))  IssuerName;

 ::StringW __declspec(property(get=get_Subject))  Subject;

 ::StringW __declspec(property(get=get_Issuer))  Issuer;

 ::ArrayW<uint8_t> __declspec(property(get=get_RawData))  RawData;

 ::ArrayW<uint8_t> __declspec(property(get=get_Thumbprint))  Thumbprint;

 System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Extension> __declspec(property(get=get_Extensions))  Extensions;

 System::DateTime __declspec(property(get=get_NotAfter))  NotAfter;

 System::DateTime __declspec(property(get=get_NotBefore))  NotBefore;


// Methods

/// @brief Method EnsureCertData addr 0x27ec198 size 0x80 virtual false final false
 void EnsureCertData() ;

/// @brief Method GetRawCertData addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GetRawCertData() ;

/// @brief Method get_KeyAlgorithm addr 0x27ec218 size 0x18 virtual true final true
 ::StringW get_KeyAlgorithm() ;

/// @brief Method get_KeyAlgorithmParameters addr 0x27ec230 size 0x18 virtual true final true
 ::ArrayW<uint8_t> get_KeyAlgorithmParameters() ;

/// @brief Method get_PublicKeyValue addr 0x27ec248 size 0x18 virtual true final true
 ::ArrayW<uint8_t> get_PublicKeyValue() ;

/// @brief Method get_SerialNumber addr 0x27ec260 size 0x18 virtual true final true
 ::ArrayW<uint8_t> get_SerialNumber() ;

/// @brief Method get_SignatureAlgorithm addr 0x27ec278 size 0x18 virtual true final true
 ::StringW get_SignatureAlgorithm() ;

/// @brief Method get_Version addr 0x27ec290 size 0x1c virtual true final true
 int32_t get_Version() ;

/// @brief Method get_SubjectName addr 0x27ec2ac size 0x18 virtual true final true
 System::Security::Cryptography::X509Certificates::X500DistinguishedName get_SubjectName() ;

/// @brief Method get_IssuerName addr 0x27ec2c4 size 0x18 virtual true final true
 System::Security::Cryptography::X509Certificates::X500DistinguishedName get_IssuerName() ;

/// @brief Method get_Subject addr 0x27ec2dc size 0x28 virtual true final true
 ::StringW get_Subject() ;

/// @brief Method get_Issuer addr 0x27ec304 size 0x28 virtual true final true
 ::StringW get_Issuer() ;

/// @brief Method get_RawData addr 0x27ec32c size 0x18 virtual true final true
 ::ArrayW<uint8_t> get_RawData() ;

/// @brief Method get_Thumbprint addr 0x27ec344 size 0x194 virtual true final true
 ::ArrayW<uint8_t> get_Thumbprint() ;

/// @brief Method GetNameInfo addr 0x27ec4d8 size 0x34 virtual true final true
 ::StringW GetNameInfo(System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer) ;

/// @brief Method get_Extensions addr 0x27ec50c size 0x18 virtual true final true
 System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Extension> get_Extensions() ;

/// @brief Method get_NotAfter addr 0x27ec524 size 0x1c virtual true final true
 System::DateTime get_NotAfter() ;

/// @brief Method get_NotBefore addr 0x27ec540 size 0x1c virtual true final true
 System::DateTime get_NotBefore() ;

/// @brief Method AppendPrivateKeyInfo addr 0x27ec55c size 0x94 virtual true final true
 void AppendPrivateKeyInfo(System::Text::StringBuilder sb) ;

// Ctor Parameters []
explicit X509Certificate2ImplUnix() ;

/// @brief Method .ctor addr 0x27eac54 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix, "System.Security.Cryptography.X509Certificates", "X509Certificate2ImplUnix");
