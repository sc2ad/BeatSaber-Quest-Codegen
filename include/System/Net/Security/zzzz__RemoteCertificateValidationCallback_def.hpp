#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
// Forward declare root types
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
// Type: System.Net.Security::RemoteCertificateValidationCallback
namespace System::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8219))
// CS Name: System.Net.Security.RemoteCertificateValidationCallback
class CORDL_TYPE RemoteCertificateValidationCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~RemoteCertificateValidationCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteCertificateValidationCallback", modifiers: " const&", def_value: None }]
constexpr RemoteCertificateValidationCallback(RemoteCertificateValidationCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteCertificateValidationCallback", modifiers: "&&", def_value: None }]
constexpr RemoteCertificateValidationCallback(RemoteCertificateValidationCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteCertificateValidationCallback(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr RemoteCertificateValidationCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteCertificateValidationCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteCertificateValidationCallback& operator=(RemoteCertificateValidationCallback&& o) noexcept = default;
  constexpr RemoteCertificateValidationCallback& operator=(RemoteCertificateValidationCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit RemoteCertificateValidationCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x276d1c0 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x276d2f0 size 0x14 virtual true final false
 bool Invoke(::bs_hook::Il2CppWrapperType sender, ::System::Security::Cryptography::X509Certificates::X509Certificate certificate, ::System::Security::Cryptography::X509Certificates::X509Chain chain, ::System::Net::Security::SslPolicyErrors sslPolicyErrors) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Security
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Security::RemoteCertificateValidationCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::RemoteCertificateValidationCallback, "System.Net.Security", "RemoteCertificateValidationCallback");
