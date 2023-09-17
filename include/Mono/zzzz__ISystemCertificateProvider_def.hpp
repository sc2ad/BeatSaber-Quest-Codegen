#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace Mono {
struct CertificateImportFlags;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
}
// Forward declare root types
namespace Mono {
class ISystemCertificateProvider;
}
// Type: Mono::ISystemCertificateProvider
namespace Mono {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2225))
// CS Name: Mono.ISystemCertificateProvider
class CORDL_TYPE ISystemCertificateProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISystemCertificateProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISystemCertificateProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Import addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Security::Cryptography::X509Certificates::X509CertificateImpl Import(::ArrayW<uint8_t> data, ::Mono::CertificateImportFlags importFlags) ;

/// @brief Method Import addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Security::Cryptography::X509Certificates::X509CertificateImpl Import(::ArrayW<uint8_t> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags, ::Mono::CertificateImportFlags importFlags) ;

/// @brief Method Import addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Security::Cryptography::X509Certificates::X509CertificateImpl Import(::System::Security::Cryptography::X509Certificates::X509Certificate cert, ::Mono::CertificateImportFlags importFlags) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono
} // end anonymous namespace
NEED_NO_BOX(::Mono::ISystemCertificateProvider);
DEFINE_IL2CPP_ARG_TYPE(::Mono::ISystemCertificateProvider, "Mono", "ISystemCertificateProvider");
