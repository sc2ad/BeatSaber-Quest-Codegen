#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorIdentifierOrKey;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class KeyAgreeRecipientInfo;
}
// Type: Org.BouncyCastle.Asn1.Cms::KeyAgreeRecipientInfo
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(78))
// CS Name: Org.BouncyCastle.Asn1.Cms.KeyAgreeRecipientInfo
class CORDL_TYPE KeyAgreeRecipientInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~KeyAgreeRecipientInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInfo", modifiers: " const&", def_value: None }]
constexpr KeyAgreeRecipientInfo(KeyAgreeRecipientInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInfo", modifiers: "&&", def_value: None }]
constexpr KeyAgreeRecipientInfo(KeyAgreeRecipientInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyAgreeRecipientInfo(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr KeyAgreeRecipientInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyAgreeRecipientInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyAgreeRecipientInfo& operator=(KeyAgreeRecipientInfo&& o) noexcept = default;
  constexpr KeyAgreeRecipientInfo& operator=(KeyAgreeRecipientInfo const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey __declspec(property(get=__get_originator, put=__set_originator))  originator;

constexpr void __set_originator(::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey __get_originator() const;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_ukm, put=__set_ukm))  ukm;

constexpr void __set_ukm(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_ukm() const;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_keyEncryptionAlgorithm, put=__set_keyEncryptionAlgorithm))  keyEncryptionAlgorithm;

constexpr void __set_keyEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_keyEncryptionAlgorithm() const;

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_recipientEncryptedKeys, put=__set_recipientEncryptedKeys))  recipientEncryptedKeys;

constexpr void __set_recipientEncryptedKeys(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_recipientEncryptedKeys() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey __declspec(property(get=get_Originator))  Originator;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_UserKeyingMaterial))  UserKeyingMaterial;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_KeyEncryptionAlgorithm))  KeyEncryptionAlgorithm;

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=get_RecipientEncryptedKeys))  RecipientEncryptedKeys;


// Methods

// Ctor Parameters [CppParam { name: "originator", ty: "::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey", modifiers: "", def_value: None }, CppParam { name: "ukm", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }, CppParam { name: "keyEncryptionAlgorithm", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "recipientEncryptedKeys", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit KeyAgreeRecipientInfo(::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey originator, ::Org::BouncyCastle::Asn1::Asn1OctetString ukm, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Sequence recipientEncryptedKeys) ;

/// @brief Method .ctor addr 0xdec644 size 0x98 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey originator, ::Org::BouncyCastle::Asn1::Asn1OctetString ukm, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Sequence recipientEncryptedKeys) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit KeyAgreeRecipientInfo(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdec6dc size 0x288 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdec9d0 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xdec9e8 size 0x178 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Version addr 0xdecb60 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_Originator addr 0xdecb68 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey get_Originator() ;

/// @brief Method get_UserKeyingMaterial addr 0xdecb70 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1OctetString get_UserKeyingMaterial() ;

/// @brief Method get_KeyEncryptionAlgorithm addr 0xdecb78 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_KeyEncryptionAlgorithm() ;

/// @brief Method get_RecipientEncryptedKeys addr 0xdecb80 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Sequence get_RecipientEncryptedKeys() ;

/// @brief Method ToAsn1Object addr 0xdecb88 size 0x1ec virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo, "Org.BouncyCastle.Asn1.Cms", "KeyAgreeRecipientInfo");
