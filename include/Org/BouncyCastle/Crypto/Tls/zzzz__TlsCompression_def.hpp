#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCompression;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsCompression
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1294))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsCompression
class CORDL_TYPE TlsCompression : public ::cordl_internals::InterfaceW {
public:
// Declarations
~TlsCompression() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsCompression(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Compress addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IO::Stream Compress(System::IO::Stream output) ;

/// @brief Method Decompress addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IO::Stream Decompress(System::IO::Stream output) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsCompression);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsCompression, "Org.BouncyCastle.Crypto.Tls", "TlsCompression");
