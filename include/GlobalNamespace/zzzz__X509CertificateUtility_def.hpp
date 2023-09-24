#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::OpenSsl {
class IPasswordFinder;
}
namespace System {
class IDisposable;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace GlobalNamespace {
class ICertificateEncryptionProvider;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaPrivateCrtKeyParameters;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::X509 {
class X509CertificateParser;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatus;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
class GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9;
}
namespace GlobalNamespace {
class GlobalNamespace__X509CertificateUtility__PasswordFinder;
}
namespace GlobalNamespace {
class GlobalNamespace__X509CertificateUtility____c;
}
namespace GlobalNamespace {
class GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__X509CertificateUtility__PasswordFinder;
}
namespace GlobalNamespace {
class GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider;
}
namespace GlobalNamespace {
class GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9;
}
namespace GlobalNamespace {
class GlobalNamespace__X509CertificateUtility____c;
}
namespace GlobalNamespace {
class X509CertificateUtility;
}
// Type: ::PasswordFinder
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12933))
// CS Name: X509CertificateUtility::PasswordFinder
class CORDL_TYPE GlobalNamespace__X509CertificateUtility__PasswordFinder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::OpenSsl::IPasswordFinder
constexpr operator  Org::BouncyCastle::OpenSsl::IPasswordFinder() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__X509CertificateUtility__PasswordFinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__X509CertificateUtility__PasswordFinder", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__X509CertificateUtility__PasswordFinder(GlobalNamespace__X509CertificateUtility__PasswordFinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__X509CertificateUtility__PasswordFinder", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__X509CertificateUtility__PasswordFinder(GlobalNamespace__X509CertificateUtility__PasswordFinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__X509CertificateUtility__PasswordFinder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__X509CertificateUtility__PasswordFinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__X509CertificateUtility__PasswordFinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__X509CertificateUtility__PasswordFinder& operator=(GlobalNamespace__X509CertificateUtility__PasswordFinder&& o) noexcept = default;
  constexpr GlobalNamespace__X509CertificateUtility__PasswordFinder& operator=(GlobalNamespace__X509CertificateUtility__PasswordFinder const& o) noexcept = default;
                


// Fields

 ::ArrayW<char16_t> __declspec(property(get=__get__password, put=__set__password))  _password;

constexpr void __set__password(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__password() const;


// Methods

static GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder New_ctor(::ArrayW<uint8_t> password) ;

/// @brief Method .ctor addr 0xdd01d8 size 0xb8 virtual false final false
 void _ctor(::ArrayW<uint8_t> password) ;

static GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder New_ctor(::StringW password) ;

/// @brief Method .ctor addr 0xdd0290 size 0x3c virtual false final false
 void _ctor(::StringW password) ;

/// @brief Method GetPassword addr 0xdd02cc size 0x8 virtual true final true
 ::ArrayW<char16_t> GetPassword() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RSACertificateEncryptionProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12934))
// CS Name: X509CertificateUtility::RSACertificateEncryptionProvider
class CORDL_TYPE GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::ICertificateEncryptionProvider
constexpr operator  GlobalNamespace::ICertificateEncryptionProvider() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider(GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider(GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider& operator=(GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider&& o) noexcept = default;
  constexpr GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider& operator=(GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::ISigner __declspec(property(get=__get__signer, put=__set__signer))  _signer;

constexpr void __set__signer(Org::BouncyCastle::Crypto::ISigner value) ;

constexpr Org::BouncyCastle::Crypto::ISigner __get__signer() const;


// Methods

static GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider New_ctor(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters privateKey) ;

/// @brief Method .ctor addr 0xdd02d4 size 0x10c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters privateKey) ;

/// @brief Method Dispose addr 0xdd03e0 size 0x4 virtual true final true
 void Dispose() ;

/// @brief Method SignData addr 0xdd03e4 size 0x194 virtual true final true
 ::ArrayW<uint8_t> SignData(::ArrayW<uint8_t> data, int32_t offset, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetCertificateList>d__9
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12935))
// CS Name: X509CertificateUtility::<GetCertificateList>d__9
class CORDL_TYPE GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Certificate2>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Certificate2>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Security::Cryptography::X509Certificates::X509Certificate2>
constexpr operator  System::Collections::Generic::IEnumerator_1<System::Security::Cryptography::X509Certificates::X509Certificate2>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9(GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9(GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9& operator=(GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9&& o) noexcept = default;
  constexpr GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9& operator=(GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Security::Cryptography::X509Certificates::X509Certificate2 __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(System::Security::Cryptography::X509Certificates::X509Certificate2 value) ;

constexpr System::Security::Cryptography::X509Certificates::X509Certificate2 __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::StringW __declspec(property(get=__get_certificatePem, put=__set_certificatePem))  certificatePem;

constexpr void __set_certificatePem(::StringW value) ;

constexpr ::StringW __get_certificatePem() const;

 ::StringW __declspec(property(get=__get___3__certificatePem, put=__set___3__certificatePem))  __3__certificatePem;

constexpr void __set___3__certificatePem(::StringW value) ;

constexpr ::StringW __get___3__certificatePem() const;

 ::StringW __declspec(property(get=__get_certificateChainPem, put=__set_certificateChainPem))  certificateChainPem;

constexpr void __set_certificateChainPem(::StringW value) ;

constexpr ::StringW __get_certificateChainPem() const;

 ::StringW __declspec(property(get=__get___3__certificateChainPem, put=__set___3__certificateChainPem))  __3__certificateChainPem;

constexpr void __set___3__certificateChainPem(::StringW value) ;

constexpr ::StringW __get___3__certificateChainPem() const;

 Org::BouncyCastle::X509::X509CertificateParser __declspec(property(get=__get__x509CertificateParser_5__2, put=__set__x509CertificateParser_5__2))  _x509CertificateParser_5__2;

constexpr void __set__x509CertificateParser_5__2(Org::BouncyCastle::X509::X509CertificateParser value) ;

constexpr Org::BouncyCastle::X509::X509CertificateParser __get__x509CertificateParser_5__2() const;

 System::Collections::IEnumerator __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2))  __7__wrap2;

constexpr void __set___7__wrap2(System::Collections::IEnumerator value) ;

constexpr System::Collections::IEnumerator __get___7__wrap2() const;


// Properties

 System::Security::Cryptography::X509Certificates::X509Certificate2 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Security_Cryptography_X509Certificates_X509Certificate2__get_Current))  System_Collections_Generic_IEnumerator_System_Security_Cryptography_X509Certificates_X509Certificate2__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0xdd0578 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0xdd05ac size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0xdd05c8 size 0x540 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0xdd0b08 size 0xbc virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Security.Cryptography.X509Certificates.X509Certificate2>.get_Current addr 0xdd0bc4 size 0x8 virtual true final true
 System::Security::Cryptography::X509Certificates::X509Certificate2 System_Collections_Generic_IEnumerator_System_Security_Cryptography_X509Certificates_X509Certificate2__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0xdd0bcc size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0xdd0c0c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Security.Cryptography.X509Certificates.X509Certificate2>.GetEnumerator addr 0xdd0c14 size 0xac virtual true final true
 System::Collections::Generic::IEnumerator_1<System::Security::Cryptography::X509Certificates::X509Certificate2> System_Collections_Generic_IEnumerable_System_Security_Cryptography_X509Certificates_X509Certificate2__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0xdd0cc0 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12936))
// CS Name: X509CertificateUtility::<>c
class CORDL_TYPE GlobalNamespace__X509CertificateUtility____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__X509CertificateUtility____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__X509CertificateUtility____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__X509CertificateUtility____c(GlobalNamespace__X509CertificateUtility____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__X509CertificateUtility____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__X509CertificateUtility____c(GlobalNamespace__X509CertificateUtility____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__X509CertificateUtility____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__X509CertificateUtility____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__X509CertificateUtility____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__X509CertificateUtility____c& operator=(GlobalNamespace__X509CertificateUtility____c&& o) noexcept = default;
  constexpr GlobalNamespace__X509CertificateUtility____c& operator=(GlobalNamespace__X509CertificateUtility____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__X509CertificateUtility____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__X509CertificateUtility____c value) ;

static GlobalNamespace::GlobalNamespace__X509CertificateUtility____c __get___9() ;

static System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus,::StringW> __declspec(property(get=__get___9__11_0, put=__set___9__11_0))  __9__11_0;

static void __set___9__11_0(System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus,::StringW> value) ;

static System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus,::StringW> __get___9__11_0() ;

static System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus,::StringW> __declspec(property(get=__get___9__12_0, put=__set___9__12_0))  __9__12_0;

static void __set___9__12_0(System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus,::StringW> value) ;

static System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus,::StringW> __get___9__12_0() ;


// Methods

static GlobalNamespace::GlobalNamespace__X509CertificateUtility____c New_ctor() ;

/// @brief Method .ctor addr 0xdd0d28 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ValidateCertificateChainUnity>b__11_0 addr 0xdd0d30 size 0x64 virtual false final false
 ::StringW _ValidateCertificateChainUnity_b__11_0(System::Security::Cryptography::X509Certificates::X509ChainStatus s) ;

/// @brief Method <ValidateCertificateChainDotNet>b__12_0 addr 0xdd0d94 size 0x64 virtual false final false
 ::StringW _ValidateCertificateChainDotNet_b__12_0(System::Security::Cryptography::X509Certificates::X509ChainStatus s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::X509CertificateUtility
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12937))
// CS Name: X509CertificateUtility
class CORDL_TYPE X509CertificateUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__X509CertificateUtility____c;

using _GetCertificateList_d__9 = GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9;

using RSACertificateEncryptionProvider = GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider;

using PasswordFinder = GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X509CertificateUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateUtility", modifiers: " const&", def_value: None }]
constexpr X509CertificateUtility(X509CertificateUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateUtility", modifiers: "&&", def_value: None }]
constexpr X509CertificateUtility(X509CertificateUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509CertificateUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509CertificateUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509CertificateUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509CertificateUtility& operator=(X509CertificateUtility&& o) noexcept = default;
  constexpr X509CertificateUtility& operator=(X509CertificateUtility const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_kBeatSaberDotComRootCertificate, put=__set_kBeatSaberDotComRootCertificate))  kBeatSaberDotComRootCertificate;

static void __set_kBeatSaberDotComRootCertificate(::StringW value) ;

static ::StringW __get_kBeatSaberDotComRootCertificate() ;

static ::StringW __declspec(property(get=__get_kAwsRootCertificates, put=__set_kAwsRootCertificates))  kAwsRootCertificates;

static void __set_kAwsRootCertificates(::StringW value) ;

static ::StringW __get_kAwsRootCertificates() ;

static ::ArrayW<System::Security::Cryptography::X509Certificates::X509Certificate2> __declspec(property(get=__get__rootCertificates, put=__set__rootCertificates))  _rootCertificates;

static void __set__rootCertificates(::ArrayW<System::Security::Cryptography::X509Certificates::X509Certificate2> value) ;

static ::ArrayW<System::Security::Cryptography::X509Certificates::X509Certificate2> __get__rootCertificates() ;


// Methods

/// @brief Method GetRootCertificates addr 0xdcdd38 size 0xc4 virtual false final false
static ::ArrayW<System::Security::Cryptography::X509Certificates::X509Certificate2> GetRootCertificates() ;

/// @brief Method GetRootCertificatesRaw addr 0xdcde74 size 0x78 virtual false final false
static ::StringW GetRootCertificatesRaw() ;

/// @brief Method GetCertificateEncryptionProvider addr 0xdcdeec size 0xa4 virtual false final false
static GlobalNamespace::ICertificateEncryptionProvider GetCertificateEncryptionProvider(::StringW privateKeyPem, ::StringW password) ;

/// @brief Method GetRSACertificateEncryptionProvider addr 0xdcdf90 size 0x208 virtual false final false
static GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider GetRSACertificateEncryptionProvider(::StringW privateKeyPem, GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder passwordFinder) ;

/// @brief Method GetCertificateList addr 0xdcddfc size 0x78 virtual false final false
static System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Certificate2> GetCertificateList(::StringW certificatePem, ::StringW certificateChainPem) ;

/// @brief Method ValidateCertificateChain addr 0xdce198 size 0x64 virtual false final false
static void ValidateCertificateChain(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate, ::ArrayW<::ArrayW<uint8_t>> certificateChain) ;

/// @brief Method ValidateCertificateChainUnity addr 0xdce1fc size 0xa44 virtual false final false
static void ValidateCertificateChainUnity(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate, ::ArrayW<::ArrayW<uint8_t>> certificateChain) ;

/// @brief Method ValidateCertificateChainDotNet addr 0xdcec40 size 0x50c virtual false final false
static void ValidateCertificateChainDotNet(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate, ::ArrayW<::ArrayW<uint8_t>> certificateChain) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder, "", "X509CertificateUtility/PasswordFinder");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider, "", "X509CertificateUtility/RSACertificateEncryptionProvider");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9, "", "X509CertificateUtility/<GetCertificateList>d__9");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__X509CertificateUtility____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__X509CertificateUtility____c, "", "X509CertificateUtility/<>c");
NEED_NO_BOX(GlobalNamespace::X509CertificateUtility);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::X509CertificateUtility, "", "X509CertificateUtility");
