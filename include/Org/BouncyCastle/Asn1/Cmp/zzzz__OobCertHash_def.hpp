#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::Crmf {
class CertId;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class OobCertHash;
}
// Type: Org.BouncyCastle.Asn1.Cmp::OobCertHash
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(27))
// CS Name: Org.BouncyCastle.Asn1.Cmp.OobCertHash
class CORDL_TYPE OobCertHash : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~OobCertHash() = default;

// Ctor Parameters [CppParam { name: "", ty: "OobCertHash", modifiers: " const&", def_value: None }]
constexpr OobCertHash(OobCertHash const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OobCertHash", modifiers: "&&", def_value: None }]
constexpr OobCertHash(OobCertHash&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OobCertHash(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OobCertHash& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OobCertHash& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OobCertHash& operator=(OobCertHash&& o) noexcept = default;
  constexpr OobCertHash& operator=(OobCertHash const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_hashAlg, put=__set_hashAlg))  hashAlg;

constexpr void __set_hashAlg(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_hashAlg() const;

 Org::BouncyCastle::Asn1::Crmf::CertId __declspec(property(get=__get_certId, put=__set_certId))  certId;

constexpr void __set_certId(Org::BouncyCastle::Asn1::Crmf::CertId value) ;

constexpr Org::BouncyCastle::Asn1::Crmf::CertId __get_certId() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_hashVal, put=__set_hashVal))  hashVal;

constexpr void __set_hashVal(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_hashVal() const;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_HashAlg))  HashAlg;

 Org::BouncyCastle::Asn1::Crmf::CertId __declspec(property(get=get_CertID))  CertID;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit OobCertHash(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xddb524 size 0x144 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xddb874 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::OobCertHash GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_HashAlg addr 0xddb9fc size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_HashAlg() ;

/// @brief Method get_CertID addr 0xddba04 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Crmf::CertId get_CertID() ;

/// @brief Method ToAsn1Object addr 0xddba0c size 0xd0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::OobCertHash);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::OobCertHash, "Org.BouncyCastle.Asn1.Cmp", "OobCertHash");
