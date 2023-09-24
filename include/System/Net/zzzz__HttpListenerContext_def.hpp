#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net {
class HttpListener;
}
namespace System::Net {
class HttpListenerRequest;
}
namespace System::Net {
class HttpListenerResponse;
}
namespace System::Security::Principal {
class IPrincipal;
}
namespace System::Net {
class HttpConnection;
}
namespace System::Net {
struct AuthenticationSchemes;
}
// Forward declare root types
namespace System::Net {
class HttpListenerContext;
}
// Type: System.Net::HttpListenerContext
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8024))
// CS Name: System.Net.HttpListenerContext
class CORDL_TYPE HttpListenerContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~HttpListenerContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerContext", modifiers: " const&", def_value: None }]
constexpr HttpListenerContext(HttpListenerContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerContext", modifiers: "&&", def_value: None }]
constexpr HttpListenerContext(HttpListenerContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpListenerContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpListenerContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpListenerContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpListenerContext& operator=(HttpListenerContext&& o) noexcept = default;
  constexpr HttpListenerContext& operator=(HttpListenerContext const& o) noexcept = default;
                


// Fields

 System::Net::HttpListenerRequest __declspec(property(get=__get_request, put=__set_request))  request;

constexpr void __set_request(System::Net::HttpListenerRequest value) ;

constexpr System::Net::HttpListenerRequest __get_request() const;

 System::Net::HttpListenerResponse __declspec(property(get=__get_response, put=__set_response))  response;

constexpr void __set_response(System::Net::HttpListenerResponse value) ;

constexpr System::Net::HttpListenerResponse __get_response() const;

 System::Security::Principal::IPrincipal __declspec(property(get=__get_user, put=__set_user))  user;

constexpr void __set_user(System::Security::Principal::IPrincipal value) ;

constexpr System::Security::Principal::IPrincipal __get_user() const;

 System::Net::HttpConnection __declspec(property(get=__get_cnc, put=__set_cnc))  cnc;

constexpr void __set_cnc(System::Net::HttpConnection value) ;

constexpr System::Net::HttpConnection __get_cnc() const;

 ::StringW __declspec(property(get=__get_error, put=__set_error))  error;

constexpr void __set_error(::StringW value) ;

constexpr ::StringW __get_error() const;

 int32_t __declspec(property(get=__get_err_status, put=__set_err_status))  err_status;

constexpr void __set_err_status(int32_t value) ;

constexpr int32_t __get_err_status() const;

 System::Net::HttpListener __declspec(property(get=__get_Listener, put=__set_Listener))  Listener;

constexpr void __set_Listener(System::Net::HttpListener value) ;

constexpr System::Net::HttpListener __get_Listener() const;


// Properties

 int32_t __declspec(property(get=get_ErrorStatus, put=set_ErrorStatus))  ErrorStatus;

 ::StringW __declspec(property(get=get_ErrorMessage, put=set_ErrorMessage))  ErrorMessage;

 bool __declspec(property(get=get_HaveError))  HaveError;

 System::Net::HttpConnection __declspec(property(get=get_Connection))  Connection;

 System::Net::HttpListenerRequest __declspec(property(get=get_Request))  Request;

 System::Net::HttpListenerResponse __declspec(property(get=get_Response))  Response;


// Methods

static System::Net::HttpListenerContext New_ctor(System::Net::HttpConnection cnc) ;

/// @brief Method .ctor addr 0x283294c size 0xb4 virtual false final false
 void _ctor(System::Net::HttpConnection cnc) ;

/// @brief Method get_ErrorStatus addr 0x283703c size 0x8 virtual false final false
 int32_t get_ErrorStatus() ;

/// @brief Method set_ErrorStatus addr 0x2837044 size 0x8 virtual false final false
 void set_ErrorStatus(int32_t value) ;

/// @brief Method get_ErrorMessage addr 0x283704c size 0x8 virtual false final false
 ::StringW get_ErrorMessage() ;

/// @brief Method set_ErrorMessage addr 0x2837054 size 0x8 virtual false final false
 void set_ErrorMessage(::StringW value) ;

/// @brief Method get_HaveError addr 0x28335f8 size 0x10 virtual false final false
 bool get_HaveError() ;

/// @brief Method get_Connection addr 0x283705c size 0x8 virtual false final false
 System::Net::HttpConnection get_Connection() ;

/// @brief Method get_Request addr 0x2837064 size 0x8 virtual false final false
 System::Net::HttpListenerRequest get_Request() ;

/// @brief Method get_Response addr 0x283706c size 0x8 virtual false final false
 System::Net::HttpListenerResponse get_Response() ;

/// @brief Method ParseAuthentication addr 0x2836aec size 0x120 virtual false final false
 void ParseAuthentication(System::Net::AuthenticationSchemes expectedSchemes) ;

/// @brief Method ParseBasicAuthentication addr 0x2837074 size 0x24c virtual false final false
 System::Security::Principal::IPrincipal ParseBasicAuthentication(::StringW authData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::HttpListenerContext);
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListenerContext, "System.Net", "HttpListenerContext");
