#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IEntropySourceProvider;
}
// Type: Org.BouncyCastle.Crypto::IEntropySourceProvider
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1099))
// CS Name: Org.BouncyCastle.Crypto.IEntropySourceProvider
class CORDL_TYPE IEntropySourceProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IEntropySourceProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEntropySourceProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::IEntropySource Get(int32_t bitsRequired) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IEntropySourceProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IEntropySourceProvider, "Org.BouncyCastle.Crypto", "IEntropySourceProvider");
