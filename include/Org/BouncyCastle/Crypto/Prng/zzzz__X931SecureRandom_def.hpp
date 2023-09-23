#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Prng {
class X931Rng;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class X931SecureRandom;
}
// Type: Org.BouncyCastle.Crypto.Prng::X931SecureRandom
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1111))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1121))
// CS Name: Org.BouncyCastle.Crypto.Prng.X931SecureRandom
class CORDL_TYPE X931SecureRandom : public Org::BouncyCastle::Security::SecureRandom {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~X931SecureRandom() = default;

// Ctor Parameters [CppParam { name: "", ty: "X931SecureRandom", modifiers: " const&", def_value: None }]
constexpr X931SecureRandom(X931SecureRandom const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X931SecureRandom", modifiers: "&&", def_value: None }]
constexpr X931SecureRandom(X931SecureRandom&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X931SecureRandom(void* ptr) noexcept : Org::BouncyCastle::Security::SecureRandom(ptr) {
}


  constexpr X931SecureRandom& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X931SecureRandom& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X931SecureRandom& operator=(X931SecureRandom&& o) noexcept = default;
  constexpr X931SecureRandom& operator=(X931SecureRandom const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_mPredictionResistant, put=__set_mPredictionResistant))  mPredictionResistant;

constexpr void __set_mPredictionResistant(bool value) ;

constexpr bool __get_mPredictionResistant() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_mRandomSource, put=__set_mRandomSource))  mRandomSource;

constexpr void __set_mRandomSource(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_mRandomSource() const;

 Org::BouncyCastle::Crypto::Prng::X931Rng __declspec(property(get=__get_mDrbg, put=__set_mDrbg))  mDrbg;

constexpr void __set_mDrbg(Org::BouncyCastle::Crypto::Prng::X931Rng value) ;

constexpr Org::BouncyCastle::Crypto::Prng::X931Rng __get_mDrbg() const;


// Methods

// Ctor Parameters [CppParam { name: "randomSource", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "drbg", ty: "Org::BouncyCastle::Crypto::Prng::X931Rng", modifiers: "", def_value: None }, CppParam { name: "predictionResistant", ty: "bool", modifiers: "", def_value: None }]
explicit X931SecureRandom(Org::BouncyCastle::Security::SecureRandom randomSource, Org::BouncyCastle::Crypto::Prng::X931Rng drbg, bool predictionResistant) ;

/// @brief Method .ctor addr 0xeb7bf0 size 0x80 virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom randomSource, Org::BouncyCastle::Crypto::Prng::X931Rng drbg, bool predictionResistant) ;

/// @brief Method SetSeed addr 0xeb7c70 size 0xb4 virtual true final false
 void SetSeed(::ArrayW<uint8_t> seed) ;

/// @brief Method SetSeed addr 0xeb7d24 size 0xb4 virtual true final false
 void SetSeed(int64_t seed) ;

/// @brief Method NextBytes addr 0xeb7dd8 size 0xf0 virtual true final false
 void NextBytes(::ArrayW<uint8_t> bytes) ;

/// @brief Method NextBytes addr 0xeb7ec8 size 0x98 virtual true final false
 void NextBytes(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method GenerateSeed addr 0xeb7f60 size 0x1c virtual true final false
 ::ArrayW<uint8_t> GenerateSeed(int32_t numBytes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::X931SecureRandom);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::X931SecureRandom, "Org.BouncyCastle.Crypto.Prng", "X931SecureRandom");
