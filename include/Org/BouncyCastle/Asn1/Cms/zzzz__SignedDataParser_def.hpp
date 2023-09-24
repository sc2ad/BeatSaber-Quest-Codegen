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
class ContentInfoParser;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class SignedDataParser;
}
// Type: Org.BouncyCastle.Asn1.Cms::SignedDataParser
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(94))
// CS Name: Org.BouncyCastle.Asn1.Cms.SignedDataParser
class CORDL_TYPE SignedDataParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SignedDataParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignedDataParser", modifiers: " const&", def_value: None }]
constexpr SignedDataParser(SignedDataParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignedDataParser", modifiers: "&&", def_value: None }]
constexpr SignedDataParser(SignedDataParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignedDataParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignedDataParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignedDataParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignedDataParser& operator=(SignedDataParser&& o) noexcept = default;
  constexpr SignedDataParser& operator=(SignedDataParser const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1SequenceParser __declspec(property(get=__get__seq, put=__set__seq))  _seq;

constexpr void __set__seq(Org::BouncyCastle::Asn1::Asn1SequenceParser value) ;

constexpr Org::BouncyCastle::Asn1::Asn1SequenceParser __get__seq() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get__version() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__nextObject, put=__set__nextObject))  _nextObject;

constexpr void __set__nextObject(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__nextObject() const;

 bool __declspec(property(get=__get__certsCalled, put=__set__certsCalled))  _certsCalled;

constexpr void __set__certsCalled(bool value) ;

constexpr bool __get__certsCalled() const;

 bool __declspec(property(get=__get__crlsCalled, put=__set__crlsCalled))  _crlsCalled;

constexpr void __set__crlsCalled(bool value) ;

constexpr bool __get__crlsCalled() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;


// Methods

/// @brief Method GetInstance addr 0xdf1be4 size 0x19c virtual false final false
static Org::BouncyCastle::Asn1::Cms::SignedDataParser GetInstance(::bs_hook::Il2CppWrapperType o) ;

static Org::BouncyCastle::Asn1::Cms::SignedDataParser New_ctor(Org::BouncyCastle::Asn1::Asn1SequenceParser seq) ;

/// @brief Method .ctor addr 0xdf1d80 size 0x124 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1SequenceParser seq) ;

/// @brief Method get_Version addr 0xdf1ea4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method GetDigestAlgorithms addr 0xdf1eac size 0xdc virtual false final false
 Org::BouncyCastle::Asn1::Asn1SetParser GetDigestAlgorithms() ;

/// @brief Method GetEncapContentInfo addr 0xdf1f88 size 0x108 virtual false final false
 Org::BouncyCastle::Asn1::Cms::ContentInfoParser GetEncapContentInfo() ;

/// @brief Method GetCertificates addr 0xdf2090 size 0x258 virtual false final false
 Org::BouncyCastle::Asn1::Asn1SetParser GetCertificates() ;

/// @brief Method GetCrls addr 0xdf22e8 size 0x2b8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1SetParser GetCrls() ;

/// @brief Method GetSignerInfos addr 0xdf25a0 size 0x148 virtual false final false
 Org::BouncyCastle::Asn1::Asn1SetParser GetSignerInfos() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::SignedDataParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::SignedDataParser, "Org.BouncyCastle.Asn1.Cms", "SignedDataParser");
