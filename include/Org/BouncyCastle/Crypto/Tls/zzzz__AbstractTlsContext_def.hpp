#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsContext;
}
// Type: Org.BouncyCastle.Crypto.Tls::AbstractTlsContext
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1167))
// CS Name: Org.BouncyCastle.Crypto.Tls.AbstractTlsContext
class CORDL_TYPE AbstractTlsContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsContext
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsContext() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~AbstractTlsContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsContext", modifiers: " const&", def_value: None }]
constexpr AbstractTlsContext(AbstractTlsContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsContext", modifiers: "&&", def_value: None }]
constexpr AbstractTlsContext(AbstractTlsContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractTlsContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AbstractTlsContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractTlsContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractTlsContext& operator=(AbstractTlsContext&& o) noexcept = default;
  constexpr AbstractTlsContext& operator=(AbstractTlsContext const& o) noexcept = default;
                


// Fields

static int64_t __declspec(property(get=__get_counter, put=__set_counter))  counter;

static void __set_counter(int64_t value) ;

static int64_t __get_counter() ;

 Org::BouncyCastle::Crypto::Prng::IRandomGenerator __declspec(property(get=__get_mNonceRandom, put=__set_mNonceRandom))  mNonceRandom;

constexpr void __set_mNonceRandom(Org::BouncyCastle::Crypto::Prng::IRandomGenerator value) ;

constexpr Org::BouncyCastle::Crypto::Prng::IRandomGenerator __get_mNonceRandom() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_mSecureRandom, put=__set_mSecureRandom))  mSecureRandom;

constexpr void __set_mSecureRandom(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_mSecureRandom() const;

 Org::BouncyCastle::Crypto::Tls::SecurityParameters __declspec(property(get=__get_mSecurityParameters, put=__set_mSecurityParameters))  mSecurityParameters;

constexpr void __set_mSecurityParameters(Org::BouncyCastle::Crypto::Tls::SecurityParameters value) ;

constexpr Org::BouncyCastle::Crypto::Tls::SecurityParameters __get_mSecurityParameters() const;

 Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=__get_mClientVersion, put=__set_mClientVersion))  mClientVersion;

constexpr void __set_mClientVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion value) ;

constexpr Org::BouncyCastle::Crypto::Tls::ProtocolVersion __get_mClientVersion() const;

 Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=__get_mServerVersion, put=__set_mServerVersion))  mServerVersion;

constexpr void __set_mServerVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion value) ;

constexpr Org::BouncyCastle::Crypto::Tls::ProtocolVersion __get_mServerVersion() const;

 Org::BouncyCastle::Crypto::Tls::TlsSession __declspec(property(get=__get_mSession, put=__set_mSession))  mSession;

constexpr void __set_mSession(Org::BouncyCastle::Crypto::Tls::TlsSession value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsSession __get_mSession() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_mUserObject, put=__set_mUserObject))  mUserObject;

constexpr void __set_mUserObject(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_mUserObject() const;


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

/// @brief Method NextCounterValue addr 0xecbce0 size 0x58 virtual false final false
static int64_t NextCounterValue() ;

// Ctor Parameters [CppParam { name: "secureRandom", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "securityParameters", ty: "Org::BouncyCastle::Crypto::Tls::SecurityParameters", modifiers: "", def_value: None }]
explicit AbstractTlsContext(Org::BouncyCastle::Security::SecureRandom secureRandom, Org::BouncyCastle::Crypto::Tls::SecurityParameters securityParameters) ;

/// @brief Method .ctor addr 0xecbd38 size 0x324 virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom secureRandom, Org::BouncyCastle::Crypto::Tls::SecurityParameters securityParameters) ;

/// @brief Method get_NonceRandomGenerator addr 0xecc05c size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Prng::IRandomGenerator get_NonceRandomGenerator() ;

/// @brief Method get_SecureRandom addr 0xecc064 size 0x8 virtual true final false
 Org::BouncyCastle::Security::SecureRandom get_SecureRandom() ;

/// @brief Method get_SecurityParameters addr 0xecc06c size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::SecurityParameters get_SecurityParameters() ;

/// @brief Method get_IsServer addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsServer() ;

/// @brief Method get_ClientVersion addr 0xecc074 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::ProtocolVersion get_ClientVersion() ;

/// @brief Method SetClientVersion addr 0xecc07c size 0x8 virtual true final false
 void SetClientVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion clientVersion) ;

/// @brief Method get_ServerVersion addr 0xecc084 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::ProtocolVersion get_ServerVersion() ;

/// @brief Method SetServerVersion addr 0xecc08c size 0x8 virtual true final false
 void SetServerVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion serverVersion) ;

/// @brief Method get_ResumableSession addr 0xecc094 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsSession get_ResumableSession() ;

/// @brief Method SetResumableSession addr 0xecc09c size 0x8 virtual true final false
 void SetResumableSession(Org::BouncyCastle::Crypto::Tls::TlsSession session) ;

/// @brief Method get_UserObject addr 0xecc0a4 size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType get_UserObject() ;

/// @brief Method set_UserObject addr 0xecc0ac size 0x8 virtual true final false
 void set_UserObject(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ExportKeyingMaterial addr 0xecc0b4 size 0x2cc virtual true final false
 ::ArrayW<uint8_t> ExportKeyingMaterial(::StringW asciiLabel, ::ArrayW<uint8_t> context_value, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::AbstractTlsContext);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::AbstractTlsContext, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsContext");
