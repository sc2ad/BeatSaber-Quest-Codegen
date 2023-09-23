#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net {
class HttpListenerContext;
}
namespace System::IO {
class Stream;
}
namespace System::Collections::Specialized {
class NameValueCollection;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class CookieCollection;
}
namespace System {
class Uri;
}
namespace System::Net {
class IPEndPoint;
}
namespace System {
class Version;
}
// Forward declare root types
namespace System::Net {
class HttpListenerRequest;
}
// Type: System.Net::HttpListenerRequest
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8026))
// CS Name: System.Net.HttpListenerRequest
class CORDL_TYPE HttpListenerRequest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~HttpListenerRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerRequest", modifiers: " const&", def_value: None }]
constexpr HttpListenerRequest(HttpListenerRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerRequest", modifiers: "&&", def_value: None }]
constexpr HttpListenerRequest(HttpListenerRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpListenerRequest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpListenerRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpListenerRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpListenerRequest& operator=(HttpListenerRequest&& o) noexcept = default;
  constexpr HttpListenerRequest& operator=(HttpListenerRequest const& o) noexcept = default;
                


// Fields

 ::ArrayW<::StringW> __declspec(property(get=__get_accept_types, put=__set_accept_types))  accept_types;

constexpr void __set_accept_types(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_accept_types() const;

 int64_t __declspec(property(get=__get_content_length, put=__set_content_length))  content_length;

constexpr void __set_content_length(int64_t value) ;

constexpr int64_t __get_content_length() const;

 bool __declspec(property(get=__get_cl_set, put=__set_cl_set))  cl_set;

constexpr void __set_cl_set(bool value) ;

constexpr bool __get_cl_set() const;

 System::Net::CookieCollection __declspec(property(get=__get_cookies, put=__set_cookies))  cookies;

constexpr void __set_cookies(System::Net::CookieCollection value) ;

constexpr System::Net::CookieCollection __get_cookies() const;

 System::Net::WebHeaderCollection __declspec(property(get=__get_headers, put=__set_headers))  headers;

constexpr void __set_headers(System::Net::WebHeaderCollection value) ;

constexpr System::Net::WebHeaderCollection __get_headers() const;

 ::StringW __declspec(property(get=__get_method, put=__set_method))  method;

constexpr void __set_method(::StringW value) ;

constexpr ::StringW __get_method() const;

 System::IO::Stream __declspec(property(get=__get_input_stream, put=__set_input_stream))  input_stream;

constexpr void __set_input_stream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_input_stream() const;

 System::Version __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(System::Version value) ;

constexpr System::Version __get_version() const;

 System::Collections::Specialized::NameValueCollection __declspec(property(get=__get_query_string, put=__set_query_string))  query_string;

constexpr void __set_query_string(System::Collections::Specialized::NameValueCollection value) ;

constexpr System::Collections::Specialized::NameValueCollection __get_query_string() const;

 ::StringW __declspec(property(get=__get_raw_url, put=__set_raw_url))  raw_url;

constexpr void __set_raw_url(::StringW value) ;

constexpr ::StringW __get_raw_url() const;

 System::Uri __declspec(property(get=__get_url, put=__set_url))  url;

constexpr void __set_url(System::Uri value) ;

constexpr System::Uri __get_url() const;

 System::Uri __declspec(property(get=__get_referrer, put=__set_referrer))  referrer;

constexpr void __set_referrer(System::Uri value) ;

constexpr System::Uri __get_referrer() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_user_languages, put=__set_user_languages))  user_languages;

constexpr void __set_user_languages(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_user_languages() const;

 System::Net::HttpListenerContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(System::Net::HttpListenerContext value) ;

constexpr System::Net::HttpListenerContext __get_context() const;

 bool __declspec(property(get=__get_is_chunked, put=__set_is_chunked))  is_chunked;

constexpr void __set_is_chunked(bool value) ;

constexpr bool __get_is_chunked() const;

 bool __declspec(property(get=__get_ka_set, put=__set_ka_set))  ka_set;

constexpr void __set_ka_set(bool value) ;

constexpr bool __get_ka_set() const;

 bool __declspec(property(get=__get_keep_alive, put=__set_keep_alive))  keep_alive;

constexpr void __set_keep_alive(bool value) ;

constexpr bool __get_keep_alive() const;

static ::ArrayW<uint8_t> __declspec(property(get=__get__100continue, put=__set__100continue))  _100continue;

static void __set__100continue(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get__100continue() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_separators, put=__set_separators))  separators;

static void __set_separators(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_separators() ;


// Properties

 bool __declspec(property(get=get_HasEntityBody))  HasEntityBody;

 System::Collections::Specialized::NameValueCollection __declspec(property(get=get_Headers))  Headers;

 System::IO::Stream __declspec(property(get=get_InputStream))  InputStream;

 bool __declspec(property(get=get_IsSecureConnection))  IsSecureConnection;

 bool __declspec(property(get=get_KeepAlive))  KeepAlive;

 System::Net::IPEndPoint __declspec(property(get=get_LocalEndPoint))  LocalEndPoint;

 System::Version __declspec(property(get=get_ProtocolVersion))  ProtocolVersion;

 System::Uri __declspec(property(get=get_Url))  Url;

 ::StringW __declspec(property(get=get_UserHostAddress))  UserHostAddress;

 ::StringW __declspec(property(get=get_UserHostName))  UserHostName;


// Methods

// Ctor Parameters [CppParam { name: "context", ty: "System::Net::HttpListenerContext", modifiers: "", def_value: None }]
explicit HttpListenerRequest(System::Net::HttpListenerContext context) ;

/// @brief Method .ctor addr 0x2836e78 size 0xb0 virtual false final false
 void _ctor(System::Net::HttpListenerContext context) ;

/// @brief Method SetRequestLine addr 0x2834194 size 0x34c virtual false final false
 void SetRequestLine(::StringW req) ;

/// @brief Method CreateQueryString addr 0x2837720 size 0x218 virtual false final false
 void CreateQueryString(::StringW query) ;

/// @brief Method MaybeUri addr 0x2837938 size 0xa8 virtual false final false
static bool MaybeUri(::StringW s) ;

/// @brief Method IsPredefinedScheme addr 0x28379e0 size 0x1f0 virtual false final false
static bool IsPredefinedScheme(::StringW scheme) ;

/// @brief Method FinishInitialization addr 0x2833608 size 0x61c virtual false final false
 bool FinishInitialization() ;

/// @brief Method Unquote addr 0x2837c88 size 0x6c virtual false final false
static ::StringW Unquote(::StringW str) ;

/// @brief Method AddHeader addr 0x28344e0 size 0x8e4 virtual false final false
 void AddHeader(::StringW header) ;

/// @brief Method FlushInput addr 0x2835208 size 0x2c8 virtual false final false
 bool FlushInput() ;

/// @brief Method get_HasEntityBody addr 0x2837cf4 size 0x24 virtual false final false
 bool get_HasEntityBody() ;

/// @brief Method get_Headers addr 0x2837dbc size 0x8 virtual false final false
 System::Collections::Specialized::NameValueCollection get_Headers() ;

/// @brief Method get_InputStream addr 0x2837d18 size 0xa4 virtual false final false
 System::IO::Stream get_InputStream() ;

/// @brief Method get_IsSecureConnection addr 0x2837c44 size 0x24 virtual false final false
 bool get_IsSecureConnection() ;

/// @brief Method get_KeepAlive addr 0x28350ac size 0x15c virtual false final false
 bool get_KeepAlive() ;

/// @brief Method get_LocalEndPoint addr 0x2837c68 size 0x20 virtual false final false
 System::Net::IPEndPoint get_LocalEndPoint() ;

/// @brief Method get_ProtocolVersion addr 0x2837dc4 size 0x8 virtual false final false
 System::Version get_ProtocolVersion() ;

/// @brief Method get_Url addr 0x2837dcc size 0x8 virtual false final false
 System::Uri get_Url() ;

/// @brief Method get_UserHostAddress addr 0x2837c24 size 0x20 virtual false final false
 ::StringW get_UserHostAddress() ;

/// @brief Method get_UserHostName addr 0x2837bd0 size 0x54 virtual false final false
 ::StringW get_UserHostName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::HttpListenerRequest);
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListenerRequest, "System.Net", "HttpListenerRequest");
