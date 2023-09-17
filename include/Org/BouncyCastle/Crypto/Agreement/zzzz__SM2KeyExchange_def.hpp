#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class SM2KeyExchangePublicParameters;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class SM2KeyExchange;
}
// Type: Org.BouncyCastle.Crypto.Agreement::SM2KeyExchange
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(741))
// CS Name: Org.BouncyCastle.Crypto.Agreement.SM2KeyExchange
class CORDL_TYPE SM2KeyExchange : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~SM2KeyExchange() = default;

// Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchange", modifiers: " const&", def_value: None }]
constexpr SM2KeyExchange(SM2KeyExchange const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchange", modifiers: "&&", def_value: None }]
constexpr SM2KeyExchange(SM2KeyExchange&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SM2KeyExchange(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SM2KeyExchange& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SM2KeyExchange& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SM2KeyExchange& operator=(SM2KeyExchange&& o) noexcept = default;
  constexpr SM2KeyExchange& operator=(SM2KeyExchange const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_mDigest, put=__set_mDigest))  mDigest;

constexpr void __set_mDigest(::Org::BouncyCastle::Crypto::IDigest value) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest __get_mDigest() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mUserID, put=__set_mUserID))  mUserID;

constexpr void __set_mUserID(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mUserID() const;

 ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __declspec(property(get=__get_mStaticKey, put=__set_mStaticKey))  mStaticKey;

constexpr void __set_mStaticKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __get_mStaticKey() const;

 ::Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=__get_mStaticPubPoint, put=__set_mStaticPubPoint))  mStaticPubPoint;

constexpr void __set_mStaticPubPoint(::Org::BouncyCastle::Math::EC::ECPoint value) ;

constexpr ::Org::BouncyCastle::Math::EC::ECPoint __get_mStaticPubPoint() const;

 ::Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=__get_mEphemeralPubPoint, put=__set_mEphemeralPubPoint))  mEphemeralPubPoint;

constexpr void __set_mEphemeralPubPoint(::Org::BouncyCastle::Math::EC::ECPoint value) ;

constexpr ::Org::BouncyCastle::Math::EC::ECPoint __get_mEphemeralPubPoint() const;

 ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters __declspec(property(get=__get_mECParams, put=__set_mECParams))  mECParams;

constexpr void __set_mECParams(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters __get_mECParams() const;

 int32_t __declspec(property(get=__get_mW, put=__set_mW))  mW;

constexpr void __set_mW(int32_t value) ;

constexpr int32_t __get_mW() const;

 ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __declspec(property(get=__get_mEphemeralKey, put=__set_mEphemeralKey))  mEphemeralKey;

constexpr void __set_mEphemeralKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters __get_mEphemeralKey() const;

 bool __declspec(property(get=__get_mInitiator, put=__set_mInitiator))  mInitiator;

constexpr void __set_mInitiator(bool value) ;

constexpr bool __get_mInitiator() const;


// Methods

// Ctor Parameters []
explicit SM2KeyExchange() ;

/// @brief Method .ctor addr 0x11905dc size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit SM2KeyExchange(::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0x1190648 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method Init addr 0x1190670 size 0x1d4 virtual true final false
 void Init(::Org::BouncyCastle::Crypto::ICipherParameters privParam) ;

/// @brief Method CalculateKey addr 0x1190844 size 0x1c4 virtual true final false
 ::ArrayW<uint8_t> CalculateKey(int32_t kLen, ::Org::BouncyCastle::Crypto::ICipherParameters pubParam) ;

/// @brief Method CalculateKeyWithConfirmation addr 0x1190b68 size 0x4b0 virtual true final false
 ::ArrayW<::ArrayW<uint8_t>> CalculateKeyWithConfirmation(int32_t kLen, ::ArrayW<uint8_t> confirmationTag, ::Org::BouncyCastle::Crypto::ICipherParameters pubParam) ;

/// @brief Method CalculateU addr 0x1191510 size 0x1cc virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint CalculateU(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters otherPub) ;

/// @brief Method Kdf addr 0x1191790 size 0x650 virtual true final false
 ::ArrayW<uint8_t> Kdf(::Org::BouncyCastle::Math::EC::ECPoint u, ::ArrayW<uint8_t> za, ::ArrayW<uint8_t> zb, int32_t klen) ;

/// @brief Method Reduce addr 0x11916dc size 0xb4 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger Reduce(::Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method S1 addr 0x1191228 size 0x174 virtual false final false
 ::ArrayW<uint8_t> S1(::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Math::EC::ECPoint u, ::ArrayW<uint8_t> inner) ;

/// @brief Method CalculateInnerHash addr 0x1191018 size 0x210 virtual false final false
 ::ArrayW<uint8_t> CalculateInnerHash(::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Math::EC::ECPoint u, ::ArrayW<uint8_t> za, ::ArrayW<uint8_t> zb, ::Org::BouncyCastle::Math::EC::ECPoint p1, ::Org::BouncyCastle::Math::EC::ECPoint p2) ;

/// @brief Method S2 addr 0x119139c size 0x174 virtual false final false
 ::ArrayW<uint8_t> S2(::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Math::EC::ECPoint u, ::ArrayW<uint8_t> inner) ;

/// @brief Method GetZ addr 0x1190a08 size 0x160 virtual false final false
 ::ArrayW<uint8_t> GetZ(::Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> userID, ::Org::BouncyCastle::Math::EC::ECPoint pubPoint) ;

/// @brief Method AddUserID addr 0x1191eb4 size 0x188 virtual false final false
 void AddUserID(::Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> userID) ;

/// @brief Method AddFieldElement addr 0x1191de0 size 0xd4 virtual false final false
 void AddFieldElement(::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Math::EC::ECFieldElement v) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange, "Org.BouncyCastle.Crypto.Agreement", "SM2KeyExchange");
