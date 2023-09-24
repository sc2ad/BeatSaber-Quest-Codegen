#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
// Type: Org.BouncyCastle.Math.EC::ECFieldElement
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1368))
// CS Name: Org.BouncyCastle.Math.EC.ECFieldElement
class CORDL_TYPE ECFieldElement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ECFieldElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECFieldElement", modifiers: " const&", def_value: None }]
constexpr ECFieldElement(ECFieldElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECFieldElement", modifiers: "&&", def_value: None }]
constexpr ECFieldElement(ECFieldElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECFieldElement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ECFieldElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECFieldElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECFieldElement& operator=(ECFieldElement&& o) noexcept = default;
  constexpr ECFieldElement& operator=(ECFieldElement const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_FieldName))  FieldName;

 int32_t __declspec(property(get=get_FieldSize))  FieldSize;

 int32_t __declspec(property(get=get_BitLength))  BitLength;

 bool __declspec(property(get=get_IsOne))  IsOne;

 bool __declspec(property(get=get_IsZero))  IsZero;


// Methods

/// @brief Method ToBigInteger addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::BigInteger ToBigInteger() ;

/// @brief Method get_FieldName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_FieldName() ;

/// @brief Method get_FieldSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_FieldSize() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Add(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method AddOne addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement AddOne() ;

/// @brief Method Subtract addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Subtract(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Multiply addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Multiply(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Divide addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Divide(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Negate addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Negate() ;

/// @brief Method Square addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Square() ;

/// @brief Method Invert addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Invert() ;

/// @brief Method Sqrt addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Sqrt() ;

/// @brief Method get_BitLength addr 0xf412cc size 0x24 virtual true final false
 int32_t get_BitLength() ;

/// @brief Method get_IsOne addr 0xf412f0 size 0x24 virtual true final false
 bool get_IsOne() ;

/// @brief Method get_IsZero addr 0xf41314 size 0x2c virtual true final false
 bool get_IsZero() ;

/// @brief Method MultiplyMinusProduct addr 0xf41340 size 0x5c virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement MultiplyMinusProduct(Org::BouncyCastle::Math::EC::ECFieldElement b, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method MultiplyPlusProduct addr 0xf4139c size 0x5c virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement MultiplyPlusProduct(Org::BouncyCastle::Math::EC::ECFieldElement b, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method SquareMinusProduct addr 0xf413f8 size 0x64 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement SquareMinusProduct(Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method SquarePlusProduct addr 0xf4145c size 0x64 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement SquarePlusProduct(Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method SquarePow addr 0xf414c0 size 0x38 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement SquarePow(int32_t pow) ;

/// @brief Method TestBitZero addr 0xf414f8 size 0x28 virtual true final false
 bool TestBitZero() ;

/// @brief Method Equals addr 0xf41520 size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xf415ac size 0x74 virtual true final false
 bool Equals(Org::BouncyCastle::Math::EC::ECFieldElement other) ;

/// @brief Method GetHashCode addr 0xf41620 size 0x28 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0xf41648 size 0x28 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetEncoded addr 0xf41670 size 0x58 virtual true final false
 ::ArrayW<uint8_t> GetEncoded() ;

static Org::BouncyCastle::Math::EC::ECFieldElement New_ctor() ;

/// @brief Method .ctor addr 0xf416c8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::ECFieldElement);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::ECFieldElement, "Org.BouncyCastle.Math.EC", "ECFieldElement");
