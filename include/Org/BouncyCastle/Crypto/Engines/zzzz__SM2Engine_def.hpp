#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class SM2Engine;
}
// Type: Org.BouncyCastle.Crypto.Engines::SM2Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(872))
// CS Name: Org.BouncyCastle.Crypto.Engines.SM2Engine
class CORDL_TYPE SM2Engine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SM2Engine() = default;

// Ctor Parameters [CppParam { name: "", ty: "SM2Engine", modifiers: " const&", def_value: None }]
constexpr SM2Engine(SM2Engine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SM2Engine", modifiers: "&&", def_value: None }]
constexpr SM2Engine(SM2Engine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SM2Engine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SM2Engine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SM2Engine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SM2Engine& operator=(SM2Engine&& o) noexcept = default;
  constexpr SM2Engine& operator=(SM2Engine const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_mDigest, put=__set_mDigest))  mDigest;

constexpr void __set_mDigest(::Org::BouncyCastle::Crypto::IDigest value) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest __get_mDigest() const;

 bool __declspec(property(get=__get_mForEncryption, put=__set_mForEncryption))  mForEncryption;

constexpr void __set_mForEncryption(bool value) ;

constexpr bool __get_mForEncryption() const;

 ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters __declspec(property(get=__get_mECKey, put=__set_mECKey))  mECKey;

constexpr void __set_mECKey(::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters __get_mECKey() const;

 ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters __declspec(property(get=__get_mECParams, put=__set_mECParams))  mECParams;

constexpr void __set_mECParams(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters __get_mECParams() const;

 int32_t __declspec(property(get=__get_mCurveLength, put=__set_mCurveLength))  mCurveLength;

constexpr void __set_mCurveLength(int32_t value) ;

constexpr int32_t __get_mCurveLength() const;

 ::Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_mRandom, put=__set_mRandom))  mRandom;

constexpr void __set_mRandom(::Org::BouncyCastle::Security::SecureRandom value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom __get_mRandom() const;


// Methods

// Ctor Parameters []
explicit SM2Engine() ;

/// @brief Method .ctor addr 0xe5c230 size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit SM2Engine(::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xe5c29c size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method Init addr 0xe5c2c4 size 0x29c virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters param) ;

/// @brief Method ProcessBlock addr 0xe5c560 size 0x10 virtual true final false
 ::ArrayW<uint8_t> ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) ;

/// @brief Method CreateBasePointMultiplier addr 0xe5cde0 size 0x5c virtual true final false
 ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier CreateBasePointMultiplier() ;

/// @brief Method Encrypt addr 0xe5c570 size 0x3f8 virtual false final false
 ::ArrayW<uint8_t> Encrypt(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) ;

/// @brief Method Decrypt addr 0xe5c968 size 0x478 virtual false final false
 ::ArrayW<uint8_t> Decrypt(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) ;

/// @brief Method NotEncrypted addr 0xe5d304 size 0x68 virtual false final false
 bool NotEncrypted(::ArrayW<uint8_t> encData, ::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method Kdf addr 0xe5cf0c size 0x3f8 virtual false final false
 void Kdf(::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Math::EC::ECPoint c1, ::ArrayW<uint8_t> encData) ;

/// @brief Method Xor addr 0xe5d440 size 0x64 virtual false final false
 void Xor(::ArrayW<uint8_t> data, ::ArrayW<uint8_t> kdfOut, int32_t dOff, int32_t dRemaining) ;

/// @brief Method NextK addr 0xe5ce3c size 0xd0 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger NextK() ;

/// @brief Method AddFieldElement addr 0xe5d36c size 0xd4 virtual false final false
 void AddFieldElement(::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Math::EC::ECFieldElement v) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SM2Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SM2Engine, "Org.BouncyCastle.Crypto.Engines", "SM2Engine");
