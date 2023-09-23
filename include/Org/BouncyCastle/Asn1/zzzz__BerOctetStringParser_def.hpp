#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetStringParser;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1StreamParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerOctetStringParser;
}
// Type: Org.BouncyCastle.Asn1::BerOctetStringParser
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(485))
// CS Name: Org.BouncyCastle.Asn1.BerOctetStringParser
class CORDL_TYPE BerOctetStringParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::Asn1OctetStringParser
constexpr operator  Org::BouncyCastle::Asn1::Asn1OctetStringParser() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BerOctetStringParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "BerOctetStringParser", modifiers: " const&", def_value: None }]
constexpr BerOctetStringParser(BerOctetStringParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BerOctetStringParser", modifiers: "&&", def_value: None }]
constexpr BerOctetStringParser(BerOctetStringParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BerOctetStringParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BerOctetStringParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BerOctetStringParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BerOctetStringParser& operator=(BerOctetStringParser&& o) noexcept = default;
  constexpr BerOctetStringParser& operator=(BerOctetStringParser const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1StreamParser __declspec(property(get=__get__parser, put=__set__parser))  _parser;

constexpr void __set__parser(Org::BouncyCastle::Asn1::Asn1StreamParser value) ;

constexpr Org::BouncyCastle::Asn1::Asn1StreamParser __get__parser() const;


// Methods

// Ctor Parameters [CppParam { name: "parser", ty: "Org::BouncyCastle::Asn1::Asn1StreamParser", modifiers: "", def_value: None }]
explicit BerOctetStringParser(Org::BouncyCastle::Asn1::Asn1StreamParser parser) ;

/// @brief Method .ctor addr 0x112b450 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1StreamParser parser) ;

/// @brief Method GetOctetStream addr 0x1132658 size 0x6c virtual true final true
 System::IO::Stream GetOctetStream() ;

/// @brief Method ToAsn1Object addr 0x112b478 size 0x168 virtual true final true
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::BerOctetStringParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerOctetStringParser, "Org.BouncyCastle.Asn1", "BerOctetStringParser");
