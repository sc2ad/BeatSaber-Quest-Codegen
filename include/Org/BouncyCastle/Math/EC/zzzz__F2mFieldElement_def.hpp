#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mFieldElement_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class LongArray;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class F2mFieldElement;
}
// Type: Org.BouncyCastle.Math.EC::F2mFieldElement
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1570))
// CS Name: Org.BouncyCastle.Math.EC.F2mFieldElement
class CORDL_TYPE F2mFieldElement : public ::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~F2mFieldElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "F2mFieldElement", modifiers: " const&", def_value: None }]
constexpr F2mFieldElement(F2mFieldElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "F2mFieldElement", modifiers: "&&", def_value: None }]
constexpr F2mFieldElement(F2mFieldElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit F2mFieldElement(void* ptr) noexcept : ::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement(ptr) {
}


  constexpr F2mFieldElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr F2mFieldElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr F2mFieldElement& operator=(F2mFieldElement&& o) noexcept = default;
  constexpr F2mFieldElement& operator=(F2mFieldElement const& o) noexcept = default;
                


// Fields

/// @brief Field Gnb offset 0
static constexpr int32_t  Gnb{1};

/// @brief Field Tpb offset 0
static constexpr int32_t  Tpb{2};

/// @brief Field Ppb offset 0
static constexpr int32_t  Ppb{3};

 int32_t __declspec(property(get=__get_representation, put=__set_representation))  representation;

constexpr void __set_representation(int32_t value) ;

constexpr int32_t __get_representation() const;

 int32_t __declspec(property(get=__get_m, put=__set_m))  m;

constexpr void __set_m(int32_t value) ;

constexpr int32_t __get_m() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_ks, put=__set_ks))  ks;

constexpr void __set_ks(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_ks() const;

 ::Org::BouncyCastle::Math::EC::LongArray __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(::Org::BouncyCastle::Math::EC::LongArray value) ;

constexpr ::Org::BouncyCastle::Math::EC::LongArray __get_x() const;


// Properties

 int32_t __declspec(property(get=get_BitLength))  BitLength;

 bool __declspec(property(get=get_IsOne))  IsOne;

 bool __declspec(property(get=get_IsZero))  IsZero;

 ::StringW __declspec(property(get=get_FieldName))  FieldName;

 int32_t __declspec(property(get=get_FieldSize))  FieldSize;

 int32_t __declspec(property(get=get_Representation))  Representation;

 int32_t __declspec(property(get=get_M))  M;

 int32_t __declspec(property(get=get_K1))  K1;

 int32_t __declspec(property(get=get_K2))  K2;

 int32_t __declspec(property(get=get_K3))  K3;


// Methods

// Ctor Parameters [CppParam { name: "m", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "k1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "k2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "k3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "x", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit F2mFieldElement(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method .ctor addr 0xfc0a78 size 0x208 virtual false final false
 void _ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::BigInteger x) ;

// Ctor Parameters [CppParam { name: "m", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "k", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "x", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit F2mFieldElement(int32_t m, int32_t k, ::Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method .ctor addr 0xfc35a8 size 0x10 virtual false final false
 void _ctor(int32_t m, int32_t k, ::Org::BouncyCastle::Math::BigInteger x) ;

// Ctor Parameters [CppParam { name: "m", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ks", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "x", ty: "::Org::BouncyCastle::Math::EC::LongArray", modifiers: "", def_value: None }]
explicit F2mFieldElement(int32_t m, ::ArrayW<int32_t> ks, ::Org::BouncyCastle::Math::EC::LongArray x) ;

/// @brief Method .ctor addr 0xfc14b0 size 0x58 virtual false final false
 void _ctor(int32_t m, ::ArrayW<int32_t> ks, ::Org::BouncyCastle::Math::EC::LongArray x) ;

/// @brief Method get_BitLength addr 0xfc35b8 size 0x18 virtual true final false
 int32_t get_BitLength() ;

/// @brief Method get_IsOne addr 0xfc3674 size 0x18 virtual true final false
 bool get_IsOne() ;

/// @brief Method get_IsZero addr 0xfc36ec size 0x54 virtual true final false
 bool get_IsZero() ;

/// @brief Method TestBitZero addr 0xfc378c size 0x3c virtual true final false
 bool TestBitZero() ;

/// @brief Method ToBigInteger addr 0xfc37fc size 0x18 virtual true final false
 ::Org::BouncyCastle::Math::BigInteger ToBigInteger() ;

/// @brief Method get_FieldName addr 0xfc3a28 size 0x40 virtual true final false
 ::StringW get_FieldName() ;

/// @brief Method get_FieldSize addr 0xfc3a68 size 0x8 virtual true final false
 int32_t get_FieldSize() ;

/// @brief Method CheckFieldElements addr 0xfc3a70 size 0x18c virtual false final false
static void CheckFieldElements(::Org::BouncyCastle::Math::EC::ECFieldElement a, ::Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Add addr 0xfc3bfc size 0xd8 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Add(::Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method AddOne addr 0xfc3e48 size 0x8c virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement AddOne() ;

/// @brief Method Subtract addr 0xfc3ff0 size 0xc virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Subtract(::Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Multiply addr 0xfc3ffc size 0xd4 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Multiply(::Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method MultiplyMinusProduct addr 0xfc4520 size 0x10 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement MultiplyMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement b, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method MultiplyPlusProduct addr 0xfc4530 size 0x198 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement MultiplyPlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement b, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method Divide addr 0xfc4bd8 size 0x40 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Divide(::Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Negate addr 0xfc4c18 size 0x4 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Negate() ;

/// @brief Method Square addr 0xfc4c1c size 0x94 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Square() ;

/// @brief Method SquareMinusProduct addr 0xfc4e40 size 0x10 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement SquareMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method SquarePlusProduct addr 0xfc4e50 size 0x154 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement SquarePlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method SquarePow addr 0xfc50f4 size 0xa4 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement SquarePow(int32_t pow) ;

/// @brief Method Invert addr 0xfc52cc size 0x94 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Invert() ;

/// @brief Method Sqrt addr 0xfc57e0 size 0x7c virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Sqrt() ;

/// @brief Method get_Representation addr 0xfc585c size 0x8 virtual false final false
 int32_t get_Representation() ;

/// @brief Method get_M addr 0xfc5864 size 0x8 virtual false final false
 int32_t get_M() ;

/// @brief Method get_K1 addr 0xfc586c size 0x28 virtual false final false
 int32_t get_K1() ;

/// @brief Method get_K2 addr 0xfc5894 size 0x30 virtual false final false
 int32_t get_K2() ;

/// @brief Method get_K3 addr 0xfc58c4 size 0x30 virtual false final false
 int32_t get_K3() ;

/// @brief Method Equals addr 0xfc58f4 size 0xa8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xfc599c size 0xc8 virtual true final false
 bool Equals(::Org::BouncyCastle::Math::EC::F2mFieldElement other) ;

/// @brief Method GetHashCode addr 0xfc5a64 size 0x8c virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::F2mFieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::F2mFieldElement, "Org.BouncyCastle.Math.EC", "F2mFieldElement");
