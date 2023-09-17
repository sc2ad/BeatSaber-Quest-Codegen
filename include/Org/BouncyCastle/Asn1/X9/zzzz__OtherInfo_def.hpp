#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X9 {
class KeySpecificInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class OtherInfo;
}
// Type: Org.BouncyCastle.Asn1.X9::OtherInfo
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(416))
// CS Name: Org.BouncyCastle.Asn1.X9.OtherInfo
class CORDL_TYPE OtherInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~OtherInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherInfo", modifiers: " const&", def_value: None }]
constexpr OtherInfo(OtherInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherInfo", modifiers: "&&", def_value: None }]
constexpr OtherInfo(OtherInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OtherInfo(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OtherInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OtherInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OtherInfo& operator=(OtherInfo&& o) noexcept = default;
  constexpr OtherInfo& operator=(OtherInfo const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X9::KeySpecificInfo __declspec(property(get=__get_keyInfo, put=__set_keyInfo))  keyInfo;

constexpr void __set_keyInfo(::Org::BouncyCastle::Asn1::X9::KeySpecificInfo value) ;

constexpr ::Org::BouncyCastle::Asn1::X9::KeySpecificInfo __get_keyInfo() const;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_partyAInfo, put=__set_partyAInfo))  partyAInfo;

constexpr void __set_partyAInfo(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_partyAInfo() const;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_suppPubInfo, put=__set_suppPubInfo))  suppPubInfo;

constexpr void __set_suppPubInfo(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_suppPubInfo() const;


// Properties

 ::Org::BouncyCastle::Asn1::X9::KeySpecificInfo __declspec(property(get=get_KeyInfo))  KeyInfo;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_PartyAInfo))  PartyAInfo;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_SuppPubInfo))  SuppPubInfo;


// Methods

// Ctor Parameters [CppParam { name: "keyInfo", ty: "::Org::BouncyCastle::Asn1::X9::KeySpecificInfo", modifiers: "", def_value: None }, CppParam { name: "partyAInfo", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }, CppParam { name: "suppPubInfo", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
explicit OtherInfo(::Org::BouncyCastle::Asn1::X9::KeySpecificInfo keyInfo, ::Org::BouncyCastle::Asn1::Asn1OctetString partyAInfo, ::Org::BouncyCastle::Asn1::Asn1OctetString suppPubInfo) ;

/// @brief Method .ctor addr 0x111f620 size 0x3c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X9::KeySpecificInfo keyInfo, ::Org::BouncyCastle::Asn1::Asn1OctetString partyAInfo, ::Org::BouncyCastle::Asn1::Asn1OctetString suppPubInfo) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit OtherInfo(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x111f65c size 0x3a8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_KeyInfo addr 0x111fa1c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X9::KeySpecificInfo get_KeyInfo() ;

/// @brief Method get_PartyAInfo addr 0x111fa24 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1OctetString get_PartyAInfo() ;

/// @brief Method get_SuppPubInfo addr 0x111fa2c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1OctetString get_SuppPubInfo() ;

/// @brief Method ToAsn1Object addr 0x111fa34 size 0x168 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X9
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::OtherInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::OtherInfo, "Org.BouncyCastle.Asn1.X9", "OtherInfo");
