#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class CompressedData;
}
// Type: Org.BouncyCastle.Asn1.Cms::CompressedData
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(64))
// CS Name: Org.BouncyCastle.Asn1.Cms.CompressedData
class CORDL_TYPE CompressedData : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CompressedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "CompressedData", modifiers: " const&", def_value: None }]
constexpr CompressedData(CompressedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CompressedData", modifiers: "&&", def_value: None }]
constexpr CompressedData(CompressedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CompressedData(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CompressedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CompressedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CompressedData& operator=(CompressedData&& o) noexcept = default;
  constexpr CompressedData& operator=(CompressedData const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_compressionAlgorithm, put=__set_compressionAlgorithm))  compressionAlgorithm;

constexpr void __set_compressionAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_compressionAlgorithm() const;

 Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=__get_encapContentInfo, put=__set_encapContentInfo))  encapContentInfo;

constexpr void __set_encapContentInfo(Org::BouncyCastle::Asn1::Cms::ContentInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cms::ContentInfo __get_encapContentInfo() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_CompressionAlgorithmIdentifier))  CompressionAlgorithmIdentifier;

 Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=get_EncapContentInfo))  EncapContentInfo;


// Methods

static Org::BouncyCastle::Asn1::Cms::CompressedData New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier compressionAlgorithm, Org::BouncyCastle::Asn1::Cms::ContentInfo encapContentInfo) ;

/// @brief Method .ctor addr 0xde85f0 size 0x84 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier compressionAlgorithm, Org::BouncyCastle::Asn1::Cms::ContentInfo encapContentInfo) ;

static Org::BouncyCastle::Asn1::Cms::CompressedData New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xde8674 size 0x104 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xde8778 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Cms::CompressedData GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject ato, bool explicitly) ;

/// @brief Method GetInstance addr 0xde8790 size 0x178 virtual false final false
static Org::BouncyCastle::Asn1::Cms::CompressedData GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Version addr 0xde8908 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_CompressionAlgorithmIdentifier addr 0xde8910 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_CompressionAlgorithmIdentifier() ;

/// @brief Method get_EncapContentInfo addr 0xde8918 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Cms::ContentInfo get_EncapContentInfo() ;

/// @brief Method ToAsn1Object addr 0xde8920 size 0x11c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::CompressedData);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::CompressedData, "Org.BouncyCastle.Asn1.Cms", "CompressedData");
