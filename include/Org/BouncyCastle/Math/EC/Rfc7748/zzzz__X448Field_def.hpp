#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
class X448Field;
}
// Type: Org.BouncyCastle.Math.EC.Rfc7748::X448Field
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1555))
// CS Name: Org.BouncyCastle.Math.EC.Rfc7748.X448Field
class CORDL_TYPE X448Field : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X448Field() = default;

// Ctor Parameters [CppParam { name: "", ty: "X448Field", modifiers: " const&", def_value: None }]
constexpr X448Field(X448Field const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X448Field", modifiers: "&&", def_value: None }]
constexpr X448Field(X448Field&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X448Field(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X448Field& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X448Field& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X448Field& operator=(X448Field&& o) noexcept = default;
  constexpr X448Field& operator=(X448Field const& o) noexcept = default;
                


// Fields

/// @brief Field Size offset 0
static constexpr int32_t  Size{16};

/// @brief Field M28 offset 0
static constexpr uint32_t  M28{268435455u};


// Methods

static Org::BouncyCastle::Math::EC::Rfc7748::X448Field New_ctor() ;

/// @brief Method .ctor addr 0xfb2a10 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Add addr 0xfb1274 size 0x70 virtual false final false
static void Add(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method AddOne addr 0xfb2a18 size 0x2c virtual false final false
static void AddOne(::ArrayW<uint32_t> z) ;

/// @brief Method AddOne addr 0xfb2a44 size 0x38 virtual false final false
static void AddOne(::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Carry addr 0xfb2a7c size 0x180 virtual false final false
static void Carry(::ArrayW<uint32_t> z) ;

/// @brief Method CMov addr 0xfb2bfc size 0x80 virtual false final false
static void CMov(int32_t cond, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method CNegate addr 0xfb2c7c size 0x44 virtual false final false
static void CNegate(int32_t negate, ::ArrayW<uint32_t> z) ;

/// @brief Method Copy addr 0xfb2804 size 0x70 virtual false final false
static void Copy(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Create addr 0xfb1230 size 0x44 virtual false final false
static ::ArrayW<uint32_t> Create() ;

/// @brief Method CSwap addr 0xfb2874 size 0x70 virtual false final false
static void CSwap(int32_t swap, ::ArrayW<uint32_t> a, ::ArrayW<uint32_t> b) ;

/// @brief Method Decode addr 0xfb2754 size 0xb0 virtual false final false
static void Decode(::ArrayW<uint8_t> x, int32_t xOff, ::ArrayW<uint32_t> z) ;

/// @brief Method Decode24 addr 0xfb2d3c size 0x54 virtual false final false
static uint32_t Decode24(::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method Decode32 addr 0xfb2d90 size 0x68 virtual false final false
static uint32_t Decode32(::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method Decode56 addr 0xfb2cc0 size 0x7c virtual false final false
static void Decode56(::ArrayW<uint8_t> bs, int32_t off, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Encode addr 0xfb2950 size 0xb8 virtual false final false
static void Encode(::ArrayW<uint32_t> x, ::ArrayW<uint8_t> z, int32_t zOff) ;

/// @brief Method Encode24 addr 0xfb2e60 size 0x64 virtual false final false
static void Encode24(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method Encode32 addr 0xfb2ec4 size 0x80 virtual false final false
static void Encode32(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method Encode56 addr 0xfb2df8 size 0x68 virtual false final false
static void Encode56(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method Inv addr 0xfb28e4 size 0x4c virtual false final false
static void Inv(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method IsZero addr 0xfb317c size 0x54 virtual false final false
static int32_t IsZero(::ArrayW<uint32_t> x) ;

/// @brief Method IsZeroVar addr 0xfb31d0 size 0x18 virtual false final false
static bool IsZeroVar(::ArrayW<uint32_t> x) ;

/// @brief Method Mul addr 0xfb250c size 0x1f8 virtual false final false
static void Mul(::ArrayW<uint32_t> x, uint32_t y, ::ArrayW<uint32_t> z) ;

/// @brief Method Mul addr 0xfb1c04 size 0x908 virtual false final false
static void Mul(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method Negate addr 0xfb31e8 size 0x28 virtual false final false
static void Negate(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Normalize addr 0xfb2930 size 0x20 virtual false final false
static void Normalize(::ArrayW<uint32_t> z) ;

/// @brief Method One addr 0xfb32c4 size 0x54 virtual false final false
static void One(::ArrayW<uint32_t> z) ;

/// @brief Method PowPm3d4 addr 0xfb2f44 size 0x1f0 virtual false final false
static void PowPm3d4(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Reduce addr 0xfb3210 size 0xb4 virtual false final false
static void Reduce(::ArrayW<uint32_t> z, int32_t x) ;

/// @brief Method Sqr addr 0xfb1658 size 0x5ac virtual false final false
static void Sqr(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Sqr addr 0xfb3134 size 0x48 virtual false final false
static void Sqr(::ArrayW<uint32_t> x, int32_t n, ::ArrayW<uint32_t> z) ;

/// @brief Method SqrtRatioVar addr 0xfb3318 size 0x12c virtual false final false
static bool SqrtRatioVar(::ArrayW<uint32_t> u, ::ArrayW<uint32_t> v, ::ArrayW<uint32_t> z) ;

/// @brief Method Sub addr 0xfb12e4 size 0x374 virtual false final false
static void Sub(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method SubOne addr 0xfb3444 size 0x3c virtual false final false
static void SubOne(::ArrayW<uint32_t> z) ;

/// @brief Method Zero addr 0xfb3480 size 0x3c virtual false final false
static void Zero(::ArrayW<uint32_t> z) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Rfc7748
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Rfc7748::X448Field);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc7748::X448Field, "Org.BouncyCastle.Math.EC.Rfc7748", "X448Field");
