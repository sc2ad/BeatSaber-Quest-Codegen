#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ECPublicBcpgKey_def.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ECDsaPublicBcpgKey;
}
// Type: Org.BouncyCastle.Bcpg::ECDsaPublicBcpgKey
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(565))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(567))
// CS Name: Org.BouncyCastle.Bcpg.ECDsaPublicBcpgKey
class CORDL_TYPE ECDsaPublicBcpgKey : public ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ECDsaPublicBcpgKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECDsaPublicBcpgKey", modifiers: " const&", def_value: None }]
constexpr ECDsaPublicBcpgKey(ECDsaPublicBcpgKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECDsaPublicBcpgKey", modifiers: "&&", def_value: None }]
constexpr ECDsaPublicBcpgKey(ECDsaPublicBcpgKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECDsaPublicBcpgKey(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey(ptr) {
}


  constexpr ECDsaPublicBcpgKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECDsaPublicBcpgKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECDsaPublicBcpgKey& operator=(ECDsaPublicBcpgKey&& o) noexcept = default;
  constexpr ECDsaPublicBcpgKey& operator=(ECDsaPublicBcpgKey const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "::Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit ECDsaPublicBcpgKey(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x114728c size 0x4 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

// Ctor Parameters [CppParam { name: "oid", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "point", ty: "::Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }]
explicit ECDsaPublicBcpgKey(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::Org::BouncyCastle::Math::EC::ECPoint point) ;

/// @brief Method .ctor addr 0x1147290 size 0x4 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::Org::BouncyCastle::Math::EC::ECPoint point) ;

// Ctor Parameters [CppParam { name: "oid", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "encodedPoint", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit ECDsaPublicBcpgKey(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::Org::BouncyCastle::Math::BigInteger encodedPoint) ;

/// @brief Method .ctor addr 0x1147294 size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::Org::BouncyCastle::Math::BigInteger encodedPoint) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey, "Org.BouncyCastle.Bcpg", "ECDsaPublicBcpgKey");
