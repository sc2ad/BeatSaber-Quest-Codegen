#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Microsoft {
class MicrosoftObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.Microsoft::MicrosoftObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Microsoft {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(194))
// CS Name: Org.BouncyCastle.Asn1.Microsoft.MicrosoftObjectIdentifiers
class CORDL_TYPE MicrosoftObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MicrosoftObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "MicrosoftObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr MicrosoftObjectIdentifiers(MicrosoftObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MicrosoftObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr MicrosoftObjectIdentifiers(MicrosoftObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MicrosoftObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MicrosoftObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MicrosoftObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MicrosoftObjectIdentifiers& operator=(MicrosoftObjectIdentifiers&& o) noexcept = default;
  constexpr MicrosoftObjectIdentifiers& operator=(MicrosoftObjectIdentifiers const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Microsoft, put=__set_Microsoft))  Microsoft;

static void __set_Microsoft(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Microsoft() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_MicrosoftCertTemplateV1, put=__set_MicrosoftCertTemplateV1))  MicrosoftCertTemplateV1;

static void __set_MicrosoftCertTemplateV1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_MicrosoftCertTemplateV1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_MicrosoftCAVersion, put=__set_MicrosoftCAVersion))  MicrosoftCAVersion;

static void __set_MicrosoftCAVersion(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_MicrosoftCAVersion() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_MicrosoftPrevCACertHash, put=__set_MicrosoftPrevCACertHash))  MicrosoftPrevCACertHash;

static void __set_MicrosoftPrevCACertHash(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_MicrosoftPrevCACertHash() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_MicrosoftCrlNextPublish, put=__set_MicrosoftCrlNextPublish))  MicrosoftCrlNextPublish;

static void __set_MicrosoftCrlNextPublish(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_MicrosoftCrlNextPublish() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_MicrosoftCertTemplateV2, put=__set_MicrosoftCertTemplateV2))  MicrosoftCertTemplateV2;

static void __set_MicrosoftCertTemplateV2(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_MicrosoftCertTemplateV2() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_MicrosoftAppPolicies, put=__set_MicrosoftAppPolicies))  MicrosoftAppPolicies;

static void __set_MicrosoftAppPolicies(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_MicrosoftAppPolicies() ;


// Methods

// Ctor Parameters []
explicit MicrosoftObjectIdentifiers() ;

/// @brief Method .ctor addr 0xeedb94 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Microsoft
NEED_NO_BOX(Org::BouncyCastle::Asn1::Microsoft::MicrosoftObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Microsoft::MicrosoftObjectIdentifiers, "Org.BouncyCastle.Asn1.Microsoft", "MicrosoftObjectIdentifiers");
