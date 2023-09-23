#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCloseable;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsCloseable
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1206))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsCloseable
class CORDL_TYPE TlsCloseable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~TlsCloseable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsCloseable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Close addr 0x0 size 0xffffffffffffffff virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsCloseable);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsCloseable, "Org.BouncyCastle.Crypto.Tls", "TlsCloseable");
