#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathChecker;
}
// Type: Org.BouncyCastle.Pkix::PkixCertPathChecker
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1721))
// CS Name: Org.BouncyCastle.Pkix.PkixCertPathChecker
class CORDL_TYPE PkixCertPathChecker : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PkixCertPathChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathChecker", modifiers: " const&", def_value: None }]
constexpr PkixCertPathChecker(PkixCertPathChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathChecker", modifiers: "&&", def_value: None }]
constexpr PkixCertPathChecker(PkixCertPathChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkixCertPathChecker(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PkixCertPathChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkixCertPathChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkixCertPathChecker& operator=(PkixCertPathChecker&& o) noexcept = default;
  constexpr PkixCertPathChecker& operator=(PkixCertPathChecker const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PkixCertPathChecker() ;

/// @brief Method .ctor addr 0x1068260 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(bool forward) ;

/// @brief Method IsForwardCheckingSupported addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsForwardCheckingSupported() ;

/// @brief Method GetSupportedExtensions addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Utilities::Collections::ISet GetSupportedExtensions() ;

/// @brief Method Check addr 0x0 size 0xffffffffffffffff virtual true final false
 void Check(Org::BouncyCastle::X509::X509Certificate cert, Org::BouncyCastle::Utilities::Collections::ISet unresolvedCritExts) ;

/// @brief Method Clone addr 0x1068268 size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType Clone() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(Org::BouncyCastle::Pkix::PkixCertPathChecker);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkix::PkixCertPathChecker, "Org.BouncyCastle.Pkix", "PkixCertPathChecker");
