#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Salsa20Engine_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class ChaChaEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::ChaChaEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(836))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(838))
// CS Name: Org.BouncyCastle.Crypto.Engines.ChaChaEngine
class CORDL_TYPE ChaChaEngine : public Org::BouncyCastle::Crypto::Engines::Salsa20Engine {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ChaChaEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChaChaEngine", modifiers: " const&", def_value: None }]
constexpr ChaChaEngine(ChaChaEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChaChaEngine", modifiers: "&&", def_value: None }]
constexpr ChaChaEngine(ChaChaEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChaChaEngine(void* ptr) noexcept : Org::BouncyCastle::Crypto::Engines::Salsa20Engine(ptr) {
}


  constexpr ChaChaEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChaChaEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChaChaEngine& operator=(ChaChaEngine&& o) noexcept = default;
  constexpr ChaChaEngine& operator=(ChaChaEngine const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit ChaChaEngine() ;

/// @brief Method .ctor addr 0xe3e0dc size 0x54 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "rounds", ty: "int32_t", modifiers: "", def_value: None }]
explicit ChaChaEngine(int32_t rounds) ;

/// @brief Method .ctor addr 0xe3e130 size 0x64 virtual false final false
 void _ctor(int32_t rounds) ;

/// @brief Method get_AlgorithmName addr 0xe3e194 size 0x84 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method AdvanceCounter addr 0xe3e218 size 0x4c virtual true final false
 void AdvanceCounter() ;

/// @brief Method ResetCounter addr 0xe3e264 size 0x2c virtual true final false
 void ResetCounter() ;

/// @brief Method SetKey addr 0xe3e290 size 0x10c virtual true final false
 void SetKey(::ArrayW<uint8_t> keyBytes, ::ArrayW<uint8_t> ivBytes) ;

/// @brief Method GenerateKeyStream addr 0xe3e39c size 0x3c virtual true final false
 void GenerateKeyStream(::ArrayW<uint8_t> output) ;

/// @brief Method ChachaCore addr 0xe3da94 size 0x648 virtual false final false
static void ChachaCore(int32_t rounds, ::ArrayW<uint32_t> input, ::ArrayW<uint32_t> x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::ChaChaEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::ChaChaEngine, "Org.BouncyCastle.Crypto.Engines", "ChaChaEngine");
