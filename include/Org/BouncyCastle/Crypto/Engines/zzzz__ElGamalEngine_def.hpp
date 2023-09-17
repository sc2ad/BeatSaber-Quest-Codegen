#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalKeyParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class ElGamalEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::ElGamalEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(844))
// CS Name: Org.BouncyCastle.Crypto.Engines.ElGamalEngine
class CORDL_TYPE ElGamalEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher
constexpr operator  ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ElGamalEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalEngine", modifiers: " const&", def_value: None }]
constexpr ElGamalEngine(ElGamalEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalEngine", modifiers: "&&", def_value: None }]
constexpr ElGamalEngine(ElGamalEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ElGamalEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ElGamalEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ElGamalEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ElGamalEngine& operator=(ElGamalEngine&& o) noexcept = default;
  constexpr ElGamalEngine& operator=(ElGamalEngine const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters __get_key() const;

 ::Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom __get_random() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;

 int32_t __declspec(property(get=__get_bitSize, put=__set_bitSize))  bitSize;

constexpr void __set_bitSize(int32_t value) ;

constexpr int32_t __get_bitSize() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method get_AlgorithmName addr 0xe44140 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xe44180 size 0x2b4 virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetInputBlockSize addr 0xe44434 size 0x40 virtual true final false
 int32_t GetInputBlockSize() ;

/// @brief Method GetOutputBlockSize addr 0xe44474 size 0x40 virtual true final false
 int32_t GetOutputBlockSize() ;

/// @brief Method ProcessBlock addr 0xe444b4 size 0x52c virtual true final false
 ::ArrayW<uint8_t> ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

// Ctor Parameters []
explicit ElGamalEngine() ;

/// @brief Method .ctor addr 0xe449e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::ElGamalEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::ElGamalEngine, "Org.BouncyCastle.Crypto.Engines", "ElGamalEngine");
