#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
// Forward declare root types
namespace Mono::Security::Interface {
class MonoLocalCertificateSelectionCallback;
}
// Type: Mono.Security.Interface::MonoLocalCertificateSelectionCallback
namespace Mono::Security::Interface {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13992))
// CS Name: Mono.Security.Interface.MonoLocalCertificateSelectionCallback
class CORDL_TYPE MonoLocalCertificateSelectionCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~MonoLocalCertificateSelectionCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoLocalCertificateSelectionCallback", modifiers: " const&", def_value: None }]
constexpr MonoLocalCertificateSelectionCallback(MonoLocalCertificateSelectionCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoLocalCertificateSelectionCallback", modifiers: "&&", def_value: None }]
constexpr MonoLocalCertificateSelectionCallback(MonoLocalCertificateSelectionCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoLocalCertificateSelectionCallback(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr MonoLocalCertificateSelectionCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoLocalCertificateSelectionCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoLocalCertificateSelectionCallback& operator=(MonoLocalCertificateSelectionCallback&& o) noexcept = default;
  constexpr MonoLocalCertificateSelectionCallback& operator=(MonoLocalCertificateSelectionCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MonoLocalCertificateSelectionCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2295670 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2295748 size 0x14 virtual true final false
 ::System::Security::Cryptography::X509Certificates::X509Certificate Invoke(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection localCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate remoteCertificate, ::ArrayW<::StringW> acceptableIssuers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Interface
} // end anonymous namespace
NEED_NO_BOX(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback, "Mono.Security.Interface", "MonoLocalCertificateSelectionCallback");
