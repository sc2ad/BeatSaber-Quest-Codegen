#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace Mono {
struct CertificateImportFlags;
}
namespace Mono {
class ISystemCertificateProvider;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
namespace Mono {
class X509PalImpl;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Impl;
}
// Forward declare root types
namespace Mono {
class SystemCertificateProvider;
}
// Type: Mono::SystemCertificateProvider
namespace Mono {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7601))
// CS Name: Mono.SystemCertificateProvider
class CORDL_TYPE SystemCertificateProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Mono::ISystemCertificateProvider
constexpr operator  Mono::ISystemCertificateProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SystemCertificateProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemCertificateProvider", modifiers: " const&", def_value: None }]
constexpr SystemCertificateProvider(SystemCertificateProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemCertificateProvider", modifiers: "&&", def_value: None }]
constexpr SystemCertificateProvider(SystemCertificateProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SystemCertificateProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SystemCertificateProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SystemCertificateProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SystemCertificateProvider& operator=(SystemCertificateProvider&& o) noexcept = default;
  constexpr SystemCertificateProvider& operator=(SystemCertificateProvider const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_initialized, put=__set_initialized))  initialized;

static void __set_initialized(int32_t value) ;

static int32_t __get_initialized() ;

static Mono::X509PalImpl __declspec(property(get=__get_x509pal, put=__set_x509pal))  x509pal;

static void __set_x509pal(Mono::X509PalImpl value) ;

static Mono::X509PalImpl __get_x509pal() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_syncRoot, put=__set_syncRoot))  syncRoot;

static void __set_syncRoot(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_syncRoot() ;


// Properties

 Mono::X509PalImpl __declspec(property(get=get_X509Pal))  X509Pal;


// Methods

/// @brief Method GetX509Pal addr 0x2684acc size 0x58 virtual false final false
static Mono::X509PalImpl GetX509Pal() ;

/// @brief Method EnsureInitialized addr 0x2684b7c size 0x154 virtual false final false
static void EnsureInitialized() ;

/// @brief Method get_X509Pal addr 0x2684cd0 size 0x5c virtual false final false
 Mono::X509PalImpl get_X509Pal() ;

/// @brief Method Import addr 0x2684d2c size 0x6c virtual true final true
 System::Security::Cryptography::X509Certificates::X509CertificateImpl Import(::ArrayW<uint8_t> data, Mono::CertificateImportFlags importFlags) ;

/// @brief Method Mono.ISystemCertificateProvider.Import addr 0x2684f94 size 0x4 virtual true final true
 System::Security::Cryptography::X509Certificates::X509CertificateImpl Mono_ISystemCertificateProvider_Import(::ArrayW<uint8_t> data, Microsoft::Win32::SafeHandles::SafePasswordHandle password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags, Mono::CertificateImportFlags importFlags) ;

/// @brief Method Import addr 0x2684f98 size 0x90 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate2Impl Import(::ArrayW<uint8_t> data, Microsoft::Win32::SafeHandles::SafePasswordHandle password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags, Mono::CertificateImportFlags importFlags) ;

/// @brief Method Mono.ISystemCertificateProvider.Import addr 0x26850a4 size 0x4 virtual true final true
 System::Security::Cryptography::X509Certificates::X509CertificateImpl Mono_ISystemCertificateProvider_Import(System::Security::Cryptography::X509Certificates::X509Certificate cert, Mono::CertificateImportFlags importFlags) ;

/// @brief Method Import addr 0x26850a8 size 0x114 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate2Impl Import(System::Security::Cryptography::X509Certificates::X509Certificate cert, Mono::CertificateImportFlags importFlags) ;

static Mono::SystemCertificateProvider New_ctor() ;

/// @brief Method .ctor addr 0x26851bc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono
NEED_NO_BOX(Mono::SystemCertificateProvider);
DEFINE_IL2CPP_ARG_TYPE(Mono::SystemCertificateProvider, "Mono", "SystemCertificateProvider");
