#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertId;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusEncodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class RevAnnContent;
}
// Type: Org.BouncyCastle.Asn1.Cmp::RevAnnContent
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(49))
// CS Name: Org.BouncyCastle.Asn1.Cmp.RevAnnContent
class CORDL_TYPE RevAnnContent : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RevAnnContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "RevAnnContent", modifiers: " const&", def_value: None }]
constexpr RevAnnContent(RevAnnContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RevAnnContent", modifiers: "&&", def_value: None }]
constexpr RevAnnContent(RevAnnContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RevAnnContent(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr RevAnnContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RevAnnContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RevAnnContent& operator=(RevAnnContent&& o) noexcept = default;
  constexpr RevAnnContent& operator=(RevAnnContent const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable __declspec(property(get=__get_status, put=__set_status))  status;

constexpr void __set_status(Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable __get_status() const;

 Org::BouncyCastle::Asn1::Crmf::CertId __declspec(property(get=__get_certId, put=__set_certId))  certId;

constexpr void __set_certId(Org::BouncyCastle::Asn1::Crmf::CertId value) ;

constexpr Org::BouncyCastle::Asn1::Crmf::CertId __get_certId() const;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_willBeRevokedAt, put=__set_willBeRevokedAt))  willBeRevokedAt;

constexpr void __set_willBeRevokedAt(Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime __get_willBeRevokedAt() const;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_badSinceDate, put=__set_badSinceDate))  badSinceDate;

constexpr void __set_badSinceDate(Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime __get_badSinceDate() const;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_crlDetails, put=__set_crlDetails))  crlDetails;

constexpr void __set_crlDetails(Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Extensions __get_crlDetails() const;


// Properties

 Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable __declspec(property(get=get_Status))  Status;

 Org::BouncyCastle::Asn1::Crmf::CertId __declspec(property(get=get_CertID))  CertID;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=get_WillBeRevokedAt))  WillBeRevokedAt;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=get_BadSinceDate))  BadSinceDate;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=get_CrlDetails))  CrlDetails;


// Methods

static Org::BouncyCastle::Asn1::Cmp::RevAnnContent New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xde13d0 size 0x15c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xddc918 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::RevAnnContent GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Status addr 0xde152c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable get_Status() ;

/// @brief Method get_CertID addr 0xde1534 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Crmf::CertId get_CertID() ;

/// @brief Method get_WillBeRevokedAt addr 0xde153c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerGeneralizedTime get_WillBeRevokedAt() ;

/// @brief Method get_BadSinceDate addr 0xde1544 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerGeneralizedTime get_BadSinceDate() ;

/// @brief Method get_CrlDetails addr 0xde154c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::X509Extensions get_CrlDetails() ;

/// @brief Method ToAsn1Object addr 0xde1554 size 0x1cc virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::RevAnnContent);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::RevAnnContent, "Org.BouncyCastle.Asn1.Cmp", "RevAnnContent");
