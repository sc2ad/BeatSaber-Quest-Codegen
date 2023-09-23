#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
namespace System {
class ICloneable;
}
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509CrlStoreSelector;
}
// Type: Org.BouncyCastle.X509.Store::X509CrlStoreSelector
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1850))
// CS Name: Org.BouncyCastle.X509.Store.X509CrlStoreSelector
class CORDL_TYPE X509CrlStoreSelector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::X509::Store::IX509Selector
constexpr operator  Org::BouncyCastle::X509::Store::IX509Selector() const noexcept;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~X509CrlStoreSelector() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CrlStoreSelector", modifiers: " const&", def_value: None }]
constexpr X509CrlStoreSelector(X509CrlStoreSelector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CrlStoreSelector", modifiers: "&&", def_value: None }]
constexpr X509CrlStoreSelector(X509CrlStoreSelector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509CrlStoreSelector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509CrlStoreSelector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509CrlStoreSelector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509CrlStoreSelector& operator=(X509CrlStoreSelector&& o) noexcept = default;
  constexpr X509CrlStoreSelector& operator=(X509CrlStoreSelector const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::X509::X509Certificate __declspec(property(get=__get_certificateChecking, put=__set_certificateChecking))  certificateChecking;

constexpr void __set_certificateChecking(Org::BouncyCastle::X509::X509Certificate value) ;

constexpr Org::BouncyCastle::X509::X509Certificate __get_certificateChecking() const;

 Org::BouncyCastle::Utilities::Date::DateTimeObject __declspec(property(get=__get_dateAndTime, put=__set_dateAndTime))  dateAndTime;

constexpr void __set_dateAndTime(Org::BouncyCastle::Utilities::Date::DateTimeObject value) ;

constexpr Org::BouncyCastle::Utilities::Date::DateTimeObject __get_dateAndTime() const;

 System::Collections::ICollection __declspec(property(get=__get_issuers, put=__set_issuers))  issuers;

constexpr void __set_issuers(System::Collections::ICollection value) ;

constexpr System::Collections::ICollection __get_issuers() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_maxCrlNumber, put=__set_maxCrlNumber))  maxCrlNumber;

constexpr void __set_maxCrlNumber(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_maxCrlNumber() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_minCrlNumber, put=__set_minCrlNumber))  minCrlNumber;

constexpr void __set_minCrlNumber(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_minCrlNumber() const;

 Org::BouncyCastle::X509::IX509AttributeCertificate __declspec(property(get=__get_attrCertChecking, put=__set_attrCertChecking))  attrCertChecking;

constexpr void __set_attrCertChecking(Org::BouncyCastle::X509::IX509AttributeCertificate value) ;

constexpr Org::BouncyCastle::X509::IX509AttributeCertificate __get_attrCertChecking() const;

 bool __declspec(property(get=__get_completeCrlEnabled, put=__set_completeCrlEnabled))  completeCrlEnabled;

constexpr void __set_completeCrlEnabled(bool value) ;

constexpr bool __get_completeCrlEnabled() const;

 bool __declspec(property(get=__get_deltaCrlIndicatorEnabled, put=__set_deltaCrlIndicatorEnabled))  deltaCrlIndicatorEnabled;

constexpr void __set_deltaCrlIndicatorEnabled(bool value) ;

constexpr bool __get_deltaCrlIndicatorEnabled() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_issuingDistributionPoint, put=__set_issuingDistributionPoint))  issuingDistributionPoint;

constexpr void __set_issuingDistributionPoint(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_issuingDistributionPoint() const;

 bool __declspec(property(get=__get_issuingDistributionPointEnabled, put=__set_issuingDistributionPointEnabled))  issuingDistributionPointEnabled;

constexpr void __set_issuingDistributionPointEnabled(bool value) ;

constexpr bool __get_issuingDistributionPointEnabled() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_maxBaseCrlNumber, put=__set_maxBaseCrlNumber))  maxBaseCrlNumber;

constexpr void __set_maxBaseCrlNumber(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_maxBaseCrlNumber() const;


// Properties

 Org::BouncyCastle::X509::X509Certificate __declspec(property(get=get_CertificateChecking, put=set_CertificateChecking))  CertificateChecking;

 Org::BouncyCastle::Utilities::Date::DateTimeObject __declspec(property(get=get_DateAndTime, put=set_DateAndTime))  DateAndTime;

 System::Collections::ICollection __declspec(property(get=get_Issuers, put=set_Issuers))  Issuers;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_MaxCrlNumber, put=set_MaxCrlNumber))  MaxCrlNumber;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_MinCrlNumber, put=set_MinCrlNumber))  MinCrlNumber;

 Org::BouncyCastle::X509::IX509AttributeCertificate __declspec(property(get=get_AttrCertChecking, put=set_AttrCertChecking))  AttrCertChecking;

 bool __declspec(property(get=get_CompleteCrlEnabled, put=set_CompleteCrlEnabled))  CompleteCrlEnabled;

 bool __declspec(property(get=get_DeltaCrlIndicatorEnabled, put=set_DeltaCrlIndicatorEnabled))  DeltaCrlIndicatorEnabled;

 ::ArrayW<uint8_t> __declspec(property(get=get_IssuingDistributionPoint, put=set_IssuingDistributionPoint))  IssuingDistributionPoint;

 bool __declspec(property(get=get_IssuingDistributionPointEnabled, put=set_IssuingDistributionPointEnabled))  IssuingDistributionPointEnabled;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_MaxBaseCrlNumber, put=set_MaxBaseCrlNumber))  MaxBaseCrlNumber;


// Methods

// Ctor Parameters []
explicit X509CrlStoreSelector() ;

/// @brief Method .ctor addr 0x10e6b7c size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "o", ty: "Org::BouncyCastle::X509::Store::X509CrlStoreSelector", modifiers: "", def_value: None }]
explicit X509CrlStoreSelector(Org::BouncyCastle::X509::Store::X509CrlStoreSelector o) ;

/// @brief Method .ctor addr 0x10e6b84 size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::X509::Store::X509CrlStoreSelector o) ;

/// @brief Method Clone addr 0x10e6cb0 size 0x60 virtual true final false
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method get_CertificateChecking addr 0x10e6d10 size 0x8 virtual false final false
 Org::BouncyCastle::X509::X509Certificate get_CertificateChecking() ;

/// @brief Method set_CertificateChecking addr 0x10e6d18 size 0x8 virtual false final false
 void set_CertificateChecking(Org::BouncyCastle::X509::X509Certificate value) ;

/// @brief Method get_DateAndTime addr 0x10e6d20 size 0x8 virtual false final false
 Org::BouncyCastle::Utilities::Date::DateTimeObject get_DateAndTime() ;

/// @brief Method set_DateAndTime addr 0x10e6d28 size 0x8 virtual false final false
 void set_DateAndTime(Org::BouncyCastle::Utilities::Date::DateTimeObject value) ;

/// @brief Method get_Issuers addr 0x10e6c00 size 0x58 virtual false final false
 System::Collections::ICollection get_Issuers() ;

/// @brief Method set_Issuers addr 0x10e6d30 size 0x68 virtual false final false
 void set_Issuers(System::Collections::ICollection value) ;

/// @brief Method get_MaxCrlNumber addr 0x10e6d98 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_MaxCrlNumber() ;

/// @brief Method set_MaxCrlNumber addr 0x10e6da0 size 0x8 virtual false final false
 void set_MaxCrlNumber(Org::BouncyCastle::Math::BigInteger value) ;

/// @brief Method get_MinCrlNumber addr 0x10e6da8 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_MinCrlNumber() ;

/// @brief Method set_MinCrlNumber addr 0x10e6db0 size 0x8 virtual false final false
 void set_MinCrlNumber(Org::BouncyCastle::Math::BigInteger value) ;

/// @brief Method get_AttrCertChecking addr 0x10e6db8 size 0x8 virtual false final false
 Org::BouncyCastle::X509::IX509AttributeCertificate get_AttrCertChecking() ;

/// @brief Method set_AttrCertChecking addr 0x10e6dc0 size 0x8 virtual false final false
 void set_AttrCertChecking(Org::BouncyCastle::X509::IX509AttributeCertificate value) ;

/// @brief Method get_CompleteCrlEnabled addr 0x10e6dc8 size 0x8 virtual false final false
 bool get_CompleteCrlEnabled() ;

/// @brief Method set_CompleteCrlEnabled addr 0x10e6dd0 size 0xc virtual false final false
 void set_CompleteCrlEnabled(bool value) ;

/// @brief Method get_DeltaCrlIndicatorEnabled addr 0x10e6ddc size 0x8 virtual false final false
 bool get_DeltaCrlIndicatorEnabled() ;

/// @brief Method set_DeltaCrlIndicatorEnabled addr 0x10e6de4 size 0xc virtual false final false
 void set_DeltaCrlIndicatorEnabled(bool value) ;

/// @brief Method get_IssuingDistributionPoint addr 0x10e6c58 size 0x58 virtual false final false
 ::ArrayW<uint8_t> get_IssuingDistributionPoint() ;

/// @brief Method set_IssuingDistributionPoint addr 0x10e6df0 size 0x68 virtual false final false
 void set_IssuingDistributionPoint(::ArrayW<uint8_t> value) ;

/// @brief Method get_IssuingDistributionPointEnabled addr 0x10e6e58 size 0x8 virtual false final false
 bool get_IssuingDistributionPointEnabled() ;

/// @brief Method set_IssuingDistributionPointEnabled addr 0x10e6e60 size 0xc virtual false final false
 void set_IssuingDistributionPointEnabled(bool value) ;

/// @brief Method get_MaxBaseCrlNumber addr 0x10e6e6c size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_MaxBaseCrlNumber() ;

/// @brief Method set_MaxBaseCrlNumber addr 0x10e6e74 size 0x8 virtual false final false
 void set_MaxBaseCrlNumber(Org::BouncyCastle::Math::BigInteger value) ;

/// @brief Method Match addr 0x10e6e7c size 0x6d0 virtual true final false
 bool Match(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509::Store
NEED_NO_BOX(Org::BouncyCastle::X509::Store::X509CrlStoreSelector);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::Store::X509CrlStoreSelector, "Org.BouncyCastle.X509.Store", "X509CrlStoreSelector");
