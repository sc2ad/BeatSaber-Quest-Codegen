#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPathValidatorResult;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixAttrCertPathValidator;
}
// Type: Org.BouncyCastle.Pkix::PkixAttrCertPathValidator
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1712))
// CS Name: Org.BouncyCastle.Pkix.PkixAttrCertPathValidator
class CORDL_TYPE PkixAttrCertPathValidator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PkixAttrCertPathValidator() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixAttrCertPathValidator", modifiers: " const&", def_value: None }]
constexpr PkixAttrCertPathValidator(PkixAttrCertPathValidator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixAttrCertPathValidator", modifiers: "&&", def_value: None }]
constexpr PkixAttrCertPathValidator(PkixAttrCertPathValidator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkixAttrCertPathValidator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PkixAttrCertPathValidator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkixAttrCertPathValidator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkixAttrCertPathValidator& operator=(PkixAttrCertPathValidator&& o) noexcept = default;
  constexpr PkixAttrCertPathValidator& operator=(PkixAttrCertPathValidator const& o) noexcept = default;
                


// Methods

/// @brief Method Validate addr 0x105fa58 size 0x3cc virtual true final false
 Org::BouncyCastle::Pkix::PkixCertPathValidatorResult Validate(Org::BouncyCastle::Pkix::PkixCertPath certPath, Org::BouncyCastle::Pkix::PkixParameters pkixParams) ;

static Org::BouncyCastle::Pkix::PkixAttrCertPathValidator New_ctor() ;

/// @brief Method .ctor addr 0x105f0f8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(Org::BouncyCastle::Pkix::PkixAttrCertPathValidator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkix::PkixAttrCertPathValidator, "Org.BouncyCastle.Pkix", "PkixAttrCertPathValidator");
