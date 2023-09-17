#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace System {
class Exception;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCompression;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCloseable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsPeer
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1162))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsPeer
class CORDL_TYPE TlsPeer : public ::cordl_internals::InterfaceW {
public:
// Declarations
~TlsPeer() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsPeer(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method NotifyCloseHandle addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifyCloseHandle(::Org::BouncyCastle::Crypto::Tls::TlsCloseable closehandle) ;

/// @brief Method Cancel addr 0x0 size 0xffffffffffffffff virtual true final false
 void Cancel() ;

/// @brief Method GetHandshakeTimeoutMillis addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHandshakeTimeoutMillis() ;

/// @brief Method RequiresExtendedMasterSecret addr 0x0 size 0xffffffffffffffff virtual true final false
 bool RequiresExtendedMasterSecret() ;

/// @brief Method ShouldUseGmtUnixTime addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ShouldUseGmtUnixTime() ;

/// @brief Method NotifySecureRenegotiation addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifySecureRenegotiation(bool secureRenegotiation) ;

/// @brief Method GetCompression addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsCompression GetCompression() ;

/// @brief Method GetCipher addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsCipher GetCipher() ;

/// @brief Method NotifyAlertRaised addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifyAlertRaised(uint8_t alertLevel, uint8_t alertDescription, ::StringW message, ::System::Exception cause) ;

/// @brief Method NotifyAlertReceived addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifyAlertReceived(uint8_t alertLevel, uint8_t alertDescription) ;

/// @brief Method NotifyHandshakeComplete addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifyHandshakeComplete() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsPeer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsPeer, "Org.BouncyCastle.Crypto.Tls", "TlsPeer");
