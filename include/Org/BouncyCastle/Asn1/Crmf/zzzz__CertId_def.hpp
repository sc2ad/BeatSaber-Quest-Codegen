#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class CertId;
}
// Type: Org.BouncyCastle.Asn1.Crmf::CertId
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(103))
// CS Name: Org.BouncyCastle.Asn1.Crmf.CertId
class CORDL_TYPE CertId : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CertId() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertId", modifiers: " const&", def_value: None }]
constexpr CertId(CertId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertId", modifiers: "&&", def_value: None }]
constexpr CertId(CertId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertId(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertId& operator=(CertId&& o) noexcept = default;
  constexpr CertId& operator=(CertId const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_issuer, put=__set_issuer))  issuer;

constexpr void __set_issuer(Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr Org::BouncyCastle::Asn1::X509::GeneralName __get_issuer() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_serialNumber, put=__set_serialNumber))  serialNumber;

constexpr void __set_serialNumber(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_serialNumber() const;


// Properties

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=get_Issuer))  Issuer;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_SerialNumber))  SerialNumber;


// Methods

static Org::BouncyCastle::Asn1::Crmf::CertId New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdf5894 size 0x68 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdf58fc size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Crmf::CertId GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0xdf5a84 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Crmf::CertId GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

/// @brief Method get_Issuer addr 0xdf5a9c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::GeneralName get_Issuer() ;

/// @brief Method get_SerialNumber addr 0xdf5aa4 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerInteger get_SerialNumber() ;

/// @brief Method ToAsn1Object addr 0xdf5aac size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Crmf::CertId);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Crmf::CertId, "Org.BouncyCastle.Asn1.Crmf", "CertId");
