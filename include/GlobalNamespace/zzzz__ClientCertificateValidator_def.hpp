#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class DnsEndPoint;
}
namespace GlobalNamespace {
class ICertificateValidator;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
// Forward declare root types
namespace GlobalNamespace {
class ClientCertificateValidator;
}
// Type: ::ClientCertificateValidator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12631))
// CS Name: ClientCertificateValidator
class CORDL_TYPE ClientCertificateValidator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::ICertificateValidator
constexpr operator  ::GlobalNamespace::ICertificateValidator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ClientCertificateValidator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientCertificateValidator", modifiers: " const&", def_value: None }]
constexpr ClientCertificateValidator(ClientCertificateValidator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientCertificateValidator", modifiers: "&&", def_value: None }]
constexpr ClientCertificateValidator(ClientCertificateValidator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClientCertificateValidator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ClientCertificateValidator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClientCertificateValidator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClientCertificateValidator& operator=(ClientCertificateValidator&& o) noexcept = default;
  constexpr ClientCertificateValidator& operator=(ClientCertificateValidator const& o) noexcept = default;
                


// Methods

/// @brief Method ValidateCertificateChain addr 0xd9d68c size 0x4 virtual true final true
 void ValidateCertificateChain(::GlobalNamespace::DnsEndPoint endPoint, ::System::Security::Cryptography::X509Certificates::X509Certificate2 certificate, ::ArrayW<::ArrayW<uint8_t>> certificateChain) ;

/// @brief Method ValidateCertificateChainInternal addr 0xd9d690 size 0x1c8 virtual false final false
 void ValidateCertificateChainInternal(::GlobalNamespace::DnsEndPoint endPoint, ::System::Security::Cryptography::X509Certificates::X509Certificate2 certificate, ::ArrayW<::ArrayW<uint8_t>> certificateChain) ;

// Ctor Parameters []
explicit ClientCertificateValidator() ;

/// @brief Method .ctor addr 0xd9d858 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ClientCertificateValidator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ClientCertificateValidator, "", "ClientCertificateValidator");
