#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Mono::Security {
class ASN1;
}
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
namespace System::Collections {
class ArrayList;
}
namespace Mono::Security {
class Mono__Security__PKCS7__SignedData;
}
namespace Mono::Security {
class Mono__Security__PKCS7__SignerInfo;
}
namespace Mono::Security {
class Mono__Security__PKCS7__ContentInfo;
}
namespace Mono::Security {
class Mono__Security__PKCS7__EncryptedData;
}
// Forward declare root types
namespace Mono::Security {
class Mono__Security__PKCS7__ContentInfo;
}
namespace Mono::Security {
class Mono__Security__PKCS7__EncryptedData;
}
namespace Mono::Security {
class Mono__Security__PKCS7__SignedData;
}
namespace Mono::Security {
class Mono__Security__PKCS7__SignerInfo;
}
namespace Mono::Security {
class PKCS7;
}
// Type: ::ContentInfo
namespace Mono::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13951))
// CS Name: Mono.Security.PKCS7::ContentInfo
class CORDL_TYPE Mono__Security__PKCS7__ContentInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Mono__Security__PKCS7__ContentInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Security__PKCS7__ContentInfo", modifiers: " const&", def_value: None }]
constexpr Mono__Security__PKCS7__ContentInfo(Mono__Security__PKCS7__ContentInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Security__PKCS7__ContentInfo", modifiers: "&&", def_value: None }]
constexpr Mono__Security__PKCS7__ContentInfo(Mono__Security__PKCS7__ContentInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Security__PKCS7__ContentInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Mono__Security__PKCS7__ContentInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Security__PKCS7__ContentInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Security__PKCS7__ContentInfo& operator=(Mono__Security__PKCS7__ContentInfo&& o) noexcept = default;
  constexpr Mono__Security__PKCS7__ContentInfo& operator=(Mono__Security__PKCS7__ContentInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_contentType, put=__set_contentType))  contentType;

constexpr void __set_contentType(::StringW value) ;

constexpr ::StringW __get_contentType() const;

 Mono::Security::ASN1 __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(Mono::Security::ASN1 value) ;

constexpr Mono::Security::ASN1 __get_content() const;


// Properties

 Mono::Security::ASN1 __declspec(property(get=get_ASN1))  ASN1;

 Mono::Security::ASN1 __declspec(property(get=get_Content, put=set_Content))  Content;

 ::StringW __declspec(property(get=get_ContentType, put=set_ContentType))  ContentType;


// Methods

static Mono::Security::Mono__Security__PKCS7__ContentInfo New_ctor() ;

/// @brief Method .ctor addr 0x2281914 size 0x78 virtual false final false
 void _ctor() ;

static Mono::Security::Mono__Security__PKCS7__ContentInfo New_ctor(::StringW oid) ;

/// @brief Method .ctor addr 0x228198c size 0x24 virtual false final false
 void _ctor(::StringW oid) ;

static Mono::Security::Mono__Security__PKCS7__ContentInfo New_ctor(::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x22819b0 size 0x70 virtual false final false
 void _ctor(::ArrayW<uint8_t> data) ;

static Mono::Security::Mono__Security__PKCS7__ContentInfo New_ctor(Mono::Security::ASN1 asn1) ;

/// @brief Method .ctor addr 0x2281a20 size 0x188 virtual false final false
 void _ctor(Mono::Security::ASN1 asn1) ;

/// @brief Method get_ASN1 addr 0x2281ba8 size 0x4 virtual false final false
 Mono::Security::ASN1 get_ASN1() ;

/// @brief Method get_Content addr 0x2281c60 size 0x8 virtual false final false
 Mono::Security::ASN1 get_Content() ;

/// @brief Method set_Content addr 0x2281c68 size 0x8 virtual false final false
 void set_Content(Mono::Security::ASN1 value) ;

/// @brief Method get_ContentType addr 0x2281c70 size 0x8 virtual false final false
 ::StringW get_ContentType() ;

/// @brief Method set_ContentType addr 0x2281c78 size 0x8 virtual false final false
 void set_ContentType(::StringW value) ;

/// @brief Method GetASN1 addr 0x2281bac size 0xb4 virtual false final false
 Mono::Security::ASN1 GetASN1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security
// Type: ::EncryptedData
namespace Mono::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13952))
// CS Name: Mono.Security.PKCS7::EncryptedData
class CORDL_TYPE Mono__Security__PKCS7__EncryptedData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Mono__Security__PKCS7__EncryptedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Security__PKCS7__EncryptedData", modifiers: " const&", def_value: None }]
constexpr Mono__Security__PKCS7__EncryptedData(Mono__Security__PKCS7__EncryptedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Security__PKCS7__EncryptedData", modifiers: "&&", def_value: None }]
constexpr Mono__Security__PKCS7__EncryptedData(Mono__Security__PKCS7__EncryptedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Security__PKCS7__EncryptedData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Mono__Security__PKCS7__EncryptedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Security__PKCS7__EncryptedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Security__PKCS7__EncryptedData& operator=(Mono__Security__PKCS7__EncryptedData&& o) noexcept = default;
  constexpr Mono__Security__PKCS7__EncryptedData& operator=(Mono__Security__PKCS7__EncryptedData const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(uint8_t value) ;

constexpr uint8_t __get__version() const;

 Mono::Security::Mono__Security__PKCS7__ContentInfo __declspec(property(get=__get__content, put=__set__content))  _content;

constexpr void __set__content(Mono::Security::Mono__Security__PKCS7__ContentInfo value) ;

constexpr Mono::Security::Mono__Security__PKCS7__ContentInfo __get__content() const;

 Mono::Security::Mono__Security__PKCS7__ContentInfo __declspec(property(get=__get__encryptionAlgorithm, put=__set__encryptionAlgorithm))  _encryptionAlgorithm;

constexpr void __set__encryptionAlgorithm(Mono::Security::Mono__Security__PKCS7__ContentInfo value) ;

constexpr Mono::Security::Mono__Security__PKCS7__ContentInfo __get__encryptionAlgorithm() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__encrypted, put=__set__encrypted))  _encrypted;

constexpr void __set__encrypted(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__encrypted() const;


// Properties

 Mono::Security::Mono__Security__PKCS7__ContentInfo __declspec(property(get=get_EncryptionAlgorithm))  EncryptionAlgorithm;

 ::ArrayW<uint8_t> __declspec(property(get=get_EncryptedContent))  EncryptedContent;


// Methods

static Mono::Security::Mono__Security__PKCS7__EncryptedData New_ctor() ;

/// @brief Method .ctor addr 0x2281c80 size 0x1c virtual false final false
 void _ctor() ;

static Mono::Security::Mono__Security__PKCS7__EncryptedData New_ctor(Mono::Security::ASN1 asn1) ;

/// @brief Method .ctor addr 0x2281c9c size 0x2d8 virtual false final false
 void _ctor(Mono::Security::ASN1 asn1) ;

/// @brief Method get_EncryptionAlgorithm addr 0x2281f74 size 0x8 virtual false final false
 Mono::Security::Mono__Security__PKCS7__ContentInfo get_EncryptionAlgorithm() ;

/// @brief Method get_EncryptedContent addr 0x2281f7c size 0x74 virtual false final false
 ::ArrayW<uint8_t> get_EncryptedContent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security
// Type: ::SignedData
namespace Mono::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13953))
// CS Name: Mono.Security.PKCS7::SignedData
class CORDL_TYPE Mono__Security__PKCS7__SignedData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~Mono__Security__PKCS7__SignedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Security__PKCS7__SignedData", modifiers: " const&", def_value: None }]
constexpr Mono__Security__PKCS7__SignedData(Mono__Security__PKCS7__SignedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Security__PKCS7__SignedData", modifiers: "&&", def_value: None }]
constexpr Mono__Security__PKCS7__SignedData(Mono__Security__PKCS7__SignedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Security__PKCS7__SignedData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Mono__Security__PKCS7__SignedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Security__PKCS7__SignedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Security__PKCS7__SignedData& operator=(Mono__Security__PKCS7__SignedData&& o) noexcept = default;
  constexpr Mono__Security__PKCS7__SignedData& operator=(Mono__Security__PKCS7__SignedData const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(uint8_t value) ;

constexpr uint8_t __get_version() const;

 ::StringW __declspec(property(get=__get_hashAlgorithm, put=__set_hashAlgorithm))  hashAlgorithm;

constexpr void __set_hashAlgorithm(::StringW value) ;

constexpr ::StringW __get_hashAlgorithm() const;

 Mono::Security::Mono__Security__PKCS7__ContentInfo __declspec(property(get=__get_contentInfo, put=__set_contentInfo))  contentInfo;

constexpr void __set_contentInfo(Mono::Security::Mono__Security__PKCS7__ContentInfo value) ;

constexpr Mono::Security::Mono__Security__PKCS7__ContentInfo __get_contentInfo() const;

 Mono::Security::X509::X509CertificateCollection __declspec(property(get=__get_certs, put=__set_certs))  certs;

constexpr void __set_certs(Mono::Security::X509::X509CertificateCollection value) ;

constexpr Mono::Security::X509::X509CertificateCollection __get_certs() const;

 System::Collections::ArrayList __declspec(property(get=__get_crls, put=__set_crls))  crls;

constexpr void __set_crls(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get_crls() const;

 Mono::Security::Mono__Security__PKCS7__SignerInfo __declspec(property(get=__get_signerInfo, put=__set_signerInfo))  signerInfo;

constexpr void __set_signerInfo(Mono::Security::Mono__Security__PKCS7__SignerInfo value) ;

constexpr Mono::Security::Mono__Security__PKCS7__SignerInfo __get_signerInfo() const;

 bool __declspec(property(get=__get_mda, put=__set_mda))  mda;

constexpr void __set_mda(bool value) ;

constexpr bool __get_mda() const;


// Properties

 Mono::Security::X509::X509CertificateCollection __declspec(property(get=get_Certificates))  Certificates;

 Mono::Security::Mono__Security__PKCS7__ContentInfo __declspec(property(get=get_ContentInfo))  ContentInfo;

 ::StringW __declspec(property(put=set_HashName))  HashName;

 Mono::Security::Mono__Security__PKCS7__SignerInfo __declspec(property(get=get_SignerInfo))  SignerInfo;


// Methods

static Mono::Security::Mono__Security__PKCS7__SignedData New_ctor(Mono::Security::ASN1 asn1) ;

/// @brief Method .ctor addr 0x2281ff0 size 0x4e4 virtual false final false
 void _ctor(Mono::Security::ASN1 asn1) ;

/// @brief Method get_Certificates addr 0x2282cc0 size 0x8 virtual false final false
 Mono::Security::X509::X509CertificateCollection get_Certificates() ;

/// @brief Method get_ContentInfo addr 0x2282cc8 size 0x8 virtual false final false
 Mono::Security::Mono__Security__PKCS7__ContentInfo get_ContentInfo() ;

/// @brief Method set_HashName addr 0x2282ca0 size 0x20 virtual false final false
 void set_HashName(::StringW value) ;

/// @brief Method get_SignerInfo addr 0x2282cd0 size 0x8 virtual false final false
 Mono::Security::Mono__Security__PKCS7__SignerInfo get_SignerInfo() ;

/// @brief Method OidToName addr 0x2282aec size 0x1b4 virtual false final false
 ::StringW OidToName(::StringW oid) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security
// Type: ::SignerInfo
namespace Mono::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13954))
// CS Name: Mono.Security.PKCS7::SignerInfo
class CORDL_TYPE Mono__Security__PKCS7__SignerInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Mono__Security__PKCS7__SignerInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Security__PKCS7__SignerInfo", modifiers: " const&", def_value: None }]
constexpr Mono__Security__PKCS7__SignerInfo(Mono__Security__PKCS7__SignerInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Security__PKCS7__SignerInfo", modifiers: "&&", def_value: None }]
constexpr Mono__Security__PKCS7__SignerInfo(Mono__Security__PKCS7__SignerInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Security__PKCS7__SignerInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Mono__Security__PKCS7__SignerInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Security__PKCS7__SignerInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Security__PKCS7__SignerInfo& operator=(Mono__Security__PKCS7__SignerInfo&& o) noexcept = default;
  constexpr Mono__Security__PKCS7__SignerInfo& operator=(Mono__Security__PKCS7__SignerInfo const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(uint8_t value) ;

constexpr uint8_t __get_version() const;

 ::StringW __declspec(property(get=__get_hashAlgorithm, put=__set_hashAlgorithm))  hashAlgorithm;

constexpr void __set_hashAlgorithm(::StringW value) ;

constexpr ::StringW __get_hashAlgorithm() const;

 System::Collections::ArrayList __declspec(property(get=__get_authenticatedAttributes, put=__set_authenticatedAttributes))  authenticatedAttributes;

constexpr void __set_authenticatedAttributes(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get_authenticatedAttributes() const;

 System::Collections::ArrayList __declspec(property(get=__get_unauthenticatedAttributes, put=__set_unauthenticatedAttributes))  unauthenticatedAttributes;

constexpr void __set_unauthenticatedAttributes(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get_unauthenticatedAttributes() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_signature, put=__set_signature))  signature;

constexpr void __set_signature(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_signature() const;

 ::StringW __declspec(property(get=__get_issuer, put=__set_issuer))  issuer;

constexpr void __set_issuer(::StringW value) ;

constexpr ::StringW __get_issuer() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_serial, put=__set_serial))  serial;

constexpr void __set_serial(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_serial() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_ski, put=__set_ski))  ski;

constexpr void __set_ski(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_ski() const;


// Properties

 ::StringW __declspec(property(get=get_IssuerName))  IssuerName;

 ::ArrayW<uint8_t> __declspec(property(get=get_SerialNumber))  SerialNumber;

 System::Collections::ArrayList __declspec(property(get=get_AuthenticatedAttributes))  AuthenticatedAttributes;

 ::StringW __declspec(property(get=get_HashName, put=set_HashName))  HashName;

 ::ArrayW<uint8_t> __declspec(property(get=get_Signature))  Signature;

 System::Collections::ArrayList __declspec(property(get=get_UnauthenticatedAttributes))  UnauthenticatedAttributes;

 uint8_t __declspec(property(get=get_Version))  Version;


// Methods

static Mono::Security::Mono__Security__PKCS7__SignerInfo New_ctor() ;

/// @brief Method .ctor addr 0x2282a5c size 0x90 virtual false final false
 void _ctor() ;

static Mono::Security::Mono__Security__PKCS7__SignerInfo New_ctor(Mono::Security::ASN1 asn1) ;

/// @brief Method .ctor addr 0x22826e4 size 0x378 virtual false final false
 void _ctor(Mono::Security::ASN1 asn1) ;

/// @brief Method get_IssuerName addr 0x2282e10 size 0x8 virtual false final false
 ::StringW get_IssuerName() ;

/// @brief Method get_SerialNumber addr 0x2282e18 size 0x74 virtual false final false
 ::ArrayW<uint8_t> get_SerialNumber() ;

/// @brief Method get_AuthenticatedAttributes addr 0x2282e8c size 0x8 virtual false final false
 System::Collections::ArrayList get_AuthenticatedAttributes() ;

/// @brief Method get_HashName addr 0x2282e94 size 0x8 virtual false final false
 ::StringW get_HashName() ;

/// @brief Method set_HashName addr 0x2282e9c size 0x8 virtual false final false
 void set_HashName(::StringW value) ;

/// @brief Method get_Signature addr 0x2282ea4 size 0x74 virtual false final false
 ::ArrayW<uint8_t> get_Signature() ;

/// @brief Method get_UnauthenticatedAttributes addr 0x2282f18 size 0x8 virtual false final false
 System::Collections::ArrayList get_UnauthenticatedAttributes() ;

/// @brief Method get_Version addr 0x2282f20 size 0x8 virtual false final false
 uint8_t get_Version() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security
// Type: Mono.Security::PKCS7
namespace Mono::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13955))
// CS Name: Mono.Security.PKCS7
class CORDL_TYPE PKCS7 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SignerInfo = Mono::Security::Mono__Security__PKCS7__SignerInfo;

using SignedData = Mono::Security::Mono__Security__PKCS7__SignedData;

using EncryptedData = Mono::Security::Mono__Security__PKCS7__EncryptedData;

using ContentInfo = Mono::Security::Mono__Security__PKCS7__ContentInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PKCS7() = default;

// Ctor Parameters [CppParam { name: "", ty: "PKCS7", modifiers: " const&", def_value: None }]
constexpr PKCS7(PKCS7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PKCS7", modifiers: "&&", def_value: None }]
constexpr PKCS7(PKCS7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PKCS7(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PKCS7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PKCS7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PKCS7& operator=(PKCS7&& o) noexcept = default;
  constexpr PKCS7& operator=(PKCS7 const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security
NEED_NO_BOX(Mono::Security::Mono__Security__PKCS7__ContentInfo);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Mono__Security__PKCS7__ContentInfo, "Mono.Security", "PKCS7/ContentInfo");
NEED_NO_BOX(Mono::Security::Mono__Security__PKCS7__EncryptedData);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Mono__Security__PKCS7__EncryptedData, "Mono.Security", "PKCS7/EncryptedData");
NEED_NO_BOX(Mono::Security::Mono__Security__PKCS7__SignedData);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Mono__Security__PKCS7__SignedData, "Mono.Security", "PKCS7/SignedData");
NEED_NO_BOX(Mono::Security::Mono__Security__PKCS7__SignerInfo);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Mono__Security__PKCS7__SignerInfo, "Mono.Security", "PKCS7/SignerInfo");
NEED_NO_BOX(Mono::Security::PKCS7);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::PKCS7, "Mono.Security", "PKCS7");
