#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ExtensionCollection;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509NameType;
}
namespace System {
struct DateTime;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ContentType;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Extension;
}
namespace System::Security::Cryptography::X509Certificates {
class PublicKey;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Impl;
}
namespace System::Security::Cryptography {
class Oid;
}
namespace System::Security::Cryptography::X509Certificates {
class X500DistinguishedName;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
// Type: System.Security.Cryptography.X509Certificates::X509Certificate2
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2987))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7844))
// CS Name: System.Security.Cryptography.X509Certificates.X509Certificate2
class CORDL_TYPE X509Certificate2 : public ::System::Security::Cryptography::X509Certificates::X509Certificate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~X509Certificate2() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate2", modifiers: " const&", def_value: None }]
constexpr X509Certificate2(X509Certificate2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate2", modifiers: "&&", def_value: None }]
constexpr X509Certificate2(X509Certificate2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Certificate2(void* ptr) noexcept : ::System::Security::Cryptography::X509Certificates::X509Certificate(ptr) {
}


  constexpr X509Certificate2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Certificate2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Certificate2& operator=(X509Certificate2&& o) noexcept = default;
  constexpr X509Certificate2& operator=(X509Certificate2 const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_lazyRawData, put=__set_lazyRawData))  lazyRawData;

constexpr void __set_lazyRawData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_lazyRawData() const;

 ::System::Security::Cryptography::Oid __declspec(property(get=__get_lazySignatureAlgorithm, put=__set_lazySignatureAlgorithm))  lazySignatureAlgorithm;

constexpr void __set_lazySignatureAlgorithm(::System::Security::Cryptography::Oid value) ;

constexpr ::System::Security::Cryptography::Oid __get_lazySignatureAlgorithm() const;

 int32_t __declspec(property(get=__get_lazyVersion, put=__set_lazyVersion))  lazyVersion;

constexpr void __set_lazyVersion(int32_t value) ;

constexpr int32_t __get_lazyVersion() const;

 ::System::Security::Cryptography::X509Certificates::X500DistinguishedName __declspec(property(get=__get_lazySubjectName, put=__set_lazySubjectName))  lazySubjectName;

constexpr void __set_lazySubjectName(::System::Security::Cryptography::X509Certificates::X500DistinguishedName value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName __get_lazySubjectName() const;

 ::System::Security::Cryptography::X509Certificates::X500DistinguishedName __declspec(property(get=__get_lazyIssuerName, put=__set_lazyIssuerName))  lazyIssuerName;

constexpr void __set_lazyIssuerName(::System::Security::Cryptography::X509Certificates::X500DistinguishedName value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName __get_lazyIssuerName() const;

 ::System::Security::Cryptography::X509Certificates::PublicKey __declspec(property(get=__get_lazyPublicKey, put=__set_lazyPublicKey))  lazyPublicKey;

constexpr void __set_lazyPublicKey(::System::Security::Cryptography::X509Certificates::PublicKey value) ;

constexpr ::System::Security::Cryptography::X509Certificates::PublicKey __get_lazyPublicKey() const;

 ::System::Security::Cryptography::AsymmetricAlgorithm __declspec(property(get=__get_lazyPrivateKey, put=__set_lazyPrivateKey))  lazyPrivateKey;

constexpr void __set_lazyPrivateKey(::System::Security::Cryptography::AsymmetricAlgorithm value) ;

constexpr ::System::Security::Cryptography::AsymmetricAlgorithm __get_lazyPrivateKey() const;

 ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection __declspec(property(get=__get_lazyExtensions, put=__set_lazyExtensions))  lazyExtensions;

constexpr void __set_lazyExtensions(::System::Security::Cryptography::X509Certificates::X509ExtensionCollection value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection __get_lazyExtensions() const;


// Properties

 ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection __declspec(property(get=get_Extensions))  Extensions;

 bool __declspec(property(get=get_HasPrivateKey))  HasPrivateKey;

 ::System::Security::Cryptography::AsymmetricAlgorithm __declspec(property(get=get_PrivateKey))  PrivateKey;

 ::System::Security::Cryptography::X509Certificates::X500DistinguishedName __declspec(property(get=get_IssuerName))  IssuerName;

 ::System::DateTime __declspec(property(get=get_NotAfter))  NotAfter;

 ::System::DateTime __declspec(property(get=get_NotBefore))  NotBefore;

 ::System::Security::Cryptography::X509Certificates::PublicKey __declspec(property(get=get_PublicKey))  PublicKey;

 ::ArrayW<uint8_t> __declspec(property(get=get_RawData))  RawData;

 ::StringW __declspec(property(get=get_SerialNumber))  SerialNumber;

 ::System::Security::Cryptography::Oid __declspec(property(get=get_SignatureAlgorithm))  SignatureAlgorithm;

 ::System::Security::Cryptography::X509Certificates::X500DistinguishedName __declspec(property(get=get_SubjectName))  SubjectName;

 ::StringW __declspec(property(get=get_Thumbprint))  Thumbprint;

 int32_t __declspec(property(get=get_Version))  Version;

 ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl __declspec(property(get=get_Impl))  Impl;


// Methods

/// @brief Method Reset addr 0x27e7078 size 0x58 virtual true final false
 void Reset() ;

// Ctor Parameters []
explicit X509Certificate2() ;

/// @brief Method .ctor addr 0x27e70d0 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "rawData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit X509Certificate2(::ArrayW<uint8_t> rawData) ;

/// @brief Method .ctor addr 0x27e70d8 size 0x1c8 virtual false final false
 void _ctor(::ArrayW<uint8_t> rawData) ;

// Ctor Parameters [CppParam { name: "impl", ty: "::System::Security::Cryptography::X509Certificates::X509Certificate2Impl", modifiers: "", def_value: None }]
explicit X509Certificate2(::System::Security::Cryptography::X509Certificates::X509Certificate2Impl impl) ;

/// @brief Method .ctor addr 0x27e72a0 size 0x8 virtual false final false
 void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2Impl impl) ;

// Ctor Parameters [CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }]
explicit X509Certificate2(::StringW fileName) ;

/// @brief Method .ctor addr 0x27e72a8 size 0x8 virtual false final false
 void _ctor(::StringW fileName) ;

// Ctor Parameters [CppParam { name: "certificate", ty: "::System::Security::Cryptography::X509Certificates::X509Certificate", modifiers: "", def_value: None }]
explicit X509Certificate2(::System::Security::Cryptography::X509Certificates::X509Certificate certificate) ;

/// @brief Method .ctor addr 0x27e72b0 size 0x8 virtual false final false
 void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate certificate) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit X509Certificate2(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x27e72b8 size 0x48 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Extensions addr 0x27e7300 size 0x3c0 virtual false final false
 ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection get_Extensions() ;

/// @brief Method get_HasPrivateKey addr 0x27e7928 size 0x34 virtual false final false
 bool get_HasPrivateKey() ;

/// @brief Method get_PrivateKey addr 0x27e795c size 0x15c virtual false final false
 ::System::Security::Cryptography::AsymmetricAlgorithm get_PrivateKey() ;

/// @brief Method get_IssuerName addr 0x27e7ab8 size 0x5c virtual false final false
 ::System::Security::Cryptography::X509Certificates::X500DistinguishedName get_IssuerName() ;

/// @brief Method get_NotAfter addr 0x27e7b14 size 0x8 virtual false final false
 ::System::DateTime get_NotAfter() ;

/// @brief Method get_NotBefore addr 0x27e7b1c size 0x8 virtual false final false
 ::System::DateTime get_NotBefore() ;

/// @brief Method get_PublicKey addr 0x27e7b24 size 0x15c virtual false final false
 ::System::Security::Cryptography::X509Certificates::PublicKey get_PublicKey() ;

/// @brief Method get_RawData addr 0x27e7c80 size 0x5c virtual false final false
 ::ArrayW<uint8_t> get_RawData() ;

/// @brief Method get_SerialNumber addr 0x27e7cdc size 0x10 virtual false final false
 ::StringW get_SerialNumber() ;

/// @brief Method get_SignatureAlgorithm addr 0x27e7cec size 0x64 virtual false final false
 ::System::Security::Cryptography::Oid get_SignatureAlgorithm() ;

/// @brief Method get_SubjectName addr 0x27e7d50 size 0x5c virtual false final false
 ::System::Security::Cryptography::X509Certificates::X500DistinguishedName get_SubjectName() ;

/// @brief Method get_Thumbprint addr 0x27e7dac size 0x1c virtual false final false
 ::StringW get_Thumbprint() ;

/// @brief Method get_Version addr 0x27e7dc8 size 0x5c virtual false final false
 int32_t get_Version() ;

/// @brief Method GetCertContentType addr 0x27e7e24 size 0x9c virtual false final false
static ::System::Security::Cryptography::X509Certificates::X509ContentType GetCertContentType(::ArrayW<uint8_t> rawData) ;

/// @brief Method GetNameInfo addr 0x27e7ec0 size 0x3c virtual false final false
 ::StringW GetNameInfo(::System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer) ;

/// @brief Method ToString addr 0x27e7efc size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x27e7f08 size 0xe74 virtual true final false
 ::StringW ToString(bool verbose) ;

/// @brief Method Verify addr 0x27e8d7c size 0x2c virtual false final false
 bool Verify() ;

/// @brief Method CreateCustomExtensionIfAny addr 0x27e774c size 0x1dc virtual false final false
static ::System::Security::Cryptography::X509Certificates::X509Extension CreateCustomExtensionIfAny(::System::Security::Cryptography::Oid oid) ;

/// @brief Method get_Impl addr 0x27e76c0 size 0x8c virtual false final false
 ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl get_Impl() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Certificate2);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Certificate2, "System.Security.Cryptography.X509Certificates", "X509Certificate2");
