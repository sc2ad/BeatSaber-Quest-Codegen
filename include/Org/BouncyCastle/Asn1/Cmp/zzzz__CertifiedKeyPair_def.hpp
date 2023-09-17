#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedValue;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PkiPublicationInfo;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CertOrEncCert;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CertifiedKeyPair;
}
// Type: Org.BouncyCastle.Asn1.Cmp::CertifiedKeyPair
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12))
// CS Name: Org.BouncyCastle.Asn1.Cmp.CertifiedKeyPair
class CORDL_TYPE CertifiedKeyPair : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CertifiedKeyPair() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertifiedKeyPair", modifiers: " const&", def_value: None }]
constexpr CertifiedKeyPair(CertifiedKeyPair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertifiedKeyPair", modifiers: "&&", def_value: None }]
constexpr CertifiedKeyPair(CertifiedKeyPair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertifiedKeyPair(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertifiedKeyPair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertifiedKeyPair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertifiedKeyPair& operator=(CertifiedKeyPair&& o) noexcept = default;
  constexpr CertifiedKeyPair& operator=(CertifiedKeyPair const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert __declspec(property(get=__get_certOrEncCert, put=__set_certOrEncCert))  certOrEncCert;

constexpr void __set_certOrEncCert(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert value) ;

constexpr ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert __get_certOrEncCert() const;

 ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue __declspec(property(get=__get_privateKey, put=__set_privateKey))  privateKey;

constexpr void __set_privateKey(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue __get_privateKey() const;

 ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo __declspec(property(get=__get_publicationInfo, put=__set_publicationInfo))  publicationInfo;

constexpr void __set_publicationInfo(::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo __get_publicationInfo() const;


// Properties

 ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert __declspec(property(get=get_CertOrEncCert))  CertOrEncCert;

 ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue __declspec(property(get=get_PrivateKey))  PrivateKey;

 ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo __declspec(property(get=get_PublicationInfo))  PublicationInfo;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CertifiedKeyPair(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdd76a8 size 0xf8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdd7928 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "certOrEncCert", ty: "::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert", modifiers: "", def_value: None }]
explicit CertifiedKeyPair(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert certOrEncCert) ;

/// @brief Method .ctor addr 0xdd7ab0 size 0xc virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert certOrEncCert) ;

// Ctor Parameters [CppParam { name: "certOrEncCert", ty: "::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert", modifiers: "", def_value: None }, CppParam { name: "privateKey", ty: "::Org::BouncyCastle::Asn1::Crmf::EncryptedValue", modifiers: "", def_value: None }, CppParam { name: "publicationInfo", ty: "::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo", modifiers: "", def_value: None }]
explicit CertifiedKeyPair(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert certOrEncCert, ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue privateKey, ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo publicationInfo) ;

/// @brief Method .ctor addr 0xdd7abc size 0x8c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert certOrEncCert, ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue privateKey, ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo publicationInfo) ;

/// @brief Method get_CertOrEncCert addr 0xdd7b48 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert get_CertOrEncCert() ;

/// @brief Method get_PrivateKey addr 0xdd7b50 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue get_PrivateKey() ;

/// @brief Method get_PublicationInfo addr 0xdd7b58 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo get_PublicationInfo() ;

/// @brief Method ToAsn1Object addr 0xdd7b60 size 0x12c virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair, "Org.BouncyCastle.Asn1.Cmp", "CertifiedKeyPair");
