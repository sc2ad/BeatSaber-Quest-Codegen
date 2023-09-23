#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::Cms {
class KeyAgreeRecipientIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientEncryptedKey;
}
// Type: Org.BouncyCastle.Asn1.Cms::RecipientEncryptedKey
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(88))
// CS Name: Org.BouncyCastle.Asn1.Cms.RecipientEncryptedKey
class CORDL_TYPE RecipientEncryptedKey : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RecipientEncryptedKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecipientEncryptedKey", modifiers: " const&", def_value: None }]
constexpr RecipientEncryptedKey(RecipientEncryptedKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecipientEncryptedKey", modifiers: "&&", def_value: None }]
constexpr RecipientEncryptedKey(RecipientEncryptedKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecipientEncryptedKey(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr RecipientEncryptedKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecipientEncryptedKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecipientEncryptedKey& operator=(RecipientEncryptedKey&& o) noexcept = default;
  constexpr RecipientEncryptedKey& operator=(RecipientEncryptedKey const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier __declspec(property(get=__get_identifier, put=__set_identifier))  identifier;

constexpr void __set_identifier(Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier __get_identifier() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_encryptedKey, put=__set_encryptedKey))  encryptedKey;

constexpr void __set_encryptedKey(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_encryptedKey() const;


// Properties

 Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier __declspec(property(get=get_Identifier))  Identifier;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_EncryptedKey))  EncryptedKey;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit RecipientEncryptedKey(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdef3f4 size 0xe4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdef4d8 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Cms::RecipientEncryptedKey GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

/// @brief Method GetInstance addr 0xdef4f0 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Cms::RecipientEncryptedKey GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "id", ty: "Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier", modifiers: "", def_value: None }, CppParam { name: "encryptedKey", ty: "Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
explicit RecipientEncryptedKey(Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier id, Org::BouncyCastle::Asn1::Asn1OctetString encryptedKey) ;

/// @brief Method .ctor addr 0xdef678 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier id, Org::BouncyCastle::Asn1::Asn1OctetString encryptedKey) ;

/// @brief Method get_Identifier addr 0xdef6a4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientIdentifier get_Identifier() ;

/// @brief Method get_EncryptedKey addr 0xdef6ac size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_EncryptedKey() ;

/// @brief Method ToAsn1Object addr 0xdef6b4 size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::RecipientEncryptedKey);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::RecipientEncryptedKey, "Org.BouncyCastle.Asn1.Cms", "RecipientEncryptedKey");
