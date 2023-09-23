#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class Encoding;
}
namespace System {
class IDisposable;
}
namespace System::Net {
class Cookie;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class CookieCollection;
}
namespace System::Net {
class HttpListenerContext;
}
namespace System::IO {
class MemoryStream;
}
namespace System::Net {
class ResponseStream;
}
namespace System {
class Version;
}
// Forward declare root types
namespace System::Net {
class HttpListenerResponse;
}
// Type: System.Net::HttpListenerResponse
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8027))
// CS Name: System.Net.HttpListenerResponse
class CORDL_TYPE HttpListenerResponse : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~HttpListenerResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerResponse", modifiers: " const&", def_value: None }]
constexpr HttpListenerResponse(HttpListenerResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerResponse", modifiers: "&&", def_value: None }]
constexpr HttpListenerResponse(HttpListenerResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpListenerResponse(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpListenerResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpListenerResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpListenerResponse& operator=(HttpListenerResponse&& o) noexcept = default;
  constexpr HttpListenerResponse& operator=(HttpListenerResponse const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;

 System::Text::Encoding __declspec(property(get=__get_content_encoding, put=__set_content_encoding))  content_encoding;

constexpr void __set_content_encoding(System::Text::Encoding value) ;

constexpr System::Text::Encoding __get_content_encoding() const;

 int64_t __declspec(property(get=__get_content_length, put=__set_content_length))  content_length;

constexpr void __set_content_length(int64_t value) ;

constexpr int64_t __get_content_length() const;

 bool __declspec(property(get=__get_cl_set, put=__set_cl_set))  cl_set;

constexpr void __set_cl_set(bool value) ;

constexpr bool __get_cl_set() const;

 ::StringW __declspec(property(get=__get_content_type, put=__set_content_type))  content_type;

constexpr void __set_content_type(::StringW value) ;

constexpr ::StringW __get_content_type() const;

 System::Net::CookieCollection __declspec(property(get=__get_cookies, put=__set_cookies))  cookies;

constexpr void __set_cookies(System::Net::CookieCollection value) ;

constexpr System::Net::CookieCollection __get_cookies() const;

 System::Net::WebHeaderCollection __declspec(property(get=__get_headers, put=__set_headers))  headers;

constexpr void __set_headers(System::Net::WebHeaderCollection value) ;

constexpr System::Net::WebHeaderCollection __get_headers() const;

 bool __declspec(property(get=__get_keep_alive, put=__set_keep_alive))  keep_alive;

constexpr void __set_keep_alive(bool value) ;

constexpr bool __get_keep_alive() const;

 System::Net::ResponseStream __declspec(property(get=__get_output_stream, put=__set_output_stream))  output_stream;

constexpr void __set_output_stream(System::Net::ResponseStream value) ;

constexpr System::Net::ResponseStream __get_output_stream() const;

 System::Version __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(System::Version value) ;

constexpr System::Version __get_version() const;

 ::StringW __declspec(property(get=__get_location, put=__set_location))  location;

constexpr void __set_location(::StringW value) ;

constexpr ::StringW __get_location() const;

 int32_t __declspec(property(get=__get_status_code, put=__set_status_code))  status_code;

constexpr void __set_status_code(int32_t value) ;

constexpr int32_t __get_status_code() const;

 ::StringW __declspec(property(get=__get_status_description, put=__set_status_description))  status_description;

constexpr void __set_status_description(::StringW value) ;

constexpr ::StringW __get_status_description() const;

 bool __declspec(property(get=__get_chunked, put=__set_chunked))  chunked;

constexpr void __set_chunked(bool value) ;

constexpr bool __get_chunked() const;

 System::Net::HttpListenerContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(System::Net::HttpListenerContext value) ;

constexpr System::Net::HttpListenerContext __get_context() const;

 bool __declspec(property(get=__get_HeadersSent, put=__set_HeadersSent))  HeadersSent;

constexpr void __set_HeadersSent(bool value) ;

constexpr bool __get_HeadersSent() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_headers_lock, put=__set_headers_lock))  headers_lock;

constexpr void __set_headers_lock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_headers_lock() const;

 bool __declspec(property(get=__get_force_close_chunked, put=__set_force_close_chunked))  force_close_chunked;

constexpr void __set_force_close_chunked(bool value) ;

constexpr bool __get_force_close_chunked() const;

static ::StringW __declspec(property(get=__get_tspecials, put=__set_tspecials))  tspecials;

static void __set_tspecials(::StringW value) ;

static ::StringW __get_tspecials() ;


// Properties

 bool __declspec(property(get=get_ForceCloseChunked))  ForceCloseChunked;

 System::Text::Encoding __declspec(property(get=get_ContentEncoding))  ContentEncoding;

 int64_t __declspec(property(put=set_ContentLength64))  ContentLength64;

 ::StringW __declspec(property(put=set_ContentType))  ContentType;

 System::Net::WebHeaderCollection __declspec(property(get=get_Headers))  Headers;

 System::IO::Stream __declspec(property(get=get_OutputStream))  OutputStream;

 bool __declspec(property(get=get_SendChunked, put=set_SendChunked))  SendChunked;

 int32_t __declspec(property(put=set_StatusCode))  StatusCode;


// Methods

// Ctor Parameters [CppParam { name: "context", ty: "System::Net::HttpListenerContext", modifiers: "", def_value: None }]
explicit HttpListenerResponse(System::Net::HttpListenerContext context) ;

/// @brief Method .ctor addr 0x2836f28 size 0x114 virtual false final false
 void _ctor(System::Net::HttpListenerContext context) ;

/// @brief Method get_ForceCloseChunked addr 0x2837e98 size 0x8 virtual false final false
 bool get_ForceCloseChunked() ;

/// @brief Method get_ContentEncoding addr 0x2834fd0 size 0x20 virtual false final false
 System::Text::Encoding get_ContentEncoding() ;

/// @brief Method set_ContentLength64 addr 0x2837ea0 size 0x130 virtual false final false
 void set_ContentLength64(int64_t value) ;

/// @brief Method set_ContentType addr 0x2834ef8 size 0xd8 virtual false final false
 void set_ContentType(::StringW value) ;

/// @brief Method get_Headers addr 0x2837fd0 size 0x8 virtual false final false
 System::Net::WebHeaderCollection get_Headers() ;

/// @brief Method get_OutputStream addr 0x2837fd8 size 0x34 virtual false final false
 System::IO::Stream get_OutputStream() ;

/// @brief Method get_SendChunked addr 0x283800c size 0x8 virtual false final false
 bool get_SendChunked() ;

/// @brief Method set_SendChunked addr 0x2832d6c size 0xdc virtual false final false
 void set_SendChunked(bool value) ;

/// @brief Method set_StatusCode addr 0x2834dc4 size 0x134 virtual false final false
 void set_StatusCode(int32_t value) ;

/// @brief Method System.IDisposable.Dispose addr 0x2838014 size 0x8 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method Close addr 0x283801c size 0x2c virtual false final false
 void Close(bool force) ;

/// @brief Method Close addr 0x2838048 size 0x14 virtual false final false
 void Close() ;

/// @brief Method Close addr 0x2834ff0 size 0xbc virtual false final false
 void Close(::ArrayW<uint8_t> responseEntity, bool willBlock) ;

/// @brief Method SendHeaders addr 0x283805c size 0x9a8 virtual false final false
 void SendHeaders(bool closing, System::IO::MemoryStream ms) ;

/// @brief Method FormatHeaders addr 0x2838c9c size 0x254 virtual false final false
static ::StringW FormatHeaders(System::Net::WebHeaderCollection headers) ;

/// @brief Method CookieToClientString addr 0x2838a04 size 0x298 virtual false final false
static ::StringW CookieToClientString(System::Net::Cookie cookie) ;

/// @brief Method QuotedString addr 0x2838ef0 size 0xd0 virtual false final false
static ::StringW QuotedString(System::Net::Cookie cookie, ::StringW value) ;

/// @brief Method IsToken addr 0x2838fc0 size 0xd0 virtual false final false
static bool IsToken(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::HttpListenerResponse);
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListenerResponse, "System.Net", "HttpListenerResponse");
