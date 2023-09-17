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
class SecT163Field;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT163Field
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1459))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecT163Field
class CORDL_TYPE SecT163Field : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SecT163Field() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT163Field", modifiers: " const&", def_value: None }]
constexpr SecT163Field(SecT163Field const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT163Field", modifiers: "&&", def_value: None }]
constexpr SecT163Field(SecT163Field&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecT163Field(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecT163Field& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecT163Field& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecT163Field& operator=(SecT163Field&& o) noexcept = default;
  constexpr SecT163Field& operator=(SecT163Field const& o) noexcept = default;
                


// Fields

/// @brief Field M35 offset 0
static constexpr uint64_t  M35{34359738367u};

/// @brief Field M55 offset 0
static constexpr uint64_t  M55{36028797018963967u};

static ::ArrayW<uint64_t> __declspec(property(get=__get_ROOT_Z, put=__set_ROOT_Z))  ROOT_Z;

static void __set_ROOT_Z(::ArrayW<uint64_t> value) ;

static ::ArrayW<uint64_t> __get_ROOT_Z() ;


// Methods

/// @brief Method Add addr 0xf809d0 size 0xa8 virtual false final false
static void Add(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> z) ;

/// @brief Method AddExt addr 0xf80a78 size 0x138 virtual false final false
static void AddExt(::ArrayW<uint64_t> xx, ::ArrayW<uint64_t> yy, ::ArrayW<uint64_t> zz) ;

/// @brief Method AddOne addr 0xf80bb0 size 0x70 virtual false final false
static void AddOne(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method AddTo addr 0xf80c20 size 0x84 virtual false final false
static void AddTo(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method FromBigInteger addr 0xf80ca4 size 0x10 virtual false final false
static ::ArrayW<uint64_t> FromBigInteger(::Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method HalfTrace addr 0xf80cb4 size 0xc4 virtual false final false
static void HalfTrace(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Invert addr 0xf80ee8 size 0x1ec virtual false final false
static void Invert(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Multiply addr 0xf8121c size 0x88 virtual false final false
static void Multiply(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> z) ;

/// @brief Method MultiplyAddToExt addr 0xf815cc size 0x8c virtual false final false
static void MultiplyAddToExt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> zz) ;

/// @brief Method Reduce addr 0xf80df4 size 0xf4 virtual false final false
static void Reduce(::ArrayW<uint64_t> xx, ::ArrayW<uint64_t> z) ;

/// @brief Method Reduce29 addr 0xf81658 size 0x6c virtual false final false
static void Reduce29(::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method Sqrt addr 0xf816c4 size 0x144 virtual false final false
static void Sqrt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Square addr 0xf810d4 size 0x80 virtual false final false
static void Square(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method SquareAddToExt addr 0xf81808 size 0x84 virtual false final false
static void SquareAddToExt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> zz) ;

/// @brief Method SquareN addr 0xf81154 size 0xc8 virtual false final false
static void SquareN(::ArrayW<uint64_t> x, int32_t n, ::ArrayW<uint64_t> z) ;

/// @brief Method Trace addr 0xf8188c size 0x38 virtual false final false
static uint32_t Trace(::ArrayW<uint64_t> x) ;

/// @brief Method ImplCompactExt addr 0xf818c4 size 0x8c virtual false final false
static void ImplCompactExt(::ArrayW<uint64_t> zz) ;

/// @brief Method ImplMultiply addr 0xf812a4 size 0x328 virtual false final false
static void ImplMultiply(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> zz) ;

/// @brief Method ImplMulw addr 0xf81950 size 0x1a0 virtual false final false
static void ImplMulw(uint64_t x, uint64_t y, ::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method ImplSquare addr 0xf80d78 size 0x7c virtual false final false
static void ImplSquare(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> zz) ;

// Ctor Parameters []
explicit SecT163Field() ;

/// @brief Method .ctor addr 0xf81b84 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT163Field, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT163Field");
