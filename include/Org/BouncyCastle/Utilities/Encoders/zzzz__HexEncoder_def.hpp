#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Utilities::Encoders {
class IEncoder;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class HexEncoder;
}
// Type: Org.BouncyCastle.Utilities.Encoders::HexEncoder
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1799))
// CS Name: Org.BouncyCastle.Utilities.Encoders.HexEncoder
class CORDL_TYPE HexEncoder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Utilities::Encoders::IEncoder
constexpr operator  ::Org::BouncyCastle::Utilities::Encoders::IEncoder() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HexEncoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "HexEncoder", modifiers: " const&", def_value: None }]
constexpr HexEncoder(HexEncoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HexEncoder", modifiers: "&&", def_value: None }]
constexpr HexEncoder(HexEncoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HexEncoder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HexEncoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HexEncoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HexEncoder& operator=(HexEncoder&& o) noexcept = default;
  constexpr HexEncoder& operator=(HexEncoder const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_encodingTable, put=__set_encodingTable))  encodingTable;

constexpr void __set_encodingTable(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_encodingTable() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_decodingTable, put=__set_decodingTable))  decodingTable;

constexpr void __set_decodingTable(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_decodingTable() const;


// Methods

/// @brief Method InitialiseDecodingTable addr 0x10d26dc size 0x164 virtual false final false
 void InitialiseDecodingTable() ;

// Ctor Parameters []
explicit HexEncoder() ;

/// @brief Method .ctor addr 0x10d2640 size 0x9c virtual false final false
 void _ctor() ;

/// @brief Method Encode addr 0x10d2840 size 0xd0 virtual false final false
 int32_t Encode(::ArrayW<uint8_t> inBuf, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t> outBuf, int32_t outOff) ;

/// @brief Method Encode addr 0x10d1874 size 0x110 virtual true final true
 int32_t Encode(::ArrayW<uint8_t> buf, int32_t off, int32_t len, ::System::IO::Stream outStream) ;

/// @brief Method Ignore addr 0x10d2910 size 0x38 virtual false final false
static bool Ignore(char16_t c) ;

/// @brief Method Decode addr 0x10d1b68 size 0x2e4 virtual true final true
 int32_t Decode(::ArrayW<uint8_t> data, int32_t off, int32_t length, ::System::IO::Stream outStream) ;

/// @brief Method DecodeString addr 0x10d1f1c size 0x2fc virtual true final true
 int32_t DecodeString(::StringW data, ::System::IO::Stream outStream) ;

/// @brief Method DecodeStrict addr 0x10d2304 size 0x248 virtual false final false
 ::ArrayW<uint8_t> DecodeStrict(::StringW str, int32_t off, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Encoders
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Encoders::HexEncoder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Encoders::HexEncoder, "Org.BouncyCastle.Utilities.Encoders", "HexEncoder");
