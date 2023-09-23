#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class IRsa;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RsaBlindedEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::RsaBlindedEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(862))
// CS Name: Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine
class CORDL_TYPE RsaBlindedEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IAsymmetricBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IAsymmetricBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RsaBlindedEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaBlindedEngine", modifiers: " const&", def_value: None }]
constexpr RsaBlindedEngine(RsaBlindedEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaBlindedEngine", modifiers: "&&", def_value: None }]
constexpr RsaBlindedEngine(RsaBlindedEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RsaBlindedEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RsaBlindedEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RsaBlindedEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RsaBlindedEngine& operator=(RsaBlindedEngine&& o) noexcept = default;
  constexpr RsaBlindedEngine& operator=(RsaBlindedEngine const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IRsa __declspec(property(get=__get_core, put=__set_core))  core;

constexpr void __set_core(Org::BouncyCastle::Crypto::IRsa value) ;

constexpr Org::BouncyCastle::Crypto::IRsa __get_core() const;

 Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters __get_key() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit RsaBlindedEngine() ;

/// @brief Method .ctor addr 0xe53834 size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "rsa", ty: "Org::BouncyCastle::Crypto::IRsa", modifiers: "", def_value: None }]
explicit RsaBlindedEngine(Org::BouncyCastle::Crypto::IRsa rsa) ;

/// @brief Method .ctor addr 0xe538a8 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IRsa rsa) ;

/// @brief Method get_AlgorithmName addr 0xe538d0 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xe53910 size 0x25c virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters param) ;

/// @brief Method GetInputBlockSize addr 0xe53b6c size 0xa4 virtual true final false
 int32_t GetInputBlockSize() ;

/// @brief Method GetOutputBlockSize addr 0xe53c10 size 0xa4 virtual true final false
 int32_t GetOutputBlockSize() ;

/// @brief Method ProcessBlock addr 0xe53cb4 size 0x41c virtual true final false
 ::ArrayW<uint8_t> ProcessBlock(::ArrayW<uint8_t> inBuf, int32_t inOff, int32_t inLen) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine, "Org.BouncyCastle.Crypto.Engines", "RsaBlindedEngine");
