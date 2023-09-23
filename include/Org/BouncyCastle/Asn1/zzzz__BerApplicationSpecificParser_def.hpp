#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1StreamParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1ApplicationSpecificParser;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerApplicationSpecificParser;
}
// Type: Org.BouncyCastle.Asn1::BerApplicationSpecificParser
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(474))
// CS Name: Org.BouncyCastle.Asn1.BerApplicationSpecificParser
class CORDL_TYPE BerApplicationSpecificParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser
constexpr operator  Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BerApplicationSpecificParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "BerApplicationSpecificParser", modifiers: " const&", def_value: None }]
constexpr BerApplicationSpecificParser(BerApplicationSpecificParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BerApplicationSpecificParser", modifiers: "&&", def_value: None }]
constexpr BerApplicationSpecificParser(BerApplicationSpecificParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BerApplicationSpecificParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BerApplicationSpecificParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BerApplicationSpecificParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BerApplicationSpecificParser& operator=(BerApplicationSpecificParser&& o) noexcept = default;
  constexpr BerApplicationSpecificParser& operator=(BerApplicationSpecificParser const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_tag, put=__set_tag))  tag;

constexpr void __set_tag(int32_t value) ;

constexpr int32_t __get_tag() const;

 Org::BouncyCastle::Asn1::Asn1StreamParser __declspec(property(get=__get_parser, put=__set_parser))  parser;

constexpr void __set_parser(Org::BouncyCastle::Asn1::Asn1StreamParser value) ;

constexpr Org::BouncyCastle::Asn1::Asn1StreamParser __get_parser() const;


// Methods

// Ctor Parameters [CppParam { name: "tag", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parser", ty: "Org::BouncyCastle::Asn1::Asn1StreamParser", modifiers: "", def_value: None }]
explicit BerApplicationSpecificParser(int32_t tag, Org::BouncyCastle::Asn1::Asn1StreamParser parser) ;

/// @brief Method .ctor addr 0x112b268 size 0x30 virtual false final false
 void _ctor(int32_t tag, Org::BouncyCastle::Asn1::Asn1StreamParser parser) ;

/// @brief Method ReadObject addr 0x11309e4 size 0x20 virtual true final true
 Org::BouncyCastle::Asn1::IAsn1Convertible ReadObject() ;

/// @brief Method ToAsn1Object addr 0x112b298 size 0x7c virtual true final true
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::BerApplicationSpecificParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerApplicationSpecificParser, "Org.BouncyCastle.Asn1", "BerApplicationSpecificParser");
