#pragma once
#include "../../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT193Field;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT193Field
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1470))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecT193Field
class CORDL_TYPE SecT193Field : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SecT193Field() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT193Field", modifiers: " const&", def_value: None }]
constexpr SecT193Field(SecT193Field const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT193Field", modifiers: "&&", def_value: None }]
constexpr SecT193Field(SecT193Field&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecT193Field(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecT193Field& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecT193Field& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecT193Field& operator=(SecT193Field&& o) noexcept = default;
  constexpr SecT193Field& operator=(SecT193Field const& o) noexcept = default;
                


// Fields

/// @brief Field M01 offset 0
static constexpr uint64_t  M01{1u};

/// @brief Field M49 offset 0
static constexpr uint64_t  M49{562949953421311u};


// Methods

/// @brief Method Add addr 0xf88014 size 0xd8 virtual false final false
static void Add(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> z) ;

/// @brief Method AddExt addr 0xf880ec size 0x168 virtual false final false
static void AddExt(::ArrayW<uint64_t> xx, ::ArrayW<uint64_t> yy, ::ArrayW<uint64_t> zz) ;

/// @brief Method AddOne addr 0xf88254 size 0x8c virtual false final false
static void AddOne(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method AddTo addr 0xf882e0 size 0xa8 virtual false final false
static void AddTo(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method FromBigInteger addr 0xf88388 size 0x10 virtual false final false
static ::ArrayW<uint64_t> FromBigInteger(::Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method HalfTrace addr 0xf88398 size 0x8c virtual false final false
static void HalfTrace(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Invert addr 0xf885b0 size 0x18c virtual false final false
static void Invert(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Multiply addr 0xf887f4 size 0x4c virtual false final false
static void Multiply(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> z) ;

/// @brief Method MultiplyAddToExt addr 0xf88bb0 size 0x50 virtual false final false
static void MultiplyAddToExt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> zz) ;

/// @brief Method Reduce addr 0xf884cc size 0xe4 virtual false final false
static void Reduce(::ArrayW<uint64_t> xx, ::ArrayW<uint64_t> z) ;

/// @brief Method Reduce63 addr 0xf88c00 size 0x84 virtual false final false
static void Reduce63(::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method Sqrt addr 0xf88c84 size 0xfc virtual false final false
static void Sqrt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Square addr 0xf8873c size 0x3c virtual false final false
static void Square(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method SquareAddToExt addr 0xf88d80 size 0x40 virtual false final false
static void SquareAddToExt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> zz) ;

/// @brief Method SquareN addr 0xf88778 size 0x7c virtual false final false
static void SquareN(::ArrayW<uint64_t> x, int32_t n, ::ArrayW<uint64_t> z) ;

/// @brief Method Trace addr 0xf88dc0 size 0x28 virtual false final false
static uint32_t Trace(::ArrayW<uint64_t> x) ;

/// @brief Method ImplCompactExt addr 0xf88de8 size 0xb4 virtual false final false
static void ImplCompactExt(::ArrayW<uint64_t> zz) ;

/// @brief Method ImplExpand addr 0xf88e9c size 0x8c virtual false final false
static void ImplExpand(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method ImplMultiply addr 0xf88840 size 0x370 virtual false final false
static void ImplMultiply(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> zz) ;

/// @brief Method ImplMulwAcc addr 0xf88f28 size 0x1f8 virtual false final false
static void ImplMulwAcc(uint64_t x, uint64_t y, ::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method ImplSquare addr 0xf88424 size 0xa8 virtual false final false
static void ImplSquare(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> zz) ;

// Ctor Parameters []
explicit SecT193Field() ;

/// @brief Method .ctor addr 0xf89120 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193Field, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT193Field");
