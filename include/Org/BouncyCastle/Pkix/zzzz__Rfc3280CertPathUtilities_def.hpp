#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System::Collections {
class IList;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Pkix {
class PkixCrlUtilities;
}
namespace Org::BouncyCastle::Pkix {
class PkixNameConstraintValidator;
}
namespace Org::BouncyCastle::Pkix {
class CertStatus;
}
namespace Org::BouncyCastle::X509 {
class X509Crl;
}
namespace Org::BouncyCastle::Pkix {
class PkixPolicyNode;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPoint;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Pkix {
class ReasonsMask;
}
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class Rfc3280CertPathUtilities;
}
// Type: Org.BouncyCastle.Pkix::Rfc3280CertPathUtilities
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1730))
// CS Name: Org.BouncyCastle.Pkix.Rfc3280CertPathUtilities
class CORDL_TYPE Rfc3280CertPathUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Rfc3280CertPathUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "Rfc3280CertPathUtilities", modifiers: " const&", def_value: None }]
constexpr Rfc3280CertPathUtilities(Rfc3280CertPathUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Rfc3280CertPathUtilities", modifiers: "&&", def_value: None }]
constexpr Rfc3280CertPathUtilities(Rfc3280CertPathUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Rfc3280CertPathUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Rfc3280CertPathUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Rfc3280CertPathUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Rfc3280CertPathUtilities& operator=(Rfc3280CertPathUtilities&& o) noexcept = default;
  constexpr Rfc3280CertPathUtilities& operator=(Rfc3280CertPathUtilities const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Pkix::PkixCrlUtilities __declspec(property(get=__get_CrlUtilities, put=__set_CrlUtilities))  CrlUtilities;

static void __set_CrlUtilities(::Org::BouncyCastle::Pkix::PkixCrlUtilities value) ;

static ::Org::BouncyCastle::Pkix::PkixCrlUtilities __get_CrlUtilities() ;

static ::StringW __declspec(property(get=__get_ANY_POLICY, put=__set_ANY_POLICY))  ANY_POLICY;

static void __set_ANY_POLICY(::StringW value) ;

static ::StringW __get_ANY_POLICY() ;

static int32_t __declspec(property(get=__get_KEY_CERT_SIGN, put=__set_KEY_CERT_SIGN))  KEY_CERT_SIGN;

static void __set_KEY_CERT_SIGN(int32_t value) ;

static int32_t __get_KEY_CERT_SIGN() ;

static int32_t __declspec(property(get=__get_CRL_SIGN, put=__set_CRL_SIGN))  CRL_SIGN;

static void __set_CRL_SIGN(int32_t value) ;

static int32_t __get_CRL_SIGN() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_CrlReasons, put=__set_CrlReasons))  CrlReasons;

static void __set_CrlReasons(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_CrlReasons() ;


// Methods

/// @brief Method ProcessCrlB2 addr 0x1087494 size 0xe10 virtual false final false
static void ProcessCrlB2(::Org::BouncyCastle::Asn1::X509::DistributionPoint dp, ::bs_hook::Il2CppWrapperType cert, ::Org::BouncyCastle::X509::X509Crl crl) ;

/// @brief Method ProcessCertBC addr 0x106b2b8 size 0xa84 virtual false final false
static void ProcessCertBC(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator nameConstraintValidator) ;

/// @brief Method PrepareNextCertA addr 0x106ddec size 0x4dc virtual false final false
static void PrepareNextCertA(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index) ;

/// @brief Method ProcessCertD addr 0x106bd3c size 0x1dd8 virtual false final false
static ::Org::BouncyCastle::Pkix::PkixPolicyNode ProcessCertD(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, ::Org::BouncyCastle::Utilities::Collections::ISet acceptablePolicies, ::Org::BouncyCastle::Pkix::PkixPolicyNode validPolicyTree, ::ArrayW<::System::Collections::IList> policyNodes, int32_t inhibitAnyPolicy) ;

/// @brief Method ProcessCrlB1 addr 0x10882a4 size 0x39c virtual false final false
static void ProcessCrlB1(::Org::BouncyCastle::Asn1::X509::DistributionPoint dp, ::bs_hook::Il2CppWrapperType cert, ::Org::BouncyCastle::X509::X509Crl crl) ;

/// @brief Method ProcessCrlD addr 0x1088640 size 0x318 virtual false final false
static ::Org::BouncyCastle::Pkix::ReasonsMask ProcessCrlD(::Org::BouncyCastle::X509::X509Crl crl, ::Org::BouncyCastle::Asn1::X509::DistributionPoint dp) ;

/// @brief Method ProcessCrlF addr 0x1088958 size 0xe0c virtual false final false
static ::Org::BouncyCastle::Utilities::Collections::ISet ProcessCrlF(::Org::BouncyCastle::X509::X509Crl crl, ::bs_hook::Il2CppWrapperType cert, ::Org::BouncyCastle::X509::X509Certificate defaultCRLSignCert, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter defaultCRLSignKey, ::Org::BouncyCastle::Pkix::PkixParameters paramsPKIX, ::System::Collections::IList certPathCerts) ;

/// @brief Method ProcessCrlG addr 0x1089764 size 0x46c virtual false final false
static ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter ProcessCrlG(::Org::BouncyCastle::X509::X509Crl crl, ::Org::BouncyCastle::Utilities::Collections::ISet keys) ;

/// @brief Method ProcessCrlH addr 0x1089bd0 size 0x46c virtual false final false
static ::Org::BouncyCastle::X509::X509Crl ProcessCrlH(::Org::BouncyCastle::Utilities::Collections::ISet deltaCrls, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter key) ;

/// @brief Method CheckCrl addr 0x108a03c size 0xbb8 virtual false final false
static void CheckCrl(::Org::BouncyCastle::Asn1::X509::DistributionPoint dp, ::Org::BouncyCastle::Pkix::PkixParameters paramsPKIX, ::Org::BouncyCastle::X509::X509Certificate cert, ::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Certificate defaultCRLSignCert, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter defaultCRLSignKey, ::Org::BouncyCastle::Pkix::CertStatus certStatus, ::Org::BouncyCastle::Pkix::ReasonsMask reasonMask, ::System::Collections::IList certPathCerts) ;

/// @brief Method CheckCrls addr 0x108b2cc size 0xa08 virtual false final false
static void CheckCrls(::Org::BouncyCastle::Pkix::PkixParameters paramsPKIX, ::Org::BouncyCastle::X509::X509Certificate cert, ::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Certificate sign, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter workingPublicKey, ::System::Collections::IList certPathCerts) ;

/// @brief Method PrepareCertB addr 0x106e2c8 size 0x1e94 virtual false final false
static ::Org::BouncyCastle::Pkix::PkixPolicyNode PrepareCertB(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, ::ArrayW<::System::Collections::IList> policyNodes, ::Org::BouncyCastle::Pkix::PkixPolicyNode validPolicyTree, int32_t policyMapping) ;

/// @brief Method ProcessCrlA1ii addr 0x108bcd4 size 0x4cc virtual false final false
static ::ArrayW<::Org::BouncyCastle::Utilities::Collections::ISet> ProcessCrlA1ii(::System::DateTime currentDate, ::Org::BouncyCastle::Pkix::PkixParameters paramsPKIX, ::Org::BouncyCastle::X509::X509Certificate cert, ::Org::BouncyCastle::X509::X509Crl crl) ;

/// @brief Method ProcessCrlA1i addr 0x108c1a0 size 0x4a0 virtual false final false
static ::Org::BouncyCastle::Utilities::Collections::ISet ProcessCrlA1i(::System::DateTime currentDate, ::Org::BouncyCastle::Pkix::PkixParameters paramsPKIX, ::Org::BouncyCastle::X509::X509Certificate cert, ::Org::BouncyCastle::X509::X509Crl crl) ;

/// @brief Method ProcessCertF addr 0x106dd74 size 0x78 virtual false final false
static void ProcessCertF(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, ::Org::BouncyCastle::Pkix::PkixPolicyNode validPolicyTree, int32_t explicitPolicy) ;

/// @brief Method ProcessCertA addr 0x106ac30 size 0x688 virtual false final false
static void ProcessCertA(::Org::BouncyCastle::Pkix::PkixCertPath certPath, ::Org::BouncyCastle::Pkix::PkixParameters paramsPKIX, int32_t index, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter workingPublicKey, ::Org::BouncyCastle::Asn1::X509::X509Name workingIssuerName, ::Org::BouncyCastle::X509::X509Certificate sign) ;

/// @brief Method PrepareNextCertI1 addr 0x1070a70 size 0x424 virtual false final false
static int32_t PrepareNextCertI1(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, int32_t explicitPolicy) ;

/// @brief Method PrepareNextCertI2 addr 0x1070e94 size 0x428 virtual false final false
static int32_t PrepareNextCertI2(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, int32_t policyMapping) ;

/// @brief Method PrepareNextCertG addr 0x107015c size 0x4f4 virtual false final false
static void PrepareNextCertG(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, ::Org::BouncyCastle::Pkix::PkixNameConstraintValidator nameConstraintValidator) ;

/// @brief Method PrepareNextCertJ addr 0x10712bc size 0x270 virtual false final false
static int32_t PrepareNextCertJ(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, int32_t inhibitAnyPolicy) ;

/// @brief Method PrepareNextCertK addr 0x107152c size 0x2d0 virtual false final false
static void PrepareNextCertK(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index) ;

/// @brief Method PrepareNextCertL addr 0x10717fc size 0x1b0 virtual false final false
static int32_t PrepareNextCertL(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, int32_t maxPathLength) ;

/// @brief Method PrepareNextCertM addr 0x10719ac size 0x27c virtual false final false
static int32_t PrepareNextCertM(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, int32_t maxPathLength) ;

/// @brief Method PrepareNextCertN addr 0x1071c28 size 0x1c4 virtual false final false
static void PrepareNextCertN(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index) ;

/// @brief Method PrepareNextCertO addr 0x1071dec size 0x4b4 virtual false final false
static void PrepareNextCertO(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, ::Org::BouncyCastle::Utilities::Collections::ISet criticalExtensions, ::System::Collections::IList pathCheckers) ;

/// @brief Method PrepareNextCertH1 addr 0x1070650 size 0x160 virtual false final false
static int32_t PrepareNextCertH1(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, int32_t explicitPolicy) ;

/// @brief Method PrepareNextCertH2 addr 0x10707b0 size 0x160 virtual false final false
static int32_t PrepareNextCertH2(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, int32_t policyMapping) ;

/// @brief Method PrepareNextCertH3 addr 0x1070910 size 0x160 virtual false final false
static int32_t PrepareNextCertH3(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, int32_t inhibitAnyPolicy) ;

/// @brief Method WrapupCertA addr 0x1072694 size 0x7c virtual false final false
static int32_t WrapupCertA(int32_t explicitPolicy, ::Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method WrapupCertB addr 0x1072710 size 0x450 virtual false final false
static int32_t WrapupCertB(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, int32_t explicitPolicy) ;

/// @brief Method WrapupCertF addr 0x1072b60 size 0x498 virtual false final false
static void WrapupCertF(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, ::System::Collections::IList pathCheckers, ::Org::BouncyCastle::Utilities::Collections::ISet criticalExtensions) ;

/// @brief Method WrapupCertG addr 0x1072ff8 size 0x1520 virtual false final false
static ::Org::BouncyCastle::Pkix::PkixPolicyNode WrapupCertG(::Org::BouncyCastle::Pkix::PkixCertPath certPath, ::Org::BouncyCastle::Pkix::PkixParameters paramsPKIX, ::Org::BouncyCastle::Utilities::Collections::ISet userInitialPolicySet, int32_t index, ::ArrayW<::System::Collections::IList> policyNodes, ::Org::BouncyCastle::Pkix::PkixPolicyNode validPolicyTree, ::Org::BouncyCastle::Utilities::Collections::ISet acceptablePolicies) ;

/// @brief Method ProcessCrlC addr 0x108abf4 size 0x588 virtual false final false
static void ProcessCrlC(::Org::BouncyCastle::X509::X509Crl deltaCRL, ::Org::BouncyCastle::X509::X509Crl completeCRL, ::Org::BouncyCastle::Pkix::PkixParameters pkixParams) ;

/// @brief Method ProcessCrlI addr 0x108b17c size 0xb8 virtual false final false
static void ProcessCrlI(::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Crl deltacrl, ::bs_hook::Il2CppWrapperType cert, ::Org::BouncyCastle::Pkix::CertStatus certStatus, ::Org::BouncyCastle::Pkix::PkixParameters pkixParams) ;

/// @brief Method ProcessCrlJ addr 0x108b234 size 0x98 virtual false final false
static void ProcessCrlJ(::System::DateTime validDate, ::Org::BouncyCastle::X509::X509Crl completecrl, ::bs_hook::Il2CppWrapperType cert, ::Org::BouncyCastle::Pkix::CertStatus certStatus) ;

/// @brief Method ProcessCertE addr 0x106db14 size 0x260 virtual false final false
static ::Org::BouncyCastle::Pkix::PkixPolicyNode ProcessCertE(::Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index, ::Org::BouncyCastle::Pkix::PkixPolicyNode validPolicyTree) ;

// Ctor Parameters []
explicit Rfc3280CertPathUtilities() ;

/// @brief Method .ctor addr 0x108c9f0 size 0x1008 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities, "Org.BouncyCastle.Pkix", "Rfc3280CertPathUtilities");
