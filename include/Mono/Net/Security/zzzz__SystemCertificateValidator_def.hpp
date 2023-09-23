#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyUsageFlags;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
// Forward declare root types
namespace Mono::Net::Security {
class SystemCertificateValidator;
}
// Type: Mono.Net.Security::SystemCertificateValidator
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7697))
// CS Name: Mono.Net.Security.SystemCertificateValidator
class CORDL_TYPE SystemCertificateValidator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SystemCertificateValidator() = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemCertificateValidator", modifiers: " const&", def_value: None }]
constexpr SystemCertificateValidator(SystemCertificateValidator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemCertificateValidator", modifiers: "&&", def_value: None }]
constexpr SystemCertificateValidator(SystemCertificateValidator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SystemCertificateValidator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SystemCertificateValidator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SystemCertificateValidator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SystemCertificateValidator& operator=(SystemCertificateValidator&& o) noexcept = default;
  constexpr SystemCertificateValidator& operator=(SystemCertificateValidator const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_is_macosx, put=__set_is_macosx))  is_macosx;

static void __set_is_macosx(bool value) ;

static bool __get_is_macosx() ;

static System::Security::Cryptography::X509Certificates::X509KeyUsageFlags __declspec(property(get=__get_s_flags, put=__set_s_flags))  s_flags;

static void __set_s_flags(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value) ;

static System::Security::Cryptography::X509Certificates::X509KeyUsageFlags __get_s_flags() ;


// Methods

/// @brief Method NeedsChain addr 0x268f364 size 0x8 virtual false final false
static bool NeedsChain(Mono::Security::Interface::MonoTlsSettings settings) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
NEED_NO_BOX(Mono::Net::Security::SystemCertificateValidator);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::SystemCertificateValidator, "Mono.Net.Security", "SystemCertificateValidator");
