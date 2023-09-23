#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerContext;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsServerContext
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1321))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsServerContext
class CORDL_TYPE TlsServerContext : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsContext
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsContext() const noexcept;

~TlsServerContext() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsServerContext(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsServerContext);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsServerContext, "Org.BouncyCastle.Crypto.Tls", "TlsServerContext");
