#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySourceProvider;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class BasicEntropySourceProvider;
}
namespace Org::BouncyCastle::Crypto::Prng {
class Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource;
}
// Type: ::BasicEntropySource
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1100))
// CS Name: Org.BouncyCastle.Crypto.Prng.BasicEntropySourceProvider::BasicEntropySource
class CORDL_TYPE Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IEntropySource
constexpr operator  Org::BouncyCastle::Crypto::IEntropySource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource(Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource(Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource& operator=(Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource& operator=(Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_mSecureRandom, put=__set_mSecureRandom))  mSecureRandom;

constexpr void __set_mSecureRandom(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_mSecureRandom() const;

 bool __declspec(property(get=__get_mPredictionResistant, put=__set_mPredictionResistant))  mPredictionResistant;

constexpr void __set_mPredictionResistant(bool value) ;

constexpr bool __get_mPredictionResistant() const;

 int32_t __declspec(property(get=__get_mEntropySize, put=__set_mEntropySize))  mEntropySize;

constexpr void __set_mEntropySize(int32_t value) ;

constexpr int32_t __get_mEntropySize() const;


// Properties

 bool __declspec(property(get=Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant))  Org_BouncyCastle_Crypto_IEntropySource_IsPredictionResistant;

 int32_t __declspec(property(get=Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize))  Org_BouncyCastle_Crypto_IEntropySource_EntropySize;


// Methods

// Ctor Parameters [CppParam { name: "secureRandom", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "predictionResistant", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "entropySize", ty: "int32_t", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource(Org::BouncyCastle::Security::SecureRandom secureRandom, bool predictionResistant, int32_t entropySize) ;

/// @brief Method .ctor addr 0xeb39c0 size 0x40 virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom secureRandom, bool predictionResistant, int32_t entropySize) ;

/// @brief Method Org.BouncyCastle.Crypto.IEntropySource.get_IsPredictionResistant addr 0xeb3a00 size 0x8 virtual true final true
 bool Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant() ;

/// @brief Method Org.BouncyCastle.Crypto.IEntropySource.GetEntropy addr 0xeb3a08 size 0x70 virtual true final true
 ::ArrayW<uint8_t> Org_BouncyCastle_Crypto_IEntropySource_GetEntropy() ;

/// @brief Method Org.BouncyCastle.Crypto.IEntropySource.get_EntropySize addr 0xeb3af4 size 0x8 virtual true final true
 int32_t Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
// Type: Org.BouncyCastle.Crypto.Prng::BasicEntropySourceProvider
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1101))
// CS Name: Org.BouncyCastle.Crypto.Prng.BasicEntropySourceProvider
class CORDL_TYPE BasicEntropySourceProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BasicEntropySource = Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource;

/// @brief Convert operator to Org::BouncyCastle::Crypto::IEntropySourceProvider
constexpr operator  Org::BouncyCastle::Crypto::IEntropySourceProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BasicEntropySourceProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicEntropySourceProvider", modifiers: " const&", def_value: None }]
constexpr BasicEntropySourceProvider(BasicEntropySourceProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicEntropySourceProvider", modifiers: "&&", def_value: None }]
constexpr BasicEntropySourceProvider(BasicEntropySourceProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicEntropySourceProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BasicEntropySourceProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicEntropySourceProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicEntropySourceProvider& operator=(BasicEntropySourceProvider&& o) noexcept = default;
  constexpr BasicEntropySourceProvider& operator=(BasicEntropySourceProvider const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_mSecureRandom, put=__set_mSecureRandom))  mSecureRandom;

constexpr void __set_mSecureRandom(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_mSecureRandom() const;

 bool __declspec(property(get=__get_mPredictionResistant, put=__set_mPredictionResistant))  mPredictionResistant;

constexpr void __set_mPredictionResistant(bool value) ;

constexpr bool __get_mPredictionResistant() const;


// Methods

// Ctor Parameters [CppParam { name: "secureRandom", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "isPredictionResistant", ty: "bool", modifiers: "", def_value: None }]
explicit BasicEntropySourceProvider(Org::BouncyCastle::Security::SecureRandom secureRandom, bool isPredictionResistant) ;

/// @brief Method .ctor addr 0xeb3910 size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom secureRandom, bool isPredictionResistant) ;

/// @brief Method Get addr 0xeb3940 size 0x80 virtual true final true
 Org::BouncyCastle::Crypto::IEntropySource Get(int32_t bitsRequired) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider, "Org.BouncyCastle.Crypto.Prng", "BasicEntropySourceProvider");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__BasicEntropySourceProvider__BasicEntropySource, "Org.BouncyCastle.Crypto.Prng", "BasicEntropySourceProvider/BasicEntropySource");
