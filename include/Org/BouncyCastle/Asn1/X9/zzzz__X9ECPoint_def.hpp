#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECPoint;
}
// Type: Org.BouncyCastle.Asn1.X9::X9ECPoint
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(444))
// CS Name: Org.BouncyCastle.Asn1.X9.X9ECPoint
class CORDL_TYPE X9ECPoint : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~X9ECPoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "X9ECPoint", modifiers: " const&", def_value: None }]
constexpr X9ECPoint(X9ECPoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X9ECPoint", modifiers: "&&", def_value: None }]
constexpr X9ECPoint(X9ECPoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X9ECPoint(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr X9ECPoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X9ECPoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X9ECPoint& operator=(X9ECPoint&& o) noexcept = default;
  constexpr X9ECPoint& operator=(X9ECPoint const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_encoding, put=__set_encoding))  encoding;

constexpr void __set_encoding(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_encoding() const;

 ::Org::BouncyCastle::Math::EC::ECCurve __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(::Org::BouncyCastle::Math::EC::ECCurve value) ;

constexpr ::Org::BouncyCastle::Math::EC::ECCurve __get_c() const;

 ::Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(::Org::BouncyCastle::Math::EC::ECPoint value) ;

constexpr ::Org::BouncyCastle::Math::EC::ECPoint __get_p() const;


// Properties

 ::Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=get_Point))  Point;

 bool __declspec(property(get=get_IsPointCompressed))  IsPointCompressed;


// Methods

// Ctor Parameters [CppParam { name: "p", ty: "::Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }]
explicit X9ECPoint(::Org::BouncyCastle::Math::EC::ECPoint p) ;

/// @brief Method .ctor addr 0x1126504 size 0x8 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::EC::ECPoint p) ;

// Ctor Parameters [CppParam { name: "p", ty: "::Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "compressed", ty: "bool", modifiers: "", def_value: None }]
explicit X9ECPoint(::Org::BouncyCastle::Math::EC::ECPoint p, bool compressed) ;

/// @brief Method .ctor addr 0x1126cec size 0xb8 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::EC::ECPoint p, bool compressed) ;

// Ctor Parameters [CppParam { name: "c", ty: "::Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit X9ECPoint(::Org::BouncyCastle::Math::EC::ECCurve c, ::ArrayW<uint8_t> encoding) ;

/// @brief Method .ctor addr 0x111fe88 size 0xb8 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::EC::ECCurve c, ::ArrayW<uint8_t> encoding) ;

// Ctor Parameters [CppParam { name: "c", ty: "::Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "s", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
explicit X9ECPoint(::Org::BouncyCastle::Math::EC::ECCurve c, ::Org::BouncyCastle::Asn1::Asn1OctetString s) ;

/// @brief Method .ctor addr 0x112640c size 0x40 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::EC::ECCurve c, ::Org::BouncyCastle::Asn1::Asn1OctetString s) ;

/// @brief Method GetPointEncoding addr 0x1126da8 size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetPointEncoding() ;

/// @brief Method get_Point addr 0x111ff40 size 0x70 virtual false final false
 ::Org::BouncyCastle::Math::EC::ECPoint get_Point() ;

/// @brief Method get_IsPointCompressed addr 0x1126e20 size 0x4c virtual false final false
 bool get_IsPointCompressed() ;

/// @brief Method ToAsn1Object addr 0x1126e6c size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X9
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X9ECPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X9ECPoint, "Org.BouncyCastle.Asn1.X9", "X9ECPoint");
