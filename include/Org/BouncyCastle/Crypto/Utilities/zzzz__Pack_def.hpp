#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Utilities {
class Pack;
}
// Type: Org.BouncyCastle.Crypto.Utilities::Pack
namespace Org::BouncyCastle::Crypto::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1339))
// CS Name: Org.BouncyCastle.Crypto.Utilities.Pack
class CORDL_TYPE Pack : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Pack() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pack", modifiers: " const&", def_value: None }]
constexpr Pack(Pack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pack", modifiers: "&&", def_value: None }]
constexpr Pack(Pack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pack(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Pack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pack& operator=(Pack&& o) noexcept = default;
  constexpr Pack& operator=(Pack const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Pack() ;

/// @brief Method .ctor addr 0xf34684 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method UInt16_To_BE addr 0xf3468c size 0x34 virtual false final false
static void UInt16_To_BE(uint16_t n, ::ArrayW<uint8_t> bs) ;

/// @brief Method UInt16_To_BE addr 0xf346c0 size 0x48 virtual false final false
static void UInt16_To_BE(uint16_t n, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method BE_To_UInt16 addr 0xf34708 size 0x34 virtual false final false
static uint16_t BE_To_UInt16(::ArrayW<uint8_t> bs) ;

/// @brief Method BE_To_UInt16 addr 0xf3473c size 0x40 virtual false final false
static uint16_t BE_To_UInt16(::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method UInt32_To_BE addr 0xf3477c size 0x64 virtual false final false
static ::ArrayW<uint8_t> UInt32_To_BE(uint32_t n) ;

/// @brief Method UInt32_To_BE addr 0xf34860 size 0x54 virtual false final false
static void UInt32_To_BE(uint32_t n, ::ArrayW<uint8_t> bs) ;

/// @brief Method UInt32_To_BE addr 0xf347e0 size 0x80 virtual false final false
static void UInt32_To_BE(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method UInt32_To_BE addr 0xf348b4 size 0x70 virtual false final false
static ::ArrayW<uint8_t> UInt32_To_BE(::ArrayW<uint32_t> ns) ;

/// @brief Method UInt32_To_BE addr 0xf34924 size 0x78 virtual false final false
static void UInt32_To_BE(::ArrayW<uint32_t> ns, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method UInt32_To_BE addr 0xf3499c size 0x88 virtual false final false
static void UInt32_To_BE(::ArrayW<uint32_t> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t> bs, int32_t bsOff) ;

/// @brief Method BE_To_UInt32 addr 0xf34a24 size 0x58 virtual false final false
static uint32_t BE_To_UInt32(::ArrayW<uint8_t> bs) ;

/// @brief Method BE_To_UInt32 addr 0xf34a7c size 0x74 virtual false final false
static uint32_t BE_To_UInt32(::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method BE_To_UInt32 addr 0xf34af0 size 0x74 virtual false final false
static void BE_To_UInt32(::ArrayW<uint8_t> bs, int32_t off, ::ArrayW<uint32_t> ns) ;

/// @brief Method BE_To_UInt32 addr 0xf34b64 size 0x88 virtual false final false
static void BE_To_UInt32(::ArrayW<uint8_t> bs, int32_t bsOff, ::ArrayW<uint32_t> ns, int32_t nsOff, int32_t nsLen) ;

/// @brief Method UInt64_To_BE addr 0xf34bec size 0x74 virtual false final false
static ::ArrayW<uint8_t> UInt64_To_BE(uint64_t n) ;

/// @brief Method UInt64_To_BE addr 0xf34c94 size 0x30 virtual false final false
static void UInt64_To_BE(uint64_t n, ::ArrayW<uint8_t> bs) ;

/// @brief Method UInt64_To_BE addr 0xf34c60 size 0x34 virtual false final false
static void UInt64_To_BE(uint64_t n, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method UInt64_To_BE addr 0xf34cc4 size 0x70 virtual false final false
static ::ArrayW<uint8_t> UInt64_To_BE(::ArrayW<uint64_t> ns) ;

/// @brief Method UInt64_To_BE addr 0xf34d34 size 0x94 virtual false final false
static void UInt64_To_BE(::ArrayW<uint64_t> ns, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method UInt64_To_BE addr 0xf34dc8 size 0xa0 virtual false final false
static void UInt64_To_BE(::ArrayW<uint64_t> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t> bs, int32_t bsOff) ;

/// @brief Method BE_To_UInt64 addr 0xf34e68 size 0x34 virtual false final false
static uint64_t BE_To_UInt64(::ArrayW<uint8_t> bs) ;

/// @brief Method BE_To_UInt64 addr 0xf34e9c size 0x38 virtual false final false
static uint64_t BE_To_UInt64(::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method BE_To_UInt64 addr 0xf34ed4 size 0x98 virtual false final false
static void BE_To_UInt64(::ArrayW<uint8_t> bs, int32_t off, ::ArrayW<uint64_t> ns) ;

/// @brief Method BE_To_UInt64 addr 0xf34f6c size 0xac virtual false final false
static void BE_To_UInt64(::ArrayW<uint8_t> bs, int32_t bsOff, ::ArrayW<uint64_t> ns, int32_t nsOff, int32_t nsLen) ;

/// @brief Method UInt16_To_LE addr 0xf35018 size 0x34 virtual false final false
static void UInt16_To_LE(uint16_t n, ::ArrayW<uint8_t> bs) ;

/// @brief Method UInt16_To_LE addr 0xf3504c size 0x48 virtual false final false
static void UInt16_To_LE(uint16_t n, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method LE_To_UInt16 addr 0xf35094 size 0x2c virtual false final false
static uint16_t LE_To_UInt16(::ArrayW<uint8_t> bs) ;

/// @brief Method LE_To_UInt16 addr 0xf350c0 size 0x40 virtual false final false
static uint16_t LE_To_UInt16(::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method UInt32_To_LE addr 0xf35100 size 0x64 virtual false final false
static ::ArrayW<uint8_t> UInt32_To_LE(uint32_t n) ;

/// @brief Method UInt32_To_LE addr 0xf351e4 size 0x54 virtual false final false
static void UInt32_To_LE(uint32_t n, ::ArrayW<uint8_t> bs) ;

/// @brief Method UInt32_To_LE addr 0xf35164 size 0x80 virtual false final false
static void UInt32_To_LE(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method UInt32_To_LE addr 0xf35238 size 0x70 virtual false final false
static ::ArrayW<uint8_t> UInt32_To_LE(::ArrayW<uint32_t> ns) ;

/// @brief Method UInt32_To_LE addr 0xf352a8 size 0x78 virtual false final false
static void UInt32_To_LE(::ArrayW<uint32_t> ns, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method LE_To_UInt32 addr 0xf35320 size 0x58 virtual false final false
static uint32_t LE_To_UInt32(::ArrayW<uint8_t> bs) ;

/// @brief Method LE_To_UInt32 addr 0xf35378 size 0x74 virtual false final false
static uint32_t LE_To_UInt32(::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method LE_To_UInt32 addr 0xf353ec size 0x74 virtual false final false
static void LE_To_UInt32(::ArrayW<uint8_t> bs, int32_t off, ::ArrayW<uint32_t> ns) ;

/// @brief Method LE_To_UInt32 addr 0xf35460 size 0x88 virtual false final false
static void LE_To_UInt32(::ArrayW<uint8_t> bs, int32_t bOff, ::ArrayW<uint32_t> ns, int32_t nOff, int32_t count) ;

/// @brief Method LE_To_UInt32 addr 0xf354e8 size 0xb0 virtual false final false
static ::ArrayW<uint32_t> LE_To_UInt32(::ArrayW<uint8_t> bs, int32_t off, int32_t count) ;

/// @brief Method UInt64_To_LE addr 0xf35598 size 0x74 virtual false final false
static ::ArrayW<uint8_t> UInt64_To_LE(uint64_t n) ;

/// @brief Method UInt64_To_LE addr 0xf3563c size 0x2c virtual false final false
static void UInt64_To_LE(uint64_t n, ::ArrayW<uint8_t> bs) ;

/// @brief Method UInt64_To_LE addr 0xf3560c size 0x30 virtual false final false
static void UInt64_To_LE(uint64_t n, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method UInt64_To_LE addr 0xf35668 size 0x70 virtual false final false
static ::ArrayW<uint8_t> UInt64_To_LE(::ArrayW<uint64_t> ns) ;

/// @brief Method UInt64_To_LE addr 0xf356d8 size 0x94 virtual false final false
static void UInt64_To_LE(::ArrayW<uint64_t> ns, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method UInt64_To_LE addr 0xf3576c size 0xa0 virtual false final false
static void UInt64_To_LE(::ArrayW<uint64_t> ns, int32_t nsOff, int32_t nsLen, ::ArrayW<uint8_t> bs, int32_t bsOff) ;

/// @brief Method LE_To_UInt64 addr 0xf3580c size 0x38 virtual false final false
static uint64_t LE_To_UInt64(::ArrayW<uint8_t> bs) ;

/// @brief Method LE_To_UInt64 addr 0xf35844 size 0x3c virtual false final false
static uint64_t LE_To_UInt64(::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method LE_To_UInt64 addr 0xf35880 size 0x98 virtual false final false
static void LE_To_UInt64(::ArrayW<uint8_t> bs, int32_t off, ::ArrayW<uint64_t> ns) ;

/// @brief Method LE_To_UInt64 addr 0xf35918 size 0xac virtual false final false
static void LE_To_UInt64(::ArrayW<uint8_t> bs, int32_t bsOff, ::ArrayW<uint64_t> ns, int32_t nsOff, int32_t nsLen) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Utilities
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Utilities::Pack);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Utilities::Pack, "Org.BouncyCastle.Crypto.Utilities", "Pack");
