#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Type: Org.BouncyCastle.Asn1::DerOutputStream
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(452))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(457))
// CS Name: Org.BouncyCastle.Asn1.DerOutputStream
class CORDL_TYPE DerOutputStream : public ::Org::BouncyCastle::Utilities::IO::FilterStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DerOutputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerOutputStream", modifiers: " const&", def_value: None }]
constexpr DerOutputStream(DerOutputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerOutputStream", modifiers: "&&", def_value: None }]
constexpr DerOutputStream(DerOutputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerOutputStream(void* ptr) noexcept : ::Org::BouncyCastle::Utilities::IO::FilterStream(ptr) {
}


  constexpr DerOutputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerOutputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerOutputStream& operator=(DerOutputStream&& o) noexcept = default;
  constexpr DerOutputStream& operator=(DerOutputStream const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "os", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit DerOutputStream(::System::IO::Stream os) ;

/// @brief Method .ctor addr 0x112c888 size 0x4 virtual false final false
 void _ctor(::System::IO::Stream os) ;

/// @brief Method WriteLength addr 0x112c88c size 0xa0 virtual false final false
 void WriteLength(int32_t length) ;

/// @brief Method WriteEncoded addr 0x112c92c size 0x5c virtual false final false
 void WriteEncoded(int32_t tag, ::ArrayW<uint8_t> bytes) ;

/// @brief Method WriteEncoded addr 0x112c988 size 0x7c virtual false final false
 void WriteEncoded(int32_t tag, uint8_t first, ::ArrayW<uint8_t> bytes) ;

/// @brief Method WriteEncoded addr 0x112ca04 size 0x64 virtual false final false
 void WriteEncoded(int32_t tag, ::ArrayW<uint8_t> bytes, int32_t offset, int32_t length) ;

/// @brief Method WriteTag addr 0x112ca68 size 0x124 virtual false final false
 void WriteTag(int32_t flags, int32_t tagNo) ;

/// @brief Method WriteEncoded addr 0x112cb8c size 0x50 virtual false final false
 void WriteEncoded(int32_t flags, int32_t tagNo, ::ArrayW<uint8_t> bytes) ;

/// @brief Method WriteNull addr 0x112cbdc size 0x38 virtual false final false
 void WriteNull() ;

/// @brief Method WriteObject addr 0x112cc14 size 0x15c virtual true final false
 void WriteObject(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method WriteObject addr 0x112cd70 size 0x70 virtual true final false
 void WriteObject(::Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method WriteObject addr 0x112cde0 size 0x58 virtual true final false
 void WriteObject(::Org::BouncyCastle::Asn1::Asn1Object obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerOutputStream, "Org.BouncyCastle.Asn1", "DerOutputStream");
