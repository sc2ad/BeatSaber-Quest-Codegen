#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class EtsiQCObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.X509.Qualified::EtsiQCObjectIdentifiers
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(328))
// CS Name: Org.BouncyCastle.Asn1.X509.Qualified.EtsiQCObjectIdentifiers
class CORDL_TYPE EtsiQCObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EtsiQCObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "EtsiQCObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr EtsiQCObjectIdentifiers(EtsiQCObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EtsiQCObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr EtsiQCObjectIdentifiers(EtsiQCObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EtsiQCObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EtsiQCObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EtsiQCObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EtsiQCObjectIdentifiers& operator=(EtsiQCObjectIdentifiers&& o) noexcept = default;
  constexpr EtsiQCObjectIdentifiers& operator=(EtsiQCObjectIdentifiers const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdEtsiQcs, put=__set_IdEtsiQcs))  IdEtsiQcs;

static void __set_IdEtsiQcs(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdEtsiQcs() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdEtsiQcsQcCompliance, put=__set_IdEtsiQcsQcCompliance))  IdEtsiQcsQcCompliance;

static void __set_IdEtsiQcsQcCompliance(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdEtsiQcsQcCompliance() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdEtsiQcsLimitValue, put=__set_IdEtsiQcsLimitValue))  IdEtsiQcsLimitValue;

static void __set_IdEtsiQcsLimitValue(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdEtsiQcsLimitValue() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdEtsiQcsRetentionPeriod, put=__set_IdEtsiQcsRetentionPeriod))  IdEtsiQcsRetentionPeriod;

static void __set_IdEtsiQcsRetentionPeriod(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdEtsiQcsRetentionPeriod() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdEtsiQcsQcSscd, put=__set_IdEtsiQcsQcSscd))  IdEtsiQcsQcSscd;

static void __set_IdEtsiQcsQcSscd(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdEtsiQcsQcSscd() ;


// Methods

static Org::BouncyCastle::Asn1::X509::Qualified::EtsiQCObjectIdentifiers New_ctor() ;

/// @brief Method .ctor addr 0xff3854 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509::Qualified
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::Qualified::EtsiQCObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::Qualified::EtsiQCObjectIdentifiers, "Org.BouncyCastle.Asn1.X509.Qualified", "EtsiQCObjectIdentifiers");
