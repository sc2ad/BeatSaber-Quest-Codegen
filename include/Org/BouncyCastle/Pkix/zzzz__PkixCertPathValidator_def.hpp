#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Pkix {
class PkixCertPathValidatorResult;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathValidator;
}
// Type: Org.BouncyCastle.Pkix::PkixCertPathValidator
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1722))
// CS Name: Org.BouncyCastle.Pkix.PkixCertPathValidator
class CORDL_TYPE PkixCertPathValidator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PkixCertPathValidator() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidator", modifiers: " const&", def_value: None }]
constexpr PkixCertPathValidator(PkixCertPathValidator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidator", modifiers: "&&", def_value: None }]
constexpr PkixCertPathValidator(PkixCertPathValidator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkixCertPathValidator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PkixCertPathValidator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkixCertPathValidator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkixCertPathValidator& operator=(PkixCertPathValidator&& o) noexcept = default;
  constexpr PkixCertPathValidator& operator=(PkixCertPathValidator const& o) noexcept = default;
                


// Methods

/// @brief Method Validate addr 0x1068270 size 0x1eec virtual true final false
 ::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult Validate(::Org::BouncyCastle::Pkix::PkixCertPath certPath, ::Org::BouncyCastle::Pkix::PkixParameters paramsPkix) ;

/// @brief Method CheckCertificate addr 0x106a87c size 0x108 virtual false final false
static void CheckCertificate(::Org::BouncyCastle::X509::X509Certificate cert) ;

// Ctor Parameters []
explicit PkixCertPathValidator() ;

/// @brief Method .ctor addr 0x1067cb8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixCertPathValidator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixCertPathValidator, "Org.BouncyCastle.Pkix", "PkixCertPathValidator");
