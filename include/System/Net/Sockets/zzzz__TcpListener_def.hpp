#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Net {
class IPAddress;
}
namespace System {
class IAsyncResult;
}
namespace System::Net {
class EndPoint;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net::Sockets {
class TcpClient;
}
namespace System {
class AsyncCallback;
}
namespace System::Net::Sockets {
class Socket;
}
// Forward declare root types
namespace System::Net::Sockets {
class TcpListener;
}
// Type: System.Net.Sockets::TcpListener
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8205))
// CS Name: System.Net.Sockets.TcpListener
class CORDL_TYPE TcpListener : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TcpListener() = default;

// Ctor Parameters [CppParam { name: "", ty: "TcpListener", modifiers: " const&", def_value: None }]
constexpr TcpListener(TcpListener const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TcpListener", modifiers: "&&", def_value: None }]
constexpr TcpListener(TcpListener&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TcpListener(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TcpListener& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TcpListener& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TcpListener& operator=(TcpListener&& o) noexcept = default;
  constexpr TcpListener& operator=(TcpListener const& o) noexcept = default;
                


// Fields

 ::System::Net::IPEndPoint __declspec(property(get=__get_m_ServerSocketEP, put=__set_m_ServerSocketEP))  m_ServerSocketEP;

constexpr void __set_m_ServerSocketEP(::System::Net::IPEndPoint value) ;

constexpr ::System::Net::IPEndPoint __get_m_ServerSocketEP() const;

 ::System::Net::Sockets::Socket __declspec(property(get=__get_m_ServerSocket, put=__set_m_ServerSocket))  m_ServerSocket;

constexpr void __set_m_ServerSocket(::System::Net::Sockets::Socket value) ;

constexpr ::System::Net::Sockets::Socket __get_m_ServerSocket() const;

 bool __declspec(property(get=__get_m_Active, put=__set_m_Active))  m_Active;

constexpr void __set_m_Active(bool value) ;

constexpr bool __get_m_Active() const;

 bool __declspec(property(get=__get_m_ExclusiveAddressUse, put=__set_m_ExclusiveAddressUse))  m_ExclusiveAddressUse;

constexpr void __set_m_ExclusiveAddressUse(bool value) ;

constexpr bool __get_m_ExclusiveAddressUse() const;


// Properties

 ::System::Net::EndPoint __declspec(property(get=get_LocalEndpoint))  LocalEndpoint;


// Methods

// Ctor Parameters [CppParam { name: "localaddr", ty: "::System::Net::IPAddress", modifiers: "", def_value: None }, CppParam { name: "port", ty: "int32_t", modifiers: "", def_value: None }]
explicit TcpListener(::System::Net::IPAddress localaddr, int32_t port) ;

/// @brief Method .ctor addr 0x276ad50 size 0x1a0 virtual false final false
 void _ctor(::System::Net::IPAddress localaddr, int32_t port) ;

/// @brief Method get_LocalEndpoint addr 0x276aef0 size 0x30 virtual false final false
 ::System::Net::EndPoint get_LocalEndpoint() ;

/// @brief Method Start addr 0x276af20 size 0x8 virtual false final false
 void Start() ;

/// @brief Method Start addr 0x276af28 size 0x18c virtual false final false
 void Start(int32_t backlog) ;

/// @brief Method Stop addr 0x276b0b4 size 0xc4 virtual false final false
 void Stop() ;

/// @brief Method BeginAcceptTcpClient addr 0x276b178 size 0xb4 virtual false final false
 ::System::IAsyncResult BeginAcceptTcpClient(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndAcceptTcpClient addr 0x276b22c size 0x164 virtual false final false
 ::System::Net::Sockets::TcpClient EndAcceptTcpClient(::System::IAsyncResult asyncResult) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Sockets::TcpListener);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::TcpListener, "System.Net.Sockets", "TcpListener");
