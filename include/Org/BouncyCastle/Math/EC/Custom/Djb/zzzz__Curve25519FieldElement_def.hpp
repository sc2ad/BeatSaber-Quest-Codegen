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
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
class Curve25519FieldElement;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Djb::Curve25519FieldElement
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1369))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1370))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement
class CORDL_TYPE Curve25519FieldElement : public Org::BouncyCastle::Math::EC::AbstractFpFieldElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Curve25519FieldElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "Curve25519FieldElement", modifiers: " const&", def_value: None }]
constexpr Curve25519FieldElement(Curve25519FieldElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Curve25519FieldElement", modifiers: "&&", def_value: None }]
constexpr Curve25519FieldElement(Curve25519FieldElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Curve25519FieldElement(void* ptr) noexcept : Org::BouncyCastle::Math::EC::AbstractFpFieldElement(ptr) {
}


  constexpr Curve25519FieldElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Curve25519FieldElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Curve25519FieldElement& operator=(Curve25519FieldElement&& o) noexcept = default;
  constexpr Curve25519FieldElement& operator=(Curve25519FieldElement const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Q, put=__set_Q))  Q;

static void __set_Q(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_Q() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_PRECOMP_POW2, put=__set_PRECOMP_POW2))  PRECOMP_POW2;

static void __set_PRECOMP_POW2(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_PRECOMP_POW2() ;

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
explicit Curve25519FieldElement(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method .ctor addr 0xf3f434 size 0x118 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger x) ;

// Ctor Parameters []
explicit Curve25519FieldElement() ;

/// @brief Method .ctor addr 0xf416d8 size 0x24 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "x", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }]
explicit Curve25519FieldElement(::ArrayW<uint32_t> x) ;

/// @brief Method .ctor addr 0xf3fa70 size 0x28 virtual false final false
 void _ctor(::ArrayW<uint32_t> x) ;

/// @brief Method get_IsZero addr 0xf416fc size 0xc virtual true final false
 bool get_IsZero() ;

/// @brief Method get_IsOne addr 0xf41708 size 0xc virtual true final false
 bool get_IsOne() ;

/// @brief Method TestBitZero addr 0xf41714 size 0x24 virtual true final false
 bool TestBitZero() ;

/// @brief Method ToBigInteger addr 0xf41738 size 0xc virtual true final false
 Org::BouncyCastle::Math::BigInteger ToBigInteger() ;

/// @brief Method get_FieldName addr 0xf41744 size 0x40 virtual true final false
 ::StringW get_FieldName() ;

/// @brief Method get_FieldSize addr 0xf41784 size 0x64 virtual true final false
 int32_t get_FieldSize() ;

/// @brief Method Add addr 0xf417e8 size 0xf0 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Add(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method AddOne addr 0xf418d8 size 0xa8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement AddOne() ;

/// @brief Method Subtract addr 0xf41980 size 0xf0 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Subtract(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Multiply addr 0xf41a70 size 0xf0 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Multiply(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Divide addr 0xf41b60 size 0xf8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Divide(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Negate addr 0xf41c58 size 0xa8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Negate() ;

/// @brief Method Square addr 0xf41d00 size 0xa8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Square() ;

/// @brief Method Invert addr 0xf41da8 size 0xa8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Invert() ;

/// @brief Method Sqrt addr 0xf41e50 size 0x2d0 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Sqrt() ;

/// @brief Method Equals addr 0xf42120 size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xf421ac size 0x8c virtual true final false
 bool Equals(Org::BouncyCastle::Math::EC::ECFieldElement other) ;

/// @brief Method Equals addr 0xf42238 size 0x2c virtual true final false
 bool Equals(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement other) ;

/// @brief Method GetHashCode addr 0xf42264 size 0xb8 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Djb
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement, "Org.BouncyCastle.Math.EC.Custom.Djb", "Curve25519FieldElement");
