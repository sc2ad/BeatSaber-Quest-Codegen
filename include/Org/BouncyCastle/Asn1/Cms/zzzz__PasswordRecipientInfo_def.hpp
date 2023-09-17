#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class PasswordRecipientInfo;
}
// Type: Org.BouncyCastle.Asn1.Cms::PasswordRecipientInfo
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(87))
// CS Name: Org.BouncyCastle.Asn1.Cms.PasswordRecipientInfo
class CORDL_TYPE PasswordRecipientInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PasswordRecipientInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "PasswordRecipientInfo", modifiers: " const&", def_value: None }]
constexpr PasswordRecipientInfo(PasswordRecipientInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PasswordRecipientInfo", modifiers: "&&", def_value: None }]
constexpr PasswordRecipientInfo(PasswordRecipientInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PasswordRecipientInfo(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PasswordRecipientInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PasswordRecipientInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PasswordRecipientInfo& operator=(PasswordRecipientInfo&& o) noexcept = default;
  constexpr PasswordRecipientInfo& operator=(PasswordRecipientInfo const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_keyDerivationAlgorithm, put=__set_keyDerivationAlgorithm))  keyDerivationAlgorithm;

constexpr void __set_keyDerivationAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_keyDerivationAlgorithm() const;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_keyEncryptionAlgorithm, put=__set_keyEncryptionAlgorithm))  keyEncryptionAlgorithm;

constexpr void __set_keyEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_keyEncryptionAlgorithm() const;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_encryptedKey, put=__set_encryptedKey))  encryptedKey;

constexpr void __set_encryptedKey(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_encryptedKey() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_KeyDerivationAlgorithm))  KeyDerivationAlgorithm;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_KeyEncryptionAlgorithm))  KeyEncryptionAlgorithm;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_EncryptedKey))  EncryptedKey;


// Methods

// Ctor Parameters [CppParam { name: "keyEncryptionAlgorithm", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "encryptedKey", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
explicit PasswordRecipientInfo(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString encryptedKey) ;

/// @brief Method .ctor addr 0xdeed60 size 0x84 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString encryptedKey) ;

// Ctor Parameters [CppParam { name: "keyDerivationAlgorithm", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "keyEncryptionAlgorithm", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "encryptedKey", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
explicit PasswordRecipientInfo(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyDerivationAlgorithm, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString encryptedKey) ;

/// @brief Method .ctor addr 0xdeede4 size 0x90 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyDerivationAlgorithm, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString encryptedKey) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit PasswordRecipientInfo(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdeee74 size 0x244 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdef0b8 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xdef0d0 size 0x178 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Version addr 0xdef248 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_KeyDerivationAlgorithm addr 0xdef250 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_KeyDerivationAlgorithm() ;

/// @brief Method get_KeyEncryptionAlgorithm addr 0xdef258 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_KeyEncryptionAlgorithm() ;

/// @brief Method get_EncryptedKey addr 0xdef260 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1OctetString get_EncryptedKey() ;

/// @brief Method ToAsn1Object addr 0xdef268 size 0x18c virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo, "Org.BouncyCastle.Asn1.Cms", "PasswordRecipientInfo");
