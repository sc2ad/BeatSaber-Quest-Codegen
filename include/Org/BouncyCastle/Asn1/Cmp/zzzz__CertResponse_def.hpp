#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CertifiedKeyPair;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CertResponse;
}
// Type: Org.BouncyCastle.Asn1.Cmp::CertResponse
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16))
// CS Name: Org.BouncyCastle.Asn1.Cmp.CertResponse
class CORDL_TYPE CertResponse : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CertResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertResponse", modifiers: " const&", def_value: None }]
constexpr CertResponse(CertResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertResponse", modifiers: "&&", def_value: None }]
constexpr CertResponse(CertResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertResponse(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertResponse& operator=(CertResponse&& o) noexcept = default;
  constexpr CertResponse& operator=(CertResponse const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_certReqId, put=__set_certReqId))  certReqId;

constexpr void __set_certReqId(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_certReqId() const;

 Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo __declspec(property(get=__get_status, put=__set_status))  status;

constexpr void __set_status(Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo __get_status() const;

 Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair __declspec(property(get=__get_certifiedKeyPair, put=__set_certifiedKeyPair))  certifiedKeyPair;

constexpr void __set_certifiedKeyPair(Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair __get_certifiedKeyPair() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_rspInfo, put=__set_rspInfo))  rspInfo;

constexpr void __set_rspInfo(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_rspInfo() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_CertReqID))  CertReqID;

 Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo __declspec(property(get=get_Status))  Status;

 Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair __declspec(property(get=get_CertifiedKeyPair))  CertifiedKeyPair;


// Methods

static Org::BouncyCastle::Asn1::Cmp::CertResponse New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdd86b8 size 0x148 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdd8478 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::CertResponse GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Cmp::CertResponse New_ctor(Org::BouncyCastle::Asn1::DerInteger certReqId, Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo status) ;

/// @brief Method .ctor addr 0xdd8988 size 0xc virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerInteger certReqId, Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo status) ;

static Org::BouncyCastle::Asn1::Cmp::CertResponse New_ctor(Org::BouncyCastle::Asn1::DerInteger certReqId, Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo status, Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair certifiedKeyPair, Org::BouncyCastle::Asn1::Asn1OctetString rspInfo) ;

/// @brief Method .ctor addr 0xdd8994 size 0xb8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerInteger certReqId, Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo status, Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair certifiedKeyPair, Org::BouncyCastle::Asn1::Asn1OctetString rspInfo) ;

/// @brief Method get_CertReqID addr 0xdd8a4c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerInteger get_CertReqID() ;

/// @brief Method get_Status addr 0xdd8a54 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo get_Status() ;

/// @brief Method get_CertifiedKeyPair addr 0xdd8a5c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair get_CertifiedKeyPair() ;

/// @brief Method ToAsn1Object addr 0xdd8a64 size 0x1a0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::CertResponse);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::CertResponse, "Org.BouncyCastle.Asn1.Cmp", "CertResponse");
