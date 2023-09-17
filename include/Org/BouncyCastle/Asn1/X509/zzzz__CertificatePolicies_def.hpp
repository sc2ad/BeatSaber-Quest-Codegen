#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyInformation;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CertificatePolicies;
}
// Type: Org.BouncyCastle.Asn1.X509::CertificatePolicies
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(349))
// CS Name: Org.BouncyCastle.Asn1.X509.CertificatePolicies
class CORDL_TYPE CertificatePolicies : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CertificatePolicies() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificatePolicies", modifiers: " const&", def_value: None }]
constexpr CertificatePolicies(CertificatePolicies const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificatePolicies", modifiers: "&&", def_value: None }]
constexpr CertificatePolicies(CertificatePolicies&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificatePolicies(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertificatePolicies& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificatePolicies& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificatePolicies& operator=(CertificatePolicies&& o) noexcept = default;
  constexpr CertificatePolicies& operator=(CertificatePolicies const& o) noexcept = default;
                


// Fields

 ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation> __declspec(property(get=__get_policyInformation, put=__set_policyInformation))  policyInformation;

constexpr void __set_policyInformation(::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation> value) ;

constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation> __get_policyInformation() const;


// Methods

/// @brief Method Copy addr 0xffa60c size 0x78 virtual false final false
static ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation> Copy(::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation> policyInfo) ;

/// @brief Method GetInstance addr 0xffa684 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::CertificatePolicies GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0xffa854 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::CertificatePolicies GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

/// @brief Method FromExtensions addr 0xffa86c size 0x68 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::CertificatePolicies FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

// Ctor Parameters [CppParam { name: "name", ty: "::Org::BouncyCastle::Asn1::X509::PolicyInformation", modifiers: "", def_value: None }]
explicit CertificatePolicies(::Org::BouncyCastle::Asn1::X509::PolicyInformation name) ;

/// @brief Method .ctor addr 0xffa8d4 size 0xa8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::PolicyInformation name) ;

// Ctor Parameters [CppParam { name: "policyInformation", ty: "::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation>", modifiers: "", def_value: None }]
explicit CertificatePolicies(::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation> policyInformation) ;

/// @brief Method .ctor addr 0xffa97c size 0x30 virtual false final false
 void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation> policyInformation) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CertificatePolicies(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xffa728 size 0x12c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetPolicyInformation addr 0xffa9ac size 0x8 virtual true final false
 ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation> GetPolicyInformation() ;

/// @brief Method GetPolicyInformation addr 0xffa9b4 size 0xa4 virtual true final false
 ::Org::BouncyCastle::Asn1::X509::PolicyInformation GetPolicyInformation(::Org::BouncyCastle::Asn1::DerObjectIdentifier policyIdentifier) ;

/// @brief Method ToAsn1Object addr 0xffaa58 size 0x68 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method ToString addr 0xffaac0 size 0x13c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::CertificatePolicies);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::CertificatePolicies, "Org.BouncyCastle.Asn1.X509", "CertificatePolicies");
