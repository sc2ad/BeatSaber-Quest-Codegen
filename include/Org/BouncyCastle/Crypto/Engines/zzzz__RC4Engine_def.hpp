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
class RC4Engine;
}
// Type: Org.BouncyCastle.Crypto.Engines::RC4Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(856))
// CS Name: Org.BouncyCastle.Crypto.Engines.RC4Engine
class CORDL_TYPE RC4Engine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IStreamCipher
constexpr operator  Org::BouncyCastle::Crypto::IStreamCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RC4Engine() = default;

// Ctor Parameters [CppParam { name: "", ty: "RC4Engine", modifiers: " const&", def_value: None }]
constexpr RC4Engine(RC4Engine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RC4Engine", modifiers: "&&", def_value: None }]
constexpr RC4Engine(RC4Engine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RC4Engine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RC4Engine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RC4Engine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RC4Engine& operator=(RC4Engine&& o) noexcept = default;
  constexpr RC4Engine& operator=(RC4Engine const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_STATE_LENGTH, put=__set_STATE_LENGTH))  STATE_LENGTH;

static void __set_STATE_LENGTH(int32_t value) ;

static int32_t __get_STATE_LENGTH() ;

 ::ArrayW<uint8_t> __declspec(property(get=__get_engineState, put=__set_engineState))  engineState;

constexpr void __set_engineState(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_engineState() const;

 int32_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(int32_t value) ;

constexpr int32_t __get_x() const;

 int32_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(int32_t value) ;

constexpr int32_t __get_y() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_workingKey, put=__set_workingKey))  workingKey;

constexpr void __set_workingKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_workingKey() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method Init addr 0xe4e50c size 0x108 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe4e7bc size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method ReturnByte addr 0xe4e7fc size 0xd4 virtual true final false
 uint8_t ReturnByte(uint8_t input) ;

/// @brief Method ProcessBytes addr 0xe4e8d0 size 0x1d4 virtual true final false
 void ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe4eaa4 size 0x8 virtual true final false
 void Reset() ;

/// @brief Method SetKey addr 0xe4e614 size 0x1a8 virtual false final false
 void SetKey(::ArrayW<uint8_t> keyBytes) ;

// Ctor Parameters []
explicit RC4Engine() ;

/// @brief Method .ctor addr 0xe4eaf8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::RC4Engine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::RC4Engine, "Org.BouncyCastle.Crypto.Engines", "RC4Engine");
