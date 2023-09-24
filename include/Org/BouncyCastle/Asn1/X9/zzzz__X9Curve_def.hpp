#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9FieldID;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9Curve;
}
// Type: Org.BouncyCastle.Asn1.X9::X9Curve
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(442))
// CS Name: Org.BouncyCastle.Asn1.X9.X9Curve
class CORDL_TYPE X9Curve : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~X9Curve() = default;

// Ctor Parameters [CppParam { name: "", ty: "X9Curve", modifiers: " const&", def_value: None }]
constexpr X9Curve(X9Curve const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X9Curve", modifiers: "&&", def_value: None }]
constexpr X9Curve(X9Curve&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X9Curve(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr X9Curve& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X9Curve& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X9Curve& operator=(X9Curve&& o) noexcept = default;
  constexpr X9Curve& operator=(X9Curve const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::ECCurve __declspec(property(get=__get_curve, put=__set_curve))  curve;

constexpr void __set_curve(Org::BouncyCastle::Math::EC::ECCurve value) ;

constexpr Org::BouncyCastle::Math::EC::ECCurve __get_curve() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_seed, put=__set_seed))  seed;

constexpr void __set_seed(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_seed() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_fieldIdentifier, put=__set_fieldIdentifier))  fieldIdentifier;

constexpr void __set_fieldIdentifier(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_fieldIdentifier() const;


// Properties

 Org::BouncyCastle::Math::EC::ECCurve __declspec(property(get=get_Curve))  Curve;


// Methods

static Org::BouncyCastle::Asn1::X9::X9Curve New_ctor(Org::BouncyCastle::Math::EC::ECCurve curve) ;

/// @brief Method .ctor addr 0x1124d04 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve) ;

static Org::BouncyCastle::Asn1::X9::X9Curve New_ctor(Org::BouncyCastle::Math::EC::ECCurve curve, ::ArrayW<uint8_t> seed) ;

/// @brief Method .ctor addr 0x1124d0c size 0x17c virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, ::ArrayW<uint8_t> seed) ;

static Org::BouncyCastle::Asn1::X9::X9Curve New_ctor(Org::BouncyCastle::Asn1::X9::X9FieldID fieldID, Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x1124e88 size 0x10 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X9::X9FieldID fieldID, Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::X9::X9Curve New_ctor(Org::BouncyCastle::Asn1::X9::X9FieldID fieldID, Org::BouncyCastle::Math::BigInteger order, Org::BouncyCastle::Math::BigInteger cofactor, Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x1124e98 size 0x75c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X9::X9FieldID fieldID, Org::BouncyCastle::Math::BigInteger order, Org::BouncyCastle::Math::BigInteger cofactor, Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_Curve addr 0x11258ac size 0x8 virtual false final false
 Org::BouncyCastle::Math::EC::ECCurve get_Curve() ;

/// @brief Method GetSeed addr 0x11258b4 size 0x5c virtual false final false
 ::ArrayW<uint8_t> GetSeed() ;

/// @brief Method ToAsn1Object addr 0x1125910 size 0x218 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(Org::BouncyCastle::Asn1::X9::X9Curve);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::X9Curve, "Org.BouncyCastle.Asn1.X9", "X9Curve");
