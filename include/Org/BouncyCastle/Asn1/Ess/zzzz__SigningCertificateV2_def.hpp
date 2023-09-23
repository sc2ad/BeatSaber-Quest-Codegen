#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Ess {
class EssCertIDv2;
}
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyInformation;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ess {
class SigningCertificateV2;
}
// Type: Org.BouncyCastle.Asn1.Ess::SigningCertificateV2
namespace Org::BouncyCastle::Asn1::Ess {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(167))
// CS Name: Org.BouncyCastle.Asn1.Ess.SigningCertificateV2
class CORDL_TYPE SigningCertificateV2 : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SigningCertificateV2() = default;

// Ctor Parameters [CppParam { name: "", ty: "SigningCertificateV2", modifiers: " const&", def_value: None }]
constexpr SigningCertificateV2(SigningCertificateV2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SigningCertificateV2", modifiers: "&&", def_value: None }]
constexpr SigningCertificateV2(SigningCertificateV2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SigningCertificateV2(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr SigningCertificateV2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SigningCertificateV2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SigningCertificateV2& operator=(SigningCertificateV2&& o) noexcept = default;
  constexpr SigningCertificateV2& operator=(SigningCertificateV2 const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_certs, put=__set_certs))  certs;

constexpr void __set_certs(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_certs() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_policies, put=__set_policies))  policies;

constexpr void __set_policies(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_policies() const;


// Methods

/// @brief Method GetInstance addr 0xe0def8 size 0x190 virtual false final false
static Org::BouncyCastle::Asn1::Ess::SigningCertificateV2 GetInstance(::bs_hook::Il2CppWrapperType o) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit SigningCertificateV2(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe0e088 size 0x184 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "cert", ty: "Org::BouncyCastle::Asn1::Ess::EssCertIDv2", modifiers: "", def_value: None }]
explicit SigningCertificateV2(Org::BouncyCastle::Asn1::Ess::EssCertIDv2 cert) ;

/// @brief Method .ctor addr 0xe0e20c size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Ess::EssCertIDv2 cert) ;

// Ctor Parameters [CppParam { name: "certs", ty: "::ArrayW<Org::BouncyCastle::Asn1::Ess::EssCertIDv2>", modifiers: "", def_value: None }]
explicit SigningCertificateV2(::ArrayW<Org::BouncyCastle::Asn1::Ess::EssCertIDv2> certs) ;

/// @brief Method .ctor addr 0xe0e288 size 0x7c virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::Ess::EssCertIDv2> certs) ;

// Ctor Parameters [CppParam { name: "certs", ty: "::ArrayW<Org::BouncyCastle::Asn1::Ess::EssCertIDv2>", modifiers: "", def_value: None }, CppParam { name: "policies", ty: "::ArrayW<Org::BouncyCastle::Asn1::X509::PolicyInformation>", modifiers: "", def_value: None }]
explicit SigningCertificateV2(::ArrayW<Org::BouncyCastle::Asn1::Ess::EssCertIDv2> certs, ::ArrayW<Org::BouncyCastle::Asn1::X509::PolicyInformation> policies) ;

/// @brief Method .ctor addr 0xe0e304 size 0xa4 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::Ess::EssCertIDv2> certs, ::ArrayW<Org::BouncyCastle::Asn1::X509::PolicyInformation> policies) ;

/// @brief Method GetCerts addr 0xe0e3a8 size 0x140 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::Ess::EssCertIDv2> GetCerts() ;

/// @brief Method GetPolicies addr 0xe0e4e8 size 0x118 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::X509::PolicyInformation> GetPolicies() ;

/// @brief Method ToAsn1Object addr 0xe0e600 size 0x148 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ess
NEED_NO_BOX(Org::BouncyCastle::Asn1::Ess::SigningCertificateV2);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Ess::SigningCertificateV2, "Org.BouncyCastle.Asn1.Ess", "SigningCertificateV2");
