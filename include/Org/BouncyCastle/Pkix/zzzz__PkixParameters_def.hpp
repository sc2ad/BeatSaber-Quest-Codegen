#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::X509::Store {
class X509CertStoreSelector;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPathChecker;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
// Type: Org.BouncyCastle.Pkix::PkixParameters
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1713))
// CS Name: Org.BouncyCastle.Pkix.PkixParameters
class CORDL_TYPE PkixParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PkixParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixParameters", modifiers: " const&", def_value: None }]
constexpr PkixParameters(PkixParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixParameters", modifiers: "&&", def_value: None }]
constexpr PkixParameters(PkixParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkixParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PkixParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkixParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkixParameters& operator=(PkixParameters&& o) noexcept = default;
  constexpr PkixParameters& operator=(PkixParameters const& o) noexcept = default;
                


// Fields

/// @brief Field PkixValidityModel offset 0
static constexpr int32_t  PkixValidityModel{0};

/// @brief Field ChainValidityModel offset 0
static constexpr int32_t  ChainValidityModel{1};

 ::Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_trustAnchors, put=__set_trustAnchors))  trustAnchors;

constexpr void __set_trustAnchors(::Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr ::Org::BouncyCastle::Utilities::Collections::ISet __get_trustAnchors() const;

 ::Org::BouncyCastle::Utilities::Date::DateTimeObject __declspec(property(get=__get_date, put=__set_date))  date;

constexpr void __set_date(::Org::BouncyCastle::Utilities::Date::DateTimeObject value) ;

constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject __get_date() const;

 ::System::Collections::IList __declspec(property(get=__get_certPathCheckers, put=__set_certPathCheckers))  certPathCheckers;

constexpr void __set_certPathCheckers(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_certPathCheckers() const;

 bool __declspec(property(get=__get_revocationEnabled, put=__set_revocationEnabled))  revocationEnabled;

constexpr void __set_revocationEnabled(bool value) ;

constexpr bool __get_revocationEnabled() const;

 ::Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_initialPolicies, put=__set_initialPolicies))  initialPolicies;

constexpr void __set_initialPolicies(::Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr ::Org::BouncyCastle::Utilities::Collections::ISet __get_initialPolicies() const;

 bool __declspec(property(get=__get_explicitPolicyRequired, put=__set_explicitPolicyRequired))  explicitPolicyRequired;

constexpr void __set_explicitPolicyRequired(bool value) ;

constexpr bool __get_explicitPolicyRequired() const;

 bool __declspec(property(get=__get_anyPolicyInhibited, put=__set_anyPolicyInhibited))  anyPolicyInhibited;

constexpr void __set_anyPolicyInhibited(bool value) ;

constexpr bool __get_anyPolicyInhibited() const;

 bool __declspec(property(get=__get_policyMappingInhibited, put=__set_policyMappingInhibited))  policyMappingInhibited;

constexpr void __set_policyMappingInhibited(bool value) ;

constexpr bool __get_policyMappingInhibited() const;

 bool __declspec(property(get=__get_policyQualifiersRejected, put=__set_policyQualifiersRejected))  policyQualifiersRejected;

constexpr void __set_policyQualifiersRejected(bool value) ;

constexpr bool __get_policyQualifiersRejected() const;

 ::Org::BouncyCastle::X509::Store::IX509Selector __declspec(property(get=__get_certSelector, put=__set_certSelector))  certSelector;

constexpr void __set_certSelector(::Org::BouncyCastle::X509::Store::IX509Selector value) ;

constexpr ::Org::BouncyCastle::X509::Store::IX509Selector __get_certSelector() const;

 ::System::Collections::IList __declspec(property(get=__get_stores, put=__set_stores))  stores;

constexpr void __set_stores(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_stores() const;

 ::Org::BouncyCastle::X509::Store::IX509Selector __declspec(property(get=__get_selector, put=__set_selector))  selector;

constexpr void __set_selector(::Org::BouncyCastle::X509::Store::IX509Selector value) ;

constexpr ::Org::BouncyCastle::X509::Store::IX509Selector __get_selector() const;

 bool __declspec(property(get=__get_additionalLocationsEnabled, put=__set_additionalLocationsEnabled))  additionalLocationsEnabled;

constexpr void __set_additionalLocationsEnabled(bool value) ;

constexpr bool __get_additionalLocationsEnabled() const;

 ::System::Collections::IList __declspec(property(get=__get_additionalStores, put=__set_additionalStores))  additionalStores;

constexpr void __set_additionalStores(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_additionalStores() const;

 ::Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_trustedACIssuers, put=__set_trustedACIssuers))  trustedACIssuers;

constexpr void __set_trustedACIssuers(::Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr ::Org::BouncyCastle::Utilities::Collections::ISet __get_trustedACIssuers() const;

 ::Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_necessaryACAttributes, put=__set_necessaryACAttributes))  necessaryACAttributes;

constexpr void __set_necessaryACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr ::Org::BouncyCastle::Utilities::Collections::ISet __get_necessaryACAttributes() const;

 ::Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_prohibitedACAttributes, put=__set_prohibitedACAttributes))  prohibitedACAttributes;

constexpr void __set_prohibitedACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr ::Org::BouncyCastle::Utilities::Collections::ISet __get_prohibitedACAttributes() const;

 ::Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_attrCertCheckers, put=__set_attrCertCheckers))  attrCertCheckers;

constexpr void __set_attrCertCheckers(::Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr ::Org::BouncyCastle::Utilities::Collections::ISet __get_attrCertCheckers() const;

 int32_t __declspec(property(get=__get_validityModel, put=__set_validityModel))  validityModel;

constexpr void __set_validityModel(int32_t value) ;

constexpr int32_t __get_validityModel() const;

 bool __declspec(property(get=__get_useDeltas, put=__set_useDeltas))  useDeltas;

constexpr void __set_useDeltas(bool value) ;

constexpr bool __get_useDeltas() const;


// Properties

 bool __declspec(property(get=get_IsRevocationEnabled, put=set_IsRevocationEnabled))  IsRevocationEnabled;

 bool __declspec(property(get=get_IsExplicitPolicyRequired, put=set_IsExplicitPolicyRequired))  IsExplicitPolicyRequired;

 bool __declspec(property(get=get_IsAnyPolicyInhibited, put=set_IsAnyPolicyInhibited))  IsAnyPolicyInhibited;

 bool __declspec(property(get=get_IsPolicyMappingInhibited, put=set_IsPolicyMappingInhibited))  IsPolicyMappingInhibited;

 bool __declspec(property(get=get_IsPolicyQualifiersRejected, put=set_IsPolicyQualifiersRejected))  IsPolicyQualifiersRejected;

 ::Org::BouncyCastle::Utilities::Date::DateTimeObject __declspec(property(get=get_Date, put=set_Date))  Date;

 bool __declspec(property(get=get_IsUseDeltasEnabled, put=set_IsUseDeltasEnabled))  IsUseDeltasEnabled;

 int32_t __declspec(property(get=get_ValidityModel, put=set_ValidityModel))  ValidityModel;

 bool __declspec(property(get=get_IsAdditionalLocationsEnabled))  IsAdditionalLocationsEnabled;


// Methods

// Ctor Parameters [CppParam { name: "trustAnchors", ty: "::Org::BouncyCastle::Utilities::Collections::ISet", modifiers: "", def_value: None }]
explicit PkixParameters(::Org::BouncyCastle::Utilities::Collections::ISet trustAnchors) ;

/// @brief Method .ctor addr 0x10602c4 size 0x160 virtual false final false
 void _ctor(::Org::BouncyCastle::Utilities::Collections::ISet trustAnchors) ;

/// @brief Method get_IsRevocationEnabled addr 0x1060424 size 0x8 virtual true final false
 bool get_IsRevocationEnabled() ;

/// @brief Method set_IsRevocationEnabled addr 0x106042c size 0xc virtual true final false
 void set_IsRevocationEnabled(bool value) ;

/// @brief Method get_IsExplicitPolicyRequired addr 0x1060438 size 0x8 virtual true final false
 bool get_IsExplicitPolicyRequired() ;

/// @brief Method set_IsExplicitPolicyRequired addr 0x1060440 size 0xc virtual true final false
 void set_IsExplicitPolicyRequired(bool value) ;

/// @brief Method get_IsAnyPolicyInhibited addr 0x106044c size 0x8 virtual true final false
 bool get_IsAnyPolicyInhibited() ;

/// @brief Method set_IsAnyPolicyInhibited addr 0x1060454 size 0xc virtual true final false
 void set_IsAnyPolicyInhibited(bool value) ;

/// @brief Method get_IsPolicyMappingInhibited addr 0x1060460 size 0x8 virtual true final false
 bool get_IsPolicyMappingInhibited() ;

/// @brief Method set_IsPolicyMappingInhibited addr 0x1060468 size 0xc virtual true final false
 void set_IsPolicyMappingInhibited(bool value) ;

/// @brief Method get_IsPolicyQualifiersRejected addr 0x1060474 size 0x8 virtual true final false
 bool get_IsPolicyQualifiersRejected() ;

/// @brief Method set_IsPolicyQualifiersRejected addr 0x106047c size 0xc virtual true final false
 void set_IsPolicyQualifiersRejected(bool value) ;

/// @brief Method get_Date addr 0x1060488 size 0x8 virtual true final false
 ::Org::BouncyCastle::Utilities::Date::DateTimeObject get_Date() ;

/// @brief Method set_Date addr 0x1060490 size 0x8 virtual true final false
 void set_Date(::Org::BouncyCastle::Utilities::Date::DateTimeObject value) ;

/// @brief Method GetTrustAnchors addr 0x1060498 size 0x68 virtual true final false
 ::Org::BouncyCastle::Utilities::Collections::ISet GetTrustAnchors() ;

/// @brief Method SetTrustAnchors addr 0x1060500 size 0x4dc virtual true final false
 void SetTrustAnchors(::Org::BouncyCastle::Utilities::Collections::ISet tas) ;

/// @brief Method GetTargetCertConstraints addr 0x10609dc size 0xf0 virtual true final false
 ::Org::BouncyCastle::X509::Store::X509CertStoreSelector GetTargetCertConstraints() ;

/// @brief Method SetTargetCertConstraints addr 0x1060acc size 0x108 virtual true final false
 void SetTargetCertConstraints(::Org::BouncyCastle::X509::Store::IX509Selector selector) ;

/// @brief Method GetInitialPolicies addr 0x1060bd4 size 0x84 virtual true final false
 ::Org::BouncyCastle::Utilities::Collections::ISet GetInitialPolicies() ;

/// @brief Method SetInitialPolicies addr 0x1060c58 size 0x3cc virtual true final false
 void SetInitialPolicies(::Org::BouncyCastle::Utilities::Collections::ISet initialPolicies) ;

/// @brief Method SetCertPathCheckers addr 0x1061024 size 0x3fc virtual true final false
 void SetCertPathCheckers(::System::Collections::IList checkers) ;

/// @brief Method GetCertPathCheckers addr 0x1061420 size 0x3f0 virtual true final false
 ::System::Collections::IList GetCertPathCheckers() ;

/// @brief Method AddCertPathChecker addr 0x1061810 size 0xd0 virtual true final false
 void AddCertPathChecker(::Org::BouncyCastle::Pkix::PkixCertPathChecker checker) ;

/// @brief Method Clone addr 0x10618e0 size 0x94 virtual true final false
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method SetParams addr 0x1061974 size 0x394 virtual true final false
 void SetParams(::Org::BouncyCastle::Pkix::PkixParameters parameters) ;

/// @brief Method get_IsUseDeltasEnabled addr 0x1061d08 size 0x8 virtual true final false
 bool get_IsUseDeltasEnabled() ;

/// @brief Method set_IsUseDeltasEnabled addr 0x1061d10 size 0xc virtual true final false
 void set_IsUseDeltasEnabled(bool value) ;

/// @brief Method get_ValidityModel addr 0x1061d1c size 0x8 virtual true final false
 int32_t get_ValidityModel() ;

/// @brief Method set_ValidityModel addr 0x1061d24 size 0x8 virtual true final false
 void set_ValidityModel(int32_t value) ;

/// @brief Method SetStores addr 0x1061d2c size 0x41c virtual true final false
 void SetStores(::System::Collections::IList stores) ;

/// @brief Method AddStore addr 0x1062148 size 0xbc virtual true final false
 void AddStore(::Org::BouncyCastle::X509::Store::IX509Store store) ;

/// @brief Method AddAdditionalStore addr 0x1062204 size 0xbc virtual true final false
 void AddAdditionalStore(::Org::BouncyCastle::X509::Store::IX509Store store) ;

/// @brief Method GetAdditionalStores addr 0x10622c0 size 0x5c virtual true final false
 ::System::Collections::IList GetAdditionalStores() ;

/// @brief Method GetStores addr 0x106231c size 0x5c virtual true final false
 ::System::Collections::IList GetStores() ;

/// @brief Method get_IsAdditionalLocationsEnabled addr 0x1062378 size 0x8 virtual true final false
 bool get_IsAdditionalLocationsEnabled() ;

/// @brief Method SetAdditionalLocationsEnabled addr 0x1062380 size 0xc virtual true final false
 void SetAdditionalLocationsEnabled(bool enabled) ;

/// @brief Method GetTargetConstraints addr 0x106238c size 0xe0 virtual true final false
 ::Org::BouncyCastle::X509::Store::IX509Selector GetTargetConstraints() ;

/// @brief Method SetTargetConstraints addr 0x106246c size 0x108 virtual true final false
 void SetTargetConstraints(::Org::BouncyCastle::X509::Store::IX509Selector selector) ;

/// @brief Method GetTrustedACIssuers addr 0x1062574 size 0x68 virtual true final false
 ::Org::BouncyCastle::Utilities::Collections::ISet GetTrustedACIssuers() ;

/// @brief Method SetTrustedACIssuers addr 0x10625dc size 0x458 virtual true final false
 void SetTrustedACIssuers(::Org::BouncyCastle::Utilities::Collections::ISet trustedACIssuers) ;

/// @brief Method GetNecessaryACAttributes addr 0x1062a34 size 0x68 virtual true final false
 ::Org::BouncyCastle::Utilities::Collections::ISet GetNecessaryACAttributes() ;

/// @brief Method SetNecessaryACAttributes addr 0x1062a9c size 0x3b4 virtual true final false
 void SetNecessaryACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet necessaryACAttributes) ;

/// @brief Method GetProhibitedACAttributes addr 0x1062e50 size 0x68 virtual true final false
 ::Org::BouncyCastle::Utilities::Collections::ISet GetProhibitedACAttributes() ;

/// @brief Method SetProhibitedACAttributes addr 0x1062eb8 size 0x3b4 virtual true final false
 void SetProhibitedACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet prohibitedACAttributes) ;

/// @brief Method GetAttrCertCheckers addr 0x106326c size 0x68 virtual true final false
 ::Org::BouncyCastle::Utilities::Collections::ISet GetAttrCertCheckers() ;

/// @brief Method SetAttrCertCheckers addr 0x10632d4 size 0x458 virtual true final false
 void SetAttrCertCheckers(::Org::BouncyCastle::Utilities::Collections::ISet attrCertCheckers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixParameters, "Org.BouncyCastle.Pkix", "PkixParameters");
