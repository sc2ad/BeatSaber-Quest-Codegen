#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsContext
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1166))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsContext
class CORDL_TYPE TlsContext : public ::cordl_internals::InterfaceW {
public:
// Declarations
~TlsContext() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsContext(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 Org::BouncyCastle::Crypto::Prng::IRandomGenerator __declspec(property(get=get_NonceRandomGenerator))  NonceRandomGenerator;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=get_SecureRandom))  SecureRandom;

 Org::BouncyCastle::Crypto::Tls::SecurityParameters __declspec(property(get=get_SecurityParameters))  SecurityParameters;

 bool __declspec(property(get=get_IsServer))  IsServer;

 Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=get_ClientVersion))  ClientVersion;

 Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=get_ServerVersion))  ServerVersion;

 Org::BouncyCastle::Crypto::Tls::TlsSession __declspec(property(get=get_ResumableSession))  ResumableSession;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_UserObject, put=set_UserObject))  UserObject;


// Methods

/// @brief Method get_NonceRandomGenerator addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Prng::IRandomGenerator get_NonceRandomGenerator() ;

/// @brief Method get_SecureRandom addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Security::SecureRandom get_SecureRandom() ;

/// @brief Method get_SecurityParameters addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::SecurityParameters get_SecurityParameters() ;

/// @brief Method get_IsServer addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsServer() ;

/// @brief Method get_ClientVersion addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::ProtocolVersion get_ClientVersion() ;

/// @brief Method get_ServerVersion addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::ProtocolVersion get_ServerVersion() ;

/// @brief Method get_ResumableSession addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsSession get_ResumableSession() ;

/// @brief Method get_UserObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_UserObject() ;

/// @brief Method set_UserObject addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_UserObject(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ExportKeyingMaterial addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> ExportKeyingMaterial(::StringW asciiLabel, ::ArrayW<uint8_t> context_value, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsContext);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsContext, "Org.BouncyCastle.Crypto.Tls", "TlsContext");
