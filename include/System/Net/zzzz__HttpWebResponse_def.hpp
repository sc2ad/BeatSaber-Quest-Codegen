#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net {
class CookieContainer;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Net {
class CookieCollection;
}
namespace System {
class Uri;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Version;
}
namespace System {
class IDisposable;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Net {
class WebResponseStream;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System::Net {
class WebHeaderCollection;
}
// Forward declare root types
namespace System::Net {
class HttpWebResponse;
}
// Type: System.Net::HttpWebResponse
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7948))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8038))
// CS Name: System.Net.HttpWebResponse
class CORDL_TYPE HttpWebResponse : public System::Net::WebResponse {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HttpWebResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpWebResponse", modifiers: " const&", def_value: None }]
constexpr HttpWebResponse(HttpWebResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpWebResponse", modifiers: "&&", def_value: None }]
constexpr HttpWebResponse(HttpWebResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpWebResponse(void* ptr) noexcept : System::Net::WebResponse(ptr) {
}


  constexpr HttpWebResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpWebResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpWebResponse& operator=(HttpWebResponse&& o) noexcept = default;
  constexpr HttpWebResponse& operator=(HttpWebResponse const& o) noexcept = default;
                


// Fields

 System::Uri __declspec(property(get=__get_uri, put=__set_uri))  uri;

constexpr void __set_uri(System::Uri value) ;

constexpr System::Uri __get_uri() const;

 System::Net::WebHeaderCollection __declspec(property(get=__get_webHeaders, put=__set_webHeaders))  webHeaders;

constexpr void __set_webHeaders(System::Net::WebHeaderCollection value) ;

constexpr System::Net::WebHeaderCollection __get_webHeaders() const;

 System::Net::CookieCollection __declspec(property(get=__get_cookieCollection, put=__set_cookieCollection))  cookieCollection;

constexpr void __set_cookieCollection(System::Net::CookieCollection value) ;

constexpr System::Net::CookieCollection __get_cookieCollection() const;

 ::StringW __declspec(property(get=__get_method, put=__set_method))  method;

constexpr void __set_method(::StringW value) ;

constexpr ::StringW __get_method() const;

 System::Version __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(System::Version value) ;

constexpr System::Version __get_version() const;

 System::Net::HttpStatusCode __declspec(property(get=__get_statusCode, put=__set_statusCode))  statusCode;

constexpr void __set_statusCode(System::Net::HttpStatusCode value) ;

constexpr System::Net::HttpStatusCode __get_statusCode() const;

 ::StringW __declspec(property(get=__get_statusDescription, put=__set_statusDescription))  statusDescription;

constexpr void __set_statusDescription(::StringW value) ;

constexpr ::StringW __get_statusDescription() const;

 int64_t __declspec(property(get=__get_contentLength, put=__set_contentLength))  contentLength;

constexpr void __set_contentLength(int64_t value) ;

constexpr int64_t __get_contentLength() const;

 ::StringW __declspec(property(get=__get_contentType, put=__set_contentType))  contentType;

constexpr void __set_contentType(::StringW value) ;

constexpr ::StringW __get_contentType() const;

 System::Net::CookieContainer __declspec(property(get=__get_cookie_container, put=__set_cookie_container))  cookie_container;

constexpr void __set_cookie_container(System::Net::CookieContainer value) ;

constexpr System::Net::CookieContainer __get_cookie_container() const;

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;

 System::IO::Stream __declspec(property(get=__get_stream, put=__set_stream))  stream;

constexpr void __set_stream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_stream() const;


// Properties

 System::Net::WebHeaderCollection __declspec(property(get=get_Headers))  Headers;

 System::Uri __declspec(property(get=get_ResponseUri))  ResponseUri;

 System::Net::HttpStatusCode __declspec(property(get=get_StatusCode))  StatusCode;

 ::StringW __declspec(property(get=get_StatusDescription))  StatusDescription;


// Methods

static System::Net::HttpWebResponse New_ctor() ;

/// @brief Method .ctor addr 0x283f608 size 0x8 virtual false final false
 void _ctor() ;

static System::Net::HttpWebResponse New_ctor(System::Uri uri, ::StringW method, System::Net::HttpStatusCode status, System::Net::WebHeaderCollection headers) ;

/// @brief Method .ctor addr 0x283f610 size 0xb4 virtual false final false
 void _ctor(System::Uri uri, ::StringW method, System::Net::HttpStatusCode status, System::Net::WebHeaderCollection headers) ;

static System::Net::HttpWebResponse New_ctor(System::Uri uri, ::StringW method, System::Net::WebResponseStream stream, System::Net::CookieContainer container) ;

/// @brief Method .ctor addr 0x283ee4c size 0x2ec virtual false final false
 void _ctor(System::Uri uri, ::StringW method, System::Net::WebResponseStream stream, System::Net::CookieContainer container) ;

static System::Net::HttpWebResponse New_ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x283f8d8 size 0x39c virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method get_Headers addr 0x283fc74 size 0x8 virtual true final false
 System::Net::WebHeaderCollection get_Headers() ;

/// @brief Method get_ResponseUri addr 0x283fc7c size 0x18 virtual true final false
 System::Uri get_ResponseUri() ;

/// @brief Method get_StatusCode addr 0x283fd18 size 0x8 virtual true final false
 System::Net::HttpStatusCode get_StatusCode() ;

/// @brief Method get_StatusDescription addr 0x283fd20 size 0x18 virtual true final false
 ::StringW get_StatusDescription() ;

/// @brief Method GetResponseStream addr 0x283fd38 size 0x9c virtual true final false
 System::IO::Stream GetResponseStream() ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x283fdd4 size 0xc virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method GetObjectData addr 0x283fde0 size 0x1c0 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method Close addr 0x283ffa0 size 0x30 virtual true final false
 void Close() ;

/// @brief Method System.IDisposable.Dispose addr 0x283ffd0 size 0x10 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method Dispose addr 0x283ffe0 size 0x14 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method CheckDisposed addr 0x283fc94 size 0x84 virtual false final false
 void CheckDisposed() ;

/// @brief Method FillCookies addr 0x283f6c4 size 0x214 virtual false final false
 void FillCookies() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::HttpWebResponse);
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpWebResponse, "System.Net", "HttpWebResponse");
