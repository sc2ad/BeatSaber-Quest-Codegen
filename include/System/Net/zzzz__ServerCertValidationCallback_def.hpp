#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
// Forward declare root types
namespace System::Net {
class ServerCertValidationCallback;
}
namespace System::Net {
class System__Net__ServerCertValidationCallback__CallbackContext;
}
// Type: ::CallbackContext
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7997))
// CS Name: System.Net.ServerCertValidationCallback::CallbackContext
class CORDL_TYPE System__Net__ServerCertValidationCallback__CallbackContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Net__ServerCertValidationCallback__CallbackContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__ServerCertValidationCallback__CallbackContext", modifiers: " const&", def_value: None }]
constexpr System__Net__ServerCertValidationCallback__CallbackContext(System__Net__ServerCertValidationCallback__CallbackContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__ServerCertValidationCallback__CallbackContext", modifiers: "&&", def_value: None }]
constexpr System__Net__ServerCertValidationCallback__CallbackContext(System__Net__ServerCertValidationCallback__CallbackContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__ServerCertValidationCallback__CallbackContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__ServerCertValidationCallback__CallbackContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__ServerCertValidationCallback__CallbackContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__ServerCertValidationCallback__CallbackContext& operator=(System__Net__ServerCertValidationCallback__CallbackContext&& o) noexcept = default;
  constexpr System__Net__ServerCertValidationCallback__CallbackContext& operator=(System__Net__ServerCertValidationCallback__CallbackContext const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_request, put=__set_request))  request;

constexpr void __set_request(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_request() const;

 System::Security::Cryptography::X509Certificates::X509Certificate __declspec(property(get=__get_certificate, put=__set_certificate))  certificate;

constexpr void __set_certificate(System::Security::Cryptography::X509Certificates::X509Certificate value) ;

constexpr System::Security::Cryptography::X509Certificates::X509Certificate __get_certificate() const;

 System::Security::Cryptography::X509Certificates::X509Chain __declspec(property(get=__get_chain, put=__set_chain))  chain;

constexpr void __set_chain(System::Security::Cryptography::X509Certificates::X509Chain value) ;

constexpr System::Security::Cryptography::X509Certificates::X509Chain __get_chain() const;

 System::Net::Security::SslPolicyErrors __declspec(property(get=__get_sslPolicyErrors, put=__set_sslPolicyErrors))  sslPolicyErrors;

constexpr void __set_sslPolicyErrors(System::Net::Security::SslPolicyErrors value) ;

constexpr System::Net::Security::SslPolicyErrors __get_sslPolicyErrors() const;

 bool __declspec(property(get=__get_result, put=__set_result))  result;

constexpr void __set_result(bool value) ;

constexpr bool __get_result() const;


// Methods

// Ctor Parameters [CppParam { name: "request", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "certificate", ty: "System::Security::Cryptography::X509Certificates::X509Certificate", modifiers: "", def_value: None }, CppParam { name: "chain", ty: "System::Security::Cryptography::X509Certificates::X509Chain", modifiers: "", def_value: None }, CppParam { name: "sslPolicyErrors", ty: "System::Net::Security::SslPolicyErrors", modifiers: "", def_value: None }]
explicit System__Net__ServerCertValidationCallback__CallbackContext(::bs_hook::Il2CppWrapperType request, System::Security::Cryptography::X509Certificates::X509Certificate certificate, System::Security::Cryptography::X509Certificates::X509Chain chain, System::Net::Security::SslPolicyErrors sslPolicyErrors) ;

/// @brief Method .ctor addr 0x282840c size 0x44 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType request, System::Security::Cryptography::X509Certificates::X509Certificate certificate, System::Security::Cryptography::X509Certificates::X509Chain chain, System::Net::Security::SslPolicyErrors sslPolicyErrors) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::ServerCertValidationCallback
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7998))
// CS Name: System.Net.ServerCertValidationCallback
class CORDL_TYPE ServerCertValidationCallback : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CallbackContext = System::Net::System__Net__ServerCertValidationCallback__CallbackContext;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ServerCertValidationCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerCertValidationCallback", modifiers: " const&", def_value: None }]
constexpr ServerCertValidationCallback(ServerCertValidationCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerCertValidationCallback", modifiers: "&&", def_value: None }]
constexpr ServerCertValidationCallback(ServerCertValidationCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServerCertValidationCallback(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ServerCertValidationCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServerCertValidationCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServerCertValidationCallback& operator=(ServerCertValidationCallback&& o) noexcept = default;
  constexpr ServerCertValidationCallback& operator=(ServerCertValidationCallback const& o) noexcept = default;
                


// Fields

 System::Net::Security::RemoteCertificateValidationCallback __declspec(property(get=__get_m_ValidationCallback, put=__set_m_ValidationCallback))  m_ValidationCallback;

constexpr void __set_m_ValidationCallback(System::Net::Security::RemoteCertificateValidationCallback value) ;

constexpr System::Net::Security::RemoteCertificateValidationCallback __get_m_ValidationCallback() const;

 System::Threading::ExecutionContext __declspec(property(get=__get_m_Context, put=__set_m_Context))  m_Context;

constexpr void __set_m_Context(System::Threading::ExecutionContext value) ;

constexpr System::Threading::ExecutionContext __get_m_Context() const;


// Properties

 System::Net::Security::RemoteCertificateValidationCallback __declspec(property(get=get_ValidationCallback))  ValidationCallback;


// Methods

// Ctor Parameters [CppParam { name: "validationCallback", ty: "System::Net::Security::RemoteCertificateValidationCallback", modifiers: "", def_value: None }]
explicit ServerCertValidationCallback(System::Net::Security::RemoteCertificateValidationCallback validationCallback) ;

/// @brief Method .ctor addr 0x2828178 size 0x78 virtual false final false
 void _ctor(System::Net::Security::RemoteCertificateValidationCallback validationCallback) ;

/// @brief Method get_ValidationCallback addr 0x28281f0 size 0x8 virtual false final false
 System::Net::Security::RemoteCertificateValidationCallback get_ValidationCallback() ;

/// @brief Method Callback addr 0x28281f8 size 0xac virtual false final false
 void Callback(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method Invoke addr 0x28282a4 size 0x168 virtual false final false
 bool Invoke(::bs_hook::Il2CppWrapperType request, System::Security::Cryptography::X509Certificates::X509Certificate certificate, System::Security::Cryptography::X509Certificates::X509Chain chain, System::Net::Security::SslPolicyErrors sslPolicyErrors) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::ServerCertValidationCallback);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ServerCertValidationCallback, "System.Net", "ServerCertValidationCallback");
NEED_NO_BOX(System::Net::System__Net__ServerCertValidationCallback__CallbackContext);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__ServerCertValidationCallback__CallbackContext, "System.Net", "ServerCertValidationCallback/CallbackContext");
