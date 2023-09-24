#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/zzzz__CommandStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Net {
struct FtpStatusCode;
}
namespace System {
class WeakReference;
}
namespace System::Net {
struct FtpLoginState;
}
namespace System::Net {
struct System__Net__CommandStream__PipelineInstruction;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net {
struct System__Net__FtpControlStream__GetPathOption;
}
namespace System {
class IAsyncResult;
}
namespace System::Net {
class System__Net__FtpControlStream____c__DisplayClass31_0;
}
namespace System::IO {
class Stream;
}
namespace System {
struct DateTime;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class FtpWebRequest;
}
namespace System::Net {
class WebRequest;
}
namespace System::Net {
class ResponseDescription;
}
namespace System::Net {
class NetworkCredential;
}
namespace System {
class Uri;
}
namespace System::Net {
struct TriState;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class System__Net__CommandStream__PipelineEntry;
}
namespace System::Net::Sockets {
class TcpClient;
}
namespace System::Net {
class TlsStream;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace System::Net {
struct System__Net__FtpControlStream__GetPathOption;
}
namespace System::Net {
class FtpControlStream;
}
namespace System::Net {
class System__Net__FtpControlStream____c__DisplayClass31_0;
}
// Type: ::GetPathOption
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7891))
// CS Name: System.Net.FtpControlStream::GetPathOption
struct CORDL_TYPE System__Net__FtpControlStream__GetPathOption : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Net__FtpControlStream__GetPathOption(int32_t value__) noexcept;


                    constexpr System__Net__FtpControlStream__GetPathOption(System__Net__FtpControlStream__GetPathOption const&) = default;
                    constexpr System__Net__FtpControlStream__GetPathOption(System__Net__FtpControlStream__GetPathOption&&) = default;
                    constexpr System__Net__FtpControlStream__GetPathOption& operator=(System__Net__FtpControlStream__GetPathOption const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__FtpControlStream__GetPathOption& operator=(System__Net__FtpControlStream__GetPathOption&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__FtpControlStream__GetPathOption(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Net__FtpControlStream__GetPathOption_Unwrapped : int32_t {
__Normal = 0,
__AssumeFilename = 1,
__AssumeNoFilename = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Net__FtpControlStream__GetPathOption_Unwrapped () const noexcept {
return std::bit_cast<__System__Net__FtpControlStream__GetPathOption_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static System::Net::System__Net__FtpControlStream__GetPathOption const Normal;

/// @brief Field AssumeFilename offset 0
static System::Net::System__Net__FtpControlStream__GetPathOption const AssumeFilename;

/// @brief Field AssumeNoFilename offset 0
static System::Net::System__Net__FtpControlStream__GetPathOption const AssumeNoFilename;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<>c__DisplayClass31_0
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7892))
// CS Name: System.Net.FtpControlStream::<>c__DisplayClass31_0
class CORDL_TYPE System__Net__FtpControlStream____c__DisplayClass31_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Net__FtpControlStream____c__DisplayClass31_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__FtpControlStream____c__DisplayClass31_0", modifiers: " const&", def_value: None }]
constexpr System__Net__FtpControlStream____c__DisplayClass31_0(System__Net__FtpControlStream____c__DisplayClass31_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__FtpControlStream____c__DisplayClass31_0", modifiers: "&&", def_value: None }]
constexpr System__Net__FtpControlStream____c__DisplayClass31_0(System__Net__FtpControlStream____c__DisplayClass31_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__FtpControlStream____c__DisplayClass31_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__FtpControlStream____c__DisplayClass31_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__FtpControlStream____c__DisplayClass31_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__FtpControlStream____c__DisplayClass31_0& operator=(System__Net__FtpControlStream____c__DisplayClass31_0&& o) noexcept = default;
  constexpr System__Net__FtpControlStream____c__DisplayClass31_0& operator=(System__Net__FtpControlStream____c__DisplayClass31_0 const& o) noexcept = default;
                


// Fields

 System::Net::FtpControlStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::FtpControlStream value) ;

constexpr System::Net::FtpControlStream __get___4__this() const;

 System::Net::TlsStream __declspec(property(get=__get_tlsStream, put=__set_tlsStream))  tlsStream;

constexpr void __set_tlsStream(System::Net::TlsStream value) ;

constexpr System::Net::TlsStream __get_tlsStream() const;


// Methods

static System::Net::System__Net__FtpControlStream____c__DisplayClass31_0 New_ctor() ;

/// @brief Method .ctor addr 0x27fee1c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PipelineCallback>b__0 addr 0x2801de8 size 0xf8 virtual false final false
 void _PipelineCallback_b__0(System::IAsyncResult ar) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::FtpControlStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7887))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7893))
// CS Name: System.Net.FtpControlStream
class CORDL_TYPE FtpControlStream : public System::Net::CommandStream {
public:
// Declarations
using __c__DisplayClass31_0 = System::Net::System__Net__FtpControlStream____c__DisplayClass31_0;

using GetPathOption = System::Net::System__Net__FtpControlStream__GetPathOption;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x110};

virtual ~FtpControlStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "FtpControlStream", modifiers: " const&", def_value: None }]
constexpr FtpControlStream(FtpControlStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FtpControlStream", modifiers: "&&", def_value: None }]
constexpr FtpControlStream(FtpControlStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FtpControlStream(void* ptr) noexcept : System::Net::CommandStream(ptr) {
}


  constexpr FtpControlStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FtpControlStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FtpControlStream& operator=(FtpControlStream&& o) noexcept = default;
  constexpr FtpControlStream& operator=(FtpControlStream const& o) noexcept = default;
                


// Fields

 System::Net::Sockets::Socket __declspec(property(get=__get__dataSocket, put=__set__dataSocket))  _dataSocket;

constexpr void __set__dataSocket(System::Net::Sockets::Socket value) ;

constexpr System::Net::Sockets::Socket __get__dataSocket() const;

 System::Net::IPEndPoint __declspec(property(get=__get__passiveEndPoint, put=__set__passiveEndPoint))  _passiveEndPoint;

constexpr void __set__passiveEndPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get__passiveEndPoint() const;

 System::Net::TlsStream __declspec(property(get=__get__tlsStream, put=__set__tlsStream))  _tlsStream;

constexpr void __set__tlsStream(System::Net::TlsStream value) ;

constexpr System::Net::TlsStream __get__tlsStream() const;

 System::Text::StringBuilder __declspec(property(get=__get__bannerMessage, put=__set__bannerMessage))  _bannerMessage;

constexpr void __set__bannerMessage(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get__bannerMessage() const;

 System::Text::StringBuilder __declspec(property(get=__get__welcomeMessage, put=__set__welcomeMessage))  _welcomeMessage;

constexpr void __set__welcomeMessage(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get__welcomeMessage() const;

 System::Text::StringBuilder __declspec(property(get=__get__exitMessage, put=__set__exitMessage))  _exitMessage;

constexpr void __set__exitMessage(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get__exitMessage() const;

 System::WeakReference __declspec(property(get=__get__credentials, put=__set__credentials))  _credentials;

constexpr void __set__credentials(System::WeakReference value) ;

constexpr System::WeakReference __get__credentials() const;

 ::StringW __declspec(property(get=__get__currentTypeSetting, put=__set__currentTypeSetting))  _currentTypeSetting;

constexpr void __set__currentTypeSetting(::StringW value) ;

constexpr ::StringW __get__currentTypeSetting() const;

 int64_t __declspec(property(get=__get__contentLength, put=__set__contentLength))  _contentLength;

constexpr void __set__contentLength(int64_t value) ;

constexpr int64_t __get__contentLength() const;

 System::DateTime __declspec(property(get=__get__lastModified, put=__set__lastModified))  _lastModified;

constexpr void __set__lastModified(System::DateTime value) ;

constexpr System::DateTime __get__lastModified() const;

 bool __declspec(property(get=__get__dataHandshakeStarted, put=__set__dataHandshakeStarted))  _dataHandshakeStarted;

constexpr void __set__dataHandshakeStarted(bool value) ;

constexpr bool __get__dataHandshakeStarted() const;

 ::StringW __declspec(property(get=__get__loginDirectory, put=__set__loginDirectory))  _loginDirectory;

constexpr void __set__loginDirectory(::StringW value) ;

constexpr ::StringW __get__loginDirectory() const;

 ::StringW __declspec(property(get=__get__establishedServerDirectory, put=__set__establishedServerDirectory))  _establishedServerDirectory;

constexpr void __set__establishedServerDirectory(::StringW value) ;

constexpr ::StringW __get__establishedServerDirectory() const;

 ::StringW __declspec(property(get=__get__requestedServerDirectory, put=__set__requestedServerDirectory))  _requestedServerDirectory;

constexpr void __set__requestedServerDirectory(::StringW value) ;

constexpr ::StringW __get__requestedServerDirectory() const;

 System::Uri __declspec(property(get=__get__responseUri, put=__set__responseUri))  _responseUri;

constexpr void __set__responseUri(System::Uri value) ;

constexpr System::Uri __get__responseUri() const;

 System::Net::FtpLoginState __declspec(property(get=__get__loginState, put=__set__loginState))  _loginState;

constexpr void __set__loginState(System::Net::FtpLoginState value) ;

constexpr System::Net::FtpLoginState __get__loginState() const;

 System::Net::FtpStatusCode __declspec(property(get=__get_StatusCode, put=__set_StatusCode))  StatusCode;

constexpr void __set_StatusCode(System::Net::FtpStatusCode value) ;

constexpr System::Net::FtpStatusCode __get_StatusCode() const;

 ::StringW __declspec(property(get=__get_StatusLine, put=__set_StatusLine))  StatusLine;

constexpr void __set_StatusLine(::StringW value) ;

constexpr ::StringW __get_StatusLine() const;

static System::AsyncCallback __declspec(property(get=__get_s_acceptCallbackDelegate, put=__set_s_acceptCallbackDelegate))  s_acceptCallbackDelegate;

static void __set_s_acceptCallbackDelegate(System::AsyncCallback value) ;

static System::AsyncCallback __get_s_acceptCallbackDelegate() ;

static System::AsyncCallback __declspec(property(get=__get_s_connectCallbackDelegate, put=__set_s_connectCallbackDelegate))  s_connectCallbackDelegate;

static void __set_s_connectCallbackDelegate(System::AsyncCallback value) ;

static System::AsyncCallback __get_s_connectCallbackDelegate() ;

static System::AsyncCallback __declspec(property(get=__get_s_SSLHandshakeCallback, put=__set_s_SSLHandshakeCallback))  s_SSLHandshakeCallback;

static void __set_s_SSLHandshakeCallback(System::AsyncCallback value) ;

static System::AsyncCallback __get_s_SSLHandshakeCallback() ;


// Properties

 System::Net::NetworkCredential __declspec(property(get=get_Credentials, put=set_Credentials))  Credentials;

 int64_t __declspec(property(get=get_ContentLength))  ContentLength;

 System::DateTime __declspec(property(get=get_LastModified))  LastModified;

 System::Uri __declspec(property(get=get_ResponseUri))  ResponseUri;

 ::StringW __declspec(property(get=get_BannerMessage))  BannerMessage;

 ::StringW __declspec(property(get=get_WelcomeMessage))  WelcomeMessage;

 ::StringW __declspec(property(get=get_ExitMessage))  ExitMessage;


// Methods

/// @brief Method get_Credentials addr 0x27fd61c size 0xa8 virtual false final false
 System::Net::NetworkCredential get_Credentials() ;

/// @brief Method set_Credentials addr 0x27fd6c4 size 0x80 virtual false final false
 void set_Credentials(System::Net::NetworkCredential value) ;

static System::Net::FtpControlStream New_ctor(System::Net::Sockets::TcpClient client) ;

/// @brief Method .ctor addr 0x27fd744 size 0x8c virtual false final false
 void _ctor(System::Net::Sockets::TcpClient client) ;

/// @brief Method AbortConnect addr 0x27fd7d0 size 0x8c virtual false final false
 void AbortConnect() ;

/// @brief Method AcceptCallback addr 0x27fd85c size 0x368 virtual false final false
static void AcceptCallback(System::IAsyncResult asyncResult) ;

/// @brief Method ConnectCallback addr 0x27fdc58 size 0x1b0 virtual false final false
static void ConnectCallback(System::IAsyncResult asyncResult) ;

/// @brief Method SSLHandshakeCallback addr 0x27fde08 size 0x1c4 virtual false final false
static void SSLHandshakeCallback(System::IAsyncResult asyncResult) ;

/// @brief Method QueueOrCreateFtpDataStream addr 0x27fdfcc size 0x29c virtual false final false
 System::Net::System__Net__CommandStream__PipelineInstruction QueueOrCreateFtpDataStream(ByRef<System::IO::Stream> stream) ;

/// @brief Method ClearState addr 0x27fe560 size 0x90 virtual true final false
 void ClearState() ;

/// @brief Method PipelineCallback addr 0x27fe5f0 size 0x82c virtual true final false
 System::Net::System__Net__CommandStream__PipelineInstruction PipelineCallback(System::Net::System__Net__CommandStream__PipelineEntry entry, System::Net::ResponseDescription response, bool timeout, ByRef<System::IO::Stream> stream) ;

/// @brief Method BuildCommandsList addr 0x27ffe44 size 0xdd8 virtual true final false
 ::ArrayW<System::Net::System__Net__CommandStream__PipelineEntry> BuildCommandsList(System::Net::WebRequest req) ;

/// @brief Method QueueOrCreateDataConection addr 0x27fee24 size 0x664 virtual false final false
 System::Net::System__Net__CommandStream__PipelineInstruction QueueOrCreateDataConection(System::Net::System__Net__CommandStream__PipelineEntry entry, System::Net::ResponseDescription response, bool timeout, ByRef<System::IO::Stream> stream, ByRef<bool> isSocketReady) ;

/// @brief Method GetPathInfo addr 0x2800d2c size 0x194 virtual false final false
static void GetPathInfo(System::Net::System__Net__FtpControlStream__GetPathOption pathOption, System::Uri uri, ByRef<::StringW> path, ByRef<::StringW> directory, ByRef<::StringW> filename) ;

/// @brief Method FormatAddress addr 0x2801674 size 0x124 virtual false final false
 ::StringW FormatAddress(System::Net::IPAddress address, int32_t Port) ;

/// @brief Method FormatAddressV6 addr 0x2801798 size 0x110 virtual false final false
 ::StringW FormatAddressV6(System::Net::IPAddress address, int32_t port) ;

/// @brief Method get_ContentLength addr 0x28018a8 size 0x8 virtual false final false
 int64_t get_ContentLength() ;

/// @brief Method get_LastModified addr 0x28018b0 size 0x8 virtual false final false
 System::DateTime get_LastModified() ;

/// @brief Method get_ResponseUri addr 0x28018b8 size 0x8 virtual false final false
 System::Uri get_ResponseUri() ;

/// @brief Method get_BannerMessage addr 0x28018c0 size 0x18 virtual false final false
 ::StringW get_BannerMessage() ;

/// @brief Method get_WelcomeMessage addr 0x28018d8 size 0x18 virtual false final false
 ::StringW get_WelcomeMessage() ;

/// @brief Method get_ExitMessage addr 0x28018f0 size 0x18 virtual false final false
 ::StringW get_ExitMessage() ;

/// @brief Method GetContentLengthFrom213Response addr 0x27ff8f4 size 0x140 virtual false final false
 int64_t GetContentLengthFrom213Response(::StringW responseString) ;

/// @brief Method GetLastModifiedFrom213Response addr 0x27ffa34 size 0x360 virtual false final false
 System::DateTime GetLastModifiedFrom213Response(::StringW str) ;

/// @brief Method TryUpdateResponseUri addr 0x27ff580 size 0x358 virtual false final false
 void TryUpdateResponseUri(::StringW str, System::Net::FtpWebRequest request) ;

/// @brief Method TryUpdateContentLength addr 0x27ff488 size 0xec virtual false final false
 void TryUpdateContentLength(::StringW str) ;

/// @brief Method GetLoginDirectory addr 0x27ffd94 size 0xb0 virtual false final false
 ::StringW GetLoginDirectory(::StringW str) ;

/// @brief Method GetPortV4 addr 0x2801240 size 0x1f4 virtual false final false
 int32_t GetPortV4(::StringW responseString) ;

/// @brief Method GetPortV6 addr 0x2801434 size 0x1c0 virtual false final false
 int32_t GetPortV6(::StringW responseString) ;

/// @brief Method CreateFtpListenerSocket addr 0x2800ed0 size 0x17c virtual false final false
 void CreateFtpListenerSocket(System::Net::FtpWebRequest request) ;

/// @brief Method GetPortCommandLine addr 0x280104c size 0x1f4 virtual false final false
 ::StringW GetPortCommandLine(System::Net::FtpWebRequest request) ;

/// @brief Method FormatFtpCommand addr 0x2800c1c size 0x100 virtual false final false
 ::StringW FormatFtpCommand(::StringW command, ::StringW parameter) ;

/// @brief Method CreateFtpDataSocket addr 0x28015f4 size 0x80 virtual false final false
 System::Net::Sockets::Socket CreateFtpDataSocket(System::Net::FtpWebRequest request, System::Net::Sockets::Socket templateSocket) ;

/// @brief Method CheckValid addr 0x2801908 size 0x3b4 virtual true final false
 bool CheckValid(System::Net::ResponseDescription response, ByRef<int32_t> validThrough, ByRef<int32_t> completeLength) ;

/// @brief Method IsFtpDataStreamWriteable addr 0x27fe268 size 0x84 virtual false final false
 System::Net::TriState IsFtpDataStreamWriteable() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__FtpControlStream__GetPathOption, "System.Net", "FtpControlStream/GetPathOption");
NEED_NO_BOX(System::Net::FtpControlStream);
DEFINE_IL2CPP_ARG_TYPE(System::Net::FtpControlStream, "System.Net", "FtpControlStream");
NEED_NO_BOX(System::Net::System__Net__FtpControlStream____c__DisplayClass31_0);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__FtpControlStream____c__DisplayClass31_0, "System.Net", "FtpControlStream/<>c__DisplayClass31_0");
