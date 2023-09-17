#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IRsa;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RsaBlindingEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::RsaBlindingEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(863))
// CS Name: Org.BouncyCastle.Crypto.Engines.RsaBlindingEngine
class CORDL_TYPE RsaBlindingEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher
constexpr operator  ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RsaBlindingEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaBlindingEngine", modifiers: " const&", def_value: None }]
constexpr RsaBlindingEngine(RsaBlindingEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaBlindingEngine", modifiers: "&&", def_value: None }]
constexpr RsaBlindingEngine(RsaBlindingEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RsaBlindingEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RsaBlindingEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RsaBlindingEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RsaBlindingEngine& operator=(RsaBlindingEngine&& o) noexcept = default;
  constexpr RsaBlindingEngine& operator=(RsaBlindingEngine const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::IRsa __declspec(property(get=__get_core, put=__set_core))  core;

constexpr void __set_core(::Org::BouncyCastle::Crypto::IRsa value) ;

constexpr ::Org::BouncyCastle::Crypto::IRsa __get_core() const;

 ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters __get_key() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_blindingFactor, put=__set_blindingFactor))  blindingFactor;

constexpr void __set_blindingFactor(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_blindingFactor() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit RsaBlindingEngine() ;

/// @brief Method .ctor addr 0xe540d0 size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "rsa", ty: "::Org::BouncyCastle::Crypto::IRsa", modifiers: "", def_value: None }]
explicit RsaBlindingEngine(::Org::BouncyCastle::Crypto::IRsa rsa) ;

/// @brief Method .ctor addr 0xe5413c size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IRsa rsa) ;

/// @brief Method get_AlgorithmName addr 0xe54164 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xe541a4 size 0x174 virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters param) ;

/// @brief Method GetInputBlockSize addr 0xe54318 size 0xa4 virtual true final false
 int32_t GetInputBlockSize() ;

/// @brief Method GetOutputBlockSize addr 0xe543bc size 0xa4 virtual true final false
 int32_t GetOutputBlockSize() ;

/// @brief Method ProcessBlock addr 0xe54460 size 0x154 virtual true final false
 ::ArrayW<uint8_t> ProcessBlock(::ArrayW<uint8_t> inBuf, int32_t inOff, int32_t inLen) ;

/// @brief Method BlindMessage addr 0xe545b4 size 0x64 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger BlindMessage(::Org::BouncyCastle::Math::BigInteger msg) ;

/// @brief Method UnblindMessage addr 0xe54618 size 0x5c virtual false final false
 ::Org::BouncyCastle::Math::BigInteger UnblindMessage(::Org::BouncyCastle::Math::BigInteger blindedMsg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine, "Org.BouncyCastle.Crypto.Engines", "RsaBlindingEngine");
