#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X9 {
class X9FieldID;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9Curve;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
// Type: Org.BouncyCastle.Asn1.X9::X9ECParameters
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(443))
// CS Name: Org.BouncyCastle.Asn1.X9.X9ECParameters
class CORDL_TYPE X9ECParameters : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~X9ECParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "X9ECParameters", modifiers: " const&", def_value: None }]
constexpr X9ECParameters(X9ECParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X9ECParameters", modifiers: "&&", def_value: None }]
constexpr X9ECParameters(X9ECParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X9ECParameters(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr X9ECParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X9ECParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X9ECParameters& operator=(X9ECParameters&& o) noexcept = default;
  constexpr X9ECParameters& operator=(X9ECParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X9::X9FieldID __declspec(property(get=__get_fieldID, put=__set_fieldID))  fieldID;

constexpr void __set_fieldID(Org::BouncyCastle::Asn1::X9::X9FieldID value) ;

constexpr Org::BouncyCastle::Asn1::X9::X9FieldID __get_fieldID() const;

 Org::BouncyCastle::Math::EC::ECCurve __declspec(property(get=__get_curve, put=__set_curve))  curve;

constexpr void __set_curve(Org::BouncyCastle::Math::EC::ECCurve value) ;

constexpr Org::BouncyCastle::Math::EC::ECCurve __get_curve() const;

 Org::BouncyCastle::Asn1::X9::X9ECPoint __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(Org::BouncyCastle::Asn1::X9::X9ECPoint value) ;

constexpr Org::BouncyCastle::Asn1::X9::X9ECPoint __get_g() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_n, put=__set_n))  n;

constexpr void __set_n(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_n() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_h, put=__set_h))  h;

constexpr void __set_h(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_h() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_seed, put=__set_seed))  seed;

constexpr void __set_seed(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_seed() const;


// Properties

 Org::BouncyCastle::Math::EC::ECCurve __declspec(property(get=get_Curve))  Curve;

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=get_G))  G;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_N))  N;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_H))  H;

 Org::BouncyCastle::Asn1::X9::X9Curve __declspec(property(get=get_CurveEntry))  CurveEntry;

 Org::BouncyCastle::Asn1::X9::X9FieldID __declspec(property(get=get_FieldIDEntry))  FieldIDEntry;

 Org::BouncyCastle::Asn1::X9::X9ECPoint __declspec(property(get=get_BaseEntry))  BaseEntry;


// Methods

/// @brief Method GetInstance addr 0x1125b58 size 0xa0 virtual false final false
static Org::BouncyCastle::Asn1::X9::X9ECParameters GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit X9ECParameters(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x1125f90 size 0x3dc virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "g", ty: "Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "n", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit X9ECParameters(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECPoint g, Org::BouncyCastle::Math::BigInteger n) ;

/// @brief Method .ctor addr 0x112644c size 0xc virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECPoint g, Org::BouncyCastle::Math::BigInteger n) ;

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "g", ty: "Org::BouncyCastle::Asn1::X9::X9ECPoint", modifiers: "", def_value: None }, CppParam { name: "n", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "h", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit X9ECParameters(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Asn1::X9::X9ECPoint g, Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger h) ;

/// @brief Method .ctor addr 0x1122a20 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Asn1::X9::X9ECPoint g, Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger h) ;

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "g", ty: "Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "n", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "h", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit X9ECParameters(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECPoint g, Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger h) ;

/// @brief Method .ctor addr 0x11264fc size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECPoint g, Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger h) ;

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "g", ty: "Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "n", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "h", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "seed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit X9ECParameters(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECPoint g, Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger h, ::ArrayW<uint8_t> seed) ;

/// @brief Method .ctor addr 0x1126458 size 0xa4 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECPoint g, Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger h, ::ArrayW<uint8_t> seed) ;

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "g", ty: "Org::BouncyCastle::Asn1::X9::X9ECPoint", modifiers: "", def_value: None }, CppParam { name: "n", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "h", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "seed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit X9ECParameters(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Asn1::X9::X9ECPoint g, Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger h, ::ArrayW<uint8_t> seed) ;

/// @brief Method .ctor addr 0x11212a8 size 0x354 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Asn1::X9::X9ECPoint g, Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger h, ::ArrayW<uint8_t> seed) ;

/// @brief Method get_Curve addr 0x11269ac size 0x8 virtual false final false
 Org::BouncyCastle::Math::EC::ECCurve get_Curve() ;

/// @brief Method get_G addr 0x11269b4 size 0x18 virtual false final false
 Org::BouncyCastle::Math::EC::ECPoint get_G() ;

/// @brief Method get_N addr 0x11269cc size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_N() ;

/// @brief Method get_H addr 0x11269d4 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_H() ;

/// @brief Method GetSeed addr 0x11269dc size 0x8 virtual false final false
 ::ArrayW<uint8_t> GetSeed() ;

/// @brief Method get_CurveEntry addr 0x11269e4 size 0x6c virtual false final false
 Org::BouncyCastle::Asn1::X9::X9Curve get_CurveEntry() ;

/// @brief Method get_FieldIDEntry addr 0x1126a50 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X9::X9FieldID get_FieldIDEntry() ;

/// @brief Method get_BaseEntry addr 0x1126a58 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X9::X9ECPoint get_BaseEntry() ;

/// @brief Method ToAsn1Object addr 0x1126a60 size 0x28c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(Org::BouncyCastle::Asn1::X9::X9ECParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::X9ECParameters, "Org.BouncyCastle.Asn1.X9", "X9ECParameters");
