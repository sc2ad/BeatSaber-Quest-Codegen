#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsClientProtocol_def.hpp"
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsProtocolHandler;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsProtocolHandler
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1293))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1315))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsProtocolHandler
class CORDL_TYPE TlsProtocolHandler : public Org::BouncyCastle::Crypto::Tls::TlsClientProtocol {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~TlsProtocolHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsProtocolHandler", modifiers: " const&", def_value: None }]
constexpr TlsProtocolHandler(TlsProtocolHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsProtocolHandler", modifiers: "&&", def_value: None }]
constexpr TlsProtocolHandler(TlsProtocolHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsProtocolHandler(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::TlsClientProtocol(ptr) {
}


  constexpr TlsProtocolHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsProtocolHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsProtocolHandler& operator=(TlsProtocolHandler&& o) noexcept = default;
  constexpr TlsProtocolHandler& operator=(TlsProtocolHandler const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Crypto::Tls::TlsProtocolHandler New_ctor(System::IO::Stream stream, Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method .ctor addr 0xf224d0 size 0x10 virtual false final false
 void _ctor(System::IO::Stream stream, Org::BouncyCastle::Security::SecureRandom secureRandom) ;

static Org::BouncyCastle::Crypto::Tls::TlsProtocolHandler New_ctor(System::IO::Stream input, System::IO::Stream output, Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method .ctor addr 0xf224e0 size 0x8 virtual false final false
 void _ctor(System::IO::Stream input, System::IO::Stream output, Org::BouncyCastle::Security::SecureRandom secureRandom) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsProtocolHandler);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsProtocolHandler, "Org.BouncyCastle.Crypto.Tls", "TlsProtocolHandler");
