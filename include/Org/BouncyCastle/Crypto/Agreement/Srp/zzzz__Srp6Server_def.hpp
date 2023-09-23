#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
class Srp6Server;
}
// Type: Org.BouncyCastle.Crypto.Agreement.Srp::Srp6Server
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(728))
// CS Name: Org.BouncyCastle.Crypto.Agreement.Srp.Srp6Server
class CORDL_TYPE Srp6Server : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~Srp6Server() = default;

// Ctor Parameters [CppParam { name: "", ty: "Srp6Server", modifiers: " const&", def_value: None }]
constexpr Srp6Server(Srp6Server const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Srp6Server", modifiers: "&&", def_value: None }]
constexpr Srp6Server(Srp6Server&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Srp6Server(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Srp6Server& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Srp6Server& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Srp6Server& operator=(Srp6Server&& o) noexcept = default;
  constexpr Srp6Server& operator=(Srp6Server const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_N, put=__set_N))  N;

constexpr void __set_N(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_N() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_g() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_v, put=__set_v))  v;

constexpr void __set_v(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_v() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_digest() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_A, put=__set_A))  A;

constexpr void __set_A(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_A() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_privB, put=__set_privB))  privB;

constexpr void __set_privB(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_privB() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_pubB, put=__set_pubB))  pubB;

constexpr void __set_pubB(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_pubB() const;

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


// Methods

// Ctor Parameters []
explicit Srp6Server() ;

/// @brief Method .ctor addr 0x118d434 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x118d43c size 0x10 virtual true final false
 void Init(Org::BouncyCastle::Math::BigInteger N, Org::BouncyCastle::Math::BigInteger g, Org::BouncyCastle::Math::BigInteger v, Org::BouncyCastle::Crypto::IDigest digest, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method Init addr 0x118d44c size 0x30 virtual true final false
 void Init(Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters group, Org::BouncyCastle::Math::BigInteger v, Org::BouncyCastle::Crypto::IDigest digest, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method GenerateServerCredentials addr 0x118d47c size 0xb0 virtual true final false
 Org::BouncyCastle::Math::BigInteger GenerateServerCredentials() ;

/// @brief Method CalculateSecret addr 0x118d52c size 0x44 virtual true final false
 Org::BouncyCastle::Math::BigInteger CalculateSecret(Org::BouncyCastle::Math::BigInteger clientA) ;

/// @brief Method SelectPrivateValue addr 0x118d5cc size 0xc virtual true final false
 Org::BouncyCastle::Math::BigInteger SelectPrivateValue() ;

/// @brief Method CalculateS addr 0x118d570 size 0x5c virtual false final false
 Org::BouncyCastle::Math::BigInteger CalculateS() ;

/// @brief Method VerifyClientEvidenceMessage addr 0x118d5d8 size 0xb8 virtual true final false
 bool VerifyClientEvidenceMessage(Org::BouncyCastle::Math::BigInteger clientM1) ;

/// @brief Method CalculateServerEvidenceMessage addr 0x118d690 size 0x84 virtual true final false
 Org::BouncyCastle::Math::BigInteger CalculateServerEvidenceMessage() ;

/// @brief Method CalculateSessionKey addr 0x118d714 size 0x84 virtual true final false
 Org::BouncyCastle::Math::BigInteger CalculateSessionKey() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement::Srp
NEED_NO_BOX(Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server, "Org.BouncyCastle.Crypto.Agreement.Srp", "Srp6Server");
