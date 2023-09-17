#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ParametersWithIV;
}
namespace Org::BouncyCastle::Crypto::Modes {
class CbcBlockCipher;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RC2WrapEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::RC2WrapEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(855))
// CS Name: Org.BouncyCastle.Crypto.Engines.RC2WrapEngine
class CORDL_TYPE RC2WrapEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IWrapper
constexpr operator  ::Org::BouncyCastle::Crypto::IWrapper() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~RC2WrapEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "RC2WrapEngine", modifiers: " const&", def_value: None }]
constexpr RC2WrapEngine(RC2WrapEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RC2WrapEngine", modifiers: "&&", def_value: None }]
constexpr RC2WrapEngine(RC2WrapEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RC2WrapEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RC2WrapEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RC2WrapEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RC2WrapEngine& operator=(RC2WrapEngine&& o) noexcept = default;
  constexpr RC2WrapEngine& operator=(RC2WrapEngine const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher __declspec(property(get=__get_engine, put=__set_engine))  engine;

constexpr void __set_engine(::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher value) ;

constexpr ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher __get_engine() const;

 ::Org::BouncyCastle::Crypto::ICipherParameters __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(::Org::BouncyCastle::Crypto::ICipherParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::ICipherParameters __get_parameters() const;

 ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV __declspec(property(get=__get_paramPlusIV, put=__set_paramPlusIV))  paramPlusIV;

constexpr void __set_paramPlusIV(::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV __get_paramPlusIV() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_iv, put=__set_iv))  iv;

constexpr void __set_iv(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_iv() const;

 bool __declspec(property(get=__get_forWrapping, put=__set_forWrapping))  forWrapping;

constexpr void __set_forWrapping(bool value) ;

constexpr bool __get_forWrapping() const;

 ::Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_sr, put=__set_sr))  sr;

constexpr void __set_sr(::Org::BouncyCastle::Security::SecureRandom value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom __get_sr() const;

static ::ArrayW<uint8_t> __declspec(property(get=__get_IV2, put=__set_IV2))  IV2;

static void __set_IV2(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_IV2() ;

 ::Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_sha1, put=__set_sha1))  sha1;

constexpr void __set_sha1(::Org::BouncyCastle::Crypto::IDigest value) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest __get_sha1() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_digest() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method Init addr 0xe4d4b4 size 0x2c0 virtual true final false
 void Init(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe4d774 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Wrap addr 0xe4d7b4 size 0x478 virtual true final false
 ::ArrayW<uint8_t> Wrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method Unwrap addr 0xe4ddac size 0x5c0 virtual true final false
 ::ArrayW<uint8_t> Unwrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method CalculateCmsKeyChecksum addr 0xe4dc2c size 0x180 virtual false final false
 ::ArrayW<uint8_t> CalculateCmsKeyChecksum(::ArrayW<uint8_t> key) ;

/// @brief Method CheckCmsKeyChecksum addr 0xe4e36c size 0x80 virtual false final false
 bool CheckCmsKeyChecksum(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> checksum) ;

// Ctor Parameters []
explicit RC2WrapEngine() ;

/// @brief Method .ctor addr 0xe4e480 size 0x8c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine, "Org.BouncyCastle.Crypto.Engines", "RC2WrapEngine");
