#pragma once
#include "../../../../../../cordl_internals/cordl_internals.hpp"
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
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT233FieldElement;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT233FieldElement
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1479))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecT233FieldElement
class CORDL_TYPE SecT233FieldElement : public ::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SecT233FieldElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT233FieldElement", modifiers: " const&", def_value: None }]
constexpr SecT233FieldElement(SecT233FieldElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT233FieldElement", modifiers: "&&", def_value: None }]
constexpr SecT233FieldElement(SecT233FieldElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecT233FieldElement(void* ptr) noexcept : ::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement(ptr) {
}


  constexpr SecT233FieldElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecT233FieldElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecT233FieldElement& operator=(SecT233FieldElement&& o) noexcept = default;
  constexpr SecT233FieldElement& operator=(SecT233FieldElement const& o) noexcept = default;
                


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
explicit SecT233FieldElement(::Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method .ctor addr 0xf8ea70 size 0xb8 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger x) ;

// Ctor Parameters []
explicit SecT233FieldElement() ;

/// @brief Method .ctor addr 0xf8eb28 size 0x24 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "x", ty: "::ArrayW<uint64_t>", modifiers: "", def_value: None }]
explicit SecT233FieldElement(::ArrayW<uint64_t> x) ;

/// @brief Method .ctor addr 0xf8eb4c size 0x28 virtual false final false
 void _ctor(::ArrayW<uint64_t> x) ;

/// @brief Method get_IsOne addr 0xf8eb74 size 0xc virtual true final false
 bool get_IsOne() ;

/// @brief Method get_IsZero addr 0xf8eb80 size 0xc virtual true final false
 bool get_IsZero() ;

/// @brief Method TestBitZero addr 0xf8eb8c size 0x2c virtual true final false
 bool TestBitZero() ;

/// @brief Method ToBigInteger addr 0xf8ebb8 size 0xc virtual true final false
 ::Org::BouncyCastle::Math::BigInteger ToBigInteger() ;

/// @brief Method get_FieldName addr 0xf8ebc4 size 0x40 virtual true final false
 ::StringW get_FieldName() ;

/// @brief Method get_FieldSize addr 0xf8ec04 size 0x8 virtual true final false
 int32_t get_FieldSize() ;

/// @brief Method Add addr 0xf8ec0c size 0xc4 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Add(::Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method AddOne addr 0xf8ecd0 size 0x80 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement AddOne() ;

/// @brief Method Subtract addr 0xf8ed50 size 0xc virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Subtract(::Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Multiply addr 0xf8ed5c size 0xc4 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Multiply(::Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method MultiplyMinusProduct addr 0xf8ee20 size 0x10 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement MultiplyMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement b, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method MultiplyPlusProduct addr 0xf8ee30 size 0x164 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement MultiplyPlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement b, ::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method Divide addr 0xf8ef94 size 0x40 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Divide(::Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Negate addr 0xf8efd4 size 0x4 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Negate() ;

/// @brief Method Square addr 0xf8efd8 size 0x80 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Square() ;

/// @brief Method SquareMinusProduct addr 0xf8f058 size 0x10 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement SquareMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method SquarePlusProduct addr 0xf8f068 size 0x124 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement SquarePlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement x, ::Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method SquarePow addr 0xf8f18c size 0x98 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement SquarePow(int32_t pow) ;

/// @brief Method HalfTrace addr 0xf8f224 size 0x80 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement HalfTrace() ;

/// @brief Method get_HasFastTrace addr 0xf8f2a4 size 0x8 virtual true final false
 bool get_HasFastTrace() ;

/// @brief Method Trace addr 0xf8f2ac size 0x8 virtual true final false
 int32_t Trace() ;

/// @brief Method Invert addr 0xf8f2b4 size 0x80 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Invert() ;

/// @brief Method Sqrt addr 0xf8f334 size 0x80 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Sqrt() ;

/// @brief Method get_Representation addr 0xf8f3b4 size 0x8 virtual true final false
 int32_t get_Representation() ;

/// @brief Method get_M addr 0xf8f3bc size 0x8 virtual true final false
 int32_t get_M() ;

/// @brief Method get_K1 addr 0xf8f3c4 size 0x8 virtual true final false
 int32_t get_K1() ;

/// @brief Method get_K2 addr 0xf8f3cc size 0x8 virtual true final false
 int32_t get_K2() ;

/// @brief Method get_K3 addr 0xf8f3d4 size 0x8 virtual true final false
 int32_t get_K3() ;

/// @brief Method Equals addr 0xf8f3dc size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xf8f468 size 0x8c virtual true final false
 bool Equals(::Org::BouncyCastle::Math::EC::ECFieldElement other) ;

/// @brief Method Equals addr 0xf8f4f4 size 0x2c virtual true final false
 bool Equals(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT233FieldElement other) ;

/// @brief Method GetHashCode addr 0xf8f520 size 0x74 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT233FieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT233FieldElement, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT233FieldElement");
