#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::IO {
struct FileAccess;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
class IAsyncResult;
}
namespace System::Net::Sockets {
struct SocketShutdown;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class AsyncCallback;
}
namespace System {
template<typename T>
struct Memory_1;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace System::Net::Sockets {
class NetworkStream;
}
// Type: System.Net.Sockets::NetworkStream
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8175))
// CS Name: System.Net.Sockets.NetworkStream
class CORDL_TYPE NetworkStream : public ::System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~NetworkStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkStream", modifiers: " const&", def_value: None }]
constexpr NetworkStream(NetworkStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkStream", modifiers: "&&", def_value: None }]
constexpr NetworkStream(NetworkStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetworkStream(void* ptr) noexcept : ::System::IO::Stream(ptr) {
}


  constexpr NetworkStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetworkStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetworkStream& operator=(NetworkStream&& o) noexcept = default;
  constexpr NetworkStream& operator=(NetworkStream const& o) noexcept = default;
                


// Fields

 ::System::Net::Sockets::Socket __declspec(property(get=__get__streamSocket, put=__set__streamSocket))  _streamSocket;

constexpr void __set__streamSocket(::System::Net::Sockets::Socket value) ;

constexpr ::System::Net::Sockets::Socket __get__streamSocket() const;

 bool __declspec(property(get=__get__ownsSocket, put=__set__ownsSocket))  _ownsSocket;

constexpr void __set__ownsSocket(bool value) ;

constexpr bool __get__ownsSocket() const;

 bool __declspec(property(get=__get__readable, put=__set__readable))  _readable;

constexpr void __set__readable(bool value) ;

constexpr bool __get__readable() const;

 bool __declspec(property(get=__get__writeable, put=__set__writeable))  _writeable;

constexpr void __set__writeable(bool value) ;

constexpr bool __get__writeable() const;

 int32_t __declspec(property(get=__get__closeTimeout, put=__set__closeTimeout))  _closeTimeout;

constexpr void __set__closeTimeout(int32_t value) ;

constexpr int32_t __get__closeTimeout() const;

 bool __declspec(property(get=__get__cleanedUp, put=__set__cleanedUp))  _cleanedUp;

constexpr void __set__cleanedUp(bool value) ;

constexpr bool __get__cleanedUp() const;

 int32_t __declspec(property(get=__get__currentReadTimeout, put=__set__currentReadTimeout))  _currentReadTimeout;

constexpr void __set__currentReadTimeout(int32_t value) ;

constexpr int32_t __get__currentReadTimeout() const;

 int32_t __declspec(property(get=__get__currentWriteTimeout, put=__set__currentWriteTimeout))  _currentWriteTimeout;

constexpr void __set__currentWriteTimeout(int32_t value) ;

constexpr int32_t __get__currentWriteTimeout() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 bool __declspec(property(get=get_CanTimeout))  CanTimeout;

 int32_t __declspec(property(get=get_ReadTimeout, put=set_ReadTimeout))  ReadTimeout;

 int32_t __declspec(property(get=get_WriteTimeout, put=set_WriteTimeout))  WriteTimeout;

 bool __declspec(property(get=get_DataAvailable))  DataAvailable;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;

 ::System::Net::Sockets::Socket __declspec(property(get=get_InternalSocket))  InternalSocket;


// Methods

// Ctor Parameters [CppParam { name: "socket", ty: "::System::Net::Sockets::Socket", modifiers: "", def_value: None }]
explicit NetworkStream(::System::Net::Sockets::Socket socket) ;

/// @brief Method .ctor addr 0x285ee8c size 0xc virtual false final false
 void _ctor(::System::Net::Sockets::Socket socket) ;

// Ctor Parameters [CppParam { name: "socket", ty: "::System::Net::Sockets::Socket", modifiers: "", def_value: None }, CppParam { name: "ownsSocket", ty: "bool", modifiers: "", def_value: None }]
explicit NetworkStream(::System::Net::Sockets::Socket socket, bool ownsSocket) ;

/// @brief Method .ctor addr 0x285f048 size 0xc virtual false final false
 void _ctor(::System::Net::Sockets::Socket socket, bool ownsSocket) ;

// Ctor Parameters [CppParam { name: "socket", ty: "::System::Net::Sockets::Socket", modifiers: "", def_value: None }, CppParam { name: "access", ty: "::System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "ownsSocket", ty: "bool", modifiers: "", def_value: None }]
explicit NetworkStream(::System::Net::Sockets::Socket socket, ::System::IO::FileAccess access, bool ownsSocket) ;

/// @brief Method .ctor addr 0x285ee98 size 0x1b0 virtual false final false
 void _ctor(::System::Net::Sockets::Socket socket, ::System::IO::FileAccess access, bool ownsSocket) ;

/// @brief Method get_CanRead addr 0x285f054 size 0x8 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x285f05c size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x285f064 size 0x8 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_CanTimeout addr 0x285f06c size 0x8 virtual true final false
 bool get_CanTimeout() ;

/// @brief Method get_ReadTimeout addr 0x285f074 size 0x88 virtual true final false
 int32_t get_ReadTimeout() ;

/// @brief Method set_ReadTimeout addr 0x285f2a0 size 0x88 virtual true final false
 void set_ReadTimeout(int32_t value) ;

/// @brief Method get_WriteTimeout addr 0x285f4f4 size 0x88 virtual true final false
 int32_t get_WriteTimeout() ;

/// @brief Method set_WriteTimeout addr 0x285f57c size 0x88 virtual true final false
 void set_WriteTimeout(int32_t value) ;

/// @brief Method get_DataAvailable addr 0x285f604 size 0xa8 virtual true final false
 bool get_DataAvailable() ;

/// @brief Method get_Length addr 0x285f768 size 0x50 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x285f7b8 size 0x50 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x285f808 size 0x50 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method Seek addr 0x285f858 size 0x50 virtual true final false
 int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin) ;

/// @brief Method Read addr 0x285f8a8 size 0x30c virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method Read addr 0x285fc1c size 0x274 virtual true final false
 int32_t Read(::System::Span_1<uint8_t> destination) ;

/// @brief Method ReadByte addr 0x285ff80 size 0x84 virtual true final false
 int32_t ReadByte() ;

/// @brief Method Write addr 0x2860004 size 0x30c virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method Write addr 0x2860378 size 0x274 virtual true final false
 void Write(::System::ReadOnlySpan_1<uint8_t> source) ;

/// @brief Method WriteByte addr 0x2860678 size 0x78 virtual true final false
 void WriteByte(uint8_t value) ;

/// @brief Method Close addr 0x28606f0 size 0x68 virtual false final false
 void Close(int32_t timeout) ;

/// @brief Method Dispose addr 0x2860758 size 0x78 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Finalize addr 0x2860860 size 0xa4 virtual true final false
 void Finalize() ;

/// @brief Method BeginRead addr 0x2860904 size 0x324 virtual true final false
 ::System::IAsyncResult BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndRead addr 0x2860ca8 size 0x21c virtual true final false
 int32_t EndRead(::System::IAsyncResult asyncResult) ;

/// @brief Method BeginWrite addr 0x2860f2c size 0x324 virtual true final false
 ::System::IAsyncResult BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndWrite addr 0x28612d0 size 0x21c virtual true final false
 void EndWrite(::System::IAsyncResult asyncResult) ;

/// @brief Method ReadAsync addr 0x2861554 size 0x3c0 virtual true final false
 ::System::Threading::Tasks::Task_1<int32_t> ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReadAsync addr 0x2861bd0 size 0x258 virtual true final false
 ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteAsync addr 0x2861e28 size 0x374 virtual true final false
 ::System::Threading::Tasks::Task WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteAsync addr 0x2862458 size 0x254 virtual true final false
 ::System::Threading::Tasks::ValueTask WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Flush addr 0x28626ac size 0x4 virtual true final false
 void Flush() ;

/// @brief Method FlushAsync addr 0x28626b0 size 0x88 virtual true final false
 ::System::Threading::Tasks::Task FlushAsync(::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SetLength addr 0x2862738 size 0x50 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method SetSocketTimeoutOption addr 0x285f328 size 0x1cc virtual false final false
 void SetSocketTimeoutOption(::System::Net::Sockets::SocketShutdown mode, int32_t timeout, bool silent) ;

/// @brief Method get_InternalSocket addr 0x28628d8 size 0x9c virtual false final false
 ::System::Net::Sockets::Socket get_InternalSocket() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Sockets::NetworkStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::NetworkStream, "System.Net.Sockets", "NetworkStream");
