#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Abc {
class SimpleBigDecimal;
}
// Type: Org.BouncyCastle.Math.EC.Abc::SimpleBigDecimal
namespace Org::BouncyCastle::Math::EC::Abc {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1356))
// CS Name: Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal
class CORDL_TYPE SimpleBigDecimal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SimpleBigDecimal() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleBigDecimal", modifiers: " const&", def_value: None }]
constexpr SimpleBigDecimal(SimpleBigDecimal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleBigDecimal", modifiers: "&&", def_value: None }]
constexpr SimpleBigDecimal(SimpleBigDecimal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimpleBigDecimal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SimpleBigDecimal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimpleBigDecimal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimpleBigDecimal& operator=(SimpleBigDecimal&& o) noexcept = default;
  constexpr SimpleBigDecimal& operator=(SimpleBigDecimal const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_bigInt, put=__set_bigInt))  bigInt;

constexpr void __set_bigInt(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_bigInt() const;

 int32_t __declspec(property(get=__get_scale, put=__set_scale))  scale;

constexpr void __set_scale(int32_t value) ;

constexpr int32_t __get_scale() const;


// Properties

 int32_t __declspec(property(get=get_IntValue))  IntValue;

 int64_t __declspec(property(get=get_LongValue))  LongValue;

 int32_t __declspec(property(get=get_Scale))  Scale;


// Methods

/// @brief Method GetInstance addr 0xf394b4 size 0x84 virtual false final false
static Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal GetInstance(Org::BouncyCastle::Math::BigInteger val, int32_t scale) ;

// Ctor Parameters [CppParam { name: "bigInt", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: None }]
explicit SimpleBigDecimal(Org::BouncyCastle::Math::BigInteger bigInt, int32_t scale) ;

/// @brief Method .ctor addr 0xf39538 size 0x80 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger bigInt, int32_t scale) ;

// Ctor Parameters [CppParam { name: "limBigDec", ty: "Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal", modifiers: "", def_value: None }]
explicit SimpleBigDecimal(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal limBigDec) ;

/// @brief Method .ctor addr 0xf395b8 size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal limBigDec) ;

/// @brief Method CheckScale addr 0xf395f4 size 0x70 virtual false final false
 void CheckScale(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal b) ;

/// @brief Method AdjustScale addr 0xf39664 size 0xe0 virtual false final false
 Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal AdjustScale(int32_t newScale) ;

/// @brief Method Add addr 0xf39744 size 0x98 virtual false final false
 Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal Add(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal b) ;

/// @brief Method Add addr 0xf397dc size 0xa0 virtual false final false
 Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal Add(Org::BouncyCastle::Math::BigInteger b) ;

/// @brief Method Negate addr 0xf3987c size 0x80 virtual false final false
 Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal Negate() ;

/// @brief Method Subtract addr 0xf398fc size 0x28 virtual false final false
 Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal Subtract(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal b) ;

/// @brief Method Subtract addr 0xf39924 size 0xa0 virtual false final false
 Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal Subtract(Org::BouncyCastle::Math::BigInteger b) ;

/// @brief Method Multiply addr 0xf399c4 size 0x98 virtual false final false
 Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal Multiply(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal b) ;

/// @brief Method Multiply addr 0xf39a5c size 0x88 virtual false final false
 Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal Multiply(Org::BouncyCastle::Math::BigInteger b) ;

/// @brief Method Divide addr 0xf39ae4 size 0xa8 virtual false final false
 Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal Divide(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal b) ;

/// @brief Method Divide addr 0xf39b8c size 0x88 virtual false final false
 Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal Divide(Org::BouncyCastle::Math::BigInteger b) ;

/// @brief Method ShiftLeft addr 0xf39c14 size 0x88 virtual false final false
 Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal ShiftLeft(int32_t n) ;

/// @brief Method CompareTo addr 0xf39c9c size 0x38 virtual false final false
 int32_t CompareTo(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal val) ;

/// @brief Method CompareTo addr 0xf39cd4 size 0x3c virtual false final false
 int32_t CompareTo(Org::BouncyCastle::Math::BigInteger val) ;

/// @brief Method Floor addr 0xf39d10 size 0x24 virtual false final false
 Org::BouncyCastle::Math::BigInteger Floor() ;

/// @brief Method Round addr 0xf39d34 size 0xbc virtual false final false
 Org::BouncyCastle::Math::BigInteger Round() ;

/// @brief Method get_IntValue addr 0xf39df0 size 0x1c virtual false final false
 int32_t get_IntValue() ;

/// @brief Method get_LongValue addr 0xf39e0c size 0x1c virtual false final false
 int64_t get_LongValue() ;

/// @brief Method get_Scale addr 0xf39e28 size 0x8 virtual false final false
 int32_t get_Scale() ;

/// @brief Method ToString addr 0xf39e30 size 0x2fc virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0xf3a12c size 0xc4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0xf3a1f0 size 0x30 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Abc
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal, "Org.BouncyCastle.Math.EC.Abc", "SimpleBigDecimal");
