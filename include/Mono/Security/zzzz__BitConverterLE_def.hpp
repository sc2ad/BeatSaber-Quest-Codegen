#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Mono::Security {
class BitConverterLE;
}
// Type: Mono.Security::BitConverterLE
namespace Mono::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13950))
// CS Name: Mono.Security.BitConverterLE
class CORDL_TYPE BitConverterLE : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BitConverterLE() = default;

// Ctor Parameters [CppParam { name: "", ty: "BitConverterLE", modifiers: " const&", def_value: None }]
constexpr BitConverterLE(BitConverterLE const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BitConverterLE", modifiers: "&&", def_value: None }]
constexpr BitConverterLE(BitConverterLE&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BitConverterLE(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BitConverterLE& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BitConverterLE& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BitConverterLE& operator=(BitConverterLE&& o) noexcept = default;
  constexpr BitConverterLE& operator=(BitConverterLE const& o) noexcept = default;
                


// Methods

/// @brief Method GetUIntBytes addr 0x22813c8 size 0x110 virtual false final false
static ::ArrayW<uint8_t> GetUIntBytes(void* bytes) ;

/// @brief Method GetULongBytes addr 0x22814d8 size 0x190 virtual false final false
static ::ArrayW<uint8_t> GetULongBytes(void* bytes) ;

/// @brief Method GetBytes addr 0x22808ac size 0x18 virtual false final false
static ::ArrayW<uint8_t> GetBytes(int32_t value) ;

/// @brief Method GetBytes addr 0x2281668 size 0x18 virtual false final false
static ::ArrayW<uint8_t> GetBytes(int64_t value) ;

/// @brief Method UShortFromBytes addr 0x2281680 size 0xdc virtual false final false
static void UShortFromBytes(void* dst, ::ArrayW<uint8_t> src, int32_t startIndex) ;

/// @brief Method UIntFromBytes addr 0x228175c size 0x14c virtual false final false
static void UIntFromBytes(void* dst, ::ArrayW<uint8_t> src, int32_t startIndex) ;

/// @brief Method ToInt32 addr 0x22818a8 size 0x24 virtual false final false
static int32_t ToInt32(::ArrayW<uint8_t> value, int32_t startIndex) ;

/// @brief Method ToUInt16 addr 0x22818cc size 0x24 virtual false final false
static uint16_t ToUInt16(::ArrayW<uint8_t> value, int32_t startIndex) ;

/// @brief Method ToUInt32 addr 0x22818f0 size 0x24 virtual false final false
static uint32_t ToUInt32(::ArrayW<uint8_t> value, int32_t startIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security
} // end anonymous namespace
NEED_NO_BOX(::Mono::Security::BitConverterLE);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::BitConverterLE, "Mono.Security", "BitConverterLE");
