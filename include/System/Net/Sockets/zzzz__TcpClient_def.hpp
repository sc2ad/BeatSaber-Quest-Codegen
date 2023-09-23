#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IDisposable;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Net::Sockets {
class NetworkStream;
}
// Forward declare root types
namespace System::Net::Sockets {
class TcpClient;
}
// Type: System.Net.Sockets::TcpClient
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8204))
// CS Name: System.Net.Sockets.TcpClient
class CORDL_TYPE TcpClient : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TcpClient() = default;

// Ctor Parameters [CppParam { name: "", ty: "TcpClient", modifiers: " const&", def_value: None }]
constexpr TcpClient(TcpClient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TcpClient", modifiers: "&&", def_value: None }]
constexpr TcpClient(TcpClient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TcpClient(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TcpClient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TcpClient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TcpClient& operator=(TcpClient&& o) noexcept = default;
  constexpr TcpClient& operator=(TcpClient const& o) noexcept = default;
                


// Fields

 System::Net::Sockets::Socket __declspec(property(get=__get_m_ClientSocket, put=__set_m_ClientSocket))  m_ClientSocket;

constexpr void __set_m_ClientSocket(System::Net::Sockets::Socket value) ;

constexpr System::Net::Sockets::Socket __get_m_ClientSocket() const;

 bool __declspec(property(get=__get_m_Active, put=__set_m_Active))  m_Active;

constexpr void __set_m_Active(bool value) ;

constexpr bool __get_m_Active() const;

 System::Net::Sockets::NetworkStream __declspec(property(get=__get_m_DataStream, put=__set_m_DataStream))  m_DataStream;

constexpr void __set_m_DataStream(System::Net::Sockets::NetworkStream value) ;

constexpr System::Net::Sockets::NetworkStream __get_m_DataStream() const;

 System::Net::Sockets::AddressFamily __declspec(property(get=__get_m_Family, put=__set_m_Family))  m_Family;

constexpr void __set_m_Family(System::Net::Sockets::AddressFamily value) ;

constexpr System::Net::Sockets::AddressFamily __get_m_Family() const;

 bool __declspec(property(get=__get_m_CleanedUp, put=__set_m_CleanedUp))  m_CleanedUp;

constexpr void __set_m_CleanedUp(bool value) ;

constexpr bool __get_m_CleanedUp() const;


// Properties

 System::Net::Sockets::Socket __declspec(property(get=get_Client, put=set_Client))  Client;

 bool __declspec(property(get=get_Connected))  Connected;


// Methods

// Ctor Parameters []
explicit TcpClient() ;

/// @brief Method .ctor addr 0x2769d0c size 0x20 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "family", ty: "System::Net::Sockets::AddressFamily", modifiers: "", def_value: None }]
explicit TcpClient(System::Net::Sockets::AddressFamily family) ;

/// @brief Method .ctor addr 0x2769d2c size 0x110 virtual false final false
 void _ctor(System::Net::Sockets::AddressFamily family) ;

// Ctor Parameters [CppParam { name: "acceptedSocket", ty: "System::Net::Sockets::Socket", modifiers: "", def_value: None }]
explicit TcpClient(System::Net::Sockets::Socket acceptedSocket) ;

/// @brief Method .ctor addr 0x2769eb0 size 0x44 virtual false final false
 void _ctor(System::Net::Sockets::Socket acceptedSocket) ;

/// @brief Method get_Client addr 0x2769ef4 size 0x8 virtual false final false
 System::Net::Sockets::Socket get_Client() ;

/// @brief Method set_Client addr 0x2769efc size 0x8 virtual false final false
 void set_Client(System::Net::Sockets::Socket value) ;

/// @brief Method get_Connected addr 0x2769f04 size 0x1c virtual false final false
 bool get_Connected() ;

/// @brief Method Connect addr 0x2769f20 size 0x6d0 virtual false final false
 void Connect(::StringW hostname, int32_t port) ;

/// @brief Method Connect addr 0x276a5f0 size 0x10c virtual false final false
 void Connect(System::Net::IPEndPoint remoteEP) ;

/// @brief Method BeginConnect addr 0x276a6fc size 0x6c virtual false final false
 System::IAsyncResult BeginConnect(::StringW host, int32_t port, System::AsyncCallback requestCallback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndConnect addr 0x276a768 size 0x48 virtual false final false
 void EndConnect(System::IAsyncResult asyncResult) ;

/// @brief Method ConnectAsync addr 0x276a7b0 size 0x16c virtual false final false
 System::Threading::Tasks::Task ConnectAsync(::StringW host, int32_t port) ;

/// @brief Method GetStream addr 0x276a91c size 0x14c virtual false final false
 System::Net::Sockets::NetworkStream GetStream() ;

/// @brief Method Close addr 0x276aa68 size 0xa4 virtual false final false
 void Close() ;

/// @brief Method Dispose addr 0x276ab0c size 0x194 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Dispose addr 0x276aca0 size 0x10 virtual true final true
 void Dispose() ;

/// @brief Method Finalize addr 0x276acb0 size 0xa0 virtual true final false
 void Finalize() ;

/// @brief Method initialize addr 0x2769e3c size 0x74 virtual false final false
 void initialize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
NEED_NO_BOX(System::Net::Sockets::TcpClient);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::TcpClient, "System.Net.Sockets", "TcpClient");
