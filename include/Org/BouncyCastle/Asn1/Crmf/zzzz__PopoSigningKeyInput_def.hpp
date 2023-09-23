#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PKMacValue;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoSigningKeyInput;
}
// Type: Org.BouncyCastle.Asn1.Crmf::PopoSigningKeyInput
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(120))
// CS Name: Org.BouncyCastle.Asn1.Crmf.PopoSigningKeyInput
class CORDL_TYPE PopoSigningKeyInput : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PopoSigningKeyInput() = default;

// Ctor Parameters [CppParam { name: "", ty: "PopoSigningKeyInput", modifiers: " const&", def_value: None }]
constexpr PopoSigningKeyInput(PopoSigningKeyInput const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PopoSigningKeyInput", modifiers: "&&", def_value: None }]
constexpr PopoSigningKeyInput(PopoSigningKeyInput&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PopoSigningKeyInput(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PopoSigningKeyInput& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PopoSigningKeyInput& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PopoSigningKeyInput& operator=(PopoSigningKeyInput&& o) noexcept = default;
  constexpr PopoSigningKeyInput& operator=(PopoSigningKeyInput const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_sender, put=__set_sender))  sender;

constexpr void __set_sender(Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr Org::BouncyCastle::Asn1::X509::GeneralName __get_sender() const;

 Org::BouncyCastle::Asn1::Crmf::PKMacValue __declspec(property(get=__get_publicKeyMac, put=__set_publicKeyMac))  publicKeyMac;

constexpr void __set_publicKeyMac(Org::BouncyCastle::Asn1::Crmf::PKMacValue value) ;

constexpr Org::BouncyCastle::Asn1::Crmf::PKMacValue __get_publicKeyMac() const;

 Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __declspec(property(get=__get_publicKey, put=__set_publicKey))  publicKey;

constexpr void __set_publicKey(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo value) ;

constexpr Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __get_publicKey() const;


// Properties

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=get_Sender))  Sender;

 Org::BouncyCastle::Asn1::Crmf::PKMacValue __declspec(property(get=get_PublicKeyMac))  PublicKeyMac;

 Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __declspec(property(get=get_PublicKey))  PublicKey;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit PopoSigningKeyInput(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdfa29c size 0x174 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdf9e58 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "sender", ty: "Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }, CppParam { name: "spki", ty: "Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo", modifiers: "", def_value: None }]
explicit PopoSigningKeyInput(Org::BouncyCastle::Asn1::X509::GeneralName sender, Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo spki) ;

/// @brief Method .ctor addr 0xdfa410 size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::GeneralName sender, Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo spki) ;

// Ctor Parameters [CppParam { name: "pkmac", ty: "Org::BouncyCastle::Asn1::Crmf::PKMacValue", modifiers: "", def_value: None }, CppParam { name: "spki", ty: "Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo", modifiers: "", def_value: None }]
explicit PopoSigningKeyInput(Org::BouncyCastle::Asn1::Crmf::PKMacValue pkmac, Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo spki) ;

/// @brief Method .ctor addr 0xdfa440 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Crmf::PKMacValue pkmac, Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo spki) ;

/// @brief Method get_Sender addr 0xdfa46c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::GeneralName get_Sender() ;

/// @brief Method get_PublicKeyMac addr 0xdfa474 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Crmf::PKMacValue get_PublicKeyMac() ;

/// @brief Method get_PublicKey addr 0xdfa47c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo get_PublicKey() ;

/// @brief Method ToAsn1Object addr 0xdfa484 size 0x104 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput, "Org.BouncyCastle.Asn1.Crmf", "PopoSigningKeyInput");
