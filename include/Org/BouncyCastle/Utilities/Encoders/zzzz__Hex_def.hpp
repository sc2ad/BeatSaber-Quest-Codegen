#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Utilities::Encoders {
class HexEncoder;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class Hex;
}
// Type: Org.BouncyCastle.Utilities.Encoders::Hex
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1798))
// CS Name: Org.BouncyCastle.Utilities.Encoders.Hex
class CORDL_TYPE Hex : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Hex() = default;

// Ctor Parameters [CppParam { name: "", ty: "Hex", modifiers: " const&", def_value: None }]
constexpr Hex(Hex const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Hex", modifiers: "&&", def_value: None }]
constexpr Hex(Hex&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Hex(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Hex& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Hex& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Hex& operator=(Hex&& o) noexcept = default;
  constexpr Hex& operator=(Hex const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Utilities::Encoders::HexEncoder __declspec(property(get=__get_encoder, put=__set_encoder))  encoder;

static void __set_encoder(Org::BouncyCastle::Utilities::Encoders::HexEncoder value) ;

static Org::BouncyCastle::Utilities::Encoders::HexEncoder __get_encoder() ;


// Methods

static Org::BouncyCastle::Utilities::Encoders::Hex New_ctor() ;

/// @brief Method .ctor addr 0x10d1668 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method ToHexString addr 0x10d1670 size 0x64 virtual false final false
static ::StringW ToHexString(::ArrayW<uint8_t> data) ;

/// @brief Method ToHexString addr 0x10d16d4 size 0x74 virtual false final false
static ::StringW ToHexString(::ArrayW<uint8_t> data, int32_t off, int32_t length) ;

/// @brief Method Encode addr 0x10d1810 size 0x64 virtual false final false
static ::ArrayW<uint8_t> Encode(::ArrayW<uint8_t> data) ;

/// @brief Method Encode addr 0x10d1748 size 0xc8 virtual false final false
static ::ArrayW<uint8_t> Encode(::ArrayW<uint8_t> data, int32_t off, int32_t length) ;

/// @brief Method Encode addr 0x10d1984 size 0x84 virtual false final false
static int32_t Encode(::ArrayW<uint8_t> data, System::IO::Stream outStream) ;

/// @brief Method Encode addr 0x10d1a08 size 0x90 virtual false final false
static int32_t Encode(::ArrayW<uint8_t> data, int32_t off, int32_t length, System::IO::Stream outStream) ;

/// @brief Method Decode addr 0x10d1a98 size 0xd0 virtual false final false
static ::ArrayW<uint8_t> Decode(::ArrayW<uint8_t> data) ;

/// @brief Method Decode addr 0x10d1e4c size 0xd0 virtual false final false
static ::ArrayW<uint8_t> Decode(::StringW data) ;

/// @brief Method Decode addr 0x10d2218 size 0x78 virtual false final false
static int32_t Decode(::StringW data, System::IO::Stream outStream) ;

/// @brief Method DecodeStrict addr 0x10d2290 size 0x74 virtual false final false
static ::ArrayW<uint8_t> DecodeStrict(::StringW str) ;

/// @brief Method DecodeStrict addr 0x10d254c size 0x80 virtual false final false
static ::ArrayW<uint8_t> DecodeStrict(::StringW str, int32_t off, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(Org::BouncyCastle::Utilities::Encoders::Hex);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Encoders::Hex, "Org.BouncyCastle.Utilities.Encoders", "Hex");
