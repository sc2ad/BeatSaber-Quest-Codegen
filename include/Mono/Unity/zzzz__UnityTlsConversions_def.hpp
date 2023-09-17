#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Mono::Security::Interface {
struct AlertDescription;
}
namespace Mono::Unity {
struct ____Mono__Unity__UnityTls__unitytls_x509verify_result;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace Mono::Unity {
struct ____Mono__Unity__UnityTls__unitytls_protocol;
}
namespace Mono::Security::Interface {
struct TlsProtocols;
}
// Forward declare root types
namespace Mono::Unity {
class UnityTlsConversions;
}
// Type: Mono.Unity::UnityTlsConversions
namespace Mono::Unity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7662))
// CS Name: Mono.Unity.UnityTlsConversions
class CORDL_TYPE UnityTlsConversions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityTlsConversions() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityTlsConversions", modifiers: " const&", def_value: None }]
constexpr UnityTlsConversions(UnityTlsConversions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityTlsConversions", modifiers: "&&", def_value: None }]
constexpr UnityTlsConversions(UnityTlsConversions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityTlsConversions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityTlsConversions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityTlsConversions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityTlsConversions& operator=(UnityTlsConversions&& o) noexcept = default;
  constexpr UnityTlsConversions& operator=(UnityTlsConversions const& o) noexcept = default;
                


// Methods

/// @brief Method GetMinProtocol addr 0x2688f30 size 0x38 virtual false final false
static ::Mono::Unity::____Mono__Unity__UnityTls__unitytls_protocol GetMinProtocol(::System::Security::Authentication::SslProtocols protocols) ;

/// @brief Method GetMaxProtocol addr 0x2688f68 size 0x38 virtual false final false
static ::Mono::Unity::____Mono__Unity__UnityTls__unitytls_protocol GetMaxProtocol(::System::Security::Authentication::SslProtocols protocols) ;

/// @brief Method ConvertProtocolVersion addr 0x2689c80 size 0x20 virtual false final false
static ::Mono::Security::Interface::TlsProtocols ConvertProtocolVersion(::Mono::Unity::____Mono__Unity__UnityTls__unitytls_protocol protocol) ;

/// @brief Method VerifyResultToAlertDescription addr 0x2686280 size 0x54 virtual false final false
static ::Mono::Security::Interface::AlertDescription VerifyResultToAlertDescription(::Mono::Unity::____Mono__Unity__UnityTls__unitytls_x509verify_result verifyResult, ::Mono::Security::Interface::AlertDescription defaultAlert) ;

/// @brief Method VerifyResultToPolicyErrror addr 0x268b154 size 0x30 virtual false final false
static ::System::Net::Security::SslPolicyErrors VerifyResultToPolicyErrror(::Mono::Unity::____Mono__Unity__UnityTls__unitytls_x509verify_result verifyResult) ;

/// @brief Method VerifyResultToChainStatus addr 0x268b184 size 0x40 virtual false final false
static ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags VerifyResultToChainStatus(::Mono::Unity::____Mono__Unity__UnityTls__unitytls_x509verify_result verifyResult) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Unity
} // end anonymous namespace
NEED_NO_BOX(::Mono::Unity::UnityTlsConversions);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTlsConversions, "Mono.Unity", "UnityTlsConversions");
