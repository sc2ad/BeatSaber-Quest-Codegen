#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::X509 {
class X509Crl;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class PrincipalUtilities;
}
// Type: Org.BouncyCastle.X509::PrincipalUtilities
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1856))
// CS Name: Org.BouncyCastle.X509.PrincipalUtilities
class CORDL_TYPE PrincipalUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PrincipalUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrincipalUtilities", modifiers: " const&", def_value: None }]
constexpr PrincipalUtilities(PrincipalUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrincipalUtilities", modifiers: "&&", def_value: None }]
constexpr PrincipalUtilities(PrincipalUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrincipalUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PrincipalUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrincipalUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrincipalUtilities& operator=(PrincipalUtilities&& o) noexcept = default;
  constexpr PrincipalUtilities& operator=(PrincipalUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method GetIssuerX509Principal addr 0x10eacd8 size 0x118 virtual false final false
static Org::BouncyCastle::Asn1::X509::X509Name GetIssuerX509Principal(Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method GetSubjectX509Principal addr 0x10eadf0 size 0x118 virtual false final false
static Org::BouncyCastle::Asn1::X509::X509Name GetSubjectX509Principal(Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method GetIssuerX509Principal addr 0x10eaf08 size 0x118 virtual false final false
static Org::BouncyCastle::Asn1::X509::X509Name GetIssuerX509Principal(Org::BouncyCastle::X509::X509Crl crl) ;

static Org::BouncyCastle::X509::PrincipalUtilities New_ctor() ;

/// @brief Method .ctor addr 0x10eb020 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(Org::BouncyCastle::X509::PrincipalUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::PrincipalUtilities, "Org.BouncyCastle.X509", "PrincipalUtilities");
