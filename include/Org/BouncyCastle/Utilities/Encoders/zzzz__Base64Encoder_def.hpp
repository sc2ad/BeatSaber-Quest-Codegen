#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Utilities::Encoders {
class IEncoder;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class Base64Encoder;
}
// Type: Org.BouncyCastle.Utilities.Encoders::Base64Encoder
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1795))
// CS Name: Org.BouncyCastle.Utilities.Encoders.Base64Encoder
class CORDL_TYPE Base64Encoder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Utilities::Encoders::IEncoder
constexpr operator  Org::BouncyCastle::Utilities::Encoders::IEncoder() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Base64Encoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Base64Encoder", modifiers: " const&", def_value: None }]
constexpr Base64Encoder(Base64Encoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Base64Encoder", modifiers: "&&", def_value: None }]
constexpr Base64Encoder(Base64Encoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Base64Encoder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Base64Encoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Base64Encoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Base64Encoder& operator=(Base64Encoder&& o) noexcept = default;
  constexpr Base64Encoder& operator=(Base64Encoder const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_encodingTable, put=__set_encodingTable))  encodingTable;

constexpr void __set_encodingTable(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_encodingTable() const;

 uint8_t __declspec(property(get=__get_padding, put=__set_padding))  padding;

constexpr void __set_padding(uint8_t value) ;

constexpr uint8_t __get_padding() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_decodingTable, put=__set_decodingTable))  decodingTable;

constexpr void __set_decodingTable(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_decodingTable() const;


// Methods

/// @brief Method InitialiseDecodingTable addr 0x10cfb88 size 0xbc virtual false final false
 void InitialiseDecodingTable() ;

static Org::BouncyCastle::Utilities::Encoders::Base64Encoder New_ctor() ;

/// @brief Method .ctor addr 0x10cfc44 size 0xa4 virtual false final false
 void _ctor() ;

/// @brief Method Encode addr 0x10cfce8 size 0x390 virtual false final false
 int32_t Encode(::ArrayW<uint8_t> inBuf, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t> outBuf, int32_t outOff) ;

/// @brief Method Encode addr 0x10d0078 size 0x12c virtual true final true
 int32_t Encode(::ArrayW<uint8_t> buf, int32_t off, int32_t len, System::IO::Stream outStream) ;

/// @brief Method ignore addr 0x10d01a4 size 0x38 virtual false final false
 bool ignore(char16_t c) ;

/// @brief Method Decode addr 0x10d01dc size 0x3f8 virtual true final true
 int32_t Decode(::ArrayW<uint8_t> data, int32_t off, int32_t length, System::IO::Stream outStream) ;

/// @brief Method nextI addr 0x10d05d4 size 0x74 virtual false final false
 int32_t nextI(::ArrayW<uint8_t> data, int32_t i, int32_t finish) ;

/// @brief Method DecodeString addr 0x10d084c size 0x408 virtual true final true
 int32_t DecodeString(::StringW data, System::IO::Stream outStream) ;

/// @brief Method decodeLastBlock addr 0x10d0648 size 0x204 virtual false final false
 int32_t decodeLastBlock(System::IO::Stream outStream, char16_t c1, char16_t c2, char16_t c3, char16_t c4) ;

/// @brief Method nextI addr 0x10d0c54 size 0x84 virtual false final false
 int32_t nextI(::StringW data, int32_t i, int32_t finish) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(Org::BouncyCastle::Utilities::Encoders::Base64Encoder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Encoders::Base64Encoder, "Org.BouncyCastle.Utilities.Encoders", "Base64Encoder");
