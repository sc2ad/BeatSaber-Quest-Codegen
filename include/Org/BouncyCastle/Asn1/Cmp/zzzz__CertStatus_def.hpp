#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CertStatus;
}
// Type: Org.BouncyCastle.Asn1.Cmp::CertStatus
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(17))
// CS Name: Org.BouncyCastle.Asn1.Cmp.CertStatus
class CORDL_TYPE CertStatus : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CertStatus() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertStatus", modifiers: " const&", def_value: None }]
constexpr CertStatus(CertStatus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertStatus", modifiers: "&&", def_value: None }]
constexpr CertStatus(CertStatus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertStatus(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertStatus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertStatus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertStatus& operator=(CertStatus&& o) noexcept = default;
  constexpr CertStatus& operator=(CertStatus const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_certHash, put=__set_certHash))  certHash;

constexpr void __set_certHash(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_certHash() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_certReqId, put=__set_certReqId))  certReqId;

constexpr void __set_certReqId(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_certReqId() const;

 Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo __declspec(property(get=__get_statusInfo, put=__set_statusInfo))  statusInfo;

constexpr void __set_statusInfo(Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo __get_statusInfo() const;


// Properties

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_CertHash))  CertHash;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_CertReqID))  CertReqID;

 Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo __declspec(property(get=get_StatusInfo))  StatusInfo;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CertStatus(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdd8c04 size 0xa4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "certHash", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "certReqId", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit CertStatus(::ArrayW<uint8_t> certHash, Org::BouncyCastle::Math::BigInteger certReqId) ;

/// @brief Method .ctor addr 0xdd8ca8 size 0xb4 virtual false final false
 void _ctor(::ArrayW<uint8_t> certHash, Org::BouncyCastle::Math::BigInteger certReqId) ;

// Ctor Parameters [CppParam { name: "certHash", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "certReqId", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "statusInfo", ty: "Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo", modifiers: "", def_value: None }]
explicit CertStatus(::ArrayW<uint8_t> certHash, Org::BouncyCastle::Math::BigInteger certReqId, Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo statusInfo) ;

/// @brief Method .ctor addr 0xdd8d5c size 0xc0 virtual false final false
 void _ctor(::ArrayW<uint8_t> certHash, Org::BouncyCastle::Math::BigInteger certReqId, Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo statusInfo) ;

/// @brief Method GetInstance addr 0xdd7518 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::CertStatus GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_CertHash addr 0xdd8e1c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_CertHash() ;

/// @brief Method get_CertReqID addr 0xdd8e24 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerInteger get_CertReqID() ;

/// @brief Method get_StatusInfo addr 0xdd8e2c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo get_StatusInfo() ;

/// @brief Method ToAsn1Object addr 0xdd8e34 size 0x174 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::CertStatus);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::CertStatus, "Org.BouncyCastle.Asn1.Cmp", "CertStatus");
