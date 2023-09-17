#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetStringParser;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace Org::BouncyCastle::Asn1 {
class DefiniteLengthInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerOctetStringParser;
}
// Type: Org.BouncyCastle.Asn1::DerOctetStringParser
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(511))
// CS Name: Org.BouncyCastle.Asn1.DerOctetStringParser
class CORDL_TYPE DerOctetStringParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::Asn1OctetStringParser
constexpr operator  ::Org::BouncyCastle::Asn1::Asn1OctetStringParser() const noexcept;

/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DerOctetStringParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerOctetStringParser", modifiers: " const&", def_value: None }]
constexpr DerOctetStringParser(DerOctetStringParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerOctetStringParser", modifiers: "&&", def_value: None }]
constexpr DerOctetStringParser(DerOctetStringParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerOctetStringParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DerOctetStringParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerOctetStringParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerOctetStringParser& operator=(DerOctetStringParser&& o) noexcept = default;
  constexpr DerOctetStringParser& operator=(DerOctetStringParser const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream __declspec(property(get=__get_stream, put=__set_stream))  stream;

constexpr void __set_stream(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream value) ;

constexpr ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream __get_stream() const;


// Methods

// Ctor Parameters [CppParam { name: "stream", ty: "::Org::BouncyCastle::Asn1::DefiniteLengthInputStream", modifiers: "", def_value: None }]
explicit DerOctetStringParser(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream stream) ;

/// @brief Method .ctor addr 0x112f244 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream stream) ;

/// @brief Method GetOctetStream addr 0x1138560 size 0x8 virtual true final true
 ::System::IO::Stream GetOctetStream() ;

/// @brief Method ToAsn1Object addr 0x1138568 size 0x16c virtual true final true
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerOctetStringParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerOctetStringParser, "Org.BouncyCastle.Asn1", "DerOctetStringParser");
