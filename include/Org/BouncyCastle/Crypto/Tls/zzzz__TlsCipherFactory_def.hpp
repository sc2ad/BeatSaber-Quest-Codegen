#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsCipherFactory
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1160))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsCipherFactory
class CORDL_TYPE TlsCipherFactory : public ::cordl_internals::InterfaceW {
public:
// Declarations
~TlsCipherFactory() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsCipherFactory(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CreateCipher addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsCipher CreateCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext context, int32_t encryptionAlgorithm, int32_t macAlgorithm) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory, "Org.BouncyCastle.Crypto.Tls", "TlsCipherFactory");
