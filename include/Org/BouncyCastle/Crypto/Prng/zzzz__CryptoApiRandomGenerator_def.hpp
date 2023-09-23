#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class CryptoApiRandomGenerator;
}
// Type: Org.BouncyCastle.Crypto.Prng::CryptoApiRandomGenerator
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1106))
// CS Name: Org.BouncyCastle.Crypto.Prng.CryptoApiRandomGenerator
class CORDL_TYPE CryptoApiRandomGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Prng::IRandomGenerator
constexpr operator  Org::BouncyCastle::Crypto::Prng::IRandomGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CryptoApiRandomGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptoApiRandomGenerator", modifiers: " const&", def_value: None }]
constexpr CryptoApiRandomGenerator(CryptoApiRandomGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptoApiRandomGenerator", modifiers: "&&", def_value: None }]
constexpr CryptoApiRandomGenerator(CryptoApiRandomGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CryptoApiRandomGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CryptoApiRandomGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CryptoApiRandomGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CryptoApiRandomGenerator& operator=(CryptoApiRandomGenerator&& o) noexcept = default;
  constexpr CryptoApiRandomGenerator& operator=(CryptoApiRandomGenerator const& o) noexcept = default;
                


// Fields

 System::Security::Cryptography::RandomNumberGenerator __declspec(property(get=__get_rndProv, put=__set_rndProv))  rndProv;

constexpr void __set_rndProv(System::Security::Cryptography::RandomNumberGenerator value) ;

constexpr System::Security::Cryptography::RandomNumberGenerator __get_rndProv() const;


// Methods

// Ctor Parameters []
explicit CryptoApiRandomGenerator() ;

/// @brief Method .ctor addr 0xeb3cfc size 0x34 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "rng", ty: "System::Security::Cryptography::RandomNumberGenerator", modifiers: "", def_value: None }]
explicit CryptoApiRandomGenerator(System::Security::Cryptography::RandomNumberGenerator rng) ;

/// @brief Method .ctor addr 0xeb3d30 size 0x28 virtual false final false
 void _ctor(System::Security::Cryptography::RandomNumberGenerator rng) ;

/// @brief Method AddSeedMaterial addr 0xeb3d58 size 0x4 virtual true final false
 void AddSeedMaterial(::ArrayW<uint8_t> seed) ;

/// @brief Method AddSeedMaterial addr 0xeb3d5c size 0x4 virtual true final false
 void AddSeedMaterial(int64_t seed) ;

/// @brief Method NextBytes addr 0xeb3d60 size 0x20 virtual true final false
 void NextBytes(::ArrayW<uint8_t> bytes) ;

/// @brief Method NextBytes addr 0xeb3d80 size 0x170 virtual true final false
 void NextBytes(::ArrayW<uint8_t> bytes, int32_t start, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator, "Org.BouncyCastle.Crypto.Prng", "CryptoApiRandomGenerator");
