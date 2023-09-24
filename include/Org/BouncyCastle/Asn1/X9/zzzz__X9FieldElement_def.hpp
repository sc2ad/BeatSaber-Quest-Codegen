#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9FieldElement;
}
// Type: Org.BouncyCastle.Asn1.X9::X9FieldElement
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(445))
// CS Name: Org.BouncyCastle.Asn1.X9.X9FieldElement
class CORDL_TYPE X9FieldElement : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X9FieldElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "X9FieldElement", modifiers: " const&", def_value: None }]
constexpr X9FieldElement(X9FieldElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X9FieldElement", modifiers: "&&", def_value: None }]
constexpr X9FieldElement(X9FieldElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X9FieldElement(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr X9FieldElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X9FieldElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X9FieldElement& operator=(X9FieldElement&& o) noexcept = default;
  constexpr X9FieldElement& operator=(X9FieldElement const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::ECFieldElement __declspec(property(get=__get_f, put=__set_f))  f;

constexpr void __set_f(Org::BouncyCastle::Math::EC::ECFieldElement value) ;

constexpr Org::BouncyCastle::Math::EC::ECFieldElement __get_f() const;


// Properties

 Org::BouncyCastle::Math::EC::ECFieldElement __declspec(property(get=get_Value))  Value;


// Methods

static Org::BouncyCastle::Asn1::X9::X9FieldElement New_ctor(Org::BouncyCastle::Math::EC::ECFieldElement f) ;

/// @brief Method .ctor addr 0x1125b30 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECFieldElement f) ;

static Org::BouncyCastle::Asn1::X9::X9FieldElement New_ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Asn1::Asn1OctetString s) ;

/// @brief Method .ctor addr 0x1126e74 size 0xd4 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Asn1::Asn1OctetString s) ;

static Org::BouncyCastle::Asn1::X9::X9FieldElement New_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, Org::BouncyCastle::Asn1::Asn1OctetString s) ;

/// @brief Method .ctor addr 0x1126f48 size 0xfc virtual false final false
 void _ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, Org::BouncyCastle::Asn1::Asn1OctetString s) ;

/// @brief Method get_Value addr 0x1127044 size 0x8 virtual false final false
 Org::BouncyCastle::Math::EC::ECFieldElement get_Value() ;

/// @brief Method ToAsn1Object addr 0x112704c size 0xb0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(Org::BouncyCastle::Asn1::X9::X9FieldElement);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::X9FieldElement, "Org.BouncyCastle.Asn1.X9", "X9FieldElement");
