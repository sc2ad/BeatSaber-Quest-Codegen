#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
class Srp6Client;
}
// Type: Org.BouncyCastle.Crypto.Agreement.Srp::Srp6Client
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(727))
// CS Name: Org.BouncyCastle.Crypto.Agreement.Srp.Srp6Client
class CORDL_TYPE Srp6Client : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~Srp6Client() = default;

// Ctor Parameters [CppParam { name: "", ty: "Srp6Client", modifiers: " const&", def_value: None }]
constexpr Srp6Client(Srp6Client const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Srp6Client", modifiers: "&&", def_value: None }]
constexpr Srp6Client(Srp6Client&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Srp6Client(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Srp6Client& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Srp6Client& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Srp6Client& operator=(Srp6Client&& o) noexcept = default;
  constexpr Srp6Client& operator=(Srp6Client const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_N, put=__set_N))  N;

constexpr void __set_N(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_N() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_g() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_privA, put=__set_privA))  privA;

constexpr void __set_privA(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_privA() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_pubA, put=__set_pubA))  pubA;

constexpr void __set_pubA(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_pubA() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_B, put=__set_B))  B;

constexpr void __set_B(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_B() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_x() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_u, put=__set_u))  u;

constexpr void __set_u(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_u() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_S, put=__set_S))  S;

constexpr void __set_S(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_S() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_M1, put=__set_M1))  M1;

constexpr void __set_M1(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_M1() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_M2, put=__set_M2))  M2;

constexpr void __set_M2(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_M2() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Key, put=__set_Key))  Key;

constexpr void __set_Key(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_Key() const;

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_digest() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;


// Methods

// Ctor Parameters []
explicit Srp6Client() ;

/// @brief Method .ctor addr 0x118c890 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x118c898 size 0xc virtual true final false
 void Init(Org::BouncyCastle::Math::BigInteger N, Org::BouncyCastle::Math::BigInteger g, Org::BouncyCastle::Crypto::IDigest digest, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method Init addr 0x118c8a4 size 0x2c virtual true final false
 void Init(Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters group, Org::BouncyCastle::Crypto::IDigest digest, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method GenerateClientCredentials addr 0x118c8d0 size 0x60 virtual true final false
 Org::BouncyCastle::Math::BigInteger GenerateClientCredentials(::ArrayW<uint8_t> salt, ::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> password) ;

/// @brief Method CalculateSecret addr 0x118cd38 size 0x44 virtual true final false
 Org::BouncyCastle::Math::BigInteger CalculateSecret(Org::BouncyCastle::Math::BigInteger serverB) ;

/// @brief Method SelectPrivateValue addr 0x118cf38 size 0xc virtual true final false
 Org::BouncyCastle::Math::BigInteger SelectPrivateValue() ;

/// @brief Method CalculateS addr 0x118ce68 size 0xd0 virtual false final false
 Org::BouncyCastle::Math::BigInteger CalculateS() ;

/// @brief Method CalculateClientEvidenceMessage addr 0x118d054 size 0x84 virtual true final false
 Org::BouncyCastle::Math::BigInteger CalculateClientEvidenceMessage() ;

/// @brief Method VerifyServerEvidenceMessage addr 0x118d0dc size 0xb8 virtual true final false
 bool VerifyServerEvidenceMessage(Org::BouncyCastle::Math::BigInteger serverM2) ;

/// @brief Method CalculateSessionKey addr 0x118d198 size 0x84 virtual true final false
 Org::BouncyCastle::Math::BigInteger CalculateSessionKey() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement::Srp
NEED_NO_BOX(Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client, "Org.BouncyCastle.Crypto.Agreement.Srp", "Srp6Client");
