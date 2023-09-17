#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Mono::Security::Interface {
struct MonoSslPolicyErrors;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
// Forward declare root types
namespace Mono::Security::Interface {
class MonoRemoteCertificateValidationCallback;
}
// Type: Mono.Security.Interface::MonoRemoteCertificateValidationCallback
namespace Mono::Security::Interface {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13991))
// CS Name: Mono.Security.Interface.MonoRemoteCertificateValidationCallback
class CORDL_TYPE MonoRemoteCertificateValidationCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~MonoRemoteCertificateValidationCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoRemoteCertificateValidationCallback", modifiers: " const&", def_value: None }]
constexpr MonoRemoteCertificateValidationCallback(MonoRemoteCertificateValidationCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoRemoteCertificateValidationCallback", modifiers: "&&", def_value: None }]
constexpr MonoRemoteCertificateValidationCallback(MonoRemoteCertificateValidationCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoRemoteCertificateValidationCallback(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr MonoRemoteCertificateValidationCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoRemoteCertificateValidationCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoRemoteCertificateValidationCallback& operator=(MonoRemoteCertificateValidationCallback&& o) noexcept = default;
  constexpr MonoRemoteCertificateValidationCallback& operator=(MonoRemoteCertificateValidationCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MonoRemoteCertificateValidationCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2295584 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x229565c size 0x14 virtual true final false
 bool Invoke(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509Certificate certificate, ::System::Security::Cryptography::X509Certificates::X509Chain chain, ::Mono::Security::Interface::MonoSslPolicyErrors sslPolicyErrors) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Interface
} // end anonymous namespace
NEED_NO_BOX(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback, "Mono.Security.Interface", "MonoRemoteCertificateValidationCallback");
