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
class SecT233Field;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT233Field
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1478))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field
class CORDL_TYPE SecT233Field : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SecT233Field() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT233Field", modifiers: " const&", def_value: None }]
constexpr SecT233Field(SecT233Field const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT233Field", modifiers: "&&", def_value: None }]
constexpr SecT233Field(SecT233Field&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecT233Field(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecT233Field& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecT233Field& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecT233Field& operator=(SecT233Field&& o) noexcept = default;
  constexpr SecT233Field& operator=(SecT233Field const& o) noexcept = default;
                


// Fields

/// @brief Field M41 offset 0
static constexpr uint64_t  M41{2199023255551u};

/// @brief Field M59 offset 0
static constexpr uint64_t  M59{576460752303423487u};


// Methods

/// @brief Method Add addr 0xf8d7cc size 0xd8 virtual false final false
static void Add(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> z) ;

/// @brief Method AddExt addr 0xf8d8a4 size 0x198 virtual false final false
static void AddExt(::ArrayW<uint64_t> xx, ::ArrayW<uint64_t> yy, ::ArrayW<uint64_t> zz) ;

/// @brief Method AddOne addr 0xf8da3c size 0x8c virtual false final false
static void AddOne(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method AddTo addr 0xf8dac8 size 0xa8 virtual false final false
static void AddTo(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method FromBigInteger addr 0xf8db70 size 0x10 virtual false final false
static ::ArrayW<uint64_t> FromBigInteger(::Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method HalfTrace addr 0xf8db80 size 0x8c virtual false final false
static void HalfTrace(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Invert addr 0xf8dda8 size 0x1bc virtual false final false
static void Invert(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Multiply addr 0xf8dfa0 size 0x4c virtual false final false
static void Multiply(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> z) ;

/// @brief Method MultiplyAddToExt addr 0xf8e3d8 size 0x50 virtual false final false
static void MultiplyAddToExt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> zz) ;

/// @brief Method Reduce addr 0xf8dca8 size 0x100 virtual false final false
static void Reduce(::ArrayW<uint64_t> xx, ::ArrayW<uint64_t> z) ;

/// @brief Method Reduce23 addr 0xf8e428 size 0x80 virtual false final false
static void Reduce23(::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method Sqrt addr 0xf8e4a8 size 0x258 virtual false final false
static void Sqrt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Square addr 0xf8df64 size 0x3c virtual false final false
static void Square(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method SquareAddToExt addr 0xf8e700 size 0x40 virtual false final false
static void SquareAddToExt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> zz) ;

/// @brief Method SquareN addr 0xf8dfec size 0x7c virtual false final false
static void SquareN(::ArrayW<uint64_t> x, int32_t n, ::ArrayW<uint64_t> z) ;

/// @brief Method Trace addr 0xf8e740 size 0x38 virtual false final false
static uint32_t Trace(::ArrayW<uint64_t> x) ;

/// @brief Method ImplCompactExt addr 0xf8e778 size 0xb4 virtual false final false
static void ImplCompactExt(::ArrayW<uint64_t> zz) ;

/// @brief Method ImplExpand addr 0xf8e82c size 0x8c virtual false final false
static void ImplExpand(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method ImplMultiply addr 0xf8e068 size 0x370 virtual false final false
static void ImplMultiply(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> zz) ;

/// @brief Method ImplMulwAcc addr 0xf8e8b8 size 0x1b0 virtual false final false
static void ImplMulwAcc(uint64_t x, uint64_t y, ::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method ImplSquare addr 0xf8dc0c size 0x9c virtual false final false
static void ImplSquare(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> zz) ;

// Ctor Parameters []
explicit SecT233Field() ;

/// @brief Method .ctor addr 0xf8ea68 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT233Field");
