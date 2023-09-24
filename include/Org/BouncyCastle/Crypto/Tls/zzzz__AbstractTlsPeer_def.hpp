#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCloseable;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCompression;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsPeer;
}
// Type: Org.BouncyCastle.Crypto.Tls::AbstractTlsPeer
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1163))
// CS Name: Org.BouncyCastle.Crypto.Tls.AbstractTlsPeer
class CORDL_TYPE AbstractTlsPeer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsPeer
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsPeer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AbstractTlsPeer() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsPeer", modifiers: " const&", def_value: None }]
constexpr AbstractTlsPeer(AbstractTlsPeer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsPeer", modifiers: "&&", def_value: None }]
constexpr AbstractTlsPeer(AbstractTlsPeer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractTlsPeer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AbstractTlsPeer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractTlsPeer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractTlsPeer& operator=(AbstractTlsPeer&& o) noexcept = default;
  constexpr AbstractTlsPeer& operator=(AbstractTlsPeer const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::TlsCloseable __declspec(property(get=__get_mCloseHandle, put=__set_mCloseHandle))  mCloseHandle;

constexpr void __set_mCloseHandle(Org::BouncyCastle::Crypto::Tls::TlsCloseable value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsCloseable __get_mCloseHandle() const;


// Methods

/// @brief Method Cancel addr 0xecb1f4 size 0xac virtual true final false
 void Cancel() ;

/// @brief Method NotifyCloseHandle addr 0xecb2a0 size 0x24 virtual true final false
 void NotifyCloseHandle(Org::BouncyCastle::Crypto::Tls::TlsCloseable closeHandle) ;

/// @brief Method GetHandshakeTimeoutMillis addr 0xecb2c4 size 0x8 virtual true final false
 int32_t GetHandshakeTimeoutMillis() ;

/// @brief Method RequiresExtendedMasterSecret addr 0xecb2cc size 0x8 virtual true final false
 bool RequiresExtendedMasterSecret() ;

/// @brief Method ShouldUseGmtUnixTime addr 0xecb2d4 size 0x8 virtual true final false
 bool ShouldUseGmtUnixTime() ;

/// @brief Method NotifySecureRenegotiation addr 0xecb2dc size 0x4c virtual true final false
 void NotifySecureRenegotiation(bool secureRenegotiation) ;

/// @brief Method GetCompression addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsCompression GetCompression() ;

/// @brief Method GetCipher addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsCipher GetCipher() ;

/// @brief Method NotifyAlertRaised addr 0xecb328 size 0x4 virtual true final false
 void NotifyAlertRaised(uint8_t alertLevel, uint8_t alertDescription, ::StringW message, System::Exception cause) ;

/// @brief Method NotifyAlertReceived addr 0xecb32c size 0x4 virtual true final false
 void NotifyAlertReceived(uint8_t alertLevel, uint8_t alertDescription) ;

/// @brief Method NotifyHandshakeComplete addr 0xecb330 size 0x4 virtual true final false
 void NotifyHandshakeComplete() ;

static Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer New_ctor() ;

/// @brief Method .ctor addr 0xecb334 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsPeer");
