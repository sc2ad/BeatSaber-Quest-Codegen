#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Cms {
class RecipientID;
}
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1::Cms {
class KeyAgreeRecipientInfo;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Cms {
class CmsSecureReadable;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorPublicKey;
}
namespace Org::BouncyCastle::Cms {
class OriginatorID;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorIdentifierOrKey;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class KeyAgreeRecipientInformation;
}
// Type: Org.BouncyCastle.Cms::KeyAgreeRecipientInformation
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(671))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(674))
// CS Name: Org.BouncyCastle.Cms.KeyAgreeRecipientInformation
class CORDL_TYPE KeyAgreeRecipientInformation : public Org::BouncyCastle::Cms::RecipientInformation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~KeyAgreeRecipientInformation() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInformation", modifiers: " const&", def_value: None }]
constexpr KeyAgreeRecipientInformation(KeyAgreeRecipientInformation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInformation", modifiers: "&&", def_value: None }]
constexpr KeyAgreeRecipientInformation(KeyAgreeRecipientInformation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyAgreeRecipientInformation(void* ptr) noexcept : Org::BouncyCastle::Cms::RecipientInformation(ptr) {
}


  constexpr KeyAgreeRecipientInformation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyAgreeRecipientInformation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyAgreeRecipientInformation& operator=(KeyAgreeRecipientInformation&& o) noexcept = default;
  constexpr KeyAgreeRecipientInformation& operator=(KeyAgreeRecipientInformation const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo __declspec(property(get=__get_info, put=__set_info))  info;

constexpr void __set_info(Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo __get_info() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_encryptedKey, put=__set_encryptedKey))  encryptedKey;

constexpr void __set_encryptedKey(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_encryptedKey() const;


// Methods

/// @brief Method ReadRecipientInfo addr 0x115881c size 0x57c virtual false final false
static void ReadRecipientInfo(System::Collections::IList infos, Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo info, Org::BouncyCastle::Cms::CmsSecureReadable secureReadable) ;

// Ctor Parameters [CppParam { name: "info", ty: "Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo", modifiers: "", def_value: None }, CppParam { name: "rid", ty: "Org::BouncyCastle::Cms::RecipientID", modifiers: "", def_value: None }, CppParam { name: "encryptedKey", ty: "Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }, CppParam { name: "secureReadable", ty: "Org::BouncyCastle::Cms::CmsSecureReadable", modifiers: "", def_value: None }]
explicit KeyAgreeRecipientInformation(Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo info, Org::BouncyCastle::Cms::RecipientID rid, Org::BouncyCastle::Asn1::Asn1OctetString encryptedKey, Org::BouncyCastle::Cms::CmsSecureReadable secureReadable) ;

/// @brief Method .ctor addr 0x1178d48 size 0x48 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo info, Org::BouncyCastle::Cms::RecipientID rid, Org::BouncyCastle::Asn1::Asn1OctetString encryptedKey, Org::BouncyCastle::Cms::CmsSecureReadable secureReadable) ;

/// @brief Method GetSenderPublicKey addr 0x1178d90 size 0xdc virtual false final false
 Org::BouncyCastle::Crypto::AsymmetricKeyParameter GetSenderPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter receiverPrivateKey, Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey originator) ;

/// @brief Method GetPublicKeyFromOriginatorPublicKey addr 0x1178e6c size 0xb0 virtual false final false
 Org::BouncyCastle::Crypto::AsymmetricKeyParameter GetPublicKeyFromOriginatorPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter receiverPrivateKey, Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey originatorPublicKey) ;

/// @brief Method GetPublicKeyFromOriginatorID addr 0x1178f2c size 0x50 virtual false final false
 Org::BouncyCastle::Crypto::AsymmetricKeyParameter GetPublicKeyFromOriginatorID(Org::BouncyCastle::Cms::OriginatorID origID) ;

/// @brief Method CalculateAgreedWrapKey addr 0x1178f7c size 0x3d4 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::KeyParameter CalculateAgreedWrapKey(::StringW wrapAlg, Org::BouncyCastle::Crypto::AsymmetricKeyParameter senderPublicKey, Org::BouncyCastle::Crypto::AsymmetricKeyParameter receiverPrivateKey) ;

/// @brief Method UnwrapSessionKey addr 0x1179350 size 0x1c0 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::KeyParameter UnwrapSessionKey(::StringW wrapAlg, Org::BouncyCastle::Crypto::Parameters::KeyParameter agreedKey) ;

/// @brief Method GetSessionKey addr 0x1179510 size 0x258 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::KeyParameter GetSessionKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter receiverPrivateKey) ;

/// @brief Method GetContentStream addr 0x1179768 size 0x114 virtual true final false
 Org::BouncyCastle::Cms::CmsTypedStream GetContentStream(Org::BouncyCastle::Crypto::ICipherParameters key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::KeyAgreeRecipientInformation);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::KeyAgreeRecipientInformation, "Org.BouncyCastle.Cms", "KeyAgreeRecipientInformation");
