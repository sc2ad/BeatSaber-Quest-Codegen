#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Smime {
class SmimeCapability;
}
// Type: Org.BouncyCastle.Asn1.Smime::SmimeCapability
namespace Org::BouncyCastle::Asn1::Smime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(295))
// CS Name: Org.BouncyCastle.Asn1.Smime.SmimeCapability
class CORDL_TYPE SmimeCapability : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SmimeCapability() = default;

// Ctor Parameters [CppParam { name: "", ty: "SmimeCapability", modifiers: " const&", def_value: None }]
constexpr SmimeCapability(SmimeCapability const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SmimeCapability", modifiers: "&&", def_value: None }]
constexpr SmimeCapability(SmimeCapability&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SmimeCapability(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr SmimeCapability& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SmimeCapability& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SmimeCapability& operator=(SmimeCapability&& o) noexcept = default;
  constexpr SmimeCapability& operator=(SmimeCapability const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PreferSignedData, put=__set_PreferSignedData))  PreferSignedData;

static void __set_PreferSignedData(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PreferSignedData() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CannotDecryptAny, put=__set_CannotDecryptAny))  CannotDecryptAny;

static void __set_CannotDecryptAny(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CannotDecryptAny() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SmimeCapabilitiesVersions, put=__set_SmimeCapabilitiesVersions))  SmimeCapabilitiesVersions;

static void __set_SmimeCapabilitiesVersions(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SmimeCapabilitiesVersions() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DesCbc, put=__set_DesCbc))  DesCbc;

static void __set_DesCbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DesCbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DesEde3Cbc, put=__set_DesEde3Cbc))  DesEde3Cbc;

static void __set_DesEde3Cbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DesEde3Cbc() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_RC2Cbc, put=__set_RC2Cbc))  RC2Cbc;

static void __set_RC2Cbc(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_RC2Cbc() ;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_capabilityID, put=__set_capabilityID))  capabilityID;

constexpr void __set_capabilityID(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_capabilityID() const;

 Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(Org::BouncyCastle::Asn1::Asn1Object value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Object __get_parameters() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_CapabilityID))  CapabilityID;

 Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=get_Parameters))  Parameters;


// Methods

static Org::BouncyCastle::Asn1::Smime::SmimeCapability New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xfe7548 size 0x11c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::Smime::SmimeCapability New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier capabilityID, Org::BouncyCastle::Asn1::Asn1Encodable parameters) ;

/// @brief Method .ctor addr 0xfe7664 size 0x94 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier capabilityID, Org::BouncyCastle::Asn1::Asn1Encodable parameters) ;

/// @brief Method GetInstance addr 0xfe6b50 size 0x148 virtual false final false
static Org::BouncyCastle::Asn1::Smime::SmimeCapability GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_CapabilityID addr 0xfe76f8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_CapabilityID() ;

/// @brief Method get_Parameters addr 0xfe7700 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Object get_Parameters() ;

/// @brief Method ToAsn1Object addr 0xfe7708 size 0x148 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Smime
NEED_NO_BOX(Org::BouncyCastle::Asn1::Smime::SmimeCapability);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Smime::SmimeCapability, "Org.BouncyCastle.Asn1.Smime", "SmimeCapability");
