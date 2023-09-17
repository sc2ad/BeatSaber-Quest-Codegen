#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsSession
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1324))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsSession
class CORDL_TYPE TlsSession : public ::cordl_internals::InterfaceW {
public:
// Declarations
~TlsSession() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsSession(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_SessionID))  SessionID;

 bool __declspec(property(get=get_IsResumable))  IsResumable;


// Methods

/// @brief Method ExportSessionParameters addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::SessionParameters ExportSessionParameters() ;

/// @brief Method get_SessionID addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> get_SessionID() ;

/// @brief Method Invalidate addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invalidate() ;

/// @brief Method get_IsResumable addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsResumable() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsSession);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsSession, "Org.BouncyCastle.Crypto.Tls", "TlsSession");
