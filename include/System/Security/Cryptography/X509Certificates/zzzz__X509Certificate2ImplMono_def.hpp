#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2ImplUnix_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImplCollection;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class RSA;
}
namespace Mono::Security::X509 {
class X509Certificate;
}
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
namespace System::Security::Cryptography {
class DSA;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2ImplMono;
}
// Type: System.Security.Cryptography.X509Certificates::X509Certificate2ImplMono
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7849))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7848))
// CS Name: System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono
class CORDL_TYPE X509Certificate2ImplMono : public System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~X509Certificate2ImplMono() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate2ImplMono", modifiers: " const&", def_value: None }]
constexpr X509Certificate2ImplMono(X509Certificate2ImplMono const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate2ImplMono", modifiers: "&&", def_value: None }]
constexpr X509Certificate2ImplMono(X509Certificate2ImplMono&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Certificate2ImplMono(void* ptr) noexcept : System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix(ptr) {
}


  constexpr X509Certificate2ImplMono& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Certificate2ImplMono& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Certificate2ImplMono& operator=(X509Certificate2ImplMono&& o) noexcept = default;
  constexpr X509Certificate2ImplMono& operator=(X509Certificate2ImplMono const& o) noexcept = default;
                


// Fields

 System::Security::Cryptography::X509Certificates::X509CertificateImplCollection __declspec(property(get=__get_intermediateCerts, put=__set_intermediateCerts))  intermediateCerts;

constexpr void __set_intermediateCerts(System::Security::Cryptography::X509Certificates::X509CertificateImplCollection value) ;

constexpr System::Security::Cryptography::X509Certificates::X509CertificateImplCollection __get_intermediateCerts() const;

 Mono::Security::X509::X509Certificate __declspec(property(get=__get__cert, put=__set__cert))  _cert;

constexpr void __set__cert(Mono::Security::X509::X509Certificate value) ;

constexpr Mono::Security::X509::X509Certificate __get__cert() const;

static ::StringW __declspec(property(get=__get_empty_error, put=__set_empty_error))  empty_error;

static void __set_empty_error(::StringW value) ;

static ::StringW __get_empty_error() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_signedData, put=__set_signedData))  signedData;

static void __set_signedData(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_signedData() ;


// Properties

 bool __declspec(property(get=get_IsValid))  IsValid;

 Mono::Security::X509::X509Certificate __declspec(property(get=get_Cert))  Cert;

 bool __declspec(property(get=get_HasPrivateKey))  HasPrivateKey;

 System::Security::Cryptography::AsymmetricAlgorithm __declspec(property(get=get_PrivateKey, put=set_PrivateKey))  PrivateKey;

 System::Security::Cryptography::X509Certificates::X509CertificateImplCollection __declspec(property(get=get_IntermediateCertificates))  IntermediateCertificates;

 Mono::Security::X509::X509Certificate __declspec(property(get=get_MonoCertificate))  MonoCertificate;


// Methods

/// @brief Method get_IsValid addr 0x27eac1c size 0x10 virtual true final false
 bool get_IsValid() ;

static System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono New_ctor(Mono::Security::X509::X509Certificate cert) ;

/// @brief Method .ctor addr 0x27eac2c size 0x28 virtual false final false
 void _ctor(Mono::Security::X509::X509Certificate cert) ;

static System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono New_ctor(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono other) ;

/// @brief Method .ctor addr 0x27eac5c size 0x44 virtual false final false
 void _ctor(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono other) ;

static System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono New_ctor(::ArrayW<uint8_t> rawData, Microsoft::Win32::SafeHandles::SafePasswordHandle password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) ;

/// @brief Method .ctor addr 0x27ead00 size 0x15c virtual false final false
 void _ctor(::ArrayW<uint8_t> rawData, Microsoft::Win32::SafeHandles::SafePasswordHandle password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) ;

/// @brief Method Clone addr 0x27eaeb4 size 0x6c virtual true final false
 System::Security::Cryptography::X509Certificates::X509CertificateImpl Clone() ;

/// @brief Method get_Cert addr 0x27eaf20 size 0x1c virtual false final false
 Mono::Security::X509::X509Certificate get_Cert() ;

/// @brief Method GetRawCertData addr 0x27eaf3c size 0x38 virtual true final false
 ::ArrayW<uint8_t> GetRawCertData() ;

/// @brief Method get_HasPrivateKey addr 0x27eaf74 size 0x24 virtual true final false
 bool get_HasPrivateKey() ;

/// @brief Method get_PrivateKey addr 0x27eaf98 size 0x428 virtual true final false
 System::Security::Cryptography::AsymmetricAlgorithm get_PrivateKey() ;

/// @brief Method set_PrivateKey addr 0x27eb3c0 size 0x198 virtual true final false
 void set_PrivateKey(System::Security::Cryptography::AsymmetricAlgorithm value) ;

/// @brief Method GetRSAPrivateKey addr 0x27eb558 size 0x8c virtual true final false
 System::Security::Cryptography::RSA GetRSAPrivateKey() ;

/// @brief Method GetDSAPrivateKey addr 0x27eb5e4 size 0x8c virtual true final false
 System::Security::Cryptography::DSA GetDSAPrivateKey() ;

/// @brief Method ImportPkcs12 addr 0x27eae5c size 0x58 virtual false final false
 Mono::Security::X509::X509Certificate ImportPkcs12(::ArrayW<uint8_t> rawData, Microsoft::Win32::SafeHandles::SafePasswordHandle password) ;

/// @brief Method ImportPkcs12 addr 0x27eb670 size 0x7c4 virtual false final false
 Mono::Security::X509::X509Certificate ImportPkcs12(::ArrayW<uint8_t> rawData, ::StringW password) ;

/// @brief Method Verify addr 0x27ebf88 size 0x94 virtual true final false
 bool Verify(System::Security::Cryptography::X509Certificates::X509Certificate2 thisCertificate) ;

/// @brief Method get_IntermediateCertificates addr 0x27ec0c8 size 0x8 virtual true final false
 System::Security::Cryptography::X509Certificates::X509CertificateImplCollection get_IntermediateCertificates() ;

/// @brief Method get_MonoCertificate addr 0x27ec0d0 size 0x8 virtual false final false
 Mono::Security::X509::X509Certificate get_MonoCertificate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono, "System.Security.Cryptography.X509Certificates", "X509Certificate2ImplMono");
