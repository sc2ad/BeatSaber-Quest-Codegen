#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadBlockCipher;
}
// Type: Org.BouncyCastle.Crypto.Modes::IAeadBlockCipher
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(959))
// CS Name: Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher
class CORDL_TYPE IAeadBlockCipher : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Modes::IAeadCipher
constexpr operator  ::Org::BouncyCastle::Crypto::Modes::IAeadCipher() const noexcept;

~IAeadBlockCipher() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAeadBlockCipher(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetBlockSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method GetUnderlyingCipher addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::IBlockCipher GetUnderlyingCipher() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher, "Org.BouncyCastle.Crypto.Modes", "IAeadBlockCipher");
