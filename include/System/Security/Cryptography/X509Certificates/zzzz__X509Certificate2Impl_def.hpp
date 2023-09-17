#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509NameType;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X500DistinguishedName;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Extension;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Security::Cryptography {
class RSA;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImplCollection;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Impl;
}
// Type: System.Security.Cryptography.X509Certificates::X509Certificate2Impl
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2988))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7847))
// CS Name: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
class CORDL_TYPE X509Certificate2Impl : public ::System::Security::Cryptography::X509Certificates::X509CertificateImpl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X509Certificate2Impl() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate2Impl", modifiers: " const&", def_value: None }]
constexpr X509Certificate2Impl(X509Certificate2Impl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate2Impl", modifiers: "&&", def_value: None }]
constexpr X509Certificate2Impl(X509Certificate2Impl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Certificate2Impl(void* ptr) noexcept : ::System::Security::Cryptography::X509Certificates::X509CertificateImpl(ptr) {
}


  constexpr X509Certificate2Impl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Certificate2Impl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Certificate2Impl& operator=(X509Certificate2Impl&& o) noexcept = default;
  constexpr X509Certificate2Impl& operator=(X509Certificate2Impl const& o) noexcept = default;
                


// Properties

 ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Extension> __declspec(property(get=get_Extensions))  Extensions;

 ::System::Security::Cryptography::X509Certificates::X500DistinguishedName __declspec(property(get=get_IssuerName))  IssuerName;

 ::System::Security::Cryptography::AsymmetricAlgorithm __declspec(property(get=get_PrivateKey, put=set_PrivateKey))  PrivateKey;

 ::StringW __declspec(property(get=get_SignatureAlgorithm))  SignatureAlgorithm;

 ::System::Security::Cryptography::X509Certificates::X500DistinguishedName __declspec(property(get=get_SubjectName))  SubjectName;

 int32_t __declspec(property(get=get_Version))  Version;

 ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection __declspec(property(get=get_IntermediateCertificates))  IntermediateCertificates;


// Methods

/// @brief Method get_Extensions addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Extension> get_Extensions() ;

/// @brief Method get_IssuerName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Security::Cryptography::X509Certificates::X500DistinguishedName get_IssuerName() ;

/// @brief Method get_PrivateKey addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Security::Cryptography::AsymmetricAlgorithm get_PrivateKey() ;

/// @brief Method set_PrivateKey addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_PrivateKey(::System::Security::Cryptography::AsymmetricAlgorithm value) ;

/// @brief Method get_SignatureAlgorithm addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_SignatureAlgorithm() ;

/// @brief Method get_SubjectName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Security::Cryptography::X509Certificates::X500DistinguishedName get_SubjectName() ;

/// @brief Method get_Version addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Version() ;

/// @brief Method get_IntermediateCertificates addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection get_IntermediateCertificates() ;

/// @brief Method GetNameInfo addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW GetNameInfo(::System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer) ;

/// @brief Method Verify addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Verify(::System::Security::Cryptography::X509Certificates::X509Certificate2 thisCertificate) ;

/// @brief Method AppendPrivateKeyInfo addr 0x0 size 0xffffffffffffffff virtual true final false
 void AppendPrivateKeyInfo(::System::Text::StringBuilder sb) ;

/// @brief Method CopyWithPrivateKey addr 0x27eab68 size 0xac virtual true final true
 ::System::Security::Cryptography::X509Certificates::X509CertificateImpl CopyWithPrivateKey(::System::Security::Cryptography::RSA privateKey) ;

// Ctor Parameters []
explicit X509Certificate2Impl() ;

/// @brief Method .ctor addr 0x27eac14 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Certificate2Impl);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Certificate2Impl, "System.Security.Cryptography.X509Certificates", "X509Certificate2Impl");
