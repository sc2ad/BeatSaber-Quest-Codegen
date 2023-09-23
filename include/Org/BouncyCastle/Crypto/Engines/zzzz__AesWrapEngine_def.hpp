#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Rfc3394WrapEngine_def.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class AesWrapEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::AesWrapEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(827))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(828))
// CS Name: Org.BouncyCastle.Crypto.Engines.AesWrapEngine
class CORDL_TYPE AesWrapEngine : public Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AesWrapEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "AesWrapEngine", modifiers: " const&", def_value: None }]
constexpr AesWrapEngine(AesWrapEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AesWrapEngine", modifiers: "&&", def_value: None }]
constexpr AesWrapEngine(AesWrapEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AesWrapEngine(void* ptr) noexcept : Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine(ptr) {
}


  constexpr AesWrapEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AesWrapEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AesWrapEngine& operator=(AesWrapEngine&& o) noexcept = default;
  constexpr AesWrapEngine& operator=(AesWrapEngine const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AesWrapEngine() ;

/// @brief Method .ctor addr 0xe31664 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::AesWrapEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::AesWrapEngine, "Org.BouncyCastle.Crypto.Engines", "AesWrapEngine");
