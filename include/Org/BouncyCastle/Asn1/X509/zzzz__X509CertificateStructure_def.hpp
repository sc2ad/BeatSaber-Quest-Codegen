#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateStructure;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
// Type: Org.BouncyCastle.Asn1.X509::X509CertificateStructure
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(402))
// CS Name: Org.BouncyCastle.Asn1.X509.X509CertificateStructure
class CORDL_TYPE X509CertificateStructure : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~X509CertificateStructure() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateStructure", modifiers: " const&", def_value: None }]
constexpr X509CertificateStructure(X509CertificateStructure const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateStructure", modifiers: "&&", def_value: None }]
constexpr X509CertificateStructure(X509CertificateStructure&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509CertificateStructure(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr X509CertificateStructure& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509CertificateStructure& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509CertificateStructure& operator=(X509CertificateStructure&& o) noexcept = default;
  constexpr X509CertificateStructure& operator=(X509CertificateStructure const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure __declspec(property(get=__get_tbsCert, put=__set_tbsCert))  tbsCert;

constexpr void __set_tbsCert(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure __get_tbsCert() const;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_sigAlgID, put=__set_sigAlgID))  sigAlgID;

constexpr void __set_sigAlgID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_sigAlgID() const;

 ::Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_sig, put=__set_sig))  sig;

constexpr void __set_sig(::Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr ::Org::BouncyCastle::Asn1::DerBitString __get_sig() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure __declspec(property(get=get_TbsCertificate))  TbsCertificate;

 int32_t __declspec(property(get=get_Version))  Version;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_SerialNumber))  SerialNumber;

 ::Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_Issuer))  Issuer;

 ::Org::BouncyCastle::Asn1::X509::Time __declspec(property(get=get_StartDate))  StartDate;

 ::Org::BouncyCastle::Asn1::X509::Time __declspec(property(get=get_EndDate))  EndDate;

 ::Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_Subject))  Subject;

 ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __declspec(property(get=get_SubjectPublicKeyInfo))  SubjectPublicKeyInfo;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_SignatureAlgorithm))  SignatureAlgorithm;

 ::Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_Signature))  Signature;


// Methods

/// @brief Method GetInstance addr 0x111318c size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0x11131a4 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "tbsCert", ty: "::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure", modifiers: "", def_value: None }, CppParam { name: "sigAlgID", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "sig", ty: "::Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }]
explicit X509CertificateStructure(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure tbsCert, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier sigAlgID, ::Org::BouncyCastle::Asn1::DerBitString sig) ;

/// @brief Method .ctor addr 0x1113394 size 0xdc virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure tbsCert, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier sigAlgID, ::Org::BouncyCastle::Asn1::DerBitString sig) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit X509CertificateStructure(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x1113248 size 0x14c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_TbsCertificate addr 0x1113470 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure get_TbsCertificate() ;

/// @brief Method get_Version addr 0x1113478 size 0x18 virtual false final false
 int32_t get_Version() ;

/// @brief Method get_SerialNumber addr 0x1113490 size 0x1c virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger get_SerialNumber() ;

/// @brief Method get_Issuer addr 0x11134ac size 0x1c virtual false final false
 ::Org::BouncyCastle::Asn1::X509::X509Name get_Issuer() ;

/// @brief Method get_StartDate addr 0x11134c8 size 0x1c virtual false final false
 ::Org::BouncyCastle::Asn1::X509::Time get_StartDate() ;

/// @brief Method get_EndDate addr 0x11134e4 size 0x1c virtual false final false
 ::Org::BouncyCastle::Asn1::X509::Time get_EndDate() ;

/// @brief Method get_Subject addr 0x1113500 size 0x1c virtual false final false
 ::Org::BouncyCastle::Asn1::X509::X509Name get_Subject() ;

/// @brief Method get_SubjectPublicKeyInfo addr 0x111351c size 0x1c virtual false final false
 ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo get_SubjectPublicKeyInfo() ;

/// @brief Method get_SignatureAlgorithm addr 0x1113538 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_SignatureAlgorithm() ;

/// @brief Method get_Signature addr 0x1113540 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerBitString get_Signature() ;

/// @brief Method GetSignatureOctets addr 0x1113548 size 0x20 virtual false final false
 ::ArrayW<uint8_t> GetSignatureOctets() ;

/// @brief Method ToAsn1Object addr 0x1113568 size 0x11c virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure, "Org.BouncyCastle.Asn1.X509", "X509CertificateStructure");
