#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class CertID;
}
// Type: Org.BouncyCastle.Asn1.Ocsp::CertID
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(207))
// CS Name: Org.BouncyCastle.Asn1.Ocsp.CertID
class CORDL_TYPE CertID : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CertID() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertID", modifiers: " const&", def_value: None }]
constexpr CertID(CertID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertID", modifiers: "&&", def_value: None }]
constexpr CertID(CertID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertID(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertID& operator=(CertID&& o) noexcept = default;
  constexpr CertID& operator=(CertID const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_hashAlgorithm, put=__set_hashAlgorithm))  hashAlgorithm;

constexpr void __set_hashAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_hashAlgorithm() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_issuerNameHash, put=__set_issuerNameHash))  issuerNameHash;

constexpr void __set_issuerNameHash(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_issuerNameHash() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_issuerKeyHash, put=__set_issuerKeyHash))  issuerKeyHash;

constexpr void __set_issuerKeyHash(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_issuerKeyHash() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_serialNumber, put=__set_serialNumber))  serialNumber;

constexpr void __set_serialNumber(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_serialNumber() const;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_HashAlgorithm))  HashAlgorithm;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_IssuerNameHash))  IssuerNameHash;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_IssuerKeyHash))  IssuerKeyHash;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_SerialNumber))  SerialNumber;


// Methods

/// @brief Method GetInstance addr 0xef191c size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::CertID GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xef1934 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::CertID GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "hashAlgorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "issuerNameHash", ty: "Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }, CppParam { name: "issuerKeyHash", ty: "Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }, CppParam { name: "serialNumber", ty: "Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }]
explicit CertID(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgorithm, Org::BouncyCastle::Asn1::Asn1OctetString issuerNameHash, Org::BouncyCastle::Asn1::Asn1OctetString issuerKeyHash, Org::BouncyCastle::Asn1::DerInteger serialNumber) ;

/// @brief Method .ctor addr 0xef1be0 size 0x40 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgorithm, Org::BouncyCastle::Asn1::Asn1OctetString issuerNameHash, Org::BouncyCastle::Asn1::Asn1OctetString issuerKeyHash, Org::BouncyCastle::Asn1::DerInteger serialNumber) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CertID(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef1abc size 0x124 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_HashAlgorithm addr 0xef1c20 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_HashAlgorithm() ;

/// @brief Method get_IssuerNameHash addr 0xef1c28 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_IssuerNameHash() ;

/// @brief Method get_IssuerKeyHash addr 0xef1c30 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_IssuerKeyHash() ;

/// @brief Method get_SerialNumber addr 0xef1c38 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_SerialNumber() ;

/// @brief Method ToAsn1Object addr 0xef1c40 size 0x148 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Ocsp::CertID);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Ocsp::CertID, "Org.BouncyCastle.Asn1.Ocsp", "CertID");
