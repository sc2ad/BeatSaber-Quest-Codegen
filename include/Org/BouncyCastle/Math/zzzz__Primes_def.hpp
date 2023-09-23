#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math {
class Org__BouncyCastle__Math__Primes__MROutput;
}
namespace Org::BouncyCastle::Math {
class Org__BouncyCastle__Math__Primes__STOutput;
}
namespace Org::BouncyCastle::Math {
class Primes;
}
// Type: ::MROutput
namespace Org::BouncyCastle::Math {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1602))
// CS Name: Org.BouncyCastle.Math.Primes::MROutput
class CORDL_TYPE Org__BouncyCastle__Math__Primes__MROutput : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Math__Primes__MROutput() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__Primes__MROutput", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Math__Primes__MROutput(Org__BouncyCastle__Math__Primes__MROutput const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__Primes__MROutput", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Math__Primes__MROutput(Org__BouncyCastle__Math__Primes__MROutput&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Math__Primes__MROutput(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Math__Primes__MROutput& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__Primes__MROutput& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__Primes__MROutput& operator=(Org__BouncyCastle__Math__Primes__MROutput&& o) noexcept = default;
  constexpr Org__BouncyCastle__Math__Primes__MROutput& operator=(Org__BouncyCastle__Math__Primes__MROutput const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_mProvablyComposite, put=__set_mProvablyComposite))  mProvablyComposite;

constexpr void __set_mProvablyComposite(bool value) ;

constexpr bool __get_mProvablyComposite() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_mFactor, put=__set_mFactor))  mFactor;

constexpr void __set_mFactor(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_mFactor() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Factor))  Factor;

 bool __declspec(property(get=get_IsProvablyComposite))  IsProvablyComposite;

 bool __declspec(property(get=get_IsNotPrimePower))  IsNotPrimePower;


// Methods

/// @brief Method ProbablyPrime addr 0x100f460 size 0x64 virtual false final false
static Org::BouncyCastle::Math::Org__BouncyCastle__Math__Primes__MROutput ProbablyPrime() ;

/// @brief Method ProvablyCompositeWithFactor addr 0x100f4f4 size 0x6c virtual false final false
static Org::BouncyCastle::Math::Org__BouncyCastle__Math__Primes__MROutput ProvablyCompositeWithFactor(Org::BouncyCastle::Math::BigInteger factor) ;

/// @brief Method ProvablyCompositeNotPrimePower addr 0x100f560 size 0x68 virtual false final false
static Org::BouncyCastle::Math::Org__BouncyCastle__Math__Primes__MROutput ProvablyCompositeNotPrimePower() ;

// Ctor Parameters [CppParam { name: "provablyComposite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "factor", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Math__Primes__MROutput(bool provablyComposite, Org::BouncyCastle::Math::BigInteger factor) ;

/// @brief Method .ctor addr 0x100f4c4 size 0x30 virtual false final false
 void _ctor(bool provablyComposite, Org::BouncyCastle::Math::BigInteger factor) ;

/// @brief Method get_Factor addr 0x100f5c8 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Factor() ;

/// @brief Method get_IsProvablyComposite addr 0x100f5d0 size 0x8 virtual false final false
 bool get_IsProvablyComposite() ;

/// @brief Method get_IsNotPrimePower addr 0x100f5d8 size 0x20 virtual false final false
 bool get_IsNotPrimePower() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math
// Type: ::STOutput
namespace Org::BouncyCastle::Math {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1603))
// CS Name: Org.BouncyCastle.Math.Primes::STOutput
class CORDL_TYPE Org__BouncyCastle__Math__Primes__STOutput : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Org__BouncyCastle__Math__Primes__STOutput() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__Primes__STOutput", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Math__Primes__STOutput(Org__BouncyCastle__Math__Primes__STOutput const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Math__Primes__STOutput", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Math__Primes__STOutput(Org__BouncyCastle__Math__Primes__STOutput&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Math__Primes__STOutput(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Math__Primes__STOutput& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__Primes__STOutput& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Math__Primes__STOutput& operator=(Org__BouncyCastle__Math__Primes__STOutput&& o) noexcept = default;
  constexpr Org__BouncyCastle__Math__Primes__STOutput& operator=(Org__BouncyCastle__Math__Primes__STOutput const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_mPrime, put=__set_mPrime))  mPrime;

constexpr void __set_mPrime(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_mPrime() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mPrimeSeed, put=__set_mPrimeSeed))  mPrimeSeed;

constexpr void __set_mPrimeSeed(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mPrimeSeed() const;

 int32_t __declspec(property(get=__get_mPrimeGenCounter, put=__set_mPrimeGenCounter))  mPrimeGenCounter;

constexpr void __set_mPrimeGenCounter(int32_t value) ;

constexpr int32_t __get_mPrimeGenCounter() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Prime))  Prime;

 ::ArrayW<uint8_t> __declspec(property(get=get_PrimeSeed))  PrimeSeed;

 int32_t __declspec(property(get=get_PrimeGenCounter))  PrimeGenCounter;


// Methods

// Ctor Parameters [CppParam { name: "prime", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "primeSeed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "primeGenCounter", ty: "int32_t", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Math__Primes__STOutput(Org::BouncyCastle::Math::BigInteger prime, ::ArrayW<uint8_t> primeSeed, int32_t primeGenCounter) ;

/// @brief Method .ctor addr 0x100f5f8 size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger prime, ::ArrayW<uint8_t> primeSeed, int32_t primeGenCounter) ;

/// @brief Method get_Prime addr 0x100f634 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Prime() ;

/// @brief Method get_PrimeSeed addr 0x100f63c size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_PrimeSeed() ;

/// @brief Method get_PrimeGenCounter addr 0x100f644 size 0x8 virtual false final false
 int32_t get_PrimeGenCounter() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math
// Type: Org.BouncyCastle.Math::Primes
namespace Org::BouncyCastle::Math {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1604))
// CS Name: Org.BouncyCastle.Math.Primes
class CORDL_TYPE Primes : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using STOutput = Org::BouncyCastle::Math::Org__BouncyCastle__Math__Primes__STOutput;

using MROutput = Org::BouncyCastle::Math::Org__BouncyCastle__Math__Primes__MROutput;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Primes() = default;

// Ctor Parameters [CppParam { name: "", ty: "Primes", modifiers: " const&", def_value: None }]
constexpr Primes(Primes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Primes", modifiers: "&&", def_value: None }]
constexpr Primes(Primes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Primes(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Primes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Primes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Primes& operator=(Primes&& o) noexcept = default;
  constexpr Primes& operator=(Primes const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_SmallFactorLimit, put=__set_SmallFactorLimit))  SmallFactorLimit;

static void __set_SmallFactorLimit(int32_t value) ;

static int32_t __get_SmallFactorLimit() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_One, put=__set_One))  One;

static void __set_One(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_One() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Two, put=__set_Two))  Two;

static void __set_Two(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_Two() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Three, put=__set_Three))  Three;

static void __set_Three(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_Three() ;


// Methods

/// @brief Method GenerateSTRandomPrime addr 0x100c300 size 0x1ac virtual false final false
static Org::BouncyCastle::Math::Org__BouncyCastle__Math__Primes__STOutput GenerateSTRandomPrime(Org::BouncyCastle::Crypto::IDigest hash, int32_t length, ::ArrayW<uint8_t> inputSeed) ;

/// @brief Method EnhancedMRProbablePrimeTest addr 0x100cae0 size 0x48c virtual false final false
static Org::BouncyCastle::Math::Org__BouncyCastle__Math__Primes__MROutput EnhancedMRProbablePrimeTest(Org::BouncyCastle::Math::BigInteger candidate, Org::BouncyCastle::Security::SecureRandom random, int32_t iterations) ;

/// @brief Method HasAnySmallFactors addr 0x100cff0 size 0x74 virtual false final false
static bool HasAnySmallFactors(Org::BouncyCastle::Math::BigInteger candidate) ;

/// @brief Method IsMRProbablePrime addr 0x100d948 size 0x234 virtual false final false
static bool IsMRProbablePrime(Org::BouncyCastle::Math::BigInteger candidate, Org::BouncyCastle::Security::SecureRandom random, int32_t iterations) ;

/// @brief Method IsMRProbablePrimeToBase addr 0x100dce8 size 0x1bc virtual false final false
static bool IsMRProbablePrimeToBase(Org::BouncyCastle::Math::BigInteger candidate, Org::BouncyCastle::Math::BigInteger baseValue) ;

/// @brief Method CheckCandidate addr 0x100cf6c size 0x84 virtual false final false
static void CheckCandidate(Org::BouncyCastle::Math::BigInteger n, ::StringW name) ;

/// @brief Method ImplHasAnySmallFactors addr 0x100d064 size 0x8e4 virtual false final false
static bool ImplHasAnySmallFactors(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method ImplMRProbablePrimeToBase addr 0x100db7c size 0x16c virtual false final false
static bool ImplMRProbablePrimeToBase(Org::BouncyCastle::Math::BigInteger w, Org::BouncyCastle::Math::BigInteger wSubOne, Org::BouncyCastle::Math::BigInteger m, int32_t a, Org::BouncyCastle::Math::BigInteger b) ;

/// @brief Method ImplSTRandomPrime addr 0x100c4ac size 0x634 virtual false final false
static Org::BouncyCastle::Math::Org__BouncyCastle__Math__Primes__STOutput ImplSTRandomPrime(Org::BouncyCastle::Crypto::IDigest d, int32_t length, ::ArrayW<uint8_t> primeSeed) ;

/// @brief Method Extract32 addr 0x100e030 size 0xc0 virtual false final false
static uint32_t Extract32(::ArrayW<uint8_t> bs) ;

/// @brief Method Hash addr 0x100dea4 size 0x134 virtual false final false
static void Hash(Org::BouncyCastle::Crypto::IDigest d, ::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output, int32_t outPos) ;

/// @brief Method HashGen addr 0x100e248 size 0x180 virtual false final false
static Org::BouncyCastle::Math::BigInteger HashGen(Org::BouncyCastle::Crypto::IDigest d, ::ArrayW<uint8_t> seed, int32_t count) ;

/// @brief Method Inc addr 0x100dfd8 size 0x58 virtual false final false
static void Inc(::ArrayW<uint8_t> seed, int32_t c) ;

/// @brief Method IsPrime32 addr 0x100e0f0 size 0x158 virtual false final false
static bool IsPrime32(uint32_t x) ;

// Ctor Parameters []
explicit Primes() ;

/// @brief Method .ctor addr 0x100e458 size 0x1008 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math
NEED_NO_BOX(Org::BouncyCastle::Math::Org__BouncyCastle__Math__Primes__MROutput);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Org__BouncyCastle__Math__Primes__MROutput, "Org.BouncyCastle.Math", "Primes/MROutput");
NEED_NO_BOX(Org::BouncyCastle::Math::Org__BouncyCastle__Math__Primes__STOutput);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Org__BouncyCastle__Math__Primes__STOutput, "Org.BouncyCastle.Math", "Primes/STOutput");
NEED_NO_BOX(Org::BouncyCastle::Math::Primes);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Primes, "Org.BouncyCastle.Math", "Primes");
