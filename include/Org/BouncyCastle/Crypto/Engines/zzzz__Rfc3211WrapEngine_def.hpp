#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ParametersWithIV;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Modes {
class CbcBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Rfc3211WrapEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::Rfc3211WrapEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(860))
// CS Name: Org.BouncyCastle.Crypto.Engines.Rfc3211WrapEngine
class CORDL_TYPE Rfc3211WrapEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IWrapper
constexpr operator  Org::BouncyCastle::Crypto::IWrapper() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Rfc3211WrapEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "Rfc3211WrapEngine", modifiers: " const&", def_value: None }]
constexpr Rfc3211WrapEngine(Rfc3211WrapEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Rfc3211WrapEngine", modifiers: "&&", def_value: None }]
constexpr Rfc3211WrapEngine(Rfc3211WrapEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Rfc3211WrapEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Rfc3211WrapEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Rfc3211WrapEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Rfc3211WrapEngine& operator=(Rfc3211WrapEngine&& o) noexcept = default;
  constexpr Rfc3211WrapEngine& operator=(Rfc3211WrapEngine const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Modes::CbcBlockCipher __declspec(property(get=__get_engine, put=__set_engine))  engine;

constexpr void __set_engine(Org::BouncyCastle::Crypto::Modes::CbcBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::Modes::CbcBlockCipher __get_engine() const;

 Org::BouncyCastle::Crypto::Parameters::ParametersWithIV __declspec(property(get=__get_param, put=__set_param))  param;

constexpr void __set_param(Org::BouncyCastle::Crypto::Parameters::ParametersWithIV value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ParametersWithIV __get_param() const;

 bool __declspec(property(get=__get_forWrapping, put=__set_forWrapping))  forWrapping;

constexpr void __set_forWrapping(bool value) ;

constexpr bool __get_forWrapping() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_rand, put=__set_rand))  rand;

constexpr void __set_rand(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_rand() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "engine", ty: "Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }]
explicit Rfc3211WrapEngine(Org::BouncyCastle::Crypto::IBlockCipher engine) ;

/// @brief Method .ctor addr 0xe50d64 size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher engine) ;

/// @brief Method Init addr 0xe50de0 size 0x1b8 virtual true final false
 void Init(bool forWrapping, Org::BouncyCastle::Crypto::ICipherParameters param) ;

/// @brief Method get_AlgorithmName addr 0xe50f98 size 0xc8 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Wrap addr 0xe51060 size 0x284 virtual true final false
 ::ArrayW<uint8_t> Wrap(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t inLen) ;

/// @brief Method Unwrap addr 0xe512e4 size 0x3c0 virtual true final false
 ::ArrayW<uint8_t> Unwrap(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t inLen) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine, "Org.BouncyCastle.Crypto.Engines", "Rfc3211WrapEngine");
