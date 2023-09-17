#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__LimitedInputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class IndefiniteLengthInputStream;
}
// Type: Org.BouncyCastle.Asn1::IndefiniteLengthInputStream
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(500))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(523))
// CS Name: Org.BouncyCastle.Asn1.IndefiniteLengthInputStream
class CORDL_TYPE IndefiniteLengthInputStream : public ::Org::BouncyCastle::Asn1::LimitedInputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~IndefiniteLengthInputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "IndefiniteLengthInputStream", modifiers: " const&", def_value: None }]
constexpr IndefiniteLengthInputStream(IndefiniteLengthInputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IndefiniteLengthInputStream", modifiers: "&&", def_value: None }]
constexpr IndefiniteLengthInputStream(IndefiniteLengthInputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IndefiniteLengthInputStream(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::LimitedInputStream(ptr) {
}


  constexpr IndefiniteLengthInputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IndefiniteLengthInputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IndefiniteLengthInputStream& operator=(IndefiniteLengthInputStream&& o) noexcept = default;
  constexpr IndefiniteLengthInputStream& operator=(IndefiniteLengthInputStream const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__lookAhead, put=__set__lookAhead))  _lookAhead;

constexpr void __set__lookAhead(int32_t value) ;

constexpr int32_t __get__lookAhead() const;

 bool __declspec(property(get=__get__eofOn00, put=__set__eofOn00))  _eofOn00;

constexpr void __set__eofOn00(bool value) ;

constexpr bool __get__eofOn00() const;


// Methods

// Ctor Parameters [CppParam { name: "inStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "limit", ty: "int32_t", modifiers: "", def_value: None }]
explicit IndefiniteLengthInputStream(::System::IO::Stream inStream, int32_t limit) ;

/// @brief Method .ctor addr 0x112b134 size 0x44 virtual false final false
 void _ctor(::System::IO::Stream inStream, int32_t limit) ;

/// @brief Method SetEofOn00 addr 0x112fa94 size 0x14 virtual false final false
 void SetEofOn00(bool eofOn00) ;

/// @brief Method CheckForEof addr 0x113aff0 size 0xa4 virtual false final false
 bool CheckForEof() ;

/// @brief Method Read addr 0x113b094 size 0x104 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method ReadByte addr 0x113b198 size 0x48 virtual true final false
 int32_t ReadByte() ;

/// @brief Method RequireByte addr 0x113af88 size 0x68 virtual false final false
 int32_t RequireByte() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IndefiniteLengthInputStream, "Org.BouncyCastle.Asn1", "IndefiniteLengthInputStream");
