#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SetParser;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedContentInfoParser;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class EnvelopedDataParser;
}
// Type: Org.BouncyCastle.Asn1.Cms::EnvelopedDataParser
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(72))
// CS Name: Org.BouncyCastle.Asn1.Cms.EnvelopedDataParser
class CORDL_TYPE EnvelopedDataParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~EnvelopedDataParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvelopedDataParser", modifiers: " const&", def_value: None }]
constexpr EnvelopedDataParser(EnvelopedDataParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvelopedDataParser", modifiers: "&&", def_value: None }]
constexpr EnvelopedDataParser(EnvelopedDataParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvelopedDataParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnvelopedDataParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvelopedDataParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvelopedDataParser& operator=(EnvelopedDataParser&& o) noexcept = default;
  constexpr EnvelopedDataParser& operator=(EnvelopedDataParser const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1SequenceParser __declspec(property(get=__get__seq, put=__set__seq))  _seq;

constexpr void __set__seq(Org::BouncyCastle::Asn1::Asn1SequenceParser value) ;

constexpr Org::BouncyCastle::Asn1::Asn1SequenceParser __get__seq() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get__version() const;

 Org::BouncyCastle::Asn1::IAsn1Convertible __declspec(property(get=__get__nextObject, put=__set__nextObject))  _nextObject;

constexpr void __set__nextObject(Org::BouncyCastle::Asn1::IAsn1Convertible value) ;

constexpr Org::BouncyCastle::Asn1::IAsn1Convertible __get__nextObject() const;

 bool __declspec(property(get=__get__originatorInfoCalled, put=__set__originatorInfoCalled))  _originatorInfoCalled;

constexpr void __set__originatorInfoCalled(bool value) ;

constexpr bool __get__originatorInfoCalled() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1SequenceParser", modifiers: "", def_value: None }]
explicit EnvelopedDataParser(Org::BouncyCastle::Asn1::Asn1SequenceParser seq) ;

/// @brief Method .ctor addr 0xdea814 size 0x124 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1SequenceParser seq) ;

/// @brief Method get_Version addr 0xdea938 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method GetOriginatorInfo addr 0xdea940 size 0x2e0 virtual false final false
 Org::BouncyCastle::Asn1::Cms::OriginatorInfo GetOriginatorInfo() ;

/// @brief Method GetRecipientInfos addr 0xdeac20 size 0x100 virtual false final false
 Org::BouncyCastle::Asn1::Asn1SetParser GetRecipientInfos() ;

/// @brief Method GetEncryptedContentInfo addr 0xdead20 size 0x120 virtual false final false
 Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser GetEncryptedContentInfo() ;

/// @brief Method GetUnprotectedAttrs addr 0xdeae40 size 0x1ac virtual false final false
 Org::BouncyCastle::Asn1::Asn1SetParser GetUnprotectedAttrs() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser, "Org.BouncyCastle.Asn1.Cms", "EnvelopedDataParser");
