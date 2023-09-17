#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IEntropySourceProvider;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class CryptoApiEntropySourceProvider;
}
namespace Org::BouncyCastle::Crypto::Prng {
class ____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource;
}
// Type: ::CryptoApiEntropySource
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1103))
// CS Name: Org.BouncyCastle.Crypto.Prng.CryptoApiEntropySourceProvider::CryptoApiEntropySource
class CORDL_TYPE ____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IEntropySource
constexpr operator  ::Org::BouncyCastle::Crypto::IEntropySource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource(____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource(____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource& operator=(____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource& operator=(____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource const& o) noexcept = default;
                


// Fields

 ::System::Security::Cryptography::RandomNumberGenerator __declspec(property(get=__get_mRng, put=__set_mRng))  mRng;

constexpr void __set_mRng(::System::Security::Cryptography::RandomNumberGenerator value) ;

constexpr ::System::Security::Cryptography::RandomNumberGenerator __get_mRng() const;

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

// Ctor Parameters [CppParam { name: "rng", ty: "::System::Security::Cryptography::RandomNumberGenerator", modifiers: "", def_value: None }, CppParam { name: "predictionResistant", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "entropySize", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource(::System::Security::Cryptography::RandomNumberGenerator rng, bool predictionResistant, int32_t entropySize) ;

/// @brief Method .ctor addr 0xeb3c24 size 0x40 virtual false final false
 void _ctor(::System::Security::Cryptography::RandomNumberGenerator rng, bool predictionResistant, int32_t entropySize) ;

/// @brief Method Org.BouncyCastle.Crypto.IEntropySource.get_IsPredictionResistant addr 0xeb3c64 size 0x8 virtual true final true
 bool Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant() ;

/// @brief Method Org.BouncyCastle.Crypto.IEntropySource.GetEntropy addr 0xeb3c6c size 0x88 virtual true final true
 ::ArrayW<uint8_t> Org_BouncyCastle_Crypto_IEntropySource_GetEntropy() ;

/// @brief Method Org.BouncyCastle.Crypto.IEntropySource.get_EntropySize addr 0xeb3cf4 size 0x8 virtual true final true
 int32_t Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
// Type: Org.BouncyCastle.Crypto.Prng::CryptoApiEntropySourceProvider
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1104))
// CS Name: Org.BouncyCastle.Crypto.Prng.CryptoApiEntropySourceProvider
class CORDL_TYPE CryptoApiEntropySourceProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CryptoApiEntropySource = ::Org::BouncyCastle::Crypto::Prng::____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource;

/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IEntropySourceProvider
constexpr operator  ::Org::BouncyCastle::Crypto::IEntropySourceProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CryptoApiEntropySourceProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptoApiEntropySourceProvider", modifiers: " const&", def_value: None }]
constexpr CryptoApiEntropySourceProvider(CryptoApiEntropySourceProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptoApiEntropySourceProvider", modifiers: "&&", def_value: None }]
constexpr CryptoApiEntropySourceProvider(CryptoApiEntropySourceProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CryptoApiEntropySourceProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CryptoApiEntropySourceProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CryptoApiEntropySourceProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CryptoApiEntropySourceProvider& operator=(CryptoApiEntropySourceProvider&& o) noexcept = default;
  constexpr CryptoApiEntropySourceProvider& operator=(CryptoApiEntropySourceProvider const& o) noexcept = default;
                


// Fields

 ::System::Security::Cryptography::RandomNumberGenerator __declspec(property(get=__get_mRng, put=__set_mRng))  mRng;

constexpr void __set_mRng(::System::Security::Cryptography::RandomNumberGenerator value) ;

constexpr ::System::Security::Cryptography::RandomNumberGenerator __get_mRng() const;

 bool __declspec(property(get=__get_mPredictionResistant, put=__set_mPredictionResistant))  mPredictionResistant;

constexpr void __set_mPredictionResistant(bool value) ;

constexpr bool __get_mPredictionResistant() const;


// Methods

// Ctor Parameters []
explicit CryptoApiEntropySourceProvider() ;

/// @brief Method .ctor addr 0xeb3afc size 0x24 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "rng", ty: "::System::Security::Cryptography::RandomNumberGenerator", modifiers: "", def_value: None }, CppParam { name: "isPredictionResistant", ty: "bool", modifiers: "", def_value: None }]
explicit CryptoApiEntropySourceProvider(::System::Security::Cryptography::RandomNumberGenerator rng, bool isPredictionResistant) ;

/// @brief Method .ctor addr 0xeb3b20 size 0x84 virtual false final false
 void _ctor(::System::Security::Cryptography::RandomNumberGenerator rng, bool isPredictionResistant) ;

/// @brief Method Get addr 0xeb3ba4 size 0x80 virtual true final true
 ::Org::BouncyCastle::Crypto::IEntropySource Get(int32_t bitsRequired) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider, "Org.BouncyCastle.Crypto.Prng", "CryptoApiEntropySourceProvider");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::____Org__BouncyCastle__Crypto__Prng__CryptoApiEntropySourceProvider__CryptoApiEntropySource, "Org.BouncyCastle.Crypto.Prng", "CryptoApiEntropySourceProvider/CryptoApiEntropySource");
