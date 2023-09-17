#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Salsa20Engine;
}
// Type: Org.BouncyCastle.Crypto.Engines::Salsa20Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(836))
// CS Name: Org.BouncyCastle.Crypto.Engines.Salsa20Engine
class CORDL_TYPE Salsa20Engine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IStreamCipher
constexpr operator  ::Org::BouncyCastle::Crypto::IStreamCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Salsa20Engine() = default;

// Ctor Parameters [CppParam { name: "", ty: "Salsa20Engine", modifiers: " const&", def_value: None }]
constexpr Salsa20Engine(Salsa20Engine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Salsa20Engine", modifiers: "&&", def_value: None }]
constexpr Salsa20Engine(Salsa20Engine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Salsa20Engine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Salsa20Engine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Salsa20Engine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Salsa20Engine& operator=(Salsa20Engine&& o) noexcept = default;
  constexpr Salsa20Engine& operator=(Salsa20Engine const& o) noexcept = default;
                


// Fields

/// @brief Field StateSize offset 0
static constexpr int32_t  StateSize{16};

static int32_t __declspec(property(get=__get_DEFAULT_ROUNDS, put=__set_DEFAULT_ROUNDS))  DEFAULT_ROUNDS;

static void __set_DEFAULT_ROUNDS(int32_t value) ;

static int32_t __get_DEFAULT_ROUNDS() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_TAU_SIGMA, put=__set_TAU_SIGMA))  TAU_SIGMA;

static void __set_TAU_SIGMA(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_TAU_SIGMA() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_sigma, put=__set_sigma))  sigma;

static void __set_sigma(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_sigma() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_tau, put=__set_tau))  tau;

static void __set_tau(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_tau() ;

 int32_t __declspec(property(get=__get_rounds, put=__set_rounds))  rounds;

constexpr void __set_rounds(int32_t value) ;

constexpr int32_t __get_rounds() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_engineState, put=__set_engineState))  engineState;

constexpr void __set_engineState(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_engineState() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_x() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_keyStream, put=__set_keyStream))  keyStream;

constexpr void __set_keyStream(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_keyStream() const;

 bool __declspec(property(get=__get_initialised, put=__set_initialised))  initialised;

constexpr void __set_initialised(bool value) ;

constexpr bool __get_initialised() const;

 uint32_t __declspec(property(get=__get_cW0, put=__set_cW0))  cW0;

constexpr void __set_cW0(uint32_t value) ;

constexpr uint32_t __get_cW0() const;

 uint32_t __declspec(property(get=__get_cW1, put=__set_cW1))  cW1;

constexpr void __set_cW1(uint32_t value) ;

constexpr uint32_t __get_cW1() const;

 uint32_t __declspec(property(get=__get_cW2, put=__set_cW2))  cW2;

constexpr void __set_cW2(uint32_t value) ;

constexpr uint32_t __get_cW2() const;


// Properties

 int32_t __declspec(property(get=get_NonceSize))  NonceSize;

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method PackTauOrSigma addr 0xe3c2f8 size 0x134 virtual false final false
 void PackTauOrSigma(int32_t keyLength, ::ArrayW<uint32_t> state, int32_t stateOffset) ;

// Ctor Parameters []
explicit Salsa20Engine() ;

/// @brief Method .ctor addr 0xe3c42c size 0x60 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "rounds", ty: "int32_t", modifiers: "", def_value: None }]
explicit Salsa20Engine(int32_t rounds) ;

/// @brief Method .ctor addr 0xe3c48c size 0x100 virtual false final false
 void _ctor(int32_t rounds) ;

/// @brief Method Init addr 0xe3c58c size 0x3bc virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_NonceSize addr 0xe3c948 size 0x8 virtual true final false
 int32_t get_NonceSize() ;

/// @brief Method get_AlgorithmName addr 0xe3c950 size 0xe0 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method ReturnByte addr 0xe3ca30 size 0x104 virtual true final false
 uint8_t ReturnByte(uint8_t input) ;

/// @brief Method AdvanceCounter addr 0xe3cb70 size 0x4c virtual true final false
 void AdvanceCounter() ;

/// @brief Method ProcessBytes addr 0xe3cbbc size 0x274 virtual true final false
 void ProcessBytes(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method Reset addr 0xe3ce6c size 0x1c virtual true final false
 void Reset() ;

/// @brief Method ResetCounter addr 0xe3ce94 size 0x2c virtual true final false
 void ResetCounter() ;

/// @brief Method SetKey addr 0xe3cec0 size 0x204 virtual true final false
 void SetKey(::ArrayW<uint8_t> keyBytes, ::ArrayW<uint8_t> ivBytes) ;

/// @brief Method GenerateKeyStream addr 0xe3d0c4 size 0x84 virtual true final false
 void GenerateKeyStream(::ArrayW<uint8_t> output) ;

/// @brief Method SalsaCore addr 0xe3d148 size 0x5f4 virtual false final false
static void SalsaCore(int32_t rounds, ::ArrayW<uint32_t> input, ::ArrayW<uint32_t> x) ;

/// @brief Method ResetLimitCounter addr 0xe3ce88 size 0xc virtual false final false
 void ResetLimitCounter() ;

/// @brief Method LimitExceeded addr 0xe3cb34 size 0x3c virtual false final false
 bool LimitExceeded() ;

/// @brief Method LimitExceeded addr 0xe3ce30 size 0x3c virtual false final false
 bool LimitExceeded(uint32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::Salsa20Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::Salsa20Engine, "Org.BouncyCastle.Crypto.Engines", "Salsa20Engine");
