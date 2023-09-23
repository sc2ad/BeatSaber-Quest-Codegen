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
class IStreamCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class IsaacEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::IsaacEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(850))
// CS Name: Org.BouncyCastle.Crypto.Engines.IsaacEngine
class CORDL_TYPE IsaacEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IStreamCipher
constexpr operator  Org::BouncyCastle::Crypto::IStreamCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~IsaacEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "IsaacEngine", modifiers: " const&", def_value: None }]
constexpr IsaacEngine(IsaacEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IsaacEngine", modifiers: "&&", def_value: None }]
constexpr IsaacEngine(IsaacEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IsaacEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IsaacEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IsaacEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IsaacEngine& operator=(IsaacEngine&& o) noexcept = default;
  constexpr IsaacEngine& operator=(IsaacEngine const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_sizeL, put=__set_sizeL))  sizeL;

static void __set_sizeL(int32_t value) ;

static int32_t __get_sizeL() ;

static int32_t __declspec(property(get=__get_stateArraySize, put=__set_stateArraySize))  stateArraySize;

static void __set_stateArraySize(int32_t value) ;

static int32_t __get_stateArraySize() ;

 ::ArrayW<uint32_t> __declspec(property(get=__get_engineState, put=__set_engineState))  engineState;

constexpr void __set_engineState(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_engineState() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_results, put=__set_results))  results;

constexpr void __set_results(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_results() const;

 uint32_t __declspec(property(get=__get_a, put=__set_a))  a;

constexpr void __set_a(uint32_t value) ;

constexpr uint32_t __get_a() const;

 uint32_t __declspec(property(get=__get_b, put=__set_b))  b;

constexpr void __set_b(uint32_t value) ;

constexpr uint32_t __get_b() const;

 uint32_t __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(uint32_t value) ;

constexpr uint32_t __get_c() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_keyStream, put=__set_keyStream))  keyStream;

constexpr void __set_keyStream(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_keyStream() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_workingKey, put=__set_workingKey))  workingKey;

constexpr void __set_workingKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_workingKey() const;

 bool __declspec(property(get=__get_initialised, put=__set_initialised))  initialised;

constexpr void __set_initialised(bool value) ;

constexpr bool __get_initialised() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method Init addr 0xe494e8 size 0x114 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method ReturnByte addr 0xe499e4 size 0x78 virtual true final false
 uint8_t ReturnByte(uint8_t input) ;

/// @brief Method ProcessBytes addr 0xe49bd8 size 0x1ec virtual true final false
 void ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method get_AlgorithmName addr 0xe49dc4 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Reset addr 0xe49e04 size 0x8 virtual true final false
 void Reset() ;

/// @brief Method setKey addr 0xe495fc size 0x3e8 virtual false final false
 void setKey(::ArrayW<uint8_t> keyBytes) ;

/// @brief Method isaac addr 0xe49a5c size 0x17c virtual false final false
 void isaac() ;

/// @brief Method mix addr 0xe49e0c size 0xfc virtual false final false
 void mix(::ArrayW<uint32_t> x) ;

// Ctor Parameters []
explicit IsaacEngine() ;

/// @brief Method .ctor addr 0xe49f58 size 0x94 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::IsaacEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::IsaacEngine, "Org.BouncyCastle.Crypto.Engines", "IsaacEngine");
