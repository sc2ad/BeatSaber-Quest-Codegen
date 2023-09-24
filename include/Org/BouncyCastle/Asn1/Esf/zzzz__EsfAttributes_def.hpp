#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class EsfAttributes;
}
// Type: Org.BouncyCastle.Asn1.Esf::EsfAttributes
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(144))
// CS Name: Org.BouncyCastle.Asn1.Esf.EsfAttributes
class CORDL_TYPE EsfAttributes : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EsfAttributes() = default;

// Ctor Parameters [CppParam { name: "", ty: "EsfAttributes", modifiers: " const&", def_value: None }]
constexpr EsfAttributes(EsfAttributes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EsfAttributes", modifiers: "&&", def_value: None }]
constexpr EsfAttributes(EsfAttributes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EsfAttributes(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EsfAttributes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EsfAttributes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EsfAttributes& operator=(EsfAttributes&& o) noexcept = default;
  constexpr EsfAttributes& operator=(EsfAttributes const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SigPolicyId, put=__set_SigPolicyId))  SigPolicyId;

static void __set_SigPolicyId(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SigPolicyId() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CommitmentType, put=__set_CommitmentType))  CommitmentType;

static void __set_CommitmentType(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CommitmentType() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SignerLocation, put=__set_SignerLocation))  SignerLocation;

static void __set_SignerLocation(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SignerLocation() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SignerAttr, put=__set_SignerAttr))  SignerAttr;

static void __set_SignerAttr(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SignerAttr() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_OtherSigCert, put=__set_OtherSigCert))  OtherSigCert;

static void __set_OtherSigCert(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_OtherSigCert() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ContentTimestamp, put=__set_ContentTimestamp))  ContentTimestamp;

static void __set_ContentTimestamp(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ContentTimestamp() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CertificateRefs, put=__set_CertificateRefs))  CertificateRefs;

static void __set_CertificateRefs(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CertificateRefs() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_RevocationRefs, put=__set_RevocationRefs))  RevocationRefs;

static void __set_RevocationRefs(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_RevocationRefs() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CertValues, put=__set_CertValues))  CertValues;

static void __set_CertValues(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CertValues() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_RevocationValues, put=__set_RevocationValues))  RevocationValues;

static void __set_RevocationValues(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_RevocationValues() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_EscTimeStamp, put=__set_EscTimeStamp))  EscTimeStamp;

static void __set_EscTimeStamp(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_EscTimeStamp() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CertCrlTimestamp, put=__set_CertCrlTimestamp))  CertCrlTimestamp;

static void __set_CertCrlTimestamp(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CertCrlTimestamp() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ArchiveTimestamp, put=__set_ArchiveTimestamp))  ArchiveTimestamp;

static void __set_ArchiveTimestamp(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ArchiveTimestamp() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ArchiveTimestampV2, put=__set_ArchiveTimestampV2))  ArchiveTimestampV2;

static void __set_ArchiveTimestampV2(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ArchiveTimestampV2() ;


// Methods

static Org::BouncyCastle::Asn1::Esf::EsfAttributes New_ctor() ;

/// @brief Method .ctor addr 0xe05304 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Esf::EsfAttributes);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Esf::EsfAttributes, "Org.BouncyCastle.Asn1.Esf", "EsfAttributes");
