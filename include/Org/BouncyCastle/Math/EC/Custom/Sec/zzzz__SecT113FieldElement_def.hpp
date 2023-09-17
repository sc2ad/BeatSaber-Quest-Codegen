#pragma once
#include "../../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mFieldElement_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT113FieldElement;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT113FieldElement
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1442))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecT113FieldElement
class CORDL_TYPE SecT113FieldElement : public ::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SecT113FieldElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT113FieldElement", modifiers: " const&", def_value: None }]
constexpr SecT113FieldElement(SecT113FieldElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT113FieldElement", modifiers: "&&", def_value: None }]
constexpr SecT113FieldElement(SecT113FieldElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecT113FieldElement(void* ptr) noexcept : ::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement(ptr) {
}


  constexpr SecT113FieldElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecT113FieldElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecT113FieldElement& operator=(SecT113FieldElement&& o) noexcept = default;
  constexpr SecT113FieldElement& operator=(SecT113FieldElement const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint64_t> __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_x() const;


// Properties

 bool __declspec(property(get=get_IsOne))  IsOne;

 bool __declspec(property(get=get_IsZero))  IsZero;

 ::StringW __declspec(property(get=get_FieldName))  FieldName;

 int32_t __declspec(property(get=get_FieldSize))  FieldSize;

 bool __declspec(property(get=get_HasFastTrace))  HasFastTrace;

 int32_t __declspec(property(get=get_Representation))  Representation;

 int32_t __declspec(property(get=get_M))  M;

 int32_t __declspec(property(get=get_K1))  K1;

 int32_t __declspec(property(get=get_K2))  K2;

 int32_t __declspec(property(get=get_K3))  K3;


// Methods

// Ctor Parameters [CppParam { name: "x", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit SecT113FieldElement(::Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method .ctor addr 0xf74bc0 size 0xb8 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger x) ;

// Ctor Parameters []
explicit SecT113FieldElement() ;

/// @brief Method .ctor addr 0xf74c78 size 0x24 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "x", ty: "::ArrayW<uint64_t>", modifiers: "", def_value: None }]
explicit SecT113FieldElement(::ArrayW<uint64_t> x) ;

/// @brief Method .ctor addr 0xf74c9c size 0x28 virtual false final false
 void _ctor(::ArrayW<uint64_t> x) ;

/// @brief Method get_IsOne addr 0xf74cc4 size 0xc virtual true final false
 bool get_IsOne() ;

/// @brief Method get_IsZero addr 0xf74cd0 size 0xc virtual true final false
 bool get_IsZero() ;

/// @brief Method TestBitZero addr 0xf74cdc size 0x2c virtual true final false
 bool TestBitZero() ;

/// @brief Method ToBigInteger addr 0xf74d08 size 0xc virtual true final false
 ::Org::BouncyCastle::Math::BigInteger ToBigInteger() ;

/// @brief Method get_FieldName addr 0xf74d14 size 0x40 virtual true final false
 ::StringW get_FieldName() ;

/// @brief Method get_FieldSize addr 0xf74d54 size 0x8 virtual true final false
 int32_t get_FieldSize() ;

/// @brief Method Add addr 0xf74d5c size 0xc4 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Add(::Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method AddOne addr 0xf74e20 size 0x80 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement AddOne() ;

/// @brief Method Subtract addr 0xf74ea0 size 0xc virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Subtract(::Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Multiply addr 0xf74eac size 0xc4 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Multiply(::Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method MultiplyMinusProduct addr 0xf74f70 size 0x10 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement MultiplyMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement b, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method MultiplyPlusProduct addr 0xf74f80 size 0x164 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement MultiplyPlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement b, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method Divide addr 0xf750e4 size 0x40 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Divide(::Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Negate addr 0xf75124 size 0x4 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Negate() ;

/// @brief Method Square addr 0xf75128 size 0x80 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Square() ;

/// @brief Method SquareMinusProduct addr 0xf751a8 size 0x10 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement SquareMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method SquarePlusProduct addr 0xf751b8 size 0x124 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement SquarePlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method SquarePow addr 0xf752dc size 0x98 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement SquarePow(int32_t pow) ;

/// @brief Method HalfTrace addr 0xf75374 size 0x80 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement HalfTrace() ;

/// @brief Method get_HasFastTrace addr 0xf753f4 size 0x8 virtual true final false
 bool get_HasFastTrace() ;

/// @brief Method Trace addr 0xf753fc size 0x8 virtual true final false
 int32_t Trace() ;

/// @brief Method Invert addr 0xf75404 size 0x80 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Invert() ;

/// @brief Method Sqrt addr 0xf75484 size 0x80 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Sqrt() ;

/// @brief Method get_Representation addr 0xf75504 size 0x8 virtual true final false
 int32_t get_Representation() ;

/// @brief Method get_M addr 0xf7550c size 0x8 virtual true final false
 int32_t get_M() ;

/// @brief Method get_K1 addr 0xf75514 size 0x8 virtual true final false
 int32_t get_K1() ;

/// @brief Method get_K2 addr 0xf7551c size 0x8 virtual true final false
 int32_t get_K2() ;

/// @brief Method get_K3 addr 0xf75524 size 0x8 virtual true final false
 int32_t get_K3() ;

/// @brief Method Equals addr 0xf7552c size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xf755b8 size 0x8c virtual true final false
 bool Equals(::Org::BouncyCastle::Math::EC::ECFieldElement other) ;

/// @brief Method Equals addr 0xf75644 size 0x2c virtual true final false
 bool Equals(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113FieldElement other) ;

/// @brief Method GetHashCode addr 0xf75670 size 0x74 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113FieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113FieldElement, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT113FieldElement");
