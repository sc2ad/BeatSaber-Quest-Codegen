#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::Cms {
class IssuerAndSerialNumber;
}
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientKeyIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class KeyAgreeRecipientIdentifier;
}
// Type: Org.BouncyCastle.Asn1.Cms::KeyAgreeRecipientIdentifier
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(77))
// CS Name: Org.BouncyCastle.Asn1.Cms.KeyAgreeRecipientIdentifier
class CORDL_TYPE KeyAgreeRecipientIdentifier : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~KeyAgreeRecipientIdentifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientIdentifier", modifiers: " const&", def_value: None }]
constexpr KeyAgreeRecipientIdentifier(KeyAgreeRecipientIdentifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientIdentifier", modifiers: "&&", def_value: None }]
constexpr KeyAgreeRecipientIdentifier(KeyAgreeRecipientIdentifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyAgreeRecipientIdentifier(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr KeyAgreeRecipientIdentifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyAgreeRecipientIdentifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyAgreeRecipientIdentifier& operator=(KeyAgreeRecipientIdentifier&& o) noexcept = default;
  constexpr KeyAgreeRecipientIdentifier& operator=(KeyAgreeRecipientIdentifier const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber __declspec(property(get=__get_issuerSerial, put=__set_issuerSerial))  issuerSerial;

constexpr void __set_issuerSerial(Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber value) ;

constexpr Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber __get_issuerSerial() const;

 Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier __declspec(property(get=__get_rKeyID, put=__set_rKeyID))  rKeyID;

constexpr void __set_rKeyID(Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier __get_rKeyID() const;


// Properties

 Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber __declspec(property(get=get_IssuerAndSerialNumber))  IssuerAndSerialNumber;

 Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier __declspec(property(get=get_RKeyID))  RKeyID;


// Methods

/// @brief Method GetInstance addr 0xdec344 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

/// @brief Method GetInstance addr 0xdec35c size 0x1e4 virtual false final false
static Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier New_ctor(Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber issuerSerial) ;

/// @brief Method .ctor addr 0xdec540 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber issuerSerial) ;

static Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier New_ctor(Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier rKeyID) ;

/// @brief Method .ctor addr 0xdec580 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier rKeyID) ;

/// @brief Method get_IssuerAndSerialNumber addr 0xdec5a8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber get_IssuerAndSerialNumber() ;

/// @brief Method get_RKeyID addr 0xdec5b0 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier get_RKeyID() ;

/// @brief Method ToAsn1Object addr 0xdec5b8 size 0x8c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier, "Org.BouncyCastle.Asn1.Cms", "KeyAgreeRecipientIdentifier");
