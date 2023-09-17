#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ECPublicBcpgKey;
}
// Type: Org.BouncyCastle.Bcpg::ECPublicBcpgKey
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(565))
// CS Name: Org.BouncyCastle.Bcpg.ECPublicBcpgKey
class CORDL_TYPE ECPublicBcpgKey : public ::Org::BouncyCastle::Bcpg::BcpgObject {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Bcpg::IBcpgKey
constexpr operator  ::Org::BouncyCastle::Bcpg::IBcpgKey() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ECPublicBcpgKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECPublicBcpgKey", modifiers: " const&", def_value: None }]
constexpr ECPublicBcpgKey(ECPublicBcpgKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECPublicBcpgKey", modifiers: "&&", def_value: None }]
constexpr ECPublicBcpgKey(ECPublicBcpgKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECPublicBcpgKey(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::BcpgObject(ptr) {
}


  constexpr ECPublicBcpgKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECPublicBcpgKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECPublicBcpgKey& operator=(ECPublicBcpgKey&& o) noexcept = default;
  constexpr ECPublicBcpgKey& operator=(ECPublicBcpgKey const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_oid, put=__set_oid))  oid;

constexpr void __set_oid(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_oid() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_point, put=__set_point))  point;

constexpr void __set_point(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_point() const;


// Properties

 ::StringW __declspec(property(get=get_Format))  Format;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_EncodedPoint))  EncodedPoint;

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_CurveOid))  CurveOid;


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "::Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit ECPublicBcpgKey(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x1146b3c size 0xc8 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

// Ctor Parameters [CppParam { name: "oid", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "point", ty: "::Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }]
explicit ECPublicBcpgKey(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::Org::BouncyCastle::Math::EC::ECPoint point) ;

/// @brief Method .ctor addr 0x1146d64 size 0xa8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::Org::BouncyCastle::Math::EC::ECPoint point) ;

// Ctor Parameters [CppParam { name: "oid", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "encodedPoint", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit ECPublicBcpgKey(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::Org::BouncyCastle::Math::BigInteger encodedPoint) ;

/// @brief Method .ctor addr 0x1146e0c size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::Org::BouncyCastle::Math::BigInteger encodedPoint) ;

/// @brief Method get_Format addr 0x1146e38 size 0x40 virtual true final true
 ::StringW get_Format() ;

/// @brief Method GetEncoded addr 0x1146e78 size 0x84 virtual true final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Encode addr 0x1146efc size 0xb0 virtual true final false
 void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

/// @brief Method get_EncodedPoint addr 0x1146fac size 0x8 virtual true final false
 ::Org::BouncyCastle::Math::BigInteger get_EncodedPoint() ;

/// @brief Method get_CurveOid addr 0x1146fb4 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_CurveOid() ;

/// @brief Method ReadBytesOfEncodedLength addr 0x1146c04 size 0x160 virtual false final false
static ::ArrayW<uint8_t> ReadBytesOfEncodedLength(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ECPublicBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ECPublicBcpgKey, "Org.BouncyCastle.Bcpg", "ECPublicBcpgKey");
