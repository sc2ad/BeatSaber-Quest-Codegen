#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Net {
class IPEndPoint;
}
namespace System::Net::Sockets {
class SocketAsyncEventArgs;
}
namespace System::Net {
class HttpListenerContext;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class HttpConnection;
}
namespace System::Net {
class HttpListener;
}
namespace System {
class Uri;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Net {
class ListenerPrefix;
}
// Forward declare root types
namespace System::Net {
class EndPointListener;
}
// Type: System.Net::EndPointListener
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8015))
// CS Name: System.Net.EndPointListener
class CORDL_TYPE EndPointListener : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~EndPointListener() = default;

// Ctor Parameters [CppParam { name: "", ty: "EndPointListener", modifiers: " const&", def_value: None }]
constexpr EndPointListener(EndPointListener const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EndPointListener", modifiers: "&&", def_value: None }]
constexpr EndPointListener(EndPointListener&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EndPointListener(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EndPointListener& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EndPointListener& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EndPointListener& operator=(EndPointListener&& o) noexcept = default;
  constexpr EndPointListener& operator=(EndPointListener const& o) noexcept = default;
                


// Fields

 ::System::Net::HttpListener __declspec(property(get=__get_listener, put=__set_listener))  listener;

constexpr void __set_listener(::System::Net::HttpListener value) ;

constexpr ::System::Net::HttpListener __get_listener() const;

 ::System::Net::IPEndPoint __declspec(property(get=__get_endpoint, put=__set_endpoint))  endpoint;

constexpr void __set_endpoint(::System::Net::IPEndPoint value) ;

constexpr ::System::Net::IPEndPoint __get_endpoint() const;

 ::System::Net::Sockets::Socket __declspec(property(get=__get_sock, put=__set_sock))  sock;

constexpr void __set_sock(::System::Net::Sockets::Socket value) ;

constexpr ::System::Net::Sockets::Socket __get_sock() const;

 ::System::Collections::Hashtable __declspec(property(get=__get_prefixes, put=__set_prefixes))  prefixes;

constexpr void __set_prefixes(::System::Collections::Hashtable value) ;

constexpr ::System::Collections::Hashtable __get_prefixes() const;

 ::System::Collections::ArrayList __declspec(property(get=__get_unhandled, put=__set_unhandled))  unhandled;

constexpr void __set_unhandled(::System::Collections::ArrayList value) ;

constexpr ::System::Collections::ArrayList __get_unhandled() const;

 ::System::Collections::ArrayList __declspec(property(get=__get_all, put=__set_all))  all;

constexpr void __set_all(::System::Collections::ArrayList value) ;

constexpr ::System::Collections::ArrayList __get_all() const;

 ::System::Security::Cryptography::X509Certificates::X509Certificate __declspec(property(get=__get_cert, put=__set_cert))  cert;

constexpr void __set_cert(::System::Security::Cryptography::X509Certificates::X509Certificate value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate __get_cert() const;

 bool __declspec(property(get=__get_secure, put=__set_secure))  secure;

constexpr void __set_secure(bool value) ;

constexpr bool __get_secure() const;

 ::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection,::System::Net::HttpConnection> __declspec(property(get=__get_unregistered, put=__set_unregistered))  unregistered;

constexpr void __set_unregistered(::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection,::System::Net::HttpConnection> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Net::HttpConnection,::System::Net::HttpConnection> __get_unregistered() const;


// Properties

 ::System::Net::HttpListener __declspec(property(get=get_Listener))  Listener;


// Methods

// Ctor Parameters [CppParam { name: "listener", ty: "::System::Net::HttpListener", modifiers: "", def_value: None }, CppParam { name: "addr", ty: "::System::Net::IPAddress", modifiers: "", def_value: None }, CppParam { name: "port", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "secure", ty: "bool", modifiers: "", def_value: None }]
explicit EndPointListener(::System::Net::HttpListener listener, ::System::Net::IPAddress addr, int32_t port, bool secure) ;

/// @brief Method .ctor addr 0x282e0ec size 0x244 virtual false final false
 void _ctor(::System::Net::HttpListener listener, ::System::Net::IPAddress addr, int32_t port, bool secure) ;

/// @brief Method get_Listener addr 0x282e884 size 0x8 virtual false final false
 ::System::Net::HttpListener get_Listener() ;

/// @brief Method Accept addr 0x282e73c size 0x148 virtual false final false
static void Accept(::System::Net::Sockets::Socket socket, ::System::Net::Sockets::SocketAsyncEventArgs e, ByRef<::System::Net::Sockets::Socket> accepted) ;

/// @brief Method ProcessAccept addr 0x282e88c size 0x24c virtual false final false
static void ProcessAccept(::System::Net::Sockets::SocketAsyncEventArgs args) ;

/// @brief Method OnAccept addr 0x282eee0 size 0x8 virtual false final false
static void OnAccept(::bs_hook::Il2CppWrapperType sender, ::System::Net::Sockets::SocketAsyncEventArgs e) ;

/// @brief Method RemoveConnection addr 0x282eee8 size 0x100 virtual false final false
 void RemoveConnection(::System::Net::HttpConnection conn) ;

/// @brief Method BindContext addr 0x282efe8 size 0x54 virtual false final false
 bool BindContext(::System::Net::HttpListenerContext context) ;

/// @brief Method UnbindContext addr 0x282f68c size 0x2c virtual false final false
 void UnbindContext(::System::Net::HttpListenerContext context) ;

/// @brief Method SearchListener addr 0x282f03c size 0x650 virtual false final false
 ::System::Net::HttpListener SearchListener(::System::Uri uri, ByRef<::System::Net::ListenerPrefix> prefix) ;

/// @brief Method MatchFromList addr 0x282f880 size 0x334 virtual false final false
 ::System::Net::HttpListener MatchFromList(::StringW host, ::StringW path, ::System::Collections::ArrayList list, ByRef<::System::Net::ListenerPrefix> prefix) ;

/// @brief Method AddSpecial addr 0x282fbb4 size 0x364 virtual false final false
 void AddSpecial(::System::Collections::ArrayList coll, ::System::Net::ListenerPrefix prefix) ;

/// @brief Method RemoveSpecial addr 0x282ff18 size 0xf0 virtual false final false
 bool RemoveSpecial(::System::Collections::ArrayList coll, ::System::Net::ListenerPrefix prefix) ;

/// @brief Method CheckIfRemove addr 0x2830008 size 0xcc virtual false final false
 void CheckIfRemove() ;

/// @brief Method Close addr 0x2830334 size 0x2b8 virtual false final false
 void Close() ;

/// @brief Method AddPrefix addr 0x2830854 size 0x380 virtual false final false
 void AddPrefix(::System::Net::ListenerPrefix prefix, ::System::Net::HttpListener listener) ;

/// @brief Method RemovePrefix addr 0x2830bd4 size 0x2a0 virtual false final false
 void RemovePrefix(::System::Net::ListenerPrefix prefix, ::System::Net::HttpListener listener) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::EndPointListener);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::EndPointListener, "System.Net", "EndPointListener");
