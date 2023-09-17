#pragma once
#include "../../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpFieldElement_def.hpp"
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
class SecP256K1FieldElement;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecP256K1FieldElement
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1369))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1423))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement
class CORDL_TYPE SecP256K1FieldElement : public ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SecP256K1FieldElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP256K1FieldElement", modifiers: " const&", def_value: None }]
constexpr SecP256K1FieldElement(SecP256K1FieldElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP256K1FieldElement", modifiers: "&&", def_value: None }]
constexpr SecP256K1FieldElement(SecP256K1FieldElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecP256K1FieldElement(void* ptr) noexcept : ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement(ptr) {
}


  constexpr SecP256K1FieldElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecP256K1FieldElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecP256K1FieldElement& operator=(SecP256K1FieldElement&& o) noexcept = default;
  constexpr SecP256K1FieldElement& operator=(SecP256K1FieldElement const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Q, put=__set_Q))  Q;

static void __set_Q(::Org::BouncyCastle::Math::BigInteger value) ;

static ::Org::BouncyCastle::Math::BigInteger __get_Q() ;

 ::ArrayW<uint32_t> __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_x() const;


// Properties

 bool __declspec(property(get=get_IsZero))  IsZero;

 bool __declspec(property(get=get_IsOne))  IsOne;

 ::StringW __declspec(property(get=get_FieldName))  FieldName;

 int32_t __declspec(property(get=get_FieldSize))  FieldSize;


// Methods

// Ctor Parameters [CppParam { name: "x", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit SecP256K1FieldElement(::Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method .ctor addr 0xf65840 size 0x118 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger x) ;

// Ctor Parameters []
explicit SecP256K1FieldElement() ;

/// @brief Method .ctor addr 0xf673ac size 0x24 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "x", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }]
explicit SecP256K1FieldElement(::ArrayW<uint32_t> x) ;

/// @brief Method .ctor addr 0xf65e68 size 0x28 virtual false final false
 void _ctor(::ArrayW<uint32_t> x) ;

/// @brief Method get_IsZero addr 0xf673d0 size 0xc virtual true final false
 bool get_IsZero() ;

/// @brief Method get_IsOne addr 0xf673dc size 0xc virtual true final false
 bool get_IsOne() ;

/// @brief Method TestBitZero addr 0xf673e8 size 0x24 virtual true final false
 bool TestBitZero() ;

/// @brief Method ToBigInteger addr 0xf6740c size 0xc virtual true final false
 ::Org::BouncyCastle::Math::BigInteger ToBigInteger() ;

/// @brief Method get_FieldName addr 0xf67418 size 0x40 virtual true final false
 ::StringW get_FieldName() ;

/// @brief Method get_FieldSize addr 0xf67458 size 0x64 virtual true final false
 int32_t get_FieldSize() ;

/// @brief Method Add addr 0xf674bc size 0xf0 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Add(::Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method AddOne addr 0xf675ac size 0xa8 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement AddOne() ;

/// @brief Method Subtract addr 0xf67654 size 0xf0 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Subtract(::Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Multiply addr 0xf67744 size 0xf0 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Multiply(::Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Divide addr 0xf67834 size 0xf8 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Divide(::Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Negate addr 0xf6792c size 0xa8 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Negate() ;

/// @brief Method Square addr 0xf679d4 size 0xa8 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Square() ;

/// @brief Method Invert addr 0xf67a7c size 0xa8 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Invert() ;

/// @brief Method Sqrt addr 0xf67b24 size 0x2d4 virtual true final false
 ::Org::BouncyCastle::Math::EC::ECFieldElement Sqrt() ;

/// @brief Method Equals addr 0xf67df8 size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xf67e84 size 0x8c virtual true final false
 bool Equals(::Org::BouncyCastle::Math::EC::ECFieldElement other) ;

/// @brief Method Equals addr 0xf67f10 size 0x2c virtual true final false
 bool Equals(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement other) ;

/// @brief Method GetHashCode addr 0xf67f3c size 0xb8 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP256K1FieldElement, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP256K1FieldElement");
