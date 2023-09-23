#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class GcmUtilities;
}
// Type: Org.BouncyCastle.Crypto.Modes.Gcm::GcmUtilities
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(953))
// CS Name: Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities
class CORDL_TYPE GcmUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GcmUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "GcmUtilities", modifiers: " const&", def_value: None }]
constexpr GcmUtilities(GcmUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GcmUtilities", modifiers: "&&", def_value: None }]
constexpr GcmUtilities(GcmUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GcmUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GcmUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GcmUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GcmUtilities& operator=(GcmUtilities&& o) noexcept = default;
  constexpr GcmUtilities& operator=(GcmUtilities const& o) noexcept = default;
                


// Fields

/// @brief Field E1 offset 0
static constexpr uint32_t  E1{3774873600u};

/// @brief Field E1L offset 0
static constexpr uint64_t  E1L{16212958658533785600u};

static ::ArrayW<uint32_t> __declspec(property(get=__get_LOOKUP, put=__set_LOOKUP))  LOOKUP;

static void __set_LOOKUP(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_LOOKUP() ;


// Methods

/// @brief Method GenerateLookup addr 0xe86378 size 0xcc virtual false final false
static ::ArrayW<uint32_t> GenerateLookup() ;

/// @brief Method OneAsBytes addr 0xe86444 size 0x64 virtual false final false
static ::ArrayW<uint8_t> OneAsBytes() ;

/// @brief Method OneAsUints addr 0xe86144 size 0x64 virtual false final false
static ::ArrayW<uint32_t> OneAsUints() ;

/// @brief Method OneAsUlongs addr 0xe864a8 size 0x64 virtual false final false
static ::ArrayW<uint64_t> OneAsUlongs() ;

/// @brief Method AsBytes addr 0xe8650c size 0x8 virtual false final false
static ::ArrayW<uint8_t> AsBytes(::ArrayW<uint32_t> x) ;

/// @brief Method AsBytes addr 0xe86274 size 0xc virtual false final false
static void AsBytes(::ArrayW<uint32_t> x, ::ArrayW<uint8_t> z) ;

/// @brief Method AsBytes addr 0xe86514 size 0x68 virtual false final false
static ::ArrayW<uint8_t> AsBytes(::ArrayW<uint64_t> x) ;

/// @brief Method AsBytes addr 0xe8657c size 0xc virtual false final false
static void AsBytes(::ArrayW<uint64_t> x, ::ArrayW<uint8_t> z) ;

/// @brief Method AsUints addr 0xe85fcc size 0x68 virtual false final false
static ::ArrayW<uint32_t> AsUints(::ArrayW<uint8_t> bs) ;

/// @brief Method AsUints addr 0xe86588 size 0x10 virtual false final false
static void AsUints(::ArrayW<uint8_t> bs, ::ArrayW<uint32_t> output) ;

/// @brief Method AsUlongs addr 0xe86598 size 0x68 virtual false final false
static ::ArrayW<uint64_t> AsUlongs(::ArrayW<uint8_t> x) ;

/// @brief Method AsUlongs addr 0xe86600 size 0x10 virtual false final false
static void AsUlongs(::ArrayW<uint8_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Multiply addr 0xe86610 size 0x8c virtual false final false
static void Multiply(::ArrayW<uint8_t> x, ::ArrayW<uint8_t> y) ;

/// @brief Method Multiply addr 0xe861a8 size 0xcc virtual false final false
static void Multiply(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) ;

/// @brief Method Multiply addr 0xe8669c size 0x94 virtual false final false
static void Multiply(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y) ;

/// @brief Method MultiplyP addr 0xe86730 size 0x84 virtual false final false
static void MultiplyP(::ArrayW<uint32_t> x) ;

/// @brief Method MultiplyP addr 0xe86824 size 0x94 virtual false final false
static void MultiplyP(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method MultiplyP8 addr 0xe86948 size 0xa4 virtual false final false
static void MultiplyP8(::ArrayW<uint32_t> x) ;

/// @brief Method MultiplyP8 addr 0xe86a80 size 0xb4 virtual false final false
static void MultiplyP8(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) ;

/// @brief Method ShiftRight addr 0xe867b4 size 0x70 virtual false final false
static uint32_t ShiftRight(::ArrayW<uint32_t> x) ;

/// @brief Method ShiftRight addr 0xe868b8 size 0x90 virtual false final false
static uint32_t ShiftRight(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method ShiftRightN addr 0xe869ec size 0x94 virtual false final false
static uint32_t ShiftRightN(::ArrayW<uint32_t> x, int32_t n) ;

/// @brief Method ShiftRightN addr 0xe86b34 size 0xb4 virtual false final false
static uint32_t ShiftRightN(::ArrayW<uint32_t> x, int32_t n, ::ArrayW<uint32_t> z) ;

/// @brief Method Xor addr 0xe86be8 size 0xec virtual false final false
static void Xor(::ArrayW<uint8_t> x, ::ArrayW<uint8_t> y) ;

/// @brief Method Xor addr 0xe86cd4 size 0x10c virtual false final false
static void Xor(::ArrayW<uint8_t> x, ::ArrayW<uint8_t> y, int32_t yOff) ;

/// @brief Method Xor addr 0xe86de0 size 0x190 virtual false final false
static void Xor(::ArrayW<uint8_t> x, int32_t xOff, ::ArrayW<uint8_t> y, int32_t yOff, ::ArrayW<uint8_t> z, int32_t zOff) ;

/// @brief Method Xor addr 0xe86f70 size 0x68 virtual false final false
static void Xor(::ArrayW<uint8_t> x, ::ArrayW<uint8_t> y, int32_t yOff, int32_t yLen) ;

/// @brief Method Xor addr 0xe86fd8 size 0x64 virtual false final false
static void Xor(::ArrayW<uint8_t> x, int32_t xOff, ::ArrayW<uint8_t> y, int32_t yOff, int32_t len) ;

/// @brief Method Xor addr 0xe8703c size 0x130 virtual false final false
static void Xor(::ArrayW<uint8_t> x, ::ArrayW<uint8_t> y, ::ArrayW<uint8_t> z) ;

/// @brief Method Xor addr 0xe8716c size 0x9c virtual false final false
static void Xor(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) ;

/// @brief Method Xor addr 0xe87208 size 0xc0 virtual false final false
static void Xor(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method Xor addr 0xe872c8 size 0x60 virtual false final false
static void Xor(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y) ;

/// @brief Method Xor addr 0xe87328 size 0x78 virtual false final false
static void Xor(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> z) ;

// Ctor Parameters []
explicit GcmUtilities() ;

/// @brief Method .ctor addr 0xe873ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes::Gcm
NEED_NO_BOX(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities, "Org.BouncyCastle.Crypto.Modes.Gcm", "GcmUtilities");
