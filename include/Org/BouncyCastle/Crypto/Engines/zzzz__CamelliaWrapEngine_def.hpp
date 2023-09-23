#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Rfc3394WrapEngine_def.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class CamelliaWrapEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::CamelliaWrapEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(827))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(832))
// CS Name: Org.BouncyCastle.Crypto.Engines.CamelliaWrapEngine
class CORDL_TYPE CamelliaWrapEngine : public Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CamelliaWrapEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "CamelliaWrapEngine", modifiers: " const&", def_value: None }]
constexpr CamelliaWrapEngine(CamelliaWrapEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CamelliaWrapEngine", modifiers: "&&", def_value: None }]
constexpr CamelliaWrapEngine(CamelliaWrapEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CamelliaWrapEngine(void* ptr) noexcept : Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine(ptr) {
}


  constexpr CamelliaWrapEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CamelliaWrapEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CamelliaWrapEngine& operator=(CamelliaWrapEngine&& o) noexcept = default;
  constexpr CamelliaWrapEngine& operator=(CamelliaWrapEngine const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CamelliaWrapEngine() ;

/// @brief Method .ctor addr 0xe36b60 size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::CamelliaWrapEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::CamelliaWrapEngine, "Org.BouncyCastle.Crypto.Engines", "CamelliaWrapEngine");
