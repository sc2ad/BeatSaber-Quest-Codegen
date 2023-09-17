#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Smime {
class SmimeCapabilities;
}
// Type: Org.BouncyCastle.Asn1.Smime::SmimeCapabilities
namespace Org::BouncyCastle::Asn1::Smime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(292))
// CS Name: Org.BouncyCastle.Asn1.Smime.SmimeCapabilities
class CORDL_TYPE SmimeCapabilities : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SmimeCapabilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "SmimeCapabilities", modifiers: " const&", def_value: None }]
constexpr SmimeCapabilities(SmimeCapabilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SmimeCapabilities", modifiers: "&&", def_value: None }]
constexpr SmimeCapabilities(SmimeCapabilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SmimeCapabilities(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr SmimeCapabilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SmimeCapabilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SmimeCapabilities& operator=(SmimeCapabilities&& o) noexcept = default;
  constexpr SmimeCapabilities& operator=(SmimeCapabilities const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_PreferSignedData, put=__set_PreferSignedData))  PreferSignedData;

static void __set_PreferSignedData(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_PreferSignedData() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_CannotDecryptAny, put=__set_CannotDecryptAny))  CannotDecryptAny;

static void __set_CannotDecryptAny(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_CannotDecryptAny() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SmimeCapabilitesVersions, put=__set_SmimeCapabilitesVersions))  SmimeCapabilitesVersions;

static void __set_SmimeCapabilitesVersions(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SmimeCapabilitesVersions() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Aes256Cbc, put=__set_Aes256Cbc))  Aes256Cbc;

static void __set_Aes256Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Aes256Cbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Aes192Cbc, put=__set_Aes192Cbc))  Aes192Cbc;

static void __set_Aes192Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Aes192Cbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Aes128Cbc, put=__set_Aes128Cbc))  Aes128Cbc;

static void __set_Aes128Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Aes128Cbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdeaCbc, put=__set_IdeaCbc))  IdeaCbc;

static void __set_IdeaCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdeaCbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_Cast5Cbc, put=__set_Cast5Cbc))  Cast5Cbc;

static void __set_Cast5Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_Cast5Cbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DesCbc, put=__set_DesCbc))  DesCbc;

static void __set_DesCbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DesCbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_DesEde3Cbc, put=__set_DesEde3Cbc))  DesEde3Cbc;

static void __set_DesEde3Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_DesEde3Cbc() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_RC2Cbc, put=__set_RC2Cbc))  RC2Cbc;

static void __set_RC2Cbc(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_RC2Cbc() ;

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_capabilities, put=__set_capabilities))  capabilities;

constexpr void __set_capabilities(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_capabilities() const;


// Methods

/// @brief Method GetInstance addr 0xfe61b0 size 0x240 virtual false final false
static ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit SmimeCapabilities(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xfe63f0 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetCapabilities addr 0xfe6418 size 0x7c virtual false final false
 ::System::Collections::ArrayList GetCapabilities(::Org::BouncyCastle::Asn1::DerObjectIdentifier capability) ;

/// @brief Method GetCapabilitiesForOid addr 0xfe6ad4 size 0x7c virtual false final false
 ::System::Collections::IList GetCapabilitiesForOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier capability) ;

/// @brief Method DoGetCapabilitiesForOid addr 0xfe6494 size 0x640 virtual false final false
 void DoGetCapabilitiesForOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier capability, ::System::Collections::IList list) ;

/// @brief Method ToAsn1Object addr 0xfe6c98 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Smime
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilities, "Org.BouncyCastle.Asn1.Smime", "SmimeCapabilities");
