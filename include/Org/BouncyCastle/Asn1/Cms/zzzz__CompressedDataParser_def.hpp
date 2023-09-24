#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfoParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class CompressedDataParser;
}
// Type: Org.BouncyCastle.Asn1.Cms::CompressedDataParser
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(65))
// CS Name: Org.BouncyCastle.Asn1.Cms.CompressedDataParser
class CORDL_TYPE CompressedDataParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CompressedDataParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "CompressedDataParser", modifiers: " const&", def_value: None }]
constexpr CompressedDataParser(CompressedDataParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CompressedDataParser", modifiers: "&&", def_value: None }]
constexpr CompressedDataParser(CompressedDataParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CompressedDataParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CompressedDataParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CompressedDataParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CompressedDataParser& operator=(CompressedDataParser&& o) noexcept = default;
  constexpr CompressedDataParser& operator=(CompressedDataParser const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get__version() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get__compressionAlgorithm, put=__set__compressionAlgorithm))  _compressionAlgorithm;

constexpr void __set__compressionAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get__compressionAlgorithm() const;

 Org::BouncyCastle::Asn1::Cms::ContentInfoParser __declspec(property(get=__get__encapContentInfo, put=__set__encapContentInfo))  _encapContentInfo;

constexpr void __set__encapContentInfo(Org::BouncyCastle::Asn1::Cms::ContentInfoParser value) ;

constexpr Org::BouncyCastle::Asn1::Cms::ContentInfoParser __get__encapContentInfo() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_CompressionAlgorithmIdentifier))  CompressionAlgorithmIdentifier;


// Methods

static Org::BouncyCastle::Asn1::Cms::CompressedDataParser New_ctor(Org::BouncyCastle::Asn1::Asn1SequenceParser seq) ;

/// @brief Method .ctor addr 0xde8a3c size 0x2bc virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1SequenceParser seq) ;

/// @brief Method get_Version addr 0xde8cf8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_CompressionAlgorithmIdentifier addr 0xde8d00 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_CompressionAlgorithmIdentifier() ;

/// @brief Method GetEncapContentInfo addr 0xde8d08 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Cms::ContentInfoParser GetEncapContentInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::CompressedDataParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::CompressedDataParser, "Org.BouncyCastle.Asn1.Cms", "CompressedDataParser");
