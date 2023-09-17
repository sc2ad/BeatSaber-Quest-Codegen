#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Nat;
}
// Type: Org.BouncyCastle.Math.Raw::Nat
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1590))
// CS Name: Org.BouncyCastle.Math.Raw.Nat
class CORDL_TYPE Nat : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Nat() = default;

// Ctor Parameters [CppParam { name: "", ty: "Nat", modifiers: " const&", def_value: None }]
constexpr Nat(Nat const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Nat", modifiers: "&&", def_value: None }]
constexpr Nat(Nat&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Nat(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Nat& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Nat& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Nat& operator=(Nat&& o) noexcept = default;
  constexpr Nat& operator=(Nat const& o) noexcept = default;
                


// Fields

/// @brief Field M offset 0
static constexpr uint64_t  M{4294967295u};


// Methods

/// @brief Method Add addr 0xfcf758 size 0x94 virtual false final false
static uint32_t Add(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method Add33At addr 0xfcfae8 size 0x74 virtual false final false
static uint32_t Add33At(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zPos) ;

/// @brief Method Add33At addr 0xfcfbb4 size 0x7c virtual false final false
static uint32_t Add33At(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos) ;

/// @brief Method Add33To addr 0xfcfc94 size 0x64 virtual false final false
static uint32_t Add33To(int32_t len, uint32_t x, ::ArrayW<uint32_t> z) ;

/// @brief Method Add33To addr 0xfcfcf8 size 0x78 virtual false final false
static uint32_t Add33To(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method AddBothTo addr 0xfcfd70 size 0x9c virtual false final false
static uint32_t AddBothTo(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method AddBothTo addr 0xfcfe0c size 0xb0 virtual false final false
static uint32_t AddBothTo(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method AddDWordAt addr 0xfcfebc size 0x78 virtual false final false
static uint32_t AddDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t> z, int32_t zPos) ;

/// @brief Method AddDWordAt addr 0xfcff34 size 0x80 virtual false final false
static uint32_t AddDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos) ;

/// @brief Method AddDWordTo addr 0xfcffb4 size 0x68 virtual false final false
static uint32_t AddDWordTo(int32_t len, uint64_t x, ::ArrayW<uint32_t> z) ;

/// @brief Method AddDWordTo addr 0xfd001c size 0x7c virtual false final false
static uint32_t AddDWordTo(int32_t len, uint64_t x, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method AddTo addr 0xfcf8cc size 0x80 virtual false final false
static uint32_t AddTo(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method AddTo addr 0xfd0098 size 0x90 virtual false final false
static uint32_t AddTo(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method AddTo addr 0xfd0128 size 0x88 virtual false final false
static uint32_t AddTo(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff, uint32_t cIn) ;

/// @brief Method AddToEachOther addr 0xfd01b0 size 0x94 virtual false final false
static uint32_t AddToEachOther(int32_t len, ::ArrayW<uint32_t> u, int32_t uOff, ::ArrayW<uint32_t> v, int32_t vOff) ;

/// @brief Method AddWordAt addr 0xfd0244 size 0x54 virtual false final false
static uint32_t AddWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zPos) ;

/// @brief Method AddWordAt addr 0xfd0298 size 0x5c virtual false final false
static uint32_t AddWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos) ;

/// @brief Method AddWordTo addr 0xfd02f4 size 0x4c virtual false final false
static uint32_t AddWordTo(int32_t len, uint32_t x, ::ArrayW<uint32_t> z) ;

/// @brief Method AddWordTo addr 0xfd0340 size 0x58 virtual false final false
static uint32_t AddWordTo(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method CAdd addr 0xfd0398 size 0xa0 virtual false final false
static uint32_t CAdd(int32_t len, int32_t mask, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method CMov addr 0xfd0438 size 0x88 virtual false final false
static void CMov(int32_t len, int32_t mask, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method CMov addr 0xfd04c0 size 0x88 virtual false final false
static void CMov(int32_t len, int32_t mask, ::ArrayW<int32_t> x, int32_t xOff, ::ArrayW<int32_t> z, int32_t zOff) ;

/// @brief Method Compare addr 0xfd0548 size 0x70 virtual false final false
static int32_t Compare(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) ;

/// @brief Method Compare addr 0xfd05b8 size 0x7c virtual false final false
static int32_t Compare(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff) ;

/// @brief Method Copy addr 0xfd0634 size 0x18 virtual false final false
static void Copy(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Copy addr 0xfcf2b0 size 0x7c virtual false final false
static ::ArrayW<uint32_t> Copy(int32_t len, ::ArrayW<uint32_t> x) ;

/// @brief Method Copy addr 0xfd064c size 0x20 virtual false final false
static void Copy(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Copy64 addr 0xfd066c size 0x7c virtual false final false
static ::ArrayW<uint64_t> Copy64(int32_t len, ::ArrayW<uint64_t> x) ;

/// @brief Method Copy64 addr 0xfd06e8 size 0x18 virtual false final false
static void Copy64(int32_t len, ::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Copy64 addr 0xfd0700 size 0x20 virtual false final false
static void Copy64(int32_t len, ::ArrayW<uint64_t> x, int32_t xOff, ::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method Create addr 0xfcf32c size 0x48 virtual false final false
static ::ArrayW<uint32_t> Create(int32_t len) ;

/// @brief Method Create64 addr 0xfd0720 size 0x48 virtual false final false
static ::ArrayW<uint64_t> Create64(int32_t len) ;

/// @brief Method CSub addr 0xfd0768 size 0xa0 virtual false final false
static int32_t CSub(int32_t len, int32_t mask, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method CSub addr 0xfd0808 size 0xb4 virtual false final false
static int32_t CSub(int32_t len, int32_t mask, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Dec addr 0xfd08bc size 0x5c virtual false final false
static int32_t Dec(int32_t len, ::ArrayW<uint32_t> z) ;

/// @brief Method Dec addr 0xfd0918 size 0xb0 virtual false final false
static int32_t Dec(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method DecAt addr 0xfd09c8 size 0x58 virtual false final false
static int32_t DecAt(int32_t len, ::ArrayW<uint32_t> z, int32_t zPos) ;

/// @brief Method DecAt addr 0xfd0a20 size 0x64 virtual false final false
static int32_t DecAt(int32_t len, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos) ;

/// @brief Method Eq addr 0xfd0a84 size 0x64 virtual false final false
static bool Eq(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) ;

/// @brief Method FromBigInteger addr 0xfd0ae8 size 0xec virtual false final false
static ::ArrayW<uint32_t> FromBigInteger(int32_t bits, ::Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method FromBigInteger64 addr 0xfd0bd4 size 0xec virtual false final false
static ::ArrayW<uint64_t> FromBigInteger64(int32_t bits, ::Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method GetBit addr 0xfd0cc0 size 0x60 virtual false final false
static uint32_t GetBit(::ArrayW<uint32_t> x, int32_t bit) ;

/// @brief Method Gte addr 0xfcf4cc size 0x68 virtual false final false
static bool Gte(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) ;

/// @brief Method Inc addr 0xfd0d20 size 0x5c virtual false final false
static uint32_t Inc(int32_t len, ::ArrayW<uint32_t> z) ;

/// @brief Method Inc addr 0xfd0d7c size 0xb0 virtual false final false
static uint32_t Inc(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method IncAt addr 0xfcfb5c size 0x58 virtual false final false
static uint32_t IncAt(int32_t len, ::ArrayW<uint32_t> z, int32_t zPos) ;

/// @brief Method IncAt addr 0xfcfc30 size 0x64 virtual false final false
static uint32_t IncAt(int32_t len, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos) ;

/// @brief Method IsOne addr 0xfcf24c size 0x64 virtual false final false
static bool IsOne(int32_t len, ::ArrayW<uint32_t> x) ;

/// @brief Method IsZero addr 0xfcf1ec size 0x60 virtual false final false
static bool IsZero(int32_t len, ::ArrayW<uint32_t> x) ;

/// @brief Method LessThan addr 0xfd0e2c size 0x7c virtual false final false
static int32_t LessThan(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) ;

/// @brief Method LessThan addr 0xfd0ea8 size 0x8c virtual false final false
static int32_t LessThan(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff) ;

/// @brief Method Mul addr 0xfd0f34 size 0xe8 virtual false final false
static void Mul(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz) ;

/// @brief Method Mul addr 0xfd111c size 0x11c virtual false final false
static void Mul(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> zz, int32_t zzOff) ;

/// @brief Method Mul addr 0xfd12c0 size 0x124 virtual false final false
static void Mul(::ArrayW<uint32_t> x, int32_t xOff, int32_t xLen, ::ArrayW<uint32_t> y, int32_t yOff, int32_t yLen, ::ArrayW<uint32_t> zz, int32_t zzOff) ;

/// @brief Method MulAddTo addr 0xfd13e4 size 0xd4 virtual false final false
static uint32_t MulAddTo(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz) ;

/// @brief Method MulAddTo addr 0xfd14b8 size 0xe4 virtual false final false
static uint32_t MulAddTo(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> zz, int32_t zzOff) ;

/// @brief Method Mul31BothAdd addr 0xfd159c size 0xac virtual false final false
static uint32_t Mul31BothAdd(int32_t len, uint32_t a, ::ArrayW<uint32_t> x, uint32_t b, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method MulWord addr 0xfd101c size 0x70 virtual false final false
static uint32_t MulWord(int32_t len, uint32_t x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method MulWord addr 0xfd1238 size 0x88 virtual false final false
static uint32_t MulWord(int32_t len, uint32_t x, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method MulWordAddTo addr 0xfd108c size 0x90 virtual false final false
static uint32_t MulWordAddTo(int32_t len, uint32_t x, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method MulWordDwordAddAt addr 0xfd1648 size 0x9c virtual false final false
static uint32_t MulWordDwordAddAt(int32_t len, uint32_t x, uint64_t y, ::ArrayW<uint32_t> z, int32_t zPos) ;

/// @brief Method ShiftDownBit addr 0xfcfa10 size 0x58 virtual false final false
static uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t> z, uint32_t c) ;

/// @brief Method ShiftDownBit addr 0xfd16e4 size 0x58 virtual false final false
static uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t> z, int32_t zOff, uint32_t c) ;

/// @brief Method ShiftDownBit addr 0xfd173c size 0x6c virtual false final false
static uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t> x, uint32_t c, ::ArrayW<uint32_t> z) ;

/// @brief Method ShiftDownBit addr 0xfd17a8 size 0x70 virtual false final false
static uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, uint32_t c, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method ShiftDownBits addr 0xfcf99c size 0x74 virtual false final false
static uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t> z, int32_t bits, uint32_t c) ;

/// @brief Method ShiftDownBits addr 0xfd1818 size 0x74 virtual false final false
static uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t> z, int32_t zOff, int32_t bits, uint32_t c) ;

/// @brief Method ShiftDownBits addr 0xfd188c size 0x88 virtual false final false
static uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t> x, int32_t bits, uint32_t c, ::ArrayW<uint32_t> z) ;

/// @brief Method ShiftDownBits addr 0xfd1914 size 0x8c virtual false final false
static uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, int32_t bits, uint32_t c, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method ShiftDownWord addr 0xfcf94c size 0x50 virtual false final false
static uint32_t ShiftDownWord(int32_t len, ::ArrayW<uint32_t> z, uint32_t c) ;

/// @brief Method ShiftUpBit addr 0xfd19a0 size 0x60 virtual false final false
static uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t> z, uint32_t c) ;

/// @brief Method ShiftUpBit addr 0xfd1a00 size 0x6c virtual false final false
static uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t> z, int32_t zOff, uint32_t c) ;

/// @brief Method ShiftUpBit addr 0xfd1a6c size 0x74 virtual false final false
static uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t> x, uint32_t c, ::ArrayW<uint32_t> z) ;

/// @brief Method ShiftUpBit addr 0xfd1ae0 size 0x84 virtual false final false
static uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, uint32_t c, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method ShiftUpBit64 addr 0xfd1b64 size 0x84 virtual false final false
static uint64_t ShiftUpBit64(int32_t len, ::ArrayW<uint64_t> x, int32_t xOff, uint64_t c, ::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method ShiftUpBits addr 0xfd1be8 size 0x7c virtual false final false
static uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t> z, int32_t bits, uint32_t c) ;

/// @brief Method ShiftUpBits addr 0xfd1c64 size 0x88 virtual false final false
static uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t> z, int32_t zOff, int32_t bits, uint32_t c) ;

/// @brief Method ShiftUpBits64 addr 0xfd1cec size 0x88 virtual false final false
static uint64_t ShiftUpBits64(int32_t len, ::ArrayW<uint64_t> z, int32_t zOff, int32_t bits, uint64_t c) ;

/// @brief Method ShiftUpBits addr 0xfd1d74 size 0x90 virtual false final false
static uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t> x, int32_t bits, uint32_t c, ::ArrayW<uint32_t> z) ;

/// @brief Method ShiftUpBits addr 0xfd1e04 size 0xa0 virtual false final false
static uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, int32_t bits, uint32_t c, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method ShiftUpBits64 addr 0xfd1ea4 size 0xa0 virtual false final false
static uint64_t ShiftUpBits64(int32_t len, ::ArrayW<uint64_t> x, int32_t xOff, int32_t bits, uint64_t c, ::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method Square addr 0xfd1f44 size 0x148 virtual false final false
static void Square(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> zz) ;

/// @brief Method Square addr 0xfd2120 size 0x174 virtual false final false
static void Square(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> zz, int32_t zzOff) ;

/// @brief Method SquareWordAdd addr 0xfd2328 size 0x94 virtual false final false
static uint32_t SquareWordAdd(::ArrayW<uint32_t> x, int32_t xPos, ::ArrayW<uint32_t> z) ;

/// @brief Method SquareWordAdd addr 0xfd23bc size 0x94 virtual false final false
static uint32_t SquareWordAdd(::ArrayW<uint32_t> x, int32_t xOff, int32_t xPos, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method SquareWordAddTo addr 0xfd208c size 0x94 virtual false final false
static uint32_t SquareWordAddTo(::ArrayW<uint32_t> x, int32_t xPos, ::ArrayW<uint32_t> z) ;

/// @brief Method SquareWordAddTo addr 0xfd2294 size 0x94 virtual false final false
static uint32_t SquareWordAddTo(::ArrayW<uint32_t> x, int32_t xOff, int32_t xPos, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Sub addr 0xfcf838 size 0x94 virtual false final false
static int32_t Sub(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method Sub addr 0xfd2450 size 0xa8 virtual false final false
static int32_t Sub(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Sub33At addr 0xfd24f8 size 0x74 virtual false final false
static int32_t Sub33At(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zPos) ;

/// @brief Method Sub33At addr 0xfd256c size 0x7c virtual false final false
static int32_t Sub33At(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos) ;

/// @brief Method Sub33From addr 0xfd25e8 size 0x64 virtual false final false
static int32_t Sub33From(int32_t len, uint32_t x, ::ArrayW<uint32_t> z) ;

/// @brief Method Sub33From addr 0xfd264c size 0x78 virtual false final false
static int32_t Sub33From(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method SubBothFrom addr 0xfd26c4 size 0x9c virtual false final false
static int32_t SubBothFrom(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method SubBothFrom addr 0xfd2760 size 0xb0 virtual false final false
static int32_t SubBothFrom(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method SubDWordAt addr 0xfd2810 size 0x74 virtual false final false
static int32_t SubDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t> z, int32_t zPos) ;

/// @brief Method SubDWordAt addr 0xfd2884 size 0x7c virtual false final false
static int32_t SubDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos) ;

/// @brief Method SubDWordFrom addr 0xfd2900 size 0x64 virtual false final false
static int32_t SubDWordFrom(int32_t len, uint64_t x, ::ArrayW<uint32_t> z) ;

/// @brief Method SubDWordFrom addr 0xfd2964 size 0x78 virtual false final false
static int32_t SubDWordFrom(int32_t len, uint64_t x, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method SubFrom addr 0xfcf534 size 0x80 virtual false final false
static int32_t SubFrom(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method SubFrom addr 0xfd29dc size 0x90 virtual false final false
static int32_t SubFrom(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method SubWordAt addr 0xfd2a6c size 0x54 virtual false final false
static int32_t SubWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zPos) ;

/// @brief Method SubWordAt addr 0xfd2ac0 size 0x5c virtual false final false
static int32_t SubWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos) ;

/// @brief Method SubWordFrom addr 0xfd2b1c size 0x4c virtual false final false
static int32_t SubWordFrom(int32_t len, uint32_t x, ::ArrayW<uint32_t> z) ;

/// @brief Method SubWordFrom addr 0xfd2b68 size 0x58 virtual false final false
static int32_t SubWordFrom(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method ToBigInteger addr 0xfd2bc0 size 0xf4 virtual false final false
static ::Org::BouncyCastle::Math::BigInteger ToBigInteger(int32_t len, ::ArrayW<uint32_t> x) ;

/// @brief Method Zero addr 0xfd2cb4 size 0x48 virtual false final false
static void Zero(int32_t len, ::ArrayW<uint32_t> z) ;

// Ctor Parameters []
explicit Nat() ;

/// @brief Method .ctor addr 0xfd2cfc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::Raw
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Nat);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Nat, "Org.BouncyCastle.Math.Raw", "Nat");
