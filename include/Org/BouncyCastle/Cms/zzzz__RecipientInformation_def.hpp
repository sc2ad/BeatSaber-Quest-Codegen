#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Cms {
class RecipientID;
}
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace Org::BouncyCastle::Cms {
class CmsSecureReadable;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class RecipientInformation;
}
// Type: Org.BouncyCastle.Cms::RecipientInformation
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(671))
// CS Name: Org.BouncyCastle.Cms.RecipientInformation
class CORDL_TYPE RecipientInformation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RecipientInformation() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecipientInformation", modifiers: " const&", def_value: None }]
constexpr RecipientInformation(RecipientInformation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecipientInformation", modifiers: "&&", def_value: None }]
constexpr RecipientInformation(RecipientInformation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecipientInformation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RecipientInformation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecipientInformation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecipientInformation& operator=(RecipientInformation&& o) noexcept = default;
  constexpr RecipientInformation& operator=(RecipientInformation const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Cms::RecipientID __declspec(property(get=__get_rid, put=__set_rid))  rid;

constexpr void __set_rid(::Org::BouncyCastle::Cms::RecipientID value) ;

constexpr ::Org::BouncyCastle::Cms::RecipientID __get_rid() const;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_keyEncAlg, put=__set_keyEncAlg))  keyEncAlg;

constexpr void __set_keyEncAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_keyEncAlg() const;

 ::Org::BouncyCastle::Cms::CmsSecureReadable __declspec(property(get=__get_secureReadable, put=__set_secureReadable))  secureReadable;

constexpr void __set_secureReadable(::Org::BouncyCastle::Cms::CmsSecureReadable value) ;

constexpr ::Org::BouncyCastle::Cms::CmsSecureReadable __get_secureReadable() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_resultMac, put=__set_resultMac))  resultMac;

constexpr void __set_resultMac(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_resultMac() const;


// Properties

 ::Org::BouncyCastle::Cms::RecipientID __declspec(property(get=get_RecipientID))  RecipientID;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_KeyEncryptionAlgorithmID))  KeyEncryptionAlgorithmID;

 ::StringW __declspec(property(get=get_KeyEncryptionAlgOid))  KeyEncryptionAlgOid;

 ::Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=get_KeyEncryptionAlgParams))  KeyEncryptionAlgParams;


// Methods

// Ctor Parameters [CppParam { name: "keyEncAlg", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "secureReadable", ty: "::Org::BouncyCastle::Cms::CmsSecureReadable", modifiers: "", def_value: None }]
explicit RecipientInformation(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyEncAlg, ::Org::BouncyCastle::Cms::CmsSecureReadable secureReadable) ;

/// @brief Method .ctor addr 0x1176ebc size 0x88 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyEncAlg, ::Org::BouncyCastle::Cms::CmsSecureReadable secureReadable) ;

/// @brief Method GetContentAlgorithmName addr 0x1176f54 size 0xbc virtual false final false
 ::StringW GetContentAlgorithmName() ;

/// @brief Method get_RecipientID addr 0x1177010 size 0x8 virtual false final false
 ::Org::BouncyCastle::Cms::RecipientID get_RecipientID() ;

/// @brief Method get_KeyEncryptionAlgorithmID addr 0x1177018 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_KeyEncryptionAlgorithmID() ;

/// @brief Method get_KeyEncryptionAlgOid addr 0x1177020 size 0x2c virtual false final false
 ::StringW get_KeyEncryptionAlgOid() ;

/// @brief Method get_KeyEncryptionAlgParams addr 0x117704c size 0x38 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Object get_KeyEncryptionAlgParams() ;

/// @brief Method GetContentFromSessionKey addr 0x1177084 size 0x22c virtual false final false
 ::Org::BouncyCastle::Cms::CmsTypedStream GetContentFromSessionKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter sKey) ;

/// @brief Method GetContent addr 0x11772b0 size 0x104 virtual false final false
 ::ArrayW<uint8_t> GetContent(::Org::BouncyCastle::Crypto::ICipherParameters key) ;

/// @brief Method GetMac addr 0x11773b4 size 0x168 virtual false final false
 ::ArrayW<uint8_t> GetMac() ;

/// @brief Method GetContentStream addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Cms::CmsTypedStream GetContentStream(::Org::BouncyCastle::Crypto::ICipherParameters key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::RecipientInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::RecipientInformation, "Org.BouncyCastle.Cms", "RecipientInformation");
