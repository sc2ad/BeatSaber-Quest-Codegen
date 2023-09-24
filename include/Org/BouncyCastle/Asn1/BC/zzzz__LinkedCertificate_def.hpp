#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class DigestInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::BC {
class LinkedCertificate;
}
// Type: Org.BouncyCastle.Asn1.BC::LinkedCertificate
namespace Org::BouncyCastle::Asn1::BC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8))
// CS Name: Org.BouncyCastle.Asn1.BC.LinkedCertificate
class CORDL_TYPE LinkedCertificate : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LinkedCertificate() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedCertificate", modifiers: " const&", def_value: None }]
constexpr LinkedCertificate(LinkedCertificate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedCertificate", modifiers: "&&", def_value: None }]
constexpr LinkedCertificate(LinkedCertificate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinkedCertificate(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr LinkedCertificate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinkedCertificate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinkedCertificate& operator=(LinkedCertificate&& o) noexcept = default;
  constexpr LinkedCertificate& operator=(LinkedCertificate const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::DigestInfo __declspec(property(get=__get_mDigest, put=__set_mDigest))  mDigest;

constexpr void __set_mDigest(Org::BouncyCastle::Asn1::X509::DigestInfo value) ;

constexpr Org::BouncyCastle::Asn1::X509::DigestInfo __get_mDigest() const;

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_mCertLocation, put=__set_mCertLocation))  mCertLocation;

constexpr void __set_mCertLocation(Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr Org::BouncyCastle::Asn1::X509::GeneralName __get_mCertLocation() const;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=__get_mCertIssuer, put=__set_mCertIssuer))  mCertIssuer;

constexpr void __set_mCertIssuer(Org::BouncyCastle::Asn1::X509::X509Name value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Name __get_mCertIssuer() const;

 Org::BouncyCastle::Asn1::X509::GeneralNames __declspec(property(get=__get_mCACerts, put=__set_mCACerts))  mCACerts;

constexpr void __set_mCACerts(Org::BouncyCastle::Asn1::X509::GeneralNames value) ;

constexpr Org::BouncyCastle::Asn1::X509::GeneralNames __get_mCACerts() const;


// Properties

 Org::BouncyCastle::Asn1::X509::DigestInfo __declspec(property(get=get_Digest))  Digest;

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=get_CertLocation))  CertLocation;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_CertIssuer))  CertIssuer;

 Org::BouncyCastle::Asn1::X509::GeneralNames __declspec(property(get=get_CACerts))  CACerts;


// Methods

static Org::BouncyCastle::Asn1::BC::LinkedCertificate New_ctor(Org::BouncyCastle::Asn1::X509::DigestInfo digest, Org::BouncyCastle::Asn1::X509::GeneralName certLocation) ;

/// @brief Method .ctor addr 0xdd645c size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::DigestInfo digest, Org::BouncyCastle::Asn1::X509::GeneralName certLocation) ;

static Org::BouncyCastle::Asn1::BC::LinkedCertificate New_ctor(Org::BouncyCastle::Asn1::X509::DigestInfo digest, Org::BouncyCastle::Asn1::X509::GeneralName certLocation, Org::BouncyCastle::Asn1::X509::X509Name certIssuer, Org::BouncyCastle::Asn1::X509::GeneralNames caCerts) ;

/// @brief Method .ctor addr 0xdd648c size 0x40 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::DigestInfo digest, Org::BouncyCastle::Asn1::X509::GeneralName certLocation, Org::BouncyCastle::Asn1::X509::X509Name certIssuer, Org::BouncyCastle::Asn1::X509::GeneralNames caCerts) ;

static Org::BouncyCastle::Asn1::BC::LinkedCertificate New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdd64cc size 0x1c8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdd6694 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::BC::LinkedCertificate GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Digest addr 0xdd6738 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::DigestInfo get_Digest() ;

/// @brief Method get_CertLocation addr 0xdd6740 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::GeneralName get_CertLocation() ;

/// @brief Method get_CertIssuer addr 0xdd6748 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::X509Name get_CertIssuer() ;

/// @brief Method get_CACerts addr 0xdd6750 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::GeneralNames get_CACerts() ;

/// @brief Method ToAsn1Object addr 0xdd6758 size 0x158 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::BC
NEED_NO_BOX(Org::BouncyCastle::Asn1::BC::LinkedCertificate);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BC::LinkedCertificate, "Org.BouncyCastle.Asn1.BC", "LinkedCertificate");
