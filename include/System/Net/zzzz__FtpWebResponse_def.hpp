#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net {
class System__Net__FtpWebResponse__EmptyStream;
}
namespace System::Net {
struct FtpStatusCode;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System {
struct DateTime;
}
namespace System {
class IDisposable;
}
namespace System {
class Uri;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::Net {
class FtpWebResponse;
}
namespace System::Net {
class System__Net__FtpWebResponse__EmptyStream;
}
// Type: ::EmptyStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7903))
// CS Name: System.Net.FtpWebResponse::EmptyStream
class CORDL_TYPE System__Net__FtpWebResponse__EmptyStream : public System::IO::MemoryStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~System__Net__FtpWebResponse__EmptyStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__FtpWebResponse__EmptyStream", modifiers: " const&", def_value: None }]
constexpr System__Net__FtpWebResponse__EmptyStream(System__Net__FtpWebResponse__EmptyStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__FtpWebResponse__EmptyStream", modifiers: "&&", def_value: None }]
constexpr System__Net__FtpWebResponse__EmptyStream(System__Net__FtpWebResponse__EmptyStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__FtpWebResponse__EmptyStream(void* ptr) noexcept : System::IO::MemoryStream(ptr) {
}


  constexpr System__Net__FtpWebResponse__EmptyStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__FtpWebResponse__EmptyStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__FtpWebResponse__EmptyStream& operator=(System__Net__FtpWebResponse__EmptyStream&& o) noexcept = default;
  constexpr System__Net__FtpWebResponse__EmptyStream& operator=(System__Net__FtpWebResponse__EmptyStream const& o) noexcept = default;
                


// Methods

static System::Net::System__Net__FtpWebResponse__EmptyStream New_ctor() ;

/// @brief Method .ctor addr 0x2809628 size 0x8c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::FtpWebResponse
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7948))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7904))
// CS Name: System.Net.FtpWebResponse
class CORDL_TYPE FtpWebResponse : public System::Net::WebResponse {
public:
// Declarations
using EmptyStream = System::Net::System__Net__FtpWebResponse__EmptyStream;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~FtpWebResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "FtpWebResponse", modifiers: " const&", def_value: None }]
constexpr FtpWebResponse(FtpWebResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FtpWebResponse", modifiers: "&&", def_value: None }]
constexpr FtpWebResponse(FtpWebResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FtpWebResponse(void* ptr) noexcept : System::Net::WebResponse(ptr) {
}


  constexpr FtpWebResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FtpWebResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FtpWebResponse& operator=(FtpWebResponse&& o) noexcept = default;
  constexpr FtpWebResponse& operator=(FtpWebResponse const& o) noexcept = default;
                


// Fields

 System::IO::Stream __declspec(property(get=__get__responseStream, put=__set__responseStream))  _responseStream;

constexpr void __set__responseStream(System::IO::Stream value) ;

constexpr System::IO::Stream __get__responseStream() const;

 int64_t __declspec(property(get=__get__contentLength, put=__set__contentLength))  _contentLength;

constexpr void __set__contentLength(int64_t value) ;

constexpr int64_t __get__contentLength() const;

 System::Uri __declspec(property(get=__get__responseUri, put=__set__responseUri))  _responseUri;

constexpr void __set__responseUri(System::Uri value) ;

constexpr System::Uri __get__responseUri() const;

 System::Net::FtpStatusCode __declspec(property(get=__get__statusCode, put=__set__statusCode))  _statusCode;

constexpr void __set__statusCode(System::Net::FtpStatusCode value) ;

constexpr System::Net::FtpStatusCode __get__statusCode() const;

 ::StringW __declspec(property(get=__get__statusLine, put=__set__statusLine))  _statusLine;

constexpr void __set__statusLine(::StringW value) ;

constexpr ::StringW __get__statusLine() const;

 System::Net::WebHeaderCollection __declspec(property(get=__get__ftpRequestHeaders, put=__set__ftpRequestHeaders))  _ftpRequestHeaders;

constexpr void __set__ftpRequestHeaders(System::Net::WebHeaderCollection value) ;

constexpr System::Net::WebHeaderCollection __get__ftpRequestHeaders() const;

 System::DateTime __declspec(property(get=__get__lastModified, put=__set__lastModified))  _lastModified;

constexpr void __set__lastModified(System::DateTime value) ;

constexpr System::DateTime __get__lastModified() const;

 ::StringW __declspec(property(get=__get__bannerMessage, put=__set__bannerMessage))  _bannerMessage;

constexpr void __set__bannerMessage(::StringW value) ;

constexpr ::StringW __get__bannerMessage() const;

 ::StringW __declspec(property(get=__get__welcomeMessage, put=__set__welcomeMessage))  _welcomeMessage;

constexpr void __set__welcomeMessage(::StringW value) ;

constexpr ::StringW __get__welcomeMessage() const;

 ::StringW __declspec(property(get=__get__exitMessage, put=__set__exitMessage))  _exitMessage;

constexpr void __set__exitMessage(::StringW value) ;

constexpr ::StringW __get__exitMessage() const;


// Properties

 System::Net::WebHeaderCollection __declspec(property(get=get_Headers))  Headers;

 System::Uri __declspec(property(get=get_ResponseUri))  ResponseUri;

 System::Net::FtpStatusCode __declspec(property(get=get_StatusCode))  StatusCode;


// Methods

static System::Net::FtpWebResponse New_ctor(System::IO::Stream responseStream, int64_t contentLength, System::Uri responseUri, System::Net::FtpStatusCode statusCode, ::StringW statusLine, System::DateTime lastModified, ::StringW bannerMessage, ::StringW welcomeMessage, ::StringW exitMessage) ;

/// @brief Method .ctor addr 0x2808ec8 size 0x11c virtual false final false
 void _ctor(System::IO::Stream responseStream, int64_t contentLength, System::Uri responseUri, System::Net::FtpStatusCode statusCode, ::StringW statusLine, System::DateTime lastModified, ::StringW bannerMessage, ::StringW welcomeMessage, ::StringW exitMessage) ;

/// @brief Method UpdateStatus addr 0x2807a2c size 0x10 virtual false final false
 void UpdateStatus(System::Net::FtpStatusCode statusCode, ::StringW statusLine, ::StringW exitMessage) ;

/// @brief Method GetResponseStream addr 0x28095c0 size 0x68 virtual true final false
 System::IO::Stream GetResponseStream() ;

/// @brief Method SetResponseStream addr 0x2808e34 size 0x94 virtual false final false
 void SetResponseStream(System::IO::Stream stream) ;

/// @brief Method Close addr 0x28096b4 size 0xe4 virtual true final false
 void Close() ;

/// @brief Method get_Headers addr 0x2809798 size 0x120 virtual true final false
 System::Net::WebHeaderCollection get_Headers() ;

/// @brief Method get_ResponseUri addr 0x28098b8 size 0x8 virtual true final false
 System::Uri get_ResponseUri() ;

/// @brief Method get_StatusCode addr 0x28098c0 size 0x8 virtual false final false
 System::Net::FtpStatusCode get_StatusCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::FtpWebResponse);
DEFINE_IL2CPP_ARG_TYPE(System::Net::FtpWebResponse, "System.Net", "FtpWebResponse");
NEED_NO_BOX(System::Net::System__Net__FtpWebResponse__EmptyStream);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__FtpWebResponse__EmptyStream, "System.Net", "FtpWebResponse/EmptyStream");
