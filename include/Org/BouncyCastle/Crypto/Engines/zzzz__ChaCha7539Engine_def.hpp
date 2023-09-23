#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Salsa20Engine_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class ChaCha7539Engine;
}
// Type: Org.BouncyCastle.Crypto.Engines::ChaCha7539Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(836))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(837))
// CS Name: Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine
class CORDL_TYPE ChaCha7539Engine : public Org::BouncyCastle::Crypto::Engines::Salsa20Engine {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ChaCha7539Engine() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChaCha7539Engine", modifiers: " const&", def_value: None }]
constexpr ChaCha7539Engine(ChaCha7539Engine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChaCha7539Engine", modifiers: "&&", def_value: None }]
constexpr ChaCha7539Engine(ChaCha7539Engine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChaCha7539Engine(void* ptr) noexcept : Org::BouncyCastle::Crypto::Engines::Salsa20Engine(ptr) {
}


  constexpr ChaCha7539Engine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChaCha7539Engine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChaCha7539Engine& operator=(ChaCha7539Engine&& o) noexcept = default;
  constexpr ChaCha7539Engine& operator=(ChaCha7539Engine const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 int32_t __declspec(property(get=get_NonceSize))  NonceSize;


// Methods

// Ctor Parameters []
explicit ChaCha7539Engine() ;

/// @brief Method .ctor addr 0xe3d824 size 0x54 virtual false final false
 void _ctor() ;

/// @brief Method get_AlgorithmName addr 0xe3d878 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_NonceSize addr 0xe3d8b8 size 0x8 virtual true final false
 int32_t get_NonceSize() ;

/// @brief Method AdvanceCounter addr 0xe3d8c0 size 0x84 virtual true final false
 void AdvanceCounter() ;

/// @brief Method ResetCounter addr 0xe3d944 size 0x2c virtual true final false
 void ResetCounter() ;

/// @brief Method SetKey addr 0xe3d970 size 0xe8 virtual true final false
 void SetKey(::ArrayW<uint8_t> keyBytes, ::ArrayW<uint8_t> ivBytes) ;

/// @brief Method GenerateKeyStream addr 0xe3da58 size 0x3c virtual true final false
 void GenerateKeyStream(::ArrayW<uint8_t> output) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine, "Org.BouncyCastle.Crypto.Engines", "ChaCha7539Engine");
