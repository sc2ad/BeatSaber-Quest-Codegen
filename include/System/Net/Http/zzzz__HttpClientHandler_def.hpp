#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/Http/zzzz__HttpMessageHandler_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
struct TimeSpan;
}
namespace System::Net::Http {
class IMonoHttpClientHandler;
}
namespace System::Net::Http {
struct ClientCertificateOption;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Security {
class LocalCertificateSelectionCallback;
}
// Forward declare root types
namespace System::Net::Http {
class HttpClientHandler;
}
namespace System::Net::Http {
class System__Net__Http__HttpClientHandler____c;
}
// Type: ::<>c
namespace System::Net::Http {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14793))
// CS Name: System.Net.Http.HttpClientHandler::<>c
class CORDL_TYPE System__Net__Http__HttpClientHandler____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__Http__HttpClientHandler____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__HttpClientHandler____c", modifiers: " const&", def_value: None }]
constexpr System__Net__Http__HttpClientHandler____c(System__Net__Http__HttpClientHandler____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__HttpClientHandler____c", modifiers: "&&", def_value: None }]
constexpr System__Net__Http__HttpClientHandler____c(System__Net__Http__HttpClientHandler____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__HttpClientHandler____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__Http__HttpClientHandler____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__Http__HttpClientHandler____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__Http__HttpClientHandler____c& operator=(System__Net__Http__HttpClientHandler____c&& o) noexcept = default;
  constexpr System__Net__Http__HttpClientHandler____c& operator=(System__Net__Http__HttpClientHandler____c const& o) noexcept = default;
                


// Fields

static System::Net::Http::System__Net__Http__HttpClientHandler____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::Net::Http::System__Net__Http__HttpClientHandler____c value) ;

static System::Net::Http::System__Net__Http__HttpClientHandler____c __get___9() ;

static System::Net::Security::LocalCertificateSelectionCallback __declspec(property(get=__get___9__23_1, put=__set___9__23_1))  __9__23_1;

static void __set___9__23_1(System::Net::Security::LocalCertificateSelectionCallback value) ;

static System::Net::Security::LocalCertificateSelectionCallback __get___9__23_1() ;


// Methods

// Ctor Parameters []
explicit System__Net__Http__HttpClientHandler____c() ;

/// @brief Method .ctor addr 0x269b770 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <set_ClientCertificateOptions>b__23_1 addr 0x269b778 size 0x8 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate _set_ClientCertificateOptions_b__23_1(::bs_hook::Il2CppWrapperType sender, ::StringW targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate remoteCertificate, ::ArrayW<::StringW> acceptableIssuers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http
// Type: System.Net.Http::HttpClientHandler
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14810))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14794))
// CS Name: System.Net.Http.HttpClientHandler
class CORDL_TYPE HttpClientHandler : public System::Net::Http::HttpMessageHandler {
public:
// Declarations
using __c = System::Net::Http::System__Net__Http__HttpClientHandler____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HttpClientHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpClientHandler", modifiers: " const&", def_value: None }]
constexpr HttpClientHandler(HttpClientHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpClientHandler", modifiers: "&&", def_value: None }]
constexpr HttpClientHandler(HttpClientHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpClientHandler(void* ptr) noexcept : System::Net::Http::HttpMessageHandler(ptr) {
}


  constexpr HttpClientHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpClientHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpClientHandler& operator=(HttpClientHandler&& o) noexcept = default;
  constexpr HttpClientHandler& operator=(HttpClientHandler const& o) noexcept = default;
                


// Fields

 System::Net::Http::IMonoHttpClientHandler __declspec(property(get=__get__delegatingHandler, put=__set__delegatingHandler))  _delegatingHandler;

constexpr void __set__delegatingHandler(System::Net::Http::IMonoHttpClientHandler value) ;

constexpr System::Net::Http::IMonoHttpClientHandler __get__delegatingHandler() const;

 System::Net::Http::ClientCertificateOption __declspec(property(get=__get__clientCertificateOptions, put=__set__clientCertificateOptions))  _clientCertificateOptions;

constexpr void __set__clientCertificateOptions(System::Net::Http::ClientCertificateOption value) ;

constexpr System::Net::Http::ClientCertificateOption __get__clientCertificateOptions() const;


// Properties

 System::Net::Http::ClientCertificateOption __declspec(property(get=get_ClientCertificateOptions, put=set_ClientCertificateOptions))  ClientCertificateOptions;

 System::Security::Cryptography::X509Certificates::X509CertificateCollection __declspec(property(get=get_ClientCertificates))  ClientCertificates;


// Methods

/// @brief Method CreateDefaultHandler addr 0x269acf8 size 0x58 virtual false final false
static System::Net::Http::IMonoHttpClientHandler CreateDefaultHandler() ;

// Ctor Parameters []
explicit HttpClientHandler() ;

/// @brief Method .ctor addr 0x269af00 size 0x38 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "handler", ty: "System::Net::Http::IMonoHttpClientHandler", modifiers: "", def_value: None }]
explicit HttpClientHandler(System::Net::Http::IMonoHttpClientHandler handler) ;

/// @brief Method .ctor addr 0x269af38 size 0x30 virtual false final false
 void _ctor(System::Net::Http::IMonoHttpClientHandler handler) ;

/// @brief Method Dispose addr 0x269b1f0 size 0xb4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method ThrowForModifiedManagedSslOptionsIfStarted addr 0x269b2a8 size 0x104 virtual false final false
 void ThrowForModifiedManagedSslOptionsIfStarted() ;

/// @brief Method get_ClientCertificateOptions addr 0x269b3ac size 0x8 virtual false final false
 System::Net::Http::ClientCertificateOption get_ClientCertificateOptions() ;

/// @brief Method set_ClientCertificateOptions addr 0x269af70 size 0x280 virtual false final false
 void set_ClientCertificateOptions(System::Net::Http::ClientCertificateOption value) ;

/// @brief Method get_ClientCertificates addr 0x269b3b4 size 0x1dc virtual false final false
 System::Security::Cryptography::X509Certificates::X509CertificateCollection get_ClientCertificates() ;

/// @brief Method SetWebRequestTimeout addr 0x269b590 size 0xac virtual false final false
 void SetWebRequestTimeout(System::TimeSpan timeout) ;

/// @brief Method SendAsync addr 0x269b63c size 0xbc virtual true final false
 System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage> SendAsync(System::Net::Http::HttpRequestMessage request, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method <set_ClientCertificateOptions>b__23_0 addr 0x269b6f8 size 0x14 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate _set_ClientCertificateOptions_b__23_0(::bs_hook::Il2CppWrapperType sender, ::StringW targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate remoteCertificate, ::ArrayW<::StringW> acceptableIssuers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http
NEED_NO_BOX(System::Net::Http::HttpClientHandler);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpClientHandler, "System.Net.Http", "HttpClientHandler");
NEED_NO_BOX(System::Net::Http::System__Net__Http__HttpClientHandler____c);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::System__Net__Http__HttpClientHandler____c, "System.Net.Http", "HttpClientHandler/<>c");
