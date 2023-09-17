#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1StreamParser;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObjectParser;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerTaggedObjectParser;
}
// Type: Org.BouncyCastle.Asn1::BerTaggedObjectParser
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(497))
// CS Name: Org.BouncyCastle.Asn1.BerTaggedObjectParser
class CORDL_TYPE BerTaggedObjectParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser
constexpr operator  ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser() const noexcept;

/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BerTaggedObjectParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "BerTaggedObjectParser", modifiers: " const&", def_value: None }]
constexpr BerTaggedObjectParser(BerTaggedObjectParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BerTaggedObjectParser", modifiers: "&&", def_value: None }]
constexpr BerTaggedObjectParser(BerTaggedObjectParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BerTaggedObjectParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BerTaggedObjectParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BerTaggedObjectParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BerTaggedObjectParser& operator=(BerTaggedObjectParser&& o) noexcept = default;
  constexpr BerTaggedObjectParser& operator=(BerTaggedObjectParser const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__constructed, put=__set__constructed))  _constructed;

constexpr void __set__constructed(bool value) ;

constexpr bool __get__constructed() const;

 int32_t __declspec(property(get=__get__tagNumber, put=__set__tagNumber))  _tagNumber;

constexpr void __set__tagNumber(int32_t value) ;

constexpr int32_t __get__tagNumber() const;

 ::Org::BouncyCastle::Asn1::Asn1StreamParser __declspec(property(get=__get__parser, put=__set__parser))  _parser;

constexpr void __set__parser(::Org::BouncyCastle::Asn1::Asn1StreamParser value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser __get__parser() const;


// Properties

 bool __declspec(property(get=get_IsConstructed))  IsConstructed;

 int32_t __declspec(property(get=get_TagNo))  TagNo;


// Methods

// Ctor Parameters [CppParam { name: "baseTag", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tagNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "contentStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit BerTaggedObjectParser(int32_t baseTag, int32_t tagNumber, ::System::IO::Stream contentStream) ;

/// @brief Method .ctor addr 0x113466c size 0xa4 virtual false final false
 void _ctor(int32_t baseTag, int32_t tagNumber, ::System::IO::Stream contentStream) ;

// Ctor Parameters [CppParam { name: "constructed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "tagNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parser", ty: "::Org::BouncyCastle::Asn1::Asn1StreamParser", modifiers: "", def_value: None }]
explicit BerTaggedObjectParser(bool constructed, int32_t tagNumber, ::Org::BouncyCastle::Asn1::Asn1StreamParser parser) ;

/// @brief Method .ctor addr 0x112b314 size 0x40 virtual false final false
 void _ctor(bool constructed, int32_t tagNumber, ::Org::BouncyCastle::Asn1::Asn1StreamParser parser) ;

/// @brief Method get_IsConstructed addr 0x1134710 size 0x8 virtual false final false
 bool get_IsConstructed() ;

/// @brief Method get_TagNo addr 0x1134718 size 0x8 virtual true final true
 int32_t get_TagNo() ;

/// @brief Method GetObjectParser addr 0x1134720 size 0x98 virtual true final true
 ::Org::BouncyCastle::Asn1::IAsn1Convertible GetObjectParser(int32_t tag, bool isExplicit) ;

/// @brief Method ToAsn1Object addr 0x112b354 size 0xfc virtual true final true
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerTaggedObjectParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerTaggedObjectParser, "Org.BouncyCastle.Asn1", "BerTaggedObjectParser");
