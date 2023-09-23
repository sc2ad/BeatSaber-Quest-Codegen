#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetStringParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1StreamParser;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class ConstructedOctetStream;
}
// Type: Org.BouncyCastle.Asn1::ConstructedOctetStream
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(498))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(499))
// CS Name: Org.BouncyCastle.Asn1.ConstructedOctetStream
class CORDL_TYPE ConstructedOctetStream : public Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ConstructedOctetStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstructedOctetStream", modifiers: " const&", def_value: None }]
constexpr ConstructedOctetStream(ConstructedOctetStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstructedOctetStream", modifiers: "&&", def_value: None }]
constexpr ConstructedOctetStream(ConstructedOctetStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConstructedOctetStream(void* ptr) noexcept : Org::BouncyCastle::Utilities::IO::BaseInputStream(ptr) {
}


  constexpr ConstructedOctetStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConstructedOctetStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConstructedOctetStream& operator=(ConstructedOctetStream&& o) noexcept = default;
  constexpr ConstructedOctetStream& operator=(ConstructedOctetStream const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1StreamParser __declspec(property(get=__get__parser, put=__set__parser))  _parser;

constexpr void __set__parser(Org::BouncyCastle::Asn1::Asn1StreamParser value) ;

constexpr Org::BouncyCastle::Asn1::Asn1StreamParser __get__parser() const;

 bool __declspec(property(get=__get__first, put=__set__first))  _first;

constexpr void __set__first(bool value) ;

constexpr bool __get__first() const;

 System::IO::Stream __declspec(property(get=__get__currentStream, put=__set__currentStream))  _currentStream;

constexpr void __set__currentStream(System::IO::Stream value) ;

constexpr System::IO::Stream __get__currentStream() const;


// Methods

// Ctor Parameters [CppParam { name: "parser", ty: "Org::BouncyCastle::Asn1::Asn1StreamParser", modifiers: "", def_value: None }]
explicit ConstructedOctetStream(Org::BouncyCastle::Asn1::Asn1StreamParser parser) ;

/// @brief Method .ctor addr 0x11326c4 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1StreamParser parser) ;

/// @brief Method Read addr 0x1134b08 size 0x1c4 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method ReadByte addr 0x1134dd4 size 0x134 virtual true final false
 int32_t ReadByte() ;

/// @brief Method GetNextParser addr 0x1134ccc size 0x108 virtual false final false
 Org::BouncyCastle::Asn1::Asn1OctetStringParser GetNextParser() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::ConstructedOctetStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::ConstructedOctetStream, "Org.BouncyCastle.Asn1", "ConstructedOctetStream");
