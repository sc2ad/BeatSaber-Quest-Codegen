#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CrlDistPoint;
}
namespace Org::BouncyCastle::X509 {
class IX509Extension;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Pkix {
class PkixBuilderParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::X509 {
class X509Crl;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Pkix {
class PkixCrlUtilities;
}
namespace Org::BouncyCastle::Pkix {
class PkixPolicyNode;
}
namespace Org::BouncyCastle::Pkix {
class CertStatus;
}
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPoint;
}
namespace Org::BouncyCastle::X509::Store {
class X509AttrCertStoreSelector;
}
namespace Org::BouncyCastle::Pkix {
class TrustAnchor;
}
namespace Org::BouncyCastle::X509::Store {
class X509CrlStoreSelector;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::X509::Store {
class X509CertStoreSelector;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathValidatorUtilities;
}
// Type: Org.BouncyCastle.Pkix::PkixCertPathValidatorUtilities
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1724))
// CS Name: Org.BouncyCastle.Pkix.PkixCertPathValidatorUtilities
class CORDL_TYPE PkixCertPathValidatorUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PkixCertPathValidatorUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidatorUtilities", modifiers: " const&", def_value: None }]
constexpr PkixCertPathValidatorUtilities(PkixCertPathValidatorUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidatorUtilities", modifiers: "&&", def_value: None }]
constexpr PkixCertPathValidatorUtilities(PkixCertPathValidatorUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkixCertPathValidatorUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PkixCertPathValidatorUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkixCertPathValidatorUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkixCertPathValidatorUtilities& operator=(PkixCertPathValidatorUtilities&& o) noexcept = default;
  constexpr PkixCertPathValidatorUtilities& operator=(PkixCertPathValidatorUtilities const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Pkix::PkixCrlUtilities __declspec(property(get=__get_CrlUtilities, put=__set_CrlUtilities))  CrlUtilities;

static void __set_CrlUtilities(Org::BouncyCastle::Pkix::PkixCrlUtilities value) ;

static Org::BouncyCastle::Pkix::PkixCrlUtilities __get_CrlUtilities() ;

static ::StringW __declspec(property(get=__get_ANY_POLICY, put=__set_ANY_POLICY))  ANY_POLICY;

static void __set_ANY_POLICY(::StringW value) ;

static ::StringW __get_ANY_POLICY() ;

static ::StringW __declspec(property(get=__get_CRL_NUMBER, put=__set_CRL_NUMBER))  CRL_NUMBER;

static void __set_CRL_NUMBER(::StringW value) ;

static ::StringW __get_CRL_NUMBER() ;

static int32_t __declspec(property(get=__get_KEY_CERT_SIGN, put=__set_KEY_CERT_SIGN))  KEY_CERT_SIGN;

static void __set_KEY_CERT_SIGN(int32_t value) ;

static int32_t __get_KEY_CERT_SIGN() ;

static int32_t __declspec(property(get=__get_CRL_SIGN, put=__set_CRL_SIGN))  CRL_SIGN;

static void __set_CRL_SIGN(int32_t value) ;

static int32_t __get_CRL_SIGN() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_crlReasons, put=__set_crlReasons))  crlReasons;

static void __set_crlReasons(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_crlReasons() ;


// Methods

/// @brief Method FindTrustAnchor addr 0x106a2f4 size 0x588 virtual false final false
static Org::BouncyCastle::Pkix::TrustAnchor FindTrustAnchor(Org::BouncyCastle::X509::X509Certificate cert, Org::BouncyCastle::Utilities::Collections::ISet trustAnchors) ;

/// @brief Method IsIssuerTrustAnchor addr 0x105f100 size 0xe8 virtual false final false
static bool IsIssuerTrustAnchor(Org::BouncyCastle::X509::X509Certificate cert, Org::BouncyCastle::Utilities::Collections::ISet trustAnchors) ;

/// @brief Method AddAdditionalStoresFromAltNames addr 0x105f314 size 0x378 virtual false final false
static void AddAdditionalStoresFromAltNames(Org::BouncyCastle::X509::X509Certificate cert, Org::BouncyCastle::Pkix::PkixParameters pkixParams) ;

/// @brief Method GetValidDate addr 0x1074920 size 0x84 virtual false final false
static System::DateTime GetValidDate(Org::BouncyCastle::Pkix::PkixParameters paramsPKIX) ;

/// @brief Method GetIssuerPrincipal addr 0x1074574 size 0x160 virtual false final false
static Org::BouncyCastle::Asn1::X509::X509Name GetIssuerPrincipal(::bs_hook::Il2CppWrapperType cert) ;

/// @brief Method IsSelfIssued addr 0x105f9f4 size 0x5c virtual false final false
static bool IsSelfIssued(Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method GetAlgorithmIdentifier addr 0x106ab48 size 0xe8 virtual false final false
static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier GetAlgorithmIdentifier(Org::BouncyCastle::Crypto::AsymmetricKeyParameter key) ;

/// @brief Method IsAnyPolicy addr 0x10749a4 size 0x158 virtual false final false
static bool IsAnyPolicy(Org::BouncyCastle::Utilities::Collections::ISet policySet) ;

/// @brief Method AddAdditionalStoreFromLocation addr 0x10746d4 size 0x24c virtual false final false
static void AddAdditionalStoreFromLocation(::StringW location, Org::BouncyCastle::Pkix::PkixParameters pkixParams) ;

/// @brief Method GetSerialNumber addr 0x1074afc size 0xf4 virtual false final false
static Org::BouncyCastle::Math::BigInteger GetSerialNumber(::bs_hook::Il2CppWrapperType cert) ;

/// @brief Method GetQualifierSet addr 0x1074bf0 size 0x45c virtual false final false
static Org::BouncyCastle::Utilities::Collections::ISet GetQualifierSet(Org::BouncyCastle::Asn1::Asn1Sequence qualifiers) ;

/// @brief Method RemovePolicyNode addr 0x107504c size 0x13c virtual false final false
static Org::BouncyCastle::Pkix::PkixPolicyNode RemovePolicyNode(Org::BouncyCastle::Pkix::PkixPolicyNode validPolicyTree, ::ArrayW<System::Collections::IList> policyNodes, Org::BouncyCastle::Pkix::PkixPolicyNode _node) ;

/// @brief Method RemovePolicyNodeRecurse addr 0x1075188 size 0x430 virtual false final false
static void RemovePolicyNodeRecurse(::ArrayW<System::Collections::IList> policyNodes, Org::BouncyCastle::Pkix::PkixPolicyNode _node) ;

/// @brief Method PrepareNextCertB1 addr 0x10755b8 size 0xb40 virtual false final false
static void PrepareNextCertB1(int32_t i, ::ArrayW<System::Collections::IList> policyNodes, ::StringW id_p, System::Collections::IDictionary m_idp, Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method PrepareNextCertB2 addr 0x10761b8 size 0x6d0 virtual false final false
static Org::BouncyCastle::Pkix::PkixPolicyNode PrepareNextCertB2(int32_t i, ::ArrayW<System::Collections::IList> policyNodes, ::StringW id_p, Org::BouncyCastle::Pkix::PkixPolicyNode validPolicyTree) ;

/// @brief Method GetCertStatus addr 0x1076888 size 0x45c virtual false final false
static void GetCertStatus(System::DateTime validDate, Org::BouncyCastle::X509::X509Crl crl, ::bs_hook::Il2CppWrapperType cert, Org::BouncyCastle::Pkix::CertStatus certStatus) ;

/// @brief Method GetNextWorkingKey addr 0x10722a0 size 0x3f4 virtual false final false
static Org::BouncyCastle::Crypto::AsymmetricKeyParameter GetNextWorkingKey(System::Collections::IList certs, int32_t index) ;

/// @brief Method GetValidCertDateFromValidityModel addr 0x105fe24 size 0x474 virtual false final false
static System::DateTime GetValidCertDateFromValidityModel(Org::BouncyCastle::Pkix::PkixParameters paramsPkix, Org::BouncyCastle::Pkix::PkixCertPath certPath, int32_t index) ;

/// @brief Method FindCertificates addr 0x105dcb0 size 0x808 virtual false final false
static System::Collections::ICollection FindCertificates(Org::BouncyCastle::X509::Store::X509CertStoreSelector certSelect, System::Collections::IList certStores) ;

/// @brief Method GetCrlIssuersFromDistributionPoint addr 0x1076ce4 size 0x4c8 virtual false final false
static void GetCrlIssuersFromDistributionPoint(Org::BouncyCastle::Asn1::X509::DistributionPoint dp, System::Collections::ICollection issuerPrincipals, Org::BouncyCastle::X509::Store::X509CrlStoreSelector selector, Org::BouncyCastle::Pkix::PkixParameters pkixParams) ;

/// @brief Method GetCompleteCrls addr 0x10771ac size 0x5a0 virtual false final false
static Org::BouncyCastle::Utilities::Collections::ISet GetCompleteCrls(Org::BouncyCastle::Asn1::X509::DistributionPoint dp, ::bs_hook::Il2CppWrapperType cert, System::DateTime currentDate, Org::BouncyCastle::Pkix::PkixParameters paramsPKIX) ;

/// @brief Method GetDeltaCrls addr 0x107774c size 0x898 virtual false final false
static Org::BouncyCastle::Utilities::Collections::ISet GetDeltaCrls(System::DateTime currentDate, Org::BouncyCastle::Pkix::PkixParameters paramsPKIX, Org::BouncyCastle::X509::X509Crl completeCRL) ;

/// @brief Method isDeltaCrl addr 0x1077fe4 size 0xf8 virtual false final false
static bool isDeltaCrl(Org::BouncyCastle::X509::X509Crl crl) ;

/// @brief Method FindCertificates addr 0x105d4a4 size 0x808 virtual false final false
static System::Collections::ICollection FindCertificates(Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector certSelect, System::Collections::IList certStores) ;

/// @brief Method AddAdditionalStoresFromCrlDistributionPoint addr 0x10780dc size 0x218 virtual false final false
static void AddAdditionalStoresFromCrlDistributionPoint(Org::BouncyCastle::Asn1::X509::CrlDistPoint crldp, Org::BouncyCastle::Pkix::PkixParameters pkixParams) ;

/// @brief Method ProcessCertD1i addr 0x10782f4 size 0x3fc virtual false final false
static bool ProcessCertD1i(int32_t index, ::ArrayW<System::Collections::IList> policyNodes, Org::BouncyCastle::Asn1::DerObjectIdentifier pOid, Org::BouncyCastle::Utilities::Collections::ISet pq) ;

/// @brief Method ProcessCertD1ii addr 0x10786f0 size 0x3e0 virtual false final false
static void ProcessCertD1ii(int32_t index, ::ArrayW<System::Collections::IList> policyNodes, Org::BouncyCastle::Asn1::DerObjectIdentifier _poid, Org::BouncyCastle::Utilities::Collections::ISet _pq) ;

/// @brief Method FindIssuerCerts addr 0x105f68c size 0x368 virtual false final false
static System::Collections::ICollection FindIssuerCerts(Org::BouncyCastle::X509::X509Certificate cert, Org::BouncyCastle::Pkix::PkixBuilderParameters pkixParams) ;

/// @brief Method GetExtensionValue addr 0x10760f8 size 0xc0 virtual false final false
static Org::BouncyCastle::Asn1::Asn1Object GetExtensionValue(Org::BouncyCastle::X509::IX509Extension ext, Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

// Ctor Parameters []
explicit PkixCertPathValidatorUtilities() ;

/// @brief Method .ctor addr 0x1078ecc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities, "Org.BouncyCastle.Pkix", "PkixCertPathValidatorUtilities");
