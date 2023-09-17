#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1InputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class DerSet;
}
namespace Org::BouncyCastle::Asn1 {
class DefiniteLengthInputStream;
}
namespace Org::BouncyCastle::Asn1 {
class DerSequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class LazyAsn1InputStream;
}
// Type: Org.BouncyCastle.Asn1::LazyAsn1InputStream
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(453))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(524))
// CS Name: Org.BouncyCastle.Asn1.LazyAsn1InputStream
class CORDL_TYPE LazyAsn1InputStream : public ::Org::BouncyCastle::Asn1::Asn1InputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LazyAsn1InputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyAsn1InputStream", modifiers: " const&", def_value: None }]
constexpr LazyAsn1InputStream(LazyAsn1InputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyAsn1InputStream", modifiers: "&&", def_value: None }]
constexpr LazyAsn1InputStream(LazyAsn1InputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LazyAsn1InputStream(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1InputStream(ptr) {
}


  constexpr LazyAsn1InputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LazyAsn1InputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LazyAsn1InputStream& operator=(LazyAsn1InputStream&& o) noexcept = default;
  constexpr LazyAsn1InputStream& operator=(LazyAsn1InputStream const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "input", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit LazyAsn1InputStream(::ArrayW<uint8_t> input) ;

/// @brief Method .ctor addr 0x113b1e0 size 0x4 virtual false final false
 void _ctor(::ArrayW<uint8_t> input) ;

// Ctor Parameters [CppParam { name: "inputStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit LazyAsn1InputStream(::System::IO::Stream inputStream) ;

/// @brief Method .ctor addr 0x113b1e4 size 0x30 virtual false final false
 void _ctor(::System::IO::Stream inputStream) ;

/// @brief Method CreateDerSequence addr 0x113b214 size 0x74 virtual true final false
 ::Org::BouncyCastle::Asn1::DerSequence CreateDerSequence(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream dIn) ;

/// @brief Method CreateDerSet addr 0x113b2f0 size 0x74 virtual true final false
 ::Org::BouncyCastle::Asn1::DerSet CreateDerSet(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream dIn) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::LazyAsn1InputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::LazyAsn1InputStream, "Org.BouncyCastle.Asn1", "LazyAsn1InputStream");
