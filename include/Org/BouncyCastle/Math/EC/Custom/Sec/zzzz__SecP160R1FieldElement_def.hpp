#pragma once
#include "../../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpFieldElement_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP160R1FieldElement;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecP160R1FieldElement
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1369))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1393))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R1FieldElement
class CORDL_TYPE SecP160R1FieldElement : public Org::BouncyCastle::Math::EC::AbstractFpFieldElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SecP160R1FieldElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP160R1FieldElement", modifiers: " const&", def_value: None }]
constexpr SecP160R1FieldElement(SecP160R1FieldElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP160R1FieldElement", modifiers: "&&", def_value: None }]
constexpr SecP160R1FieldElement(SecP160R1FieldElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecP160R1FieldElement(void* ptr) noexcept : Org::BouncyCastle::Math::EC::AbstractFpFieldElement(ptr) {
}


  constexpr SecP160R1FieldElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecP160R1FieldElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecP160R1FieldElement& operator=(SecP160R1FieldElement&& o) noexcept = default;
  constexpr SecP160R1FieldElement& operator=(SecP160R1FieldElement const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Q, put=__set_Q))  Q;

static void __set_Q(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_Q() ;

 ::ArrayW<uint32_t> __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_x() const;


// Properties

 bool __declspec(property(get=get_IsZero))  IsZero;

 bool __declspec(property(get=get_IsOne))  IsOne;

 ::StringW __declspec(property(get=get_FieldName))  FieldName;

 int32_t __declspec(property(get=get_FieldSize))  FieldSize;


// Methods

// Ctor Parameters [CppParam { name: "x", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit SecP160R1FieldElement(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method .ctor addr 0xf4f5ac size 0x118 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger x) ;

// Ctor Parameters []
explicit SecP160R1FieldElement() ;

/// @brief Method .ctor addr 0xf510d0 size 0x24 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "x", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }]
explicit SecP160R1FieldElement(::ArrayW<uint32_t> x) ;

/// @brief Method .ctor addr 0xf4fbd8 size 0x28 virtual false final false
 void _ctor(::ArrayW<uint32_t> x) ;

/// @brief Method get_IsZero addr 0xf510f4 size 0xc virtual true final false
 bool get_IsZero() ;

/// @brief Method get_IsOne addr 0xf51100 size 0xc virtual true final false
 bool get_IsOne() ;

/// @brief Method TestBitZero addr 0xf5110c size 0x24 virtual true final false
 bool TestBitZero() ;

/// @brief Method ToBigInteger addr 0xf51130 size 0xc virtual true final false
 Org::BouncyCastle::Math::BigInteger ToBigInteger() ;

/// @brief Method get_FieldName addr 0xf5113c size 0x40 virtual true final false
 ::StringW get_FieldName() ;

/// @brief Method get_FieldSize addr 0xf5117c size 0x64 virtual true final false
 int32_t get_FieldSize() ;

/// @brief Method Add addr 0xf511e0 size 0xf0 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Add(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method AddOne addr 0xf512d0 size 0xa8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement AddOne() ;

/// @brief Method Subtract addr 0xf51378 size 0xf0 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Subtract(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Multiply addr 0xf51468 size 0xf0 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Multiply(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Divide addr 0xf51558 size 0xf8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Divide(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Negate addr 0xf51650 size 0xa8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Negate() ;

/// @brief Method Square addr 0xf516f8 size 0xa8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Square() ;

/// @brief Method Invert addr 0xf517a0 size 0xa8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Invert() ;

/// @brief Method Sqrt addr 0xf51848 size 0x1f4 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Sqrt() ;

/// @brief Method Equals addr 0xf51a3c size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xf51ac8 size 0x8c virtual true final false
 bool Equals(Org::BouncyCastle::Math::EC::ECFieldElement other) ;

/// @brief Method Equals addr 0xf51b54 size 0x2c virtual true final false
 bool Equals(Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R1FieldElement other) ;

/// @brief Method GetHashCode addr 0xf51b80 size 0xb8 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R1FieldElement);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R1FieldElement, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP160R1FieldElement");
