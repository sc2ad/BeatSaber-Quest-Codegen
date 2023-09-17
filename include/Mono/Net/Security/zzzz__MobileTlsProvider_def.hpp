#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsProvider_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Net::Security {
class SslStream;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace Mono::Net::Security {
class ChainValidationHelper;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Mono::Net::Security {
class MobileTlsProvider;
}
// Type: Mono.Net.Security::MobileTlsProvider
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13993))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7689))
// CS Name: Mono.Net.Security.MobileTlsProvider
class CORDL_TYPE MobileTlsProvider : public ::Mono::Security::Interface::MonoTlsProvider {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MobileTlsProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "MobileTlsProvider", modifiers: " const&", def_value: None }]
constexpr MobileTlsProvider(MobileTlsProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MobileTlsProvider", modifiers: "&&", def_value: None }]
constexpr MobileTlsProvider(MobileTlsProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MobileTlsProvider(void* ptr) noexcept : ::Mono::Security::Interface::MonoTlsProvider(ptr) {
}


  constexpr MobileTlsProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MobileTlsProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MobileTlsProvider& operator=(MobileTlsProvider&& o) noexcept = default;
  constexpr MobileTlsProvider& operator=(MobileTlsProvider const& o) noexcept = default;
                


// Methods

/// @brief Method CreateSslStream addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Mono::Net::Security::MobileAuthenticatedStream CreateSslStream(::System::Net::Security::SslStream sslStream, ::System::IO::Stream innerStream, bool leaveInnerStreamOpen, ::Mono::Security::Interface::MonoTlsSettings settings) ;

/// @brief Method ValidateCertificate addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ValidateCertificate(::Mono::Net::Security::ChainValidationHelper validator, ::StringW targetHost, bool serverMode, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection certificates, bool wantsChain, ByRef<::System::Security::Cryptography::X509Certificates::X509Chain> chain, ByRef<::System::Net::Security::SslPolicyErrors> errors, ByRef<int32_t> status11) ;

// Ctor Parameters []
explicit MobileTlsProvider() ;

/// @brief Method .ctor addr 0x268bd8c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
} // end anonymous namespace
NEED_NO_BOX(::Mono::Net::Security::MobileTlsProvider);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MobileTlsProvider, "Mono.Net.Security", "MobileTlsProvider");
