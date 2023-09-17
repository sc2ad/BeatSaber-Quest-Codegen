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
class LocalCertSelectionCallback;
}
// Type: System.Net.Security::LocalCertSelectionCallback
namespace System::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8221))
// CS Name: System.Net.Security.LocalCertSelectionCallback
class CORDL_TYPE LocalCertSelectionCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~LocalCertSelectionCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalCertSelectionCallback", modifiers: " const&", def_value: None }]
constexpr LocalCertSelectionCallback(LocalCertSelectionCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalCertSelectionCallback", modifiers: "&&", def_value: None }]
constexpr LocalCertSelectionCallback(LocalCertSelectionCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalCertSelectionCallback(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr LocalCertSelectionCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalCertSelectionCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalCertSelectionCallback& operator=(LocalCertSelectionCallback&& o) noexcept = default;
  constexpr LocalCertSelectionCallback& operator=(LocalCertSelectionCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit LocalCertSelectionCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x276d304 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x276d3dc size 0x14 virtual true final false
 ::System::Security::Cryptography::X509Certificates::X509Certificate Invoke(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection localCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate remoteCertificate, ::ArrayW<::StringW> acceptableIssuers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Security
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Security::LocalCertSelectionCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::LocalCertSelectionCallback, "System.Net.Security", "LocalCertSelectionCallback");
