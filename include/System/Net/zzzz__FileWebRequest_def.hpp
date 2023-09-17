#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::IO {
struct FileAccess;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::IO {
class Stream;
}
namespace System {
class IAsyncResult;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System {
class AsyncCallback;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class WebResponse;
}
namespace System {
class Uri;
}
namespace System::Threading {
class WaitCallback;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Net {
class LazyAsyncResult;
}
// Forward declare root types
namespace System::Net {
class FileWebRequest;
}
// Type: System.Net::FileWebRequest
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7947))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7985))
// CS Name: System.Net.FileWebRequest
class CORDL_TYPE FileWebRequest : public ::System::Net::WebRequest {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~FileWebRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileWebRequest", modifiers: " const&", def_value: None }]
constexpr FileWebRequest(FileWebRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileWebRequest", modifiers: "&&", def_value: None }]
constexpr FileWebRequest(FileWebRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileWebRequest(void* ptr) noexcept : ::System::Net::WebRequest(ptr) {
}


  constexpr FileWebRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileWebRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileWebRequest& operator=(FileWebRequest&& o) noexcept = default;
  constexpr FileWebRequest& operator=(FileWebRequest const& o) noexcept = default;
                


// Fields

static ::System::Threading::WaitCallback __declspec(property(get=__get_s_GetRequestStreamCallback, put=__set_s_GetRequestStreamCallback))  s_GetRequestStreamCallback;

static void __set_s_GetRequestStreamCallback(::System::Threading::WaitCallback value) ;

static ::System::Threading::WaitCallback __get_s_GetRequestStreamCallback() ;

static ::System::Threading::WaitCallback __declspec(property(get=__get_s_GetResponseCallback, put=__set_s_GetResponseCallback))  s_GetResponseCallback;

static void __set_s_GetResponseCallback(::System::Threading::WaitCallback value) ;

static ::System::Threading::WaitCallback __get_s_GetResponseCallback() ;

 ::StringW __declspec(property(get=__get_m_connectionGroupName, put=__set_m_connectionGroupName))  m_connectionGroupName;

constexpr void __set_m_connectionGroupName(::StringW value) ;

constexpr ::StringW __get_m_connectionGroupName() const;

 int64_t __declspec(property(get=__get_m_contentLength, put=__set_m_contentLength))  m_contentLength;

constexpr void __set_m_contentLength(int64_t value) ;

constexpr int64_t __get_m_contentLength() const;

 ::System::Net::ICredentials __declspec(property(get=__get_m_credentials, put=__set_m_credentials))  m_credentials;

constexpr void __set_m_credentials(::System::Net::ICredentials value) ;

constexpr ::System::Net::ICredentials __get_m_credentials() const;

 ::System::IO::FileAccess __declspec(property(get=__get_m_fileAccess, put=__set_m_fileAccess))  m_fileAccess;

constexpr void __set_m_fileAccess(::System::IO::FileAccess value) ;

constexpr ::System::IO::FileAccess __get_m_fileAccess() const;

 ::System::Net::WebHeaderCollection __declspec(property(get=__get_m_headers, put=__set_m_headers))  m_headers;

constexpr void __set_m_headers(::System::Net::WebHeaderCollection value) ;

constexpr ::System::Net::WebHeaderCollection __get_m_headers() const;

 ::StringW __declspec(property(get=__get_m_method, put=__set_m_method))  m_method;

constexpr void __set_m_method(::StringW value) ;

constexpr ::StringW __get_m_method() const;

 bool __declspec(property(get=__get_m_preauthenticate, put=__set_m_preauthenticate))  m_preauthenticate;

constexpr void __set_m_preauthenticate(bool value) ;

constexpr bool __get_m_preauthenticate() const;

 ::System::Net::IWebProxy __declspec(property(get=__get_m_proxy, put=__set_m_proxy))  m_proxy;

constexpr void __set_m_proxy(::System::Net::IWebProxy value) ;

constexpr ::System::Net::IWebProxy __get_m_proxy() const;

 ::System::Threading::ManualResetEvent __declspec(property(get=__get_m_readerEvent, put=__set_m_readerEvent))  m_readerEvent;

constexpr void __set_m_readerEvent(::System::Threading::ManualResetEvent value) ;

constexpr ::System::Threading::ManualResetEvent __get_m_readerEvent() const;

 bool __declspec(property(get=__get_m_readPending, put=__set_m_readPending))  m_readPending;

constexpr void __set_m_readPending(bool value) ;

constexpr bool __get_m_readPending() const;

 ::System::Net::WebResponse __declspec(property(get=__get_m_response, put=__set_m_response))  m_response;

constexpr void __set_m_response(::System::Net::WebResponse value) ;

constexpr ::System::Net::WebResponse __get_m_response() const;

 ::System::IO::Stream __declspec(property(get=__get_m_stream, put=__set_m_stream))  m_stream;

constexpr void __set_m_stream(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_m_stream() const;

 bool __declspec(property(get=__get_m_syncHint, put=__set_m_syncHint))  m_syncHint;

constexpr void __set_m_syncHint(bool value) ;

constexpr bool __get_m_syncHint() const;

 int32_t __declspec(property(get=__get_m_timeout, put=__set_m_timeout))  m_timeout;

constexpr void __set_m_timeout(int32_t value) ;

constexpr int32_t __get_m_timeout() const;

 ::System::Uri __declspec(property(get=__get_m_uri, put=__set_m_uri))  m_uri;

constexpr void __set_m_uri(::System::Uri value) ;

constexpr ::System::Uri __get_m_uri() const;

 bool __declspec(property(get=__get_m_writePending, put=__set_m_writePending))  m_writePending;

constexpr void __set_m_writePending(bool value) ;

constexpr bool __get_m_writePending() const;

 bool __declspec(property(get=__get_m_writing, put=__set_m_writing))  m_writing;

constexpr void __set_m_writing(bool value) ;

constexpr bool __get_m_writing() const;

 ::System::Net::LazyAsyncResult __declspec(property(get=__get_m_WriteAResult, put=__set_m_WriteAResult))  m_WriteAResult;

constexpr void __set_m_WriteAResult(::System::Net::LazyAsyncResult value) ;

constexpr ::System::Net::LazyAsyncResult __get_m_WriteAResult() const;

 ::System::Net::LazyAsyncResult __declspec(property(get=__get_m_ReadAResult, put=__set_m_ReadAResult))  m_ReadAResult;

constexpr void __set_m_ReadAResult(::System::Net::LazyAsyncResult value) ;

constexpr ::System::Net::LazyAsyncResult __get_m_ReadAResult() const;

 int32_t __declspec(property(get=__get_m_Aborted, put=__set_m_Aborted))  m_Aborted;

constexpr void __set_m_Aborted(int32_t value) ;

constexpr int32_t __get_m_Aborted() const;


// Properties

 bool __declspec(property(get=get_Aborted))  Aborted;

 ::StringW __declspec(property(put=set_ConnectionGroupName))  ConnectionGroupName;

 int64_t __declspec(property(get=get_ContentLength, put=set_ContentLength))  ContentLength;

 ::System::Net::ICredentials __declspec(property(get=get_Credentials, put=set_Credentials))  Credentials;

 ::System::Net::WebHeaderCollection __declspec(property(get=get_Headers))  Headers;

 ::StringW __declspec(property(get=get_Method, put=set_Method))  Method;

 bool __declspec(property(put=set_PreAuthenticate))  PreAuthenticate;

 ::System::Net::IWebProxy __declspec(property(get=get_Proxy, put=set_Proxy))  Proxy;

 int32_t __declspec(property(get=get_Timeout, put=set_Timeout))  Timeout;

 ::System::Uri __declspec(property(get=get_RequestUri))  RequestUri;

 bool __declspec(property(get=get_UseDefaultCredentials))  UseDefaultCredentials;


// Methods

// Ctor Parameters [CppParam { name: "uri", ty: "::System::Uri", modifiers: "", def_value: None }]
explicit FileWebRequest(::System::Uri uri) ;

/// @brief Method .ctor addr 0x2821e4c size 0x178 virtual false final false
 void _ctor(::System::Uri uri) ;

// Ctor Parameters [CppParam { name: "serializationInfo", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "streamingContext", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit FileWebRequest(::System::Runtime::Serialization::SerializationInfo serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x2821fc4 size 0x39c virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x2822360 size 0xc virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method GetObjectData addr 0x282236c size 0x290 virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method get_Aborted addr 0x28225fc size 0x10 virtual false final false
 bool get_Aborted() ;

/// @brief Method set_ConnectionGroupName addr 0x282260c size 0x8 virtual true final false
 void set_ConnectionGroupName(::StringW value) ;

/// @brief Method get_ContentLength addr 0x2822614 size 0x8 virtual true final false
 int64_t get_ContentLength() ;

/// @brief Method set_ContentLength addr 0x282261c size 0x84 virtual true final false
 void set_ContentLength(int64_t value) ;

/// @brief Method get_Credentials addr 0x28226a0 size 0x8 virtual true final false
 ::System::Net::ICredentials get_Credentials() ;

/// @brief Method set_Credentials addr 0x28226a8 size 0x8 virtual true final false
 void set_Credentials(::System::Net::ICredentials value) ;

/// @brief Method get_Headers addr 0x28226b0 size 0x8 virtual true final false
 ::System::Net::WebHeaderCollection get_Headers() ;

/// @brief Method get_Method addr 0x28226b8 size 0x8 virtual true final false
 ::StringW get_Method() ;

/// @brief Method set_Method addr 0x28226c0 size 0xd4 virtual true final false
 void set_Method(::StringW value) ;

/// @brief Method set_PreAuthenticate addr 0x2822794 size 0xc virtual true final false
 void set_PreAuthenticate(bool value) ;

/// @brief Method get_Proxy addr 0x28227a0 size 0x8 virtual true final false
 ::System::Net::IWebProxy get_Proxy() ;

/// @brief Method set_Proxy addr 0x28227a8 size 0x8 virtual true final false
 void set_Proxy(::System::Net::IWebProxy value) ;

/// @brief Method get_Timeout addr 0x28227b0 size 0x8 virtual true final false
 int32_t get_Timeout() ;

/// @brief Method set_Timeout addr 0x28227b8 size 0x88 virtual true final false
 void set_Timeout(int32_t value) ;

/// @brief Method get_RequestUri addr 0x2822840 size 0x8 virtual true final false
 ::System::Uri get_RequestUri() ;

/// @brief Method BeginGetRequestStream addr 0x2822848 size 0x3d4 virtual true final false
 ::System::IAsyncResult BeginGetRequestStream(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method BeginGetResponse addr 0x2822c8c size 0x2e0 virtual true final false
 ::System::IAsyncResult BeginGetResponse(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method CanGetRequestStream addr 0x2822c1c size 0x70 virtual false final false
 bool CanGetRequestStream() ;

/// @brief Method EndGetRequestStream addr 0x2822f6c size 0x304 virtual true final false
 ::System::IO::Stream EndGetRequestStream(::System::IAsyncResult asyncResult) ;

/// @brief Method EndGetResponse addr 0x2823270 size 0x304 virtual true final false
 ::System::Net::WebResponse EndGetResponse(::System::IAsyncResult asyncResult) ;

/// @brief Method GetResponse addr 0x2823574 size 0x370 virtual true final false
 ::System::Net::WebResponse GetResponse() ;

/// @brief Method GetRequestStreamCallback addr 0x28238e4 size 0x230 virtual false final false
static void GetRequestStreamCallback(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method GetResponseCallback addr 0x2823bb0 size 0x324 virtual false final false
static void GetResponseCallback(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method UnblockReader addr 0x28241a0 size 0xd8 virtual false final false
 void UnblockReader() ;

/// @brief Method get_UseDefaultCredentials addr 0x2824278 size 0x24 virtual true final false
 bool get_UseDefaultCredentials() ;

/// @brief Method Abort addr 0x282429c size 0x3b4 virtual true final false
 void Abort() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::FileWebRequest);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FileWebRequest, "System.Net", "FileWebRequest");
