#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathValidatorResult_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Pkix {
class TrustAnchor;
}
namespace Org::BouncyCastle::Pkix {
class PkixPolicyNode;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathBuilderResult;
}
// Type: Org.BouncyCastle.Pkix::PkixCertPathBuilderResult
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1719))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1720))
// CS Name: Org.BouncyCastle.Pkix.PkixCertPathBuilderResult
class CORDL_TYPE PkixCertPathBuilderResult : public Org::BouncyCastle::Pkix::PkixCertPathValidatorResult {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PkixCertPathBuilderResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathBuilderResult", modifiers: " const&", def_value: None }]
constexpr PkixCertPathBuilderResult(PkixCertPathBuilderResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathBuilderResult", modifiers: "&&", def_value: None }]
constexpr PkixCertPathBuilderResult(PkixCertPathBuilderResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkixCertPathBuilderResult(void* ptr) noexcept : Org::BouncyCastle::Pkix::PkixCertPathValidatorResult(ptr) {
}


  constexpr PkixCertPathBuilderResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkixCertPathBuilderResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkixCertPathBuilderResult& operator=(PkixCertPathBuilderResult&& o) noexcept = default;
  constexpr PkixCertPathBuilderResult& operator=(PkixCertPathBuilderResult const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Pkix::PkixCertPath __declspec(property(get=__get_certPath, put=__set_certPath))  certPath;

constexpr void __set_certPath(Org::BouncyCastle::Pkix::PkixCertPath value) ;

constexpr Org::BouncyCastle::Pkix::PkixCertPath __get_certPath() const;


// Properties

 Org::BouncyCastle::Pkix::PkixCertPath __declspec(property(get=get_CertPath))  CertPath;


// Methods

static Org::BouncyCastle::Pkix::PkixCertPathBuilderResult New_ctor(Org::BouncyCastle::Pkix::PkixCertPath certPath, Org::BouncyCastle::Pkix::TrustAnchor trustAnchor, Org::BouncyCastle::Pkix::PkixPolicyNode policyTree, Org::BouncyCastle::Crypto::AsymmetricKeyParameter subjectPublicKey) ;

/// @brief Method .ctor addr 0x105f294 size 0x80 virtual false final false
 void _ctor(Org::BouncyCastle::Pkix::PkixCertPath certPath, Org::BouncyCastle::Pkix::TrustAnchor trustAnchor, Org::BouncyCastle::Pkix::PkixPolicyNode policyTree, Org::BouncyCastle::Crypto::AsymmetricKeyParameter subjectPublicKey) ;

/// @brief Method get_CertPath addr 0x10680b0 size 0x8 virtual false final false
 Org::BouncyCastle::Pkix::PkixCertPath get_CertPath() ;

/// @brief Method ToString addr 0x10680b8 size 0x1a8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(Org::BouncyCastle::Pkix::PkixCertPathBuilderResult);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkix::PkixCertPathBuilderResult, "Org.BouncyCastle.Pkix", "PkixCertPathBuilderResult");
