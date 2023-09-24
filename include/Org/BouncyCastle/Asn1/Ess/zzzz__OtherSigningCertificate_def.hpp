#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyInformation;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Ess {
class OtherCertID;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ess {
class OtherSigningCertificate;
}
// Type: Org.BouncyCastle.Asn1.Ess::OtherSigningCertificate
namespace Org::BouncyCastle::Asn1::Ess {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(165))
// CS Name: Org.BouncyCastle.Asn1.Ess.OtherSigningCertificate
class CORDL_TYPE OtherSigningCertificate : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OtherSigningCertificate() = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherSigningCertificate", modifiers: " const&", def_value: None }]
constexpr OtherSigningCertificate(OtherSigningCertificate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherSigningCertificate", modifiers: "&&", def_value: None }]
constexpr OtherSigningCertificate(OtherSigningCertificate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OtherSigningCertificate(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OtherSigningCertificate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OtherSigningCertificate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OtherSigningCertificate& operator=(OtherSigningCertificate&& o) noexcept = default;
  constexpr OtherSigningCertificate& operator=(OtherSigningCertificate const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_certs, put=__set_certs))  certs;

constexpr void __set_certs(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_certs() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_policies, put=__set_policies))  policies;

constexpr void __set_policies(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_policies() const;


// Methods

/// @brief Method GetInstance addr 0xe0d158 size 0x190 virtual false final false
static Org::BouncyCastle::Asn1::Ess::OtherSigningCertificate GetInstance(::bs_hook::Il2CppWrapperType o) ;

static Org::BouncyCastle::Asn1::Ess::OtherSigningCertificate New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe0d2e8 size 0x154 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::Ess::OtherSigningCertificate New_ctor(Org::BouncyCastle::Asn1::Ess::OtherCertID otherCertID) ;

/// @brief Method .ctor addr 0xe0d43c size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Ess::OtherCertID otherCertID) ;

/// @brief Method GetCerts addr 0xe0d4b8 size 0x110 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::Ess::OtherCertID> GetCerts() ;

/// @brief Method GetPolicies addr 0xe0d5c8 size 0x118 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::X509::PolicyInformation> GetPolicies() ;

/// @brief Method ToAsn1Object addr 0xe0d6e0 size 0x148 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ess
NEED_NO_BOX(Org::BouncyCastle::Asn1::Ess::OtherSigningCertificate);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Ess::OtherSigningCertificate, "Org.BouncyCastle.Asn1.Ess", "OtherSigningCertificate");
