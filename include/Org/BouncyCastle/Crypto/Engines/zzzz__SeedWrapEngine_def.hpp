#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Rfc3394WrapEngine_def.hpp"
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class SeedWrapEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::SeedWrapEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(827))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(868))
// CS Name: Org.BouncyCastle.Crypto.Engines.SeedWrapEngine
class CORDL_TYPE SeedWrapEngine : public ::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SeedWrapEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "SeedWrapEngine", modifiers: " const&", def_value: None }]
constexpr SeedWrapEngine(SeedWrapEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SeedWrapEngine", modifiers: "&&", def_value: None }]
constexpr SeedWrapEngine(SeedWrapEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SeedWrapEngine(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine(ptr) {
}


  constexpr SeedWrapEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SeedWrapEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SeedWrapEngine& operator=(SeedWrapEngine&& o) noexcept = default;
  constexpr SeedWrapEngine& operator=(SeedWrapEngine const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SeedWrapEngine() ;

/// @brief Method .ctor addr 0xe56920 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SeedWrapEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SeedWrapEngine, "Org.BouncyCastle.Crypto.Engines", "SeedWrapEngine");
