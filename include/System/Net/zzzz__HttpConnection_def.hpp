#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class AsyncCallback;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace System {
class IAsyncResult;
}
namespace System::Net {
class ResponseStream;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Threading {
class Timer;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class HttpListenerContext;
}
namespace System::Net {
struct System__Net__HttpConnection__InputState;
}
namespace System::Net {
class RequestStream;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Net {
class EndPointListener;
}
namespace System::Net {
struct System__Net__HttpConnection__LineState;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Net {
class HttpListener;
}
namespace System::Net {
class ListenerPrefix;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace System::Net {
struct System__Net__HttpConnection__InputState;
}
namespace System::Net {
struct System__Net__HttpConnection__LineState;
}
namespace System::Net {
class HttpConnection;
}
// Type: ::InputState
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8019))
// CS Name: System.Net.HttpConnection::InputState
struct CORDL_TYPE System__Net__HttpConnection__InputState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Net__HttpConnection__InputState(int32_t value__) noexcept;


                    constexpr System__Net__HttpConnection__InputState(System__Net__HttpConnection__InputState const&) = default;
                    constexpr System__Net__HttpConnection__InputState(System__Net__HttpConnection__InputState&&) = default;
                    constexpr System__Net__HttpConnection__InputState& operator=(System__Net__HttpConnection__InputState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__HttpConnection__InputState& operator=(System__Net__HttpConnection__InputState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__HttpConnection__InputState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Net__HttpConnection__InputState_Unwrapped : int32_t {
__RequestLine = 0,
__Headers = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Net__HttpConnection__InputState_Unwrapped () const noexcept {
return std::bit_cast<__System__Net__HttpConnection__InputState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field RequestLine offset 0
static System::Net::System__Net__HttpConnection__InputState const RequestLine;

/// @brief Field Headers offset 0
static System::Net::System__Net__HttpConnection__InputState const Headers;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::LineState
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8020))
// CS Name: System.Net.HttpConnection::LineState
struct CORDL_TYPE System__Net__HttpConnection__LineState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Net__HttpConnection__LineState(int32_t value__) noexcept;


                    constexpr System__Net__HttpConnection__LineState(System__Net__HttpConnection__LineState const&) = default;
                    constexpr System__Net__HttpConnection__LineState(System__Net__HttpConnection__LineState&&) = default;
                    constexpr System__Net__HttpConnection__LineState& operator=(System__Net__HttpConnection__LineState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__HttpConnection__LineState& operator=(System__Net__HttpConnection__LineState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__HttpConnection__LineState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Net__HttpConnection__LineState_Unwrapped : int32_t {
__None = 0,
__CR = 1,
__LF = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Net__HttpConnection__LineState_Unwrapped () const noexcept {
return std::bit_cast<__System__Net__HttpConnection__LineState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Net::System__Net__HttpConnection__LineState const None;

/// @brief Field CR offset 0
static System::Net::System__Net__HttpConnection__LineState const CR;

/// @brief Field LF offset 0
static System::Net::System__Net__HttpConnection__LineState const LF;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::HttpConnection
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8021))
// CS Name: System.Net.HttpConnection
class CORDL_TYPE HttpConnection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using LineState = System::Net::System__Net__HttpConnection__LineState;

using InputState = System::Net::System__Net__HttpConnection__InputState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~HttpConnection() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpConnection", modifiers: " const&", def_value: None }]
constexpr HttpConnection(HttpConnection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpConnection", modifiers: "&&", def_value: None }]
constexpr HttpConnection(HttpConnection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpConnection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpConnection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpConnection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpConnection& operator=(HttpConnection&& o) noexcept = default;
  constexpr HttpConnection& operator=(HttpConnection const& o) noexcept = default;
                


// Fields

static System::AsyncCallback __declspec(property(get=__get_onread_cb, put=__set_onread_cb))  onread_cb;

static void __set_onread_cb(System::AsyncCallback value) ;

static System::AsyncCallback __get_onread_cb() ;

 System::Net::Sockets::Socket __declspec(property(get=__get_sock, put=__set_sock))  sock;

constexpr void __set_sock(System::Net::Sockets::Socket value) ;

constexpr System::Net::Sockets::Socket __get_sock() const;

 System::IO::Stream __declspec(property(get=__get_stream, put=__set_stream))  stream;

constexpr void __set_stream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_stream() const;

 System::Net::EndPointListener __declspec(property(get=__get_epl, put=__set_epl))  epl;

constexpr void __set_epl(System::Net::EndPointListener value) ;

constexpr System::Net::EndPointListener __get_epl() const;

 System::IO::MemoryStream __declspec(property(get=__get_ms, put=__set_ms))  ms;

constexpr void __set_ms(System::IO::MemoryStream value) ;

constexpr System::IO::MemoryStream __get_ms() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 System::Net::HttpListenerContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(System::Net::HttpListenerContext value) ;

constexpr System::Net::HttpListenerContext __get_context() const;

 System::Text::StringBuilder __declspec(property(get=__get_current_line, put=__set_current_line))  current_line;

constexpr void __set_current_line(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get_current_line() const;

 System::Net::ListenerPrefix __declspec(property(get=__get_prefix, put=__set_prefix))  prefix;

constexpr void __set_prefix(System::Net::ListenerPrefix value) ;

constexpr System::Net::ListenerPrefix __get_prefix() const;

 System::Net::RequestStream __declspec(property(get=__get_i_stream, put=__set_i_stream))  i_stream;

constexpr void __set_i_stream(System::Net::RequestStream value) ;

constexpr System::Net::RequestStream __get_i_stream() const;

 System::Net::ResponseStream __declspec(property(get=__get_o_stream, put=__set_o_stream))  o_stream;

constexpr void __set_o_stream(System::Net::ResponseStream value) ;

constexpr System::Net::ResponseStream __get_o_stream() const;

 bool __declspec(property(get=__get_chunked, put=__set_chunked))  chunked;

constexpr void __set_chunked(bool value) ;

constexpr bool __get_chunked() const;

 int32_t __declspec(property(get=__get_reuses, put=__set_reuses))  reuses;

constexpr void __set_reuses(int32_t value) ;

constexpr int32_t __get_reuses() const;

 bool __declspec(property(get=__get_context_bound, put=__set_context_bound))  context_bound;

constexpr void __set_context_bound(bool value) ;

constexpr bool __get_context_bound() const;

 bool __declspec(property(get=__get_secure, put=__set_secure))  secure;

constexpr void __set_secure(bool value) ;

constexpr bool __get_secure() const;

 System::Security::Cryptography::X509Certificates::X509Certificate __declspec(property(get=__get_cert, put=__set_cert))  cert;

constexpr void __set_cert(System::Security::Cryptography::X509Certificates::X509Certificate value) ;

constexpr System::Security::Cryptography::X509Certificates::X509Certificate __get_cert() const;

 int32_t __declspec(property(get=__get_s_timeout, put=__set_s_timeout))  s_timeout;

constexpr void __set_s_timeout(int32_t value) ;

constexpr int32_t __get_s_timeout() const;

 System::Threading::Timer __declspec(property(get=__get_timer, put=__set_timer))  timer;

constexpr void __set_timer(System::Threading::Timer value) ;

constexpr System::Threading::Timer __get_timer() const;

 System::Net::IPEndPoint __declspec(property(get=__get_local_ep, put=__set_local_ep))  local_ep;

constexpr void __set_local_ep(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_local_ep() const;

 System::Net::HttpListener __declspec(property(get=__get_last_listener, put=__set_last_listener))  last_listener;

constexpr void __set_last_listener(System::Net::HttpListener value) ;

constexpr System::Net::HttpListener __get_last_listener() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_client_cert_errors, put=__set_client_cert_errors))  client_cert_errors;

constexpr void __set_client_cert_errors(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_client_cert_errors() const;

 System::Security::Cryptography::X509Certificates::X509Certificate2 __declspec(property(get=__get_client_cert, put=__set_client_cert))  client_cert;

constexpr void __set_client_cert(System::Security::Cryptography::X509Certificates::X509Certificate2 value) ;

constexpr System::Security::Cryptography::X509Certificates::X509Certificate2 __get_client_cert() const;

 System::Net::Security::SslStream __declspec(property(get=__get_ssl_stream, put=__set_ssl_stream))  ssl_stream;

constexpr void __set_ssl_stream(System::Net::Security::SslStream value) ;

constexpr System::Net::Security::SslStream __get_ssl_stream() const;

 System::Net::System__Net__HttpConnection__InputState __declspec(property(get=__get_input_state, put=__set_input_state))  input_state;

constexpr void __set_input_state(System::Net::System__Net__HttpConnection__InputState value) ;

constexpr System::Net::System__Net__HttpConnection__InputState __get_input_state() const;

 System::Net::System__Net__HttpConnection__LineState __declspec(property(get=__get_line_state, put=__set_line_state))  line_state;

constexpr void __set_line_state(System::Net::System__Net__HttpConnection__LineState value) ;

constexpr System::Net::System__Net__HttpConnection__LineState __get_line_state() const;

 int32_t __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(int32_t value) ;

constexpr int32_t __get_position() const;


// Properties

 int32_t __declspec(property(get=get_Reuses))  Reuses;

 System::Net::IPEndPoint __declspec(property(get=get_LocalEndPoint))  LocalEndPoint;

 bool __declspec(property(get=get_IsSecure))  IsSecure;

 System::Net::ListenerPrefix __declspec(property(put=set_Prefix))  Prefix;


// Methods

static System::Net::HttpConnection New_ctor(System::Net::Sockets::Socket sock, System::Net::EndPointListener epl, bool secure, System::Security::Cryptography::X509Certificates::X509Certificate cert) ;

/// @brief Method .ctor addr 0x282ead8 size 0x260 virtual false final false
 void _ctor(System::Net::Sockets::Socket sock, System::Net::EndPointListener epl, bool secure, System::Security::Cryptography::X509Certificates::X509Certificate cert) ;

/// @brief Method Init addr 0x28328a4 size 0xa8 virtual false final false
 void Init() ;

/// @brief Method get_Reuses addr 0x2832a00 size 0x8 virtual false final false
 int32_t get_Reuses() ;

/// @brief Method get_LocalEndPoint addr 0x2832a08 size 0xb8 virtual false final false
 System::Net::IPEndPoint get_LocalEndPoint() ;

/// @brief Method get_IsSecure addr 0x2832ac0 size 0x8 virtual false final false
 bool get_IsSecure() ;

/// @brief Method set_Prefix addr 0x2832ac8 size 0x8 virtual false final false
 void set_Prefix(System::Net::ListenerPrefix value) ;

/// @brief Method OnTimeout addr 0x2832ad0 size 0x18 virtual false final false
 void OnTimeout(::bs_hook::Il2CppWrapperType unused) ;

/// @brief Method BeginReadRequest addr 0x282ed38 size 0x1a8 virtual false final false
 void BeginReadRequest() ;

/// @brief Method GetRequestStream addr 0x2832c20 size 0x14c virtual false final false
 System::Net::RequestStream GetRequestStream(bool chunked, int64_t contentlength) ;

/// @brief Method GetResponseStream addr 0x2832e48 size 0xc8 virtual false final false
 System::Net::ResponseStream GetResponseStream() ;

/// @brief Method OnRead addr 0x2832f10 size 0xd4 virtual false final false
static void OnRead(System::IAsyncResult ares) ;

/// @brief Method OnReadInternal addr 0x2832fe4 size 0x338 virtual false final false
 void OnReadInternal(System::IAsyncResult ares) ;

/// @brief Method RemoveConnection addr 0x2833c24 size 0x40 virtual false final false
 void RemoveConnection() ;

/// @brief Method ProcessInput addr 0x283333c size 0x2bc virtual false final false
 bool ProcessInput(System::IO::MemoryStream ms) ;

/// @brief Method ReadLine addr 0x283401c size 0x178 virtual false final false
 ::StringW ReadLine(::ArrayW<uint8_t> buffer, int32_t offset, int32_t len, ByRef<int32_t> used) ;

/// @brief Method SendError addr 0x282a7b8 size 0x1d8 virtual false final false
 void SendError(::StringW msg, int32_t status) ;

/// @brief Method SendError addr 0x283331c size 0x20 virtual false final false
 void SendError() ;

/// @brief Method Unbind addr 0x2832bf0 size 0x30 virtual false final false
 void Unbind() ;

/// @brief Method CloseSocket addr 0x2832ae8 size 0x108 virtual false final false
 void CloseSocket() ;

/// @brief Method Close addr 0x28305ec size 0x268 virtual false final false
 void Close(bool force_close) ;

/// @brief Method <.ctor>b__24_0 addr 0x2835564 size 0xf4 virtual false final false
 bool __ctor_b__24_0(::bs_hook::Il2CppWrapperType t, System::Security::Cryptography::X509Certificates::X509Certificate c, System::Security::Cryptography::X509Certificates::X509Chain ch, System::Net::Security::SslPolicyErrors e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__HttpConnection__InputState, "System.Net", "HttpConnection/InputState");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__HttpConnection__LineState, "System.Net", "HttpConnection/LineState");
NEED_NO_BOX(System::Net::HttpConnection);
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpConnection, "System.Net", "HttpConnection");
