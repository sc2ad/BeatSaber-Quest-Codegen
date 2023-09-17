#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class ISP80090Drbg;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class IDrbgProvider;
}
// Type: Org.BouncyCastle.Crypto.Prng::IDrbgProvider
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1109))
// CS Name: Org.BouncyCastle.Crypto.Prng.IDrbgProvider
class CORDL_TYPE IDrbgProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDrbgProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDrbgProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg Get(::Org::BouncyCastle::Crypto::IEntropySource entropySource) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::IDrbgProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::IDrbgProvider, "Org.BouncyCastle.Crypto.Prng", "IDrbgProvider");
