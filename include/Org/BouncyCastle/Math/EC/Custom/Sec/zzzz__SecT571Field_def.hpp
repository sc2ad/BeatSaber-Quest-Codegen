#pragma once
#include "../../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT571Field;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT571Field
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1507))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field
class CORDL_TYPE SecT571Field : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SecT571Field() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT571Field", modifiers: " const&", def_value: None }]
constexpr SecT571Field(SecT571Field const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT571Field", modifiers: "&&", def_value: None }]
constexpr SecT571Field(SecT571Field&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecT571Field(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecT571Field& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecT571Field& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecT571Field& operator=(SecT571Field&& o) noexcept = default;
  constexpr SecT571Field& operator=(SecT571Field const& o) noexcept = default;
                


// Fields

/// @brief Field M59 offset 0
static constexpr uint64_t  M59{576460752303423487u};

/// @brief Field RM offset 0
static constexpr uint64_t  RM{17256631552825064414u};

static ::ArrayW<uint64_t> __declspec(property(get=__get_ROOT_Z, put=__set_ROOT_Z))  ROOT_Z;

static void __set_ROOT_Z(::ArrayW<uint64_t> value) ;

static ::ArrayW<uint64_t> __get_ROOT_Z() ;


// Methods

/// @brief Method Add addr 0xfa2038 size 0x70 virtual false final false
static void Add(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> z) ;

/// @brief Method Add addr 0xfa20a8 size 0x94 virtual false final false
static void Add(::ArrayW<uint64_t> x, int32_t xOff, ::ArrayW<uint64_t> y, int32_t yOff, ::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method AddBothTo addr 0xfa213c size 0x9c virtual false final false
static void AddBothTo(::ArrayW<uint64_t> x, int32_t xOff, ::ArrayW<uint64_t> y, int32_t yOff, ::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method AddExt addr 0xfa21d8 size 0x70 virtual false final false
static void AddExt(::ArrayW<uint64_t> xx, ::ArrayW<uint64_t> yy, ::ArrayW<uint64_t> zz) ;

/// @brief Method AddOne addr 0xfa2248 size 0x74 virtual false final false
static void AddOne(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method AddTo addr 0xfa22bc size 0x5c virtual false final false
static void AddTo(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method FromBigInteger addr 0xfa2318 size 0x10 virtual false final false
static ::ArrayW<uint64_t> FromBigInteger(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method HalfTrace addr 0xfa2328 size 0xc4 virtual false final false
static void HalfTrace(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Invert addr 0xfa2670 size 0x250 virtual false final false
static void Invert(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Multiply addr 0xfa2940 size 0x88 virtual false final false
static void Multiply(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> z) ;

/// @brief Method MultiplyAddToExt addr 0xfa2d10 size 0x8c virtual false final false
static void MultiplyAddToExt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> zz) ;

/// @brief Method Reduce addr 0xfa2528 size 0x148 virtual false final false
static void Reduce(::ArrayW<uint64_t> xx, ::ArrayW<uint64_t> z) ;

/// @brief Method Reduce5 addr 0xfa2d9c size 0x6c virtual false final false
static void Reduce5(::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method Sqrt addr 0xfa2e08 size 0x198 virtual false final false
static void Sqrt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Square addr 0xfa28c0 size 0x80 virtual false final false
static void Square(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method SquareAddToExt addr 0xfa2fa0 size 0x84 virtual false final false
static void SquareAddToExt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> zz) ;

/// @brief Method SquareN addr 0xfa29c8 size 0xc8 virtual false final false
static void SquareN(::ArrayW<uint64_t> x, int32_t n, ::ArrayW<uint64_t> z) ;

/// @brief Method Trace addr 0xfa3024 size 0x44 virtual false final false
static uint32_t Trace(::ArrayW<uint64_t> x) ;

/// @brief Method ImplMultiply addr 0xfa2a90 size 0x280 virtual false final false
static void ImplMultiply(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> zz) ;

/// @brief Method ImplMulwAcc addr 0xfa3068 size 0x1dc virtual false final false
static void ImplMulwAcc(::ArrayW<uint64_t> xs, uint64_t y, ::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method ImplSquare addr 0xfa23ec size 0x13c virtual false final false
static void ImplSquare(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> zz) ;

static Org::BouncyCastle::Math::EC::Custom::Sec::SecT571Field New_ctor() ;

/// @brief Method .ctor addr 0xfa32d8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Custom::Sec::SecT571Field);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecT571Field, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT571Field");
