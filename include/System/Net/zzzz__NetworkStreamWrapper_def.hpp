#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Net::Sockets {
class TcpClient;
}
namespace System::Net {
class IPAddress;
}
namespace System {
class IAsyncResult;
}
namespace System::Net::Sockets {
class NetworkStream;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace System::Net {
class NetworkStreamWrapper;
}
// Type: System.Net::NetworkStreamWrapper
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7905))
// CS Name: System.Net.NetworkStreamWrapper
class CORDL_TYPE NetworkStreamWrapper : public ::System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~NetworkStreamWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkStreamWrapper", modifiers: " const&", def_value: None }]
constexpr NetworkStreamWrapper(NetworkStreamWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkStreamWrapper", modifiers: "&&", def_value: None }]
constexpr NetworkStreamWrapper(NetworkStreamWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetworkStreamWrapper(void* ptr) noexcept : ::System::IO::Stream(ptr) {
}


  constexpr NetworkStreamWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetworkStreamWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetworkStreamWrapper& operator=(NetworkStreamWrapper&& o) noexcept = default;
  constexpr NetworkStreamWrapper& operator=(NetworkStreamWrapper const& o) noexcept = default;
                


// Fields

 ::System::Net::Sockets::TcpClient __declspec(property(get=__get__client, put=__set__client))  _client;

constexpr void __set__client(::System::Net::Sockets::TcpClient value) ;

constexpr ::System::Net::Sockets::TcpClient __get__client() const;

 ::System::Net::Sockets::NetworkStream __declspec(property(get=__get__networkStream, put=__set__networkStream))  _networkStream;

constexpr void __set__networkStream(::System::Net::Sockets::NetworkStream value) ;

constexpr ::System::Net::Sockets::NetworkStream __get__networkStream() const;


// Properties

 bool __declspec(property(get=get_UsingSecureStream))  UsingSecureStream;

 ::System::Net::IPAddress __declspec(property(get=get_ServerAddress))  ServerAddress;

 ::System::Net::Sockets::Socket __declspec(property(get=get_Socket))  Socket;

 ::System::Net::Sockets::NetworkStream __declspec(property(get=get_NetworkStream, put=set_NetworkStream))  NetworkStream;

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 bool __declspec(property(get=get_CanTimeout))  CanTimeout;

 int32_t __declspec(property(get=get_ReadTimeout, put=set_ReadTimeout))  ReadTimeout;

 int32_t __declspec(property(get=get_WriteTimeout, put=set_WriteTimeout))  WriteTimeout;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

// Ctor Parameters [CppParam { name: "client", ty: "::System::Net::Sockets::TcpClient", modifiers: "", def_value: None }]
explicit NetworkStreamWrapper(::System::Net::Sockets::TcpClient client) ;

/// @brief Method .ctor addr 0x27fb5d8 size 0x84 virtual false final false
 void _ctor(::System::Net::Sockets::TcpClient client) ;

/// @brief Method get_UsingSecureStream addr 0x27fe3e8 size 0x7c virtual false final false
 bool get_UsingSecureStream() ;

/// @brief Method get_ServerAddress addr 0x27fdbc4 size 0x94 virtual false final false
 ::System::Net::IPAddress get_ServerAddress() ;

/// @brief Method get_Socket addr 0x27ff8d8 size 0x1c virtual false final false
 ::System::Net::Sockets::Socket get_Socket() ;

/// @brief Method get_NetworkStream addr 0x28098c8 size 0x8 virtual false final false
 ::System::Net::Sockets::NetworkStream get_NetworkStream() ;

/// @brief Method set_NetworkStream addr 0x28098d0 size 0x8 virtual false final false
 void set_NetworkStream(::System::Net::Sockets::NetworkStream value) ;

/// @brief Method get_CanRead addr 0x28098d8 size 0x20 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x28098f8 size 0x20 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x2809918 size 0x20 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_CanTimeout addr 0x2809938 size 0x20 virtual true final false
 bool get_CanTimeout() ;

/// @brief Method get_ReadTimeout addr 0x2809958 size 0x24 virtual true final false
 int32_t get_ReadTimeout() ;

/// @brief Method set_ReadTimeout addr 0x280997c size 0x24 virtual true final false
 void set_ReadTimeout(int32_t value) ;

/// @brief Method get_WriteTimeout addr 0x28099a0 size 0x24 virtual true final false
 int32_t get_WriteTimeout() ;

/// @brief Method set_WriteTimeout addr 0x28099c4 size 0x24 virtual true final false
 void set_WriteTimeout(int32_t value) ;

/// @brief Method get_Length addr 0x28099e8 size 0x20 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x2809a08 size 0x20 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x2809a28 size 0x24 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method Seek addr 0x2809a4c size 0x24 virtual true final false
 int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin) ;

/// @brief Method Read addr 0x2809a70 size 0x24 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method Write addr 0x2809a94 size 0x24 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method Dispose addr 0x2809ab8 size 0xac virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method CloseSocket addr 0x27fcaf4 size 0x38 virtual false final false
 void CloseSocket() ;

/// @brief Method Close addr 0x27fb854 size 0x30 virtual false final false
 void Close(int32_t timeout) ;

/// @brief Method BeginRead addr 0x2809b64 size 0x24 virtual true final false
 ::System::IAsyncResult BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndRead addr 0x2809b88 size 0x24 virtual true final false
 int32_t EndRead(::System::IAsyncResult asyncResult) ;

/// @brief Method ReadAsync addr 0x2809bac size 0x24 virtual true final false
 ::System::Threading::Tasks::Task_1<int32_t> ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method BeginWrite addr 0x2809bd0 size 0x24 virtual true final false
 ::System::IAsyncResult BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndWrite addr 0x2809bf4 size 0x24 virtual true final false
 void EndWrite(::System::IAsyncResult asyncResult) ;

/// @brief Method WriteAsync addr 0x2809c18 size 0x24 virtual true final false
 ::System::Threading::Tasks::Task WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Flush addr 0x2809c3c size 0x24 virtual true final false
 void Flush() ;

/// @brief Method FlushAsync addr 0x2809c60 size 0x24 virtual true final false
 ::System::Threading::Tasks::Task FlushAsync(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SetLength addr 0x2809c84 size 0x24 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method SetSocketTimeoutOption addr 0x28070c8 size 0x50 virtual false final false
 void SetSocketTimeoutOption(int32_t timeout) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::NetworkStreamWrapper);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkStreamWrapper, "System.Net", "NetworkStreamWrapper");
