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
namespace System::Net::Security {
class LocalCertificateSelectionCallback;
}
// Type: System.Net.Security::LocalCertificateSelectionCallback
namespace System::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8218))
// CS Name: System.Net.Security.LocalCertificateSelectionCallback
class CORDL_TYPE LocalCertificateSelectionCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~LocalCertificateSelectionCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalCertificateSelectionCallback", modifiers: " const&", def_value: None }]
constexpr LocalCertificateSelectionCallback(LocalCertificateSelectionCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalCertificateSelectionCallback", modifiers: "&&", def_value: None }]
constexpr LocalCertificateSelectionCallback(LocalCertificateSelectionCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalCertificateSelectionCallback(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr LocalCertificateSelectionCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalCertificateSelectionCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalCertificateSelectionCallback& operator=(LocalCertificateSelectionCallback&& o) noexcept = default;
  constexpr LocalCertificateSelectionCallback& operator=(LocalCertificateSelectionCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit LocalCertificateSelectionCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x276d07c size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x276d1ac size 0x14 virtual true final false
 ::System::Security::Cryptography::X509Certificates::X509Certificate Invoke(::bs_hook::Il2CppWrapperType sender, ::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection localCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate remoteCertificate, ::ArrayW<::StringW> acceptableIssuers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Security
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Security::LocalCertificateSelectionCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::LocalCertificateSelectionCallback, "System.Net.Security", "LocalCertificateSelectionCallback");
