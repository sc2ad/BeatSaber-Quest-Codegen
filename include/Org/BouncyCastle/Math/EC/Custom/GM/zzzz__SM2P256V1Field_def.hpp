#pragma once
#include "../../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::GM {
class SM2P256V1Field;
}
// Type: Org.BouncyCastle.Math.EC.Custom.GM::SM2P256V1Field
namespace Org::BouncyCastle::Math::EC::Custom::GM {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1379))
// CS Name: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Field
class CORDL_TYPE SM2P256V1Field : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SM2P256V1Field() = default;

// Ctor Parameters [CppParam { name: "", ty: "SM2P256V1Field", modifiers: " const&", def_value: None }]
constexpr SM2P256V1Field(SM2P256V1Field const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SM2P256V1Field", modifiers: "&&", def_value: None }]
constexpr SM2P256V1Field(SM2P256V1Field&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SM2P256V1Field(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SM2P256V1Field& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SM2P256V1Field& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SM2P256V1Field& operator=(SM2P256V1Field&& o) noexcept = default;
  constexpr SM2P256V1Field& operator=(SM2P256V1Field const& o) noexcept = default;
                


// Fields

/// @brief Field P7 offset 0
static constexpr uint32_t  P7{4294967294u};

/// @brief Field PExt15 offset 0
static constexpr uint32_t  PExt15{4294967294u};

static ::ArrayW<uint32_t> __declspec(property(get=__get_P, put=__set_P))  P;

static void __set_P(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_P() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_PExt, put=__set_PExt))  PExt;

static void __set_PExt(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_PExt() ;


// Methods

/// @brief Method Add addr 0xf460c0 size 0xdc virtual false final false
static void Add(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method AddExt addr 0xf46288 size 0xf8 virtual false final false
static void AddExt(::ArrayW<uint32_t> xx, ::ArrayW<uint32_t> yy, ::ArrayW<uint32_t> zz) ;

/// @brief Method AddOne addr 0xf46380 size 0xcc virtual false final false
static void AddOne(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method FromBigInteger addr 0xf4644c size 0xcc virtual false final false
static ::ArrayW<uint32_t> FromBigInteger(::Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method Inv addr 0xf46518 size 0x2e8 virtual false final false
static void Inv(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Half addr 0xf46a28 size 0xbc virtual false final false
static void Half(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method IsZero addr 0xf46800 size 0x54 virtual false final false
static int32_t IsZero(::ArrayW<uint32_t> x) ;

/// @brief Method Multiply addr 0xf468d4 size 0x88 virtual false final false
static void Multiply(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method MultiplyAddToExt addr 0xf46cbc size 0xf4 virtual false final false
static void MultiplyAddToExt(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz) ;

/// @brief Method Negate addr 0xf46db0 size 0x98 virtual false final false
static void Negate(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Random addr 0xf45ab8 size 0xd8 virtual false final false
static void Random(::Org::BouncyCastle::Security::SecureRandom r, ::ArrayW<uint32_t> z) ;

/// @brief Method RandomMult addr 0xf45c5c size 0x6c virtual false final false
static void RandomMult(::Org::BouncyCastle::Security::SecureRandom r, ::ArrayW<uint32_t> z) ;

/// @brief Method Reduce addr 0xf46ae4 size 0x1d8 virtual false final false
static void Reduce(::ArrayW<uint32_t> xx, ::ArrayW<uint32_t> z) ;

/// @brief Method Reduce32 addr 0xf46e48 size 0x190 virtual false final false
static void Reduce32(uint32_t x, ::ArrayW<uint32_t> z) ;

/// @brief Method Square addr 0xf46854 size 0x80 virtual false final false
static void Square(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method SquareN addr 0xf4695c size 0xcc virtual false final false
static void SquareN(::ArrayW<uint32_t> x, int32_t n, ::ArrayW<uint32_t> z) ;

/// @brief Method Subtract addr 0xf46fd8 size 0x8c virtual false final false
static void Subtract(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method SubtractExt addr 0xf47150 size 0xa4 virtual false final false
static void SubtractExt(::ArrayW<uint32_t> xx, ::ArrayW<uint32_t> yy, ::ArrayW<uint32_t> zz) ;

/// @brief Method Twice addr 0xf471f4 size 0xd0 virtual false final false
static void Twice(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method AddPInvTo addr 0xf4619c size 0xec virtual false final false
static void AddPInvTo(::ArrayW<uint32_t> z) ;

/// @brief Method SubPInvFrom addr 0xf47064 size 0xec virtual false final false
static void SubPInvFrom(::ArrayW<uint32_t> z) ;

// Ctor Parameters []
explicit SM2P256V1Field() ;

/// @brief Method .ctor addr 0xf47394 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::GM
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Field, "Org.BouncyCastle.Math.EC.Custom.GM", "SM2P256V1Field");
