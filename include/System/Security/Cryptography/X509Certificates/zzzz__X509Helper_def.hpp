#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Mono {
class ISystemCertificateProvider;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System {
class Exception;
}
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Helper;
}
// Type: System.Security.Cryptography.X509Certificates::X509Helper
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2989))
// CS Name: System.Security.Cryptography.X509Certificates.X509Helper
class CORDL_TYPE X509Helper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X509Helper() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Helper", modifiers: " const&", def_value: None }]
constexpr X509Helper(X509Helper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Helper", modifiers: "&&", def_value: None }]
constexpr X509Helper(X509Helper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Helper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509Helper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Helper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Helper& operator=(X509Helper&& o) noexcept = default;
  constexpr X509Helper& operator=(X509Helper const& o) noexcept = default;
                


// Properties

static ::Mono::ISystemCertificateProvider __declspec(property(get=get_CertificateProvider))  CertificateProvider;


// Methods

/// @brief Method get_CertificateProvider addr 0x230afb8 size 0xc8 virtual false final false
static ::Mono::ISystemCertificateProvider get_CertificateProvider() ;

/// @brief Method InitFromCertificate addr 0x230b080 size 0xb0 virtual false final false
static ::System::Security::Cryptography::X509Certificates::X509CertificateImpl InitFromCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate cert) ;

/// @brief Method InitFromCertificate addr 0x230b130 size 0x14 virtual false final false
static ::System::Security::Cryptography::X509Certificates::X509CertificateImpl InitFromCertificate(::System::Security::Cryptography::X509Certificates::X509CertificateImpl impl) ;

/// @brief Method IsValid addr 0x230b144 size 0x14 virtual false final false
static bool IsValid(::System::Security::Cryptography::X509Certificates::X509CertificateImpl impl) ;

/// @brief Method ThrowIfContextInvalid addr 0x230b158 size 0x40 virtual false final false
static void ThrowIfContextInvalid(::System::Security::Cryptography::X509Certificates::X509CertificateImpl impl) ;

/// @brief Method GetInvalidContextException addr 0x230ac00 size 0x88 virtual false final false
static ::System::Exception GetInvalidContextException() ;

/// @brief Method Import addr 0x230b198 size 0xac virtual false final false
static ::System::Security::Cryptography::X509Certificates::X509CertificateImpl Import(::ArrayW<uint8_t> rawData) ;

/// @brief Method Import addr 0x230b244 size 0xc8 virtual false final false
static ::System::Security::Cryptography::X509Certificates::X509CertificateImpl Import(::ArrayW<uint8_t> rawData, ::Microsoft::Win32::SafeHandles::SafePasswordHandle password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Helper);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Helper, "System.Security.Cryptography.X509Certificates", "X509Helper");
