#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class KekIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class KekRecipientInfo;
}
// Type: Org.BouncyCastle.Asn1.Cms::KekRecipientInfo
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(76))
// CS Name: Org.BouncyCastle.Asn1.Cms.KekRecipientInfo
class CORDL_TYPE KekRecipientInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~KekRecipientInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "KekRecipientInfo", modifiers: " const&", def_value: None }]
constexpr KekRecipientInfo(KekRecipientInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KekRecipientInfo", modifiers: "&&", def_value: None }]
constexpr KekRecipientInfo(KekRecipientInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KekRecipientInfo(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr KekRecipientInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KekRecipientInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KekRecipientInfo& operator=(KekRecipientInfo&& o) noexcept = default;
  constexpr KekRecipientInfo& operator=(KekRecipientInfo const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 ::Org::BouncyCastle::Asn1::Cms::KekIdentifier __declspec(property(get=__get_kekID, put=__set_kekID))  kekID;

constexpr void __set_kekID(::Org::BouncyCastle::Asn1::Cms::KekIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::KekIdentifier __get_kekID() const;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_keyEncryptionAlgorithm, put=__set_keyEncryptionAlgorithm))  keyEncryptionAlgorithm;

constexpr void __set_keyEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_keyEncryptionAlgorithm() const;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_encryptedKey, put=__set_encryptedKey))  encryptedKey;

constexpr void __set_encryptedKey(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_encryptedKey() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 ::Org::BouncyCastle::Asn1::Cms::KekIdentifier __declspec(property(get=get_KekID))  KekID;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_KeyEncryptionAlgorithm))  KeyEncryptionAlgorithm;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_EncryptedKey))  EncryptedKey;


// Methods

// Ctor Parameters [CppParam { name: "kekID", ty: "::Org::BouncyCastle::Asn1::Cms::KekIdentifier", modifiers: "", def_value: None }, CppParam { name: "keyEncryptionAlgorithm", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "encryptedKey", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
explicit KekRecipientInfo(::Org::BouncyCastle::Asn1::Cms::KekIdentifier kekID, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString encryptedKey) ;

/// @brief Method .ctor addr 0xdebe34 size 0x90 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cms::KekIdentifier kekID, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString encryptedKey) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit KekRecipientInfo(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdebec4 size 0x188 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdec04c size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xdec064 size 0x178 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Version addr 0xdec1dc size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_KekID addr 0xdec1e4 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::KekIdentifier get_KekID() ;

/// @brief Method get_KeyEncryptionAlgorithm addr 0xdec1ec size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_KeyEncryptionAlgorithm() ;

/// @brief Method get_EncryptedKey addr 0xdec1f4 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1OctetString get_EncryptedKey() ;

/// @brief Method ToAsn1Object addr 0xdec1fc size 0x148 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo, "Org.BouncyCastle.Asn1.Cms", "KekRecipientInfo");
