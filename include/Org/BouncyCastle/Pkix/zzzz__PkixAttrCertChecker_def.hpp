#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixAttrCertChecker;
}
// Type: Org.BouncyCastle.Pkix::PkixAttrCertChecker
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1710))
// CS Name: Org.BouncyCastle.Pkix.PkixAttrCertChecker
class CORDL_TYPE PkixAttrCertChecker : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PkixAttrCertChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixAttrCertChecker", modifiers: " const&", def_value: None }]
constexpr PkixAttrCertChecker(PkixAttrCertChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixAttrCertChecker", modifiers: "&&", def_value: None }]
constexpr PkixAttrCertChecker(PkixAttrCertChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkixAttrCertChecker(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PkixAttrCertChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkixAttrCertChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkixAttrCertChecker& operator=(PkixAttrCertChecker&& o) noexcept = default;
  constexpr PkixAttrCertChecker& operator=(PkixAttrCertChecker const& o) noexcept = default;
                


// Methods

/// @brief Method GetSupportedExtensions addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Utilities::Collections::ISet GetSupportedExtensions() ;

/// @brief Method Check addr 0x0 size 0xffffffffffffffff virtual true final false
 void Check(Org::BouncyCastle::X509::IX509AttributeCertificate attrCert, Org::BouncyCastle::Pkix::PkixCertPath certPath, Org::BouncyCastle::Pkix::PkixCertPath holderCertPath, System::Collections::ICollection unresolvedCritExts) ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Pkix::PkixAttrCertChecker Clone() ;

static Org::BouncyCastle::Pkix::PkixAttrCertChecker New_ctor() ;

/// @brief Method .ctor addr 0x105c5b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(Org::BouncyCastle::Pkix::PkixAttrCertChecker);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkix::PkixAttrCertChecker, "Org.BouncyCastle.Pkix", "PkixAttrCertChecker");
