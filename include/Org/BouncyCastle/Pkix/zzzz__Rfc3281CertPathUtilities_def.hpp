#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
struct DateTime;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPathValidatorResult;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
namespace Org::BouncyCastle::Pkix {
class CertStatus;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
namespace Org::BouncyCastle::Pkix {
class ReasonsMask;
}
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class Rfc3281CertPathUtilities;
}
// Type: Org.BouncyCastle.Pkix::Rfc3281CertPathUtilities
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1731))
// CS Name: Org.BouncyCastle.Pkix.Rfc3281CertPathUtilities
class CORDL_TYPE Rfc3281CertPathUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Rfc3281CertPathUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "Rfc3281CertPathUtilities", modifiers: " const&", def_value: None }]
constexpr Rfc3281CertPathUtilities(Rfc3281CertPathUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Rfc3281CertPathUtilities", modifiers: "&&", def_value: None }]
constexpr Rfc3281CertPathUtilities(Rfc3281CertPathUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Rfc3281CertPathUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Rfc3281CertPathUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Rfc3281CertPathUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Rfc3281CertPathUtilities& operator=(Rfc3281CertPathUtilities&& o) noexcept = default;
  constexpr Rfc3281CertPathUtilities& operator=(Rfc3281CertPathUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method ProcessAttrCert7 addr 0x108d9f8 size 0x6ec virtual false final false
static void ProcessAttrCert7(Org::BouncyCastle::X509::IX509AttributeCertificate attrCert, Org::BouncyCastle::Pkix::PkixCertPath certPath, Org::BouncyCastle::Pkix::PkixCertPath holderCertPath, Org::BouncyCastle::Pkix::PkixParameters pkixParams) ;

/// @brief Method CheckCrls addr 0x108e0e4 size 0xc94 virtual false final false
static void CheckCrls(Org::BouncyCastle::X509::IX509AttributeCertificate attrCert, Org::BouncyCastle::Pkix::PkixParameters paramsPKIX, Org::BouncyCastle::X509::X509Certificate issuerCert, System::DateTime validDate, System::Collections::IList certPathCerts) ;

/// @brief Method AdditionalChecks addr 0x108f578 size 0x7d8 virtual false final false
static void AdditionalChecks(Org::BouncyCastle::X509::IX509AttributeCertificate attrCert, Org::BouncyCastle::Pkix::PkixParameters pkixParams) ;

/// @brief Method ProcessAttrCert5 addr 0x108fd50 size 0x1cc virtual false final false
static void ProcessAttrCert5(Org::BouncyCastle::X509::IX509AttributeCertificate attrCert, Org::BouncyCastle::Pkix::PkixParameters pkixParams) ;

/// @brief Method ProcessAttrCert4 addr 0x108ff1c size 0x478 virtual false final false
static void ProcessAttrCert4(Org::BouncyCastle::X509::X509Certificate acIssuerCert, Org::BouncyCastle::Pkix::PkixParameters pkixParams) ;

/// @brief Method ProcessAttrCert3 addr 0x1090394 size 0x110 virtual false final false
static void ProcessAttrCert3(Org::BouncyCastle::X509::X509Certificate acIssuerCert, Org::BouncyCastle::Pkix::PkixParameters pkixParams) ;

/// @brief Method ProcessAttrCert2 addr 0x10904a4 size 0x140 virtual false final false
static Org::BouncyCastle::Pkix::PkixCertPathValidatorResult ProcessAttrCert2(Org::BouncyCastle::Pkix::PkixCertPath certPath, Org::BouncyCastle::Pkix::PkixParameters pkixParams) ;

/// @brief Method ProcessAttrCert1 addr 0x10905e4 size 0xc40 virtual false final false
static Org::BouncyCastle::Pkix::PkixCertPath ProcessAttrCert1(Org::BouncyCastle::X509::IX509AttributeCertificate attrCert, Org::BouncyCastle::Pkix::PkixParameters pkixParams) ;

/// @brief Method CheckCrl addr 0x108ed78 size 0x800 virtual false final false
static void CheckCrl(Org::BouncyCastle::Asn1::X509::DistributionPoint dp, Org::BouncyCastle::X509::IX509AttributeCertificate attrCert, Org::BouncyCastle::Pkix::PkixParameters paramsPKIX, System::DateTime validDate, Org::BouncyCastle::X509::X509Certificate issuerCert, Org::BouncyCastle::Pkix::CertStatus certStatus, Org::BouncyCastle::Pkix::ReasonsMask reasonMask, System::Collections::IList certPathCerts) ;

static Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities New_ctor() ;

/// @brief Method .ctor addr 0x1091224 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities, "Org.BouncyCastle.Pkix", "Rfc3281CertPathUtilities");
