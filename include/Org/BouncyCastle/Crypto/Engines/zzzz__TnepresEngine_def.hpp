#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__SerpentEngineBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class TnepresEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::TnepresEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(880))
// CS Name: Org.BouncyCastle.Crypto.Engines.TnepresEngine
class CORDL_TYPE TnepresEngine : public Org::BouncyCastle::Crypto::Engines::SerpentEngineBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TnepresEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "TnepresEngine", modifiers: " const&", def_value: None }]
constexpr TnepresEngine(TnepresEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TnepresEngine", modifiers: "&&", def_value: None }]
constexpr TnepresEngine(TnepresEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TnepresEngine(void* ptr) noexcept : Org::BouncyCastle::Crypto::Engines::SerpentEngineBase(ptr) {
}


  constexpr TnepresEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TnepresEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TnepresEngine& operator=(TnepresEngine&& o) noexcept = default;
  constexpr TnepresEngine& operator=(TnepresEngine const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method get_AlgorithmName addr 0xe62170 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method MakeWorkingKey addr 0xe621b0 size 0x15e0 virtual true final false
 ::ArrayW<int32_t> MakeWorkingKey(::ArrayW<uint8_t> key) ;

/// @brief Method EncryptBlock addr 0xe63790 size 0x1540 virtual true final false
 void EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DecryptBlock addr 0xe64cd0 size 0x1738 virtual true final false
 void DecryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

static Org::BouncyCastle::Crypto::Engines::TnepresEngine New_ctor() ;

/// @brief Method .ctor addr 0xe66408 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::TnepresEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::TnepresEngine, "Org.BouncyCastle.Crypto.Engines", "TnepresEngine");
