#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Random_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
namespace Org::BouncyCastle::Crypto::Prng {
class DigestRandomGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Type: Org.BouncyCastle.Security::SecureRandom
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2460))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1111))
// CS Name: Org.BouncyCastle.Security.SecureRandom
class CORDL_TYPE SecureRandom : public System::Random {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SecureRandom() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecureRandom", modifiers: " const&", def_value: None }]
constexpr SecureRandom(SecureRandom const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecureRandom", modifiers: "&&", def_value: None }]
constexpr SecureRandom(SecureRandom&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecureRandom(void* ptr) noexcept : System::Random(ptr) {
}


  constexpr SecureRandom& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecureRandom& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecureRandom& operator=(SecureRandom&& o) noexcept = default;
  constexpr SecureRandom& operator=(SecureRandom const& o) noexcept = default;
                


// Fields

static int64_t __declspec(property(get=__get_counter, put=__set_counter))  counter;

static void __set_counter(int64_t value) ;

static int64_t __get_counter() ;

static Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_master, put=__set_master))  master;

static void __set_master(Org::BouncyCastle::Security::SecureRandom value) ;

static Org::BouncyCastle::Security::SecureRandom __get_master() ;

 Org::BouncyCastle::Crypto::Prng::IRandomGenerator __declspec(property(get=__get_generator, put=__set_generator))  generator;

constexpr void __set_generator(Org::BouncyCastle::Crypto::Prng::IRandomGenerator value) ;

constexpr Org::BouncyCastle::Crypto::Prng::IRandomGenerator __get_generator() const;

static double_t __declspec(property(get=__get_DoubleScale, put=__set_DoubleScale))  DoubleScale;

static void __set_DoubleScale(double_t value) ;

static double_t __get_DoubleScale() ;


// Properties

static Org::BouncyCastle::Security::SecureRandom __declspec(property(get=get_Master))  Master;


// Methods

/// @brief Method NextCounterValue addr 0xeb4d9c size 0x58 virtual false final false
static int64_t NextCounterValue() ;

/// @brief Method get_Master addr 0xeb4df4 size 0x58 virtual false final false
static Org::BouncyCastle::Security::SecureRandom get_Master() ;

/// @brief Method CreatePrng addr 0xeb4e4c size 0x1a8 virtual false final false
static Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator CreatePrng(::StringW digestName, bool autoSeed) ;

/// @brief Method GetNextBytes addr 0xeb3a78 size 0x7c virtual false final false
static ::ArrayW<uint8_t> GetNextBytes(Org::BouncyCastle::Security::SecureRandom secureRandom, int32_t length) ;

/// @brief Method GetInstance addr 0xeb4ff4 size 0x58 virtual false final false
static Org::BouncyCastle::Security::SecureRandom GetInstance(::StringW algorithm) ;

/// @brief Method GetInstance addr 0xeb504c size 0x184 virtual false final false
static Org::BouncyCastle::Security::SecureRandom GetInstance(::StringW algorithm, bool autoSeed) ;

/// @brief Method GetSeed addr 0xeb5240 size 0x90 virtual false final false
static ::ArrayW<uint8_t> GetSeed(int32_t length) ;

// Ctor Parameters []
explicit SecureRandom() ;

/// @brief Method .ctor addr 0xeab0dc size 0x78 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "seed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit SecureRandom(::ArrayW<uint8_t> seed) ;

/// @brief Method .ctor addr 0xeb52d0 size 0x98 virtual false final false
 void _ctor(::ArrayW<uint8_t> seed) ;

// Ctor Parameters [CppParam { name: "generator", ty: "Org::BouncyCastle::Crypto::Prng::IRandomGenerator", modifiers: "", def_value: None }]
explicit SecureRandom(Org::BouncyCastle::Crypto::Prng::IRandomGenerator generator) ;

/// @brief Method .ctor addr 0xeb51d0 size 0x70 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Prng::IRandomGenerator generator) ;

/// @brief Method GenerateSeed addr 0xeb5368 size 0x90 virtual true final false
 ::ArrayW<uint8_t> GenerateSeed(int32_t length) ;

/// @brief Method SetSeed addr 0xeb53f8 size 0xa8 virtual true final false
 void SetSeed(::ArrayW<uint8_t> seed) ;

/// @brief Method SetSeed addr 0xeb54a0 size 0xac virtual true final false
 void SetSeed(int64_t seed) ;

/// @brief Method Next addr 0xeb554c size 0x20 virtual true final false
 int32_t Next() ;

/// @brief Method Next addr 0xeb556c size 0xf0 virtual true final false
 int32_t Next(int32_t maxValue) ;

/// @brief Method Next addr 0xeb565c size 0xc8 virtual true final false
 int32_t Next(int32_t minValue, int32_t maxValue) ;

/// @brief Method NextBytes addr 0xeb5724 size 0xac virtual true final false
 void NextBytes(::ArrayW<uint8_t> buf) ;

/// @brief Method NextBytes addr 0xeb57d0 size 0xc4 virtual true final false
 void NextBytes(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method NextDouble addr 0xeb5894 size 0xb8 virtual true final false
 double_t NextDouble() ;

/// @brief Method NextInt addr 0xeb594c size 0x6c virtual true final false
 int32_t NextInt() ;

/// @brief Method NextLong addr 0xeb59b8 size 0x6c virtual true final false
 int64_t NextLong() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(Org::BouncyCastle::Security::SecureRandom);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::SecureRandom, "Org.BouncyCastle.Security", "SecureRandom");
