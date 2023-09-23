#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__SerpentEngineBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class SerpentEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::SerpentEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(870))
// CS Name: Org.BouncyCastle.Crypto.Engines.SerpentEngine
class CORDL_TYPE SerpentEngine : public Org::BouncyCastle::Crypto::Engines::SerpentEngineBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SerpentEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerpentEngine", modifiers: " const&", def_value: None }]
constexpr SerpentEngine(SerpentEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerpentEngine", modifiers: "&&", def_value: None }]
constexpr SerpentEngine(SerpentEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerpentEngine(void* ptr) noexcept : Org::BouncyCastle::Crypto::Engines::SerpentEngineBase(ptr) {
}


  constexpr SerpentEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerpentEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerpentEngine& operator=(SerpentEngine&& o) noexcept = default;
  constexpr SerpentEngine& operator=(SerpentEngine const& o) noexcept = default;
                


// Methods

/// @brief Method MakeWorkingKey addr 0xe57344 size 0x1590 virtual true final false
 ::ArrayW<int32_t> MakeWorkingKey(::ArrayW<uint8_t> key) ;

/// @brief Method EncryptBlock addr 0xe588d4 size 0x1544 virtual true final false
 void EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DecryptBlock addr 0xe59e18 size 0x1734 virtual true final false
 void DecryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

// Ctor Parameters []
explicit SerpentEngine() ;

/// @brief Method .ctor addr 0xe5b54c size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::SerpentEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::SerpentEngine, "Org.BouncyCastle.Crypto.Engines", "SerpentEngine");
