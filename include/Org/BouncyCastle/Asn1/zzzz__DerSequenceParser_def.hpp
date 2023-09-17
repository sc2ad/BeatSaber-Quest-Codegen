#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1StreamParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerSequenceParser;
}
// Type: Org.BouncyCastle.Asn1::DerSequenceParser
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(514))
// CS Name: Org.BouncyCastle.Asn1.DerSequenceParser
class CORDL_TYPE DerSequenceParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::Asn1SequenceParser
constexpr operator  ::Org::BouncyCastle::Asn1::Asn1SequenceParser() const noexcept;

/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DerSequenceParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerSequenceParser", modifiers: " const&", def_value: None }]
constexpr DerSequenceParser(DerSequenceParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerSequenceParser", modifiers: "&&", def_value: None }]
constexpr DerSequenceParser(DerSequenceParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerSequenceParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DerSequenceParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerSequenceParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerSequenceParser& operator=(DerSequenceParser&& o) noexcept = default;
  constexpr DerSequenceParser& operator=(DerSequenceParser const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1StreamParser __declspec(property(get=__get__parser, put=__set__parser))  _parser;

constexpr void __set__parser(::Org::BouncyCastle::Asn1::Asn1StreamParser value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser __get__parser() const;


// Methods

// Ctor Parameters [CppParam { name: "parser", ty: "::Org::BouncyCastle::Asn1::Asn1StreamParser", modifiers: "", def_value: None }]
explicit DerSequenceParser(::Org::BouncyCastle::Asn1::Asn1StreamParser parser) ;

/// @brief Method .ctor addr 0x112f21c size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser parser) ;

/// @brief Method ReadObject addr 0x1138d48 size 0x20 virtual true final true
 ::Org::BouncyCastle::Asn1::IAsn1Convertible ReadObject() ;

/// @brief Method ToAsn1Object addr 0x1138d68 size 0x74 virtual true final true
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerSequenceParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerSequenceParser, "Org.BouncyCastle.Asn1", "DerSequenceParser");
