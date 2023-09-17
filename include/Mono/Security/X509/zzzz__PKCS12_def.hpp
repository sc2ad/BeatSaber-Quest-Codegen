#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography {
class SymmetricAlgorithm;
}
namespace Mono::Security {
class ____Mono__Security__PKCS7__EncryptedData;
}
namespace System::Security::Cryptography {
struct DSAParameters;
}
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
namespace Mono::Security::Cryptography {
class ____Mono__Security__Cryptography__PKCS8__PrivateKeyInfo;
}
namespace System::Collections {
class ArrayList;
}
namespace Mono::Security::X509 {
class X509Certificate;
}
namespace Mono::Security {
class ASN1;
}
namespace System::Collections {
class IDictionary;
}
namespace Mono::Security {
class ____Mono__Security__PKCS7__ContentInfo;
}
namespace System {
class ICloneable;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
// Forward declare root types
namespace Mono::Security::X509 {
class PKCS12;
}
namespace Mono::Security::X509 {
class ____Mono__Security__X509__PKCS12__DeriveBytes;
}
// Type: ::DeriveBytes
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13957))
// CS Name: Mono.Security.X509.PKCS12::DeriveBytes
class CORDL_TYPE ____Mono__Security__X509__PKCS12__DeriveBytes : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____Mono__Security__X509__PKCS12__DeriveBytes() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Mono__Security__X509__PKCS12__DeriveBytes", modifiers: " const&", def_value: None }]
constexpr ____Mono__Security__X509__PKCS12__DeriveBytes(____Mono__Security__X509__PKCS12__DeriveBytes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Mono__Security__X509__PKCS12__DeriveBytes", modifiers: "&&", def_value: None }]
constexpr ____Mono__Security__X509__PKCS12__DeriveBytes(____Mono__Security__X509__PKCS12__DeriveBytes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Mono__Security__X509__PKCS12__DeriveBytes(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Mono__Security__X509__PKCS12__DeriveBytes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Mono__Security__X509__PKCS12__DeriveBytes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Mono__Security__X509__PKCS12__DeriveBytes& operator=(____Mono__Security__X509__PKCS12__DeriveBytes&& o) noexcept = default;
  constexpr ____Mono__Security__X509__PKCS12__DeriveBytes& operator=(____Mono__Security__X509__PKCS12__DeriveBytes const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_keyDiversifier, put=__set_keyDiversifier))  keyDiversifier;

static void __set_keyDiversifier(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_keyDiversifier() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_ivDiversifier, put=__set_ivDiversifier))  ivDiversifier;

static void __set_ivDiversifier(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_ivDiversifier() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_macDiversifier, put=__set_macDiversifier))  macDiversifier;

static void __set_macDiversifier(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_macDiversifier() ;

 ::StringW __declspec(property(get=__get__hashName, put=__set__hashName))  _hashName;

constexpr void __set__hashName(::StringW value) ;

constexpr ::StringW __get__hashName() const;

 int32_t __declspec(property(get=__get__iterations, put=__set__iterations))  _iterations;

constexpr void __set__iterations(int32_t value) ;

constexpr int32_t __get__iterations() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__password, put=__set__password))  _password;

constexpr void __set__password(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__password() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__salt, put=__set__salt))  _salt;

constexpr void __set__salt(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__salt() const;


// Properties

 ::StringW __declspec(property(put=set_HashName))  HashName;

 int32_t __declspec(property(put=set_IterationCount))  IterationCount;

 ::ArrayW<uint8_t> __declspec(property(put=set_Password))  Password;

 ::ArrayW<uint8_t> __declspec(property(put=set_Salt))  Salt;


// Methods

// Ctor Parameters []
explicit ____Mono__Security__X509__PKCS12__DeriveBytes() ;

/// @brief Method .ctor addr 0x22855e4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method set_HashName addr 0x2289eb8 size 0x8 virtual false final false
 void set_HashName(::StringW value) ;

/// @brief Method set_IterationCount addr 0x2289ec0 size 0x8 virtual false final false
 void set_IterationCount(int32_t value) ;

/// @brief Method set_Password addr 0x22855ec size 0xbc virtual false final false
 void set_Password(::ArrayW<uint8_t> value) ;

/// @brief Method set_Salt addr 0x22856a8 size 0xa8 virtual false final false
 void set_Salt(::ArrayW<uint8_t> value) ;

/// @brief Method Adjust addr 0x2289ec8 size 0xdc virtual false final false
 void Adjust(::ArrayW<uint8_t> a, int32_t aOff, ::ArrayW<uint8_t> b) ;

/// @brief Method Derive addr 0x2289fa4 size 0x430 virtual false final false
 ::ArrayW<uint8_t> Derive(::ArrayW<uint8_t> diversifier, int32_t n) ;

/// @brief Method DeriveKey addr 0x2285750 size 0x70 virtual false final false
 ::ArrayW<uint8_t> DeriveKey(int32_t size) ;

/// @brief Method DeriveIV addr 0x22857c0 size 0x70 virtual false final false
 ::ArrayW<uint8_t> DeriveIV(int32_t size) ;

/// @brief Method DeriveMAC addr 0x2287014 size 0x70 virtual false final false
 ::ArrayW<uint8_t> DeriveMAC(int32_t size) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::X509
// Type: Mono.Security.X509::PKCS12
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13958))
// CS Name: Mono.Security.X509.PKCS12
class CORDL_TYPE PKCS12 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using DeriveBytes = ::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes;

/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~PKCS12() = default;

// Ctor Parameters [CppParam { name: "", ty: "PKCS12", modifiers: " const&", def_value: None }]
constexpr PKCS12(PKCS12 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PKCS12", modifiers: "&&", def_value: None }]
constexpr PKCS12(PKCS12&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PKCS12(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PKCS12& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PKCS12& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PKCS12& operator=(PKCS12&& o) noexcept = default;
  constexpr PKCS12& operator=(PKCS12 const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__password, put=__set__password))  _password;

constexpr void __set__password(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__password() const;

 ::System::Collections::ArrayList __declspec(property(get=__get__keyBags, put=__set__keyBags))  _keyBags;

constexpr void __set__keyBags(::System::Collections::ArrayList value) ;

constexpr ::System::Collections::ArrayList __get__keyBags() const;

 ::System::Collections::ArrayList __declspec(property(get=__get__secretBags, put=__set__secretBags))  _secretBags;

constexpr void __set__secretBags(::System::Collections::ArrayList value) ;

constexpr ::System::Collections::ArrayList __get__secretBags() const;

 ::Mono::Security::X509::X509CertificateCollection __declspec(property(get=__get__certs, put=__set__certs))  _certs;

constexpr void __set__certs(::Mono::Security::X509::X509CertificateCollection value) ;

constexpr ::Mono::Security::X509::X509CertificateCollection __get__certs() const;

 bool __declspec(property(get=__get__keyBagsChanged, put=__set__keyBagsChanged))  _keyBagsChanged;

constexpr void __set__keyBagsChanged(bool value) ;

constexpr bool __get__keyBagsChanged() const;

 bool __declspec(property(get=__get__secretBagsChanged, put=__set__secretBagsChanged))  _secretBagsChanged;

constexpr void __set__secretBagsChanged(bool value) ;

constexpr bool __get__secretBagsChanged() const;

 bool __declspec(property(get=__get__certsChanged, put=__set__certsChanged))  _certsChanged;

constexpr void __set__certsChanged(bool value) ;

constexpr bool __get__certsChanged() const;

 int32_t __declspec(property(get=__get__iterations, put=__set__iterations))  _iterations;

constexpr void __set__iterations(int32_t value) ;

constexpr int32_t __get__iterations() const;

 ::System::Collections::ArrayList __declspec(property(get=__get__safeBags, put=__set__safeBags))  _safeBags;

constexpr void __set__safeBags(::System::Collections::ArrayList value) ;

constexpr ::System::Collections::ArrayList __get__safeBags() const;

 ::System::Security::Cryptography::RandomNumberGenerator __declspec(property(get=__get__rng, put=__set__rng))  _rng;

constexpr void __set__rng(::System::Security::Cryptography::RandomNumberGenerator value) ;

constexpr ::System::Security::Cryptography::RandomNumberGenerator __get__rng() const;

static int32_t __declspec(property(get=__get_password_max_length, put=__set_password_max_length))  password_max_length;

static void __set_password_max_length(int32_t value) ;

static int32_t __get_password_max_length() ;


// Properties

 ::StringW __declspec(property(put=set_Password))  Password;

 int32_t __declspec(property(get=get_IterationCount, put=set_IterationCount))  IterationCount;

 ::System::Collections::ArrayList __declspec(property(get=get_Keys))  Keys;

 ::Mono::Security::X509::X509CertificateCollection __declspec(property(get=get_Certificates))  Certificates;

 ::System::Security::Cryptography::RandomNumberGenerator __declspec(property(get=get_RNG))  RNG;

static int32_t __declspec(property(get=get_MaximumPasswordLength))  MaximumPasswordLength;


// Methods

// Ctor Parameters []
explicit PKCS12() ;

/// @brief Method .ctor addr 0x2282f64 size 0xec virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit PKCS12(::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x2283050 size 0x34 virtual false final false
 void _ctor(::ArrayW<uint8_t> data) ;

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }]
explicit PKCS12(::ArrayW<uint8_t> data, ::StringW password) ;

/// @brief Method .ctor addr 0x22838e8 size 0x38 virtual false final false
 void _ctor(::ArrayW<uint8_t> data, ::StringW password) ;

/// @brief Method Decode addr 0x2283238 size 0x6b0 virtual false final false
 void Decode(::ArrayW<uint8_t> data) ;

/// @brief Method Finalize addr 0x2284278 size 0xac virtual true final false
 void Finalize() ;

/// @brief Method set_Password addr 0x2283084 size 0x1b4 virtual false final false
 void set_Password(::StringW value) ;

/// @brief Method get_IterationCount addr 0x2284324 size 0x8 virtual false final false
 int32_t get_IterationCount() ;

/// @brief Method set_IterationCount addr 0x228432c size 0x8 virtual false final false
 void set_IterationCount(int32_t value) ;

/// @brief Method get_Keys addr 0x2284334 size 0x700 virtual false final false
 ::System::Collections::ArrayList get_Keys() ;

/// @brief Method get_Certificates addr 0x2284be8 size 0x450 virtual false final false
 ::Mono::Security::X509::X509CertificateCollection get_Certificates() ;

/// @brief Method get_RNG addr 0x2285038 size 0x20 virtual false final false
 ::System::Security::Cryptography::RandomNumberGenerator get_RNG() ;

/// @brief Method Compare addr 0x2283a74 size 0x74 virtual false final false
 bool Compare(::ArrayW<uint8_t> expected, ::ArrayW<uint8_t> actual) ;

/// @brief Method GetSymmetricAlgorithm addr 0x2285058 size 0x58c virtual false final false
 ::System::Security::Cryptography::SymmetricAlgorithm GetSymmetricAlgorithm(::StringW algorithmOid, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

/// @brief Method Decrypt addr 0x2284a34 size 0x1b4 virtual false final false
 ::ArrayW<uint8_t> Decrypt(::StringW algorithmOid, ::ArrayW<uint8_t> salt, int32_t iterationCount, ::ArrayW<uint8_t> encryptedData) ;

/// @brief Method Decrypt addr 0x22841e8 size 0x90 virtual false final false
 ::ArrayW<uint8_t> Decrypt(::Mono::Security::____Mono__Security__PKCS7__EncryptedData ed) ;

/// @brief Method Encrypt addr 0x2285830 size 0x254 virtual false final false
 ::ArrayW<uint8_t> Encrypt(::StringW algorithmOid, ::ArrayW<uint8_t> salt, int32_t iterationCount, ::ArrayW<uint8_t> data) ;

/// @brief Method GetExistingParameters addr 0x2285a84 size 0x290 virtual false final false
 ::System::Security::Cryptography::DSAParameters GetExistingParameters(ByRef<bool> found) ;

/// @brief Method AddPrivateKey addr 0x22861a0 size 0x27c virtual false final false
 void AddPrivateKey(::Mono::Security::Cryptography::____Mono__Security__Cryptography__PKCS8__PrivateKeyInfo pki) ;

/// @brief Method ReadSafeBag addr 0x2283ae8 size 0x700 virtual false final false
 void ReadSafeBag(::Mono::Security::ASN1 safeBag) ;

/// @brief Method CertificateSafeBag addr 0x228641c size 0xbf8 virtual false final false
 ::Mono::Security::ASN1 CertificateSafeBag(::Mono::Security::X509::X509Certificate x509, ::System::Collections::IDictionary attributes) ;

/// @brief Method MAC addr 0x2283920 size 0x154 virtual false final false
 ::ArrayW<uint8_t> MAC(::ArrayW<uint8_t> password, ::ArrayW<uint8_t> salt, int32_t iterations, ::ArrayW<uint8_t> data) ;

/// @brief Method GetBytes addr 0x2287084 size 0x2240 virtual false final false
 ::ArrayW<uint8_t> GetBytes() ;

/// @brief Method EncryptedContentInfo addr 0x22892d4 size 0x310 virtual false final false
 ::Mono::Security::____Mono__Security__PKCS7__ContentInfo EncryptedContentInfo(::Mono::Security::ASN1 safeBags, ::StringW algorithmOid) ;

/// @brief Method AddCertificate addr 0x22892cc size 0x8 virtual false final false
 void AddCertificate(::Mono::Security::X509::X509Certificate cert) ;

/// @brief Method AddCertificate addr 0x22895e4 size 0x250 virtual false final false
 void AddCertificate(::Mono::Security::X509::X509Certificate cert, ::System::Collections::IDictionary attributes) ;

/// @brief Method RemoveCertificate addr 0x22892c4 size 0x8 virtual false final false
 void RemoveCertificate(::Mono::Security::X509::X509Certificate cert) ;

/// @brief Method RemoveCertificate addr 0x2289834 size 0x50c virtual false final false
 void RemoveCertificate(::Mono::Security::X509::X509Certificate cert, ::System::Collections::IDictionary attrs) ;

/// @brief Method Clone addr 0x2289d40 size 0xd4 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method get_MaximumPasswordLength addr 0x2289e14 size 0x58 virtual false final false
static int32_t get_MaximumPasswordLength() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::X509
} // end anonymous namespace
NEED_NO_BOX(::Mono::Security::X509::PKCS12);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::PKCS12, "Mono.Security.X509", "PKCS12");
NEED_NO_BOX(::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::____Mono__Security__X509__PKCS12__DeriveBytes, "Mono.Security.X509", "PKCS12/DeriveBytes");
