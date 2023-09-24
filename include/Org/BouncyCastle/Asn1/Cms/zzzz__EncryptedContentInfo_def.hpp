#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedContentInfo;
}
// Type: Org.BouncyCastle.Asn1.Cms::EncryptedContentInfo
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(68))
// CS Name: Org.BouncyCastle.Asn1.Cms.EncryptedContentInfo
class CORDL_TYPE EncryptedContentInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~EncryptedContentInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedContentInfo", modifiers: " const&", def_value: None }]
constexpr EncryptedContentInfo(EncryptedContentInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedContentInfo", modifiers: "&&", def_value: None }]
constexpr EncryptedContentInfo(EncryptedContentInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncryptedContentInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr EncryptedContentInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncryptedContentInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncryptedContentInfo& operator=(EncryptedContentInfo&& o) noexcept = default;
  constexpr EncryptedContentInfo& operator=(EncryptedContentInfo const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_contentType, put=__set_contentType))  contentType;

constexpr void __set_contentType(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_contentType() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_contentEncryptionAlgorithm, put=__set_contentEncryptionAlgorithm))  contentEncryptionAlgorithm;

constexpr void __set_contentEncryptionAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_contentEncryptionAlgorithm() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_encryptedContent, put=__set_encryptedContent))  encryptedContent;

constexpr void __set_encryptedContent(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_encryptedContent() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_ContentType))  ContentType;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_ContentEncryptionAlgorithm))  ContentEncryptionAlgorithm;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_EncryptedContent))  EncryptedContent;


// Methods

static Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier contentType, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier contentEncryptionAlgorithm, Org::BouncyCastle::Asn1::Asn1OctetString encryptedContent) ;

/// @brief Method .ctor addr 0xde9208 size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier contentType, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier contentEncryptionAlgorithm, Org::BouncyCastle::Asn1::Asn1OctetString encryptedContent) ;

static Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xde9244 size 0x170 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xde7140 size 0x178 virtual false final false
static Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_ContentType addr 0xde93b4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_ContentType() ;

/// @brief Method get_ContentEncryptionAlgorithm addr 0xde93bc size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_ContentEncryptionAlgorithm() ;

/// @brief Method get_EncryptedContent addr 0xde93c4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_EncryptedContent() ;

/// @brief Method ToAsn1Object addr 0xde93cc size 0x170 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo, "Org.BouncyCastle.Asn1.Cms", "EncryptedContentInfo");
