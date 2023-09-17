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
class DefiniteLengthInputStream;
}
// Type: Org.BouncyCastle.Asn1::DefiniteLengthInputStream
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(500))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(501))
// CS Name: Org.BouncyCastle.Asn1.DefiniteLengthInputStream
class CORDL_TYPE DefiniteLengthInputStream : public ::Org::BouncyCastle::Asn1::LimitedInputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~DefiniteLengthInputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefiniteLengthInputStream", modifiers: " const&", def_value: None }]
constexpr DefiniteLengthInputStream(DefiniteLengthInputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefiniteLengthInputStream", modifiers: "&&", def_value: None }]
constexpr DefiniteLengthInputStream(DefiniteLengthInputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefiniteLengthInputStream(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::LimitedInputStream(ptr) {
}


  constexpr DefiniteLengthInputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefiniteLengthInputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefiniteLengthInputStream& operator=(DefiniteLengthInputStream&& o) noexcept = default;
  constexpr DefiniteLengthInputStream& operator=(DefiniteLengthInputStream const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_EmptyBytes, put=__set_EmptyBytes))  EmptyBytes;

static void __set_EmptyBytes(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_EmptyBytes() ;

 int32_t __declspec(property(get=__get__originalLength, put=__set__originalLength))  _originalLength;

constexpr void __set__originalLength(int32_t value) ;

constexpr int32_t __get__originalLength() const;

 int32_t __declspec(property(get=__get__remaining, put=__set__remaining))  _remaining;

constexpr void __set__remaining(int32_t value) ;

constexpr int32_t __get__remaining() const;


// Properties

 int32_t __declspec(property(get=get_Remaining))  Remaining;


// Methods

// Ctor Parameters [CppParam { name: "inStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "limit", ty: "int32_t", modifiers: "", def_value: None }]
explicit DefiniteLengthInputStream(::System::IO::Stream inStream, int32_t length, int32_t limit) ;

/// @brief Method .ctor addr 0x112956c size 0xc8 virtual false final false
 void _ctor(::System::IO::Stream inStream, int32_t length, int32_t limit) ;

/// @brief Method get_Remaining addr 0x1134fcc size 0x8 virtual false final false
 int32_t get_Remaining() ;

/// @brief Method ReadByte addr 0x1134fd4 size 0x1e4 virtual true final false
 int32_t ReadByte() ;

/// @brief Method Read addr 0x11351b8 size 0x254 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method ReadAllIntoByteArray addr 0x112b834 size 0x3a4 virtual false final false
 void ReadAllIntoByteArray(::ArrayW<uint8_t> buf) ;

/// @brief Method ToArray addr 0x1129634 size 0x3a8 virtual false final false
 ::ArrayW<uint8_t> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream, "Org.BouncyCastle.Asn1", "DefiniteLengthInputStream");
