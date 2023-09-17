#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class MPInteger;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class RsaSecretBcpgKey;
}
// Type: Org.BouncyCastle.Bcpg::RsaSecretBcpgKey
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(585))
// CS Name: Org.BouncyCastle.Bcpg.RsaSecretBcpgKey
class CORDL_TYPE RsaSecretBcpgKey : public ::Org::BouncyCastle::Bcpg::BcpgObject {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Bcpg::IBcpgKey
constexpr operator  ::Org::BouncyCastle::Bcpg::IBcpgKey() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~RsaSecretBcpgKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaSecretBcpgKey", modifiers: " const&", def_value: None }]
constexpr RsaSecretBcpgKey(RsaSecretBcpgKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaSecretBcpgKey", modifiers: "&&", def_value: None }]
constexpr RsaSecretBcpgKey(RsaSecretBcpgKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RsaSecretBcpgKey(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::BcpgObject(ptr) {
}


  constexpr RsaSecretBcpgKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RsaSecretBcpgKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RsaSecretBcpgKey& operator=(RsaSecretBcpgKey&& o) noexcept = default;
  constexpr RsaSecretBcpgKey& operator=(RsaSecretBcpgKey const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Bcpg::MPInteger __declspec(property(get=__get_d, put=__set_d))  d;

constexpr void __set_d(::Org::BouncyCastle::Bcpg::MPInteger value) ;

constexpr ::Org::BouncyCastle::Bcpg::MPInteger __get_d() const;

 ::Org::BouncyCastle::Bcpg::MPInteger __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(::Org::BouncyCastle::Bcpg::MPInteger value) ;

constexpr ::Org::BouncyCastle::Bcpg::MPInteger __get_p() const;

 ::Org::BouncyCastle::Bcpg::MPInteger __declspec(property(get=__get_q, put=__set_q))  q;

constexpr void __set_q(::Org::BouncyCastle::Bcpg::MPInteger value) ;

constexpr ::Org::BouncyCastle::Bcpg::MPInteger __get_q() const;

 ::Org::BouncyCastle::Bcpg::MPInteger __declspec(property(get=__get_u, put=__set_u))  u;

constexpr void __set_u(::Org::BouncyCastle::Bcpg::MPInteger value) ;

constexpr ::Org::BouncyCastle::Bcpg::MPInteger __get_u() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_expP, put=__set_expP))  expP;

constexpr void __set_expP(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_expP() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_expQ, put=__set_expQ))  expQ;

constexpr void __set_expQ(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_expQ() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_crt, put=__set_crt))  crt;

constexpr void __set_crt(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_crt() const;


// Properties

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Modulus))  Modulus;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_PrivateExponent))  PrivateExponent;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_PrimeP))  PrimeP;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_PrimeQ))  PrimeQ;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_PrimeExponentP))  PrimeExponentP;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_PrimeExponentQ))  PrimeExponentQ;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_CrtCoefficient))  CrtCoefficient;

 ::StringW __declspec(property(get=get_Format))  Format;


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "::Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit RsaSecretBcpgKey(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x1148954 size 0x1ac virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

// Ctor Parameters [CppParam { name: "d", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "p", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "q", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit RsaSecretBcpgKey(::Org::BouncyCastle::Math::BigInteger d, ::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger q) ;

/// @brief Method .ctor addr 0x1148b00 size 0x204 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger d, ::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger q) ;

/// @brief Method get_Modulus addr 0x1148d04 size 0x30 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_Modulus() ;

/// @brief Method get_PrivateExponent addr 0x1148d34 size 0x1c virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_PrivateExponent() ;

/// @brief Method get_PrimeP addr 0x1148d50 size 0x1c virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_PrimeP() ;

/// @brief Method get_PrimeQ addr 0x1148d6c size 0x1c virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_PrimeQ() ;

/// @brief Method get_PrimeExponentP addr 0x1148d88 size 0x8 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_PrimeExponentP() ;

/// @brief Method get_PrimeExponentQ addr 0x1148d90 size 0x8 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_PrimeExponentQ() ;

/// @brief Method get_CrtCoefficient addr 0x1148d98 size 0x8 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_CrtCoefficient() ;

/// @brief Method get_Format addr 0x1148da0 size 0x40 virtual true final true
 ::StringW get_Format() ;

/// @brief Method GetEncoded addr 0x1148de0 size 0x84 virtual true final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Encode addr 0x1148e64 size 0x12c virtual true final false
 void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::RsaSecretBcpgKey, "Org.BouncyCastle.Bcpg", "RsaSecretBcpgKey");
