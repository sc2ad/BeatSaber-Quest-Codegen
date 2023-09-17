#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class KeyTransRecipientInfo;
}
// Type: Org.BouncyCastle.Asn1.Cms::KeyTransRecipientInfo
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(79))
// CS Name: Org.BouncyCastle.Asn1.Cms.KeyTransRecipientInfo
class CORDL_TYPE KeyTransRecipientInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~KeyTransRecipientInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyTransRecipientInfo", modifiers: " const&", def_value: None }]
constexpr KeyTransRecipientInfo(KeyTransRecipientInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyTransRecipientInfo", modifiers: "&&", def_value: None }]
constexpr KeyTransRecipientInfo(KeyTransRecipientInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyTransRecipientInfo(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr KeyTransRecipientInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyTransRecipientInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyTransRecipientInfo& operator=(KeyTransRecipientInfo&& o) noexcept = default;
  constexpr KeyTransRecipientInfo& operator=(KeyTransRecipientInfo const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 ::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier __declspec(property(get=__get_rid, put=__set_rid))  rid;

constexpr void __set_rid(::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier __get_rid() const;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_keyEncryptionAlgorithm, put=__set_keyEncryptionAlgorithm))  keyEncryptionAlgorithm;

constexpr void __set_keyEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_keyEncryptionAlgorithm() const;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_encryptedKey, put=__set_encryptedKey))  encryptedKey;

constexpr void __set_encryptedKey(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_encryptedKey() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 ::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier __declspec(property(get=get_RecipientIdentifier))  RecipientIdentifier;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_KeyEncryptionAlgorithm))  KeyEncryptionAlgorithm;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_EncryptedKey))  EncryptedKey;


// Methods

// Ctor Parameters [CppParam { name: "rid", ty: "::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier", modifiers: "", def_value: None }, CppParam { name: "keyEncryptionAlgorithm", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "encryptedKey", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
explicit KeyTransRecipientInfo(::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier rid, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString encryptedKey) ;

/// @brief Method .ctor addr 0xdecd74 size 0xf4 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier rid, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString encryptedKey) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit KeyTransRecipientInfo(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdece68 size 0x188 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xded220 size 0x178 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Version addr 0xded398 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_RecipientIdentifier addr 0xded3a0 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier get_RecipientIdentifier() ;

/// @brief Method get_KeyEncryptionAlgorithm addr 0xded3a8 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_KeyEncryptionAlgorithm() ;

/// @brief Method get_EncryptedKey addr 0xded3b0 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1OctetString get_EncryptedKey() ;

/// @brief Method ToAsn1Object addr 0xded3b8 size 0x148 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo, "Org.BouncyCastle.Asn1.Cms", "KeyTransRecipientInfo");
