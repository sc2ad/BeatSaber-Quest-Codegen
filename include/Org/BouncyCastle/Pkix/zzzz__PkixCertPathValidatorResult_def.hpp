#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Pkix {
class TrustAnchor;
}
namespace Org::BouncyCastle::Pkix {
class PkixPolicyNode;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathValidatorResult;
}
// Type: Org.BouncyCastle.Pkix::PkixCertPathValidatorResult
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1719))
// CS Name: Org.BouncyCastle.Pkix.PkixCertPathValidatorResult
class CORDL_TYPE PkixCertPathValidatorResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PkixCertPathValidatorResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidatorResult", modifiers: " const&", def_value: None }]
constexpr PkixCertPathValidatorResult(PkixCertPathValidatorResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidatorResult", modifiers: "&&", def_value: None }]
constexpr PkixCertPathValidatorResult(PkixCertPathValidatorResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkixCertPathValidatorResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PkixCertPathValidatorResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkixCertPathValidatorResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkixCertPathValidatorResult& operator=(PkixCertPathValidatorResult&& o) noexcept = default;
  constexpr PkixCertPathValidatorResult& operator=(PkixCertPathValidatorResult const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Pkix::TrustAnchor __declspec(property(get=__get_trustAnchor, put=__set_trustAnchor))  trustAnchor;

constexpr void __set_trustAnchor(Org::BouncyCastle::Pkix::TrustAnchor value) ;

constexpr Org::BouncyCastle::Pkix::TrustAnchor __get_trustAnchor() const;

 Org::BouncyCastle::Pkix::PkixPolicyNode __declspec(property(get=__get_policyTree, put=__set_policyTree))  policyTree;

constexpr void __set_policyTree(Org::BouncyCastle::Pkix::PkixPolicyNode value) ;

constexpr Org::BouncyCastle::Pkix::PkixPolicyNode __get_policyTree() const;

 Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_subjectPublicKey, put=__set_subjectPublicKey))  subjectPublicKey;

constexpr void __set_subjectPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_subjectPublicKey() const;


// Properties

 Org::BouncyCastle::Pkix::PkixPolicyNode __declspec(property(get=get_PolicyTree))  PolicyTree;

 Org::BouncyCastle::Pkix::TrustAnchor __declspec(property(get=get_TrustAnchor))  TrustAnchor;

 Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=get_SubjectPublicKey))  SubjectPublicKey;


// Methods

/// @brief Method get_PolicyTree addr 0x1067dfc size 0x8 virtual false final false
 Org::BouncyCastle::Pkix::PkixPolicyNode get_PolicyTree() ;

/// @brief Method get_TrustAnchor addr 0x1067e04 size 0x8 virtual false final false
 Org::BouncyCastle::Pkix::TrustAnchor get_TrustAnchor() ;

/// @brief Method get_SubjectPublicKey addr 0x1067e0c size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::AsymmetricKeyParameter get_SubjectPublicKey() ;

static Org::BouncyCastle::Pkix::PkixCertPathValidatorResult New_ctor(Org::BouncyCastle::Pkix::TrustAnchor trustAnchor, Org::BouncyCastle::Pkix::PkixPolicyNode policyTree, Org::BouncyCastle::Crypto::AsymmetricKeyParameter subjectPublicKey) ;

/// @brief Method .ctor addr 0x1067e14 size 0xb4 virtual false final false
 void _ctor(Org::BouncyCastle::Pkix::TrustAnchor trustAnchor, Org::BouncyCastle::Pkix::PkixPolicyNode policyTree, Org::BouncyCastle::Crypto::AsymmetricKeyParameter subjectPublicKey) ;

/// @brief Method Clone addr 0x1067ec8 size 0x78 virtual false final false
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method ToString addr 0x1067f40 size 0x170 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(Org::BouncyCastle::Pkix::PkixCertPathValidatorResult);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkix::PkixCertPathValidatorResult, "Org.BouncyCastle.Pkix", "PkixCertPathValidatorResult");
