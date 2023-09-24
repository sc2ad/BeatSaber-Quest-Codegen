#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObjectParser;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedContentInfoParser;
}
// Type: Org.BouncyCastle.Asn1.Cms::EncryptedContentInfoParser
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(69))
// CS Name: Org.BouncyCastle.Asn1.Cms.EncryptedContentInfoParser
class CORDL_TYPE EncryptedContentInfoParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~EncryptedContentInfoParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedContentInfoParser", modifiers: " const&", def_value: None }]
constexpr EncryptedContentInfoParser(EncryptedContentInfoParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedContentInfoParser", modifiers: "&&", def_value: None }]
constexpr EncryptedContentInfoParser(EncryptedContentInfoParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncryptedContentInfoParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EncryptedContentInfoParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncryptedContentInfoParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncryptedContentInfoParser& operator=(EncryptedContentInfoParser&& o) noexcept = default;
  constexpr EncryptedContentInfoParser& operator=(EncryptedContentInfoParser const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get__contentType, put=__set__contentType))  _contentType;

constexpr void __set__contentType(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get__contentType() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get__contentEncryptionAlgorithm, put=__set__contentEncryptionAlgorithm))  _contentEncryptionAlgorithm;

constexpr void __set__contentEncryptionAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get__contentEncryptionAlgorithm() const;

 Org::BouncyCastle::Asn1::Asn1TaggedObjectParser __declspec(property(get=__get__encryptedContent, put=__set__encryptedContent))  _encryptedContent;

constexpr void __set__encryptedContent(Org::BouncyCastle::Asn1::Asn1TaggedObjectParser value) ;

constexpr Org::BouncyCastle::Asn1::Asn1TaggedObjectParser __get__encryptedContent() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_ContentType))  ContentType;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_ContentEncryptionAlgorithm))  ContentEncryptionAlgorithm;


// Methods

static Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser New_ctor(Org::BouncyCastle::Asn1::Asn1SequenceParser seq) ;

/// @brief Method .ctor addr 0xde7c78 size 0x2b8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1SequenceParser seq) ;

/// @brief Method get_ContentType addr 0xde953c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_ContentType() ;

/// @brief Method get_ContentEncryptionAlgorithm addr 0xde9544 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_ContentEncryptionAlgorithm() ;

/// @brief Method GetEncryptedContent addr 0xde954c size 0xb0 virtual false final false
 Org::BouncyCastle::Asn1::IAsn1Convertible GetEncryptedContent(int32_t tag) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser, "Org.BouncyCastle.Asn1.Cms", "EncryptedContentInfoParser");
