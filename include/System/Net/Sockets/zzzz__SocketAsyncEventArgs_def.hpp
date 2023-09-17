#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Net::Sockets {
struct SocketFlags;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class Exception;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System::Net::Sockets {
struct TransmitFileOptions;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Net::Sockets {
class SocketAsyncResult;
}
namespace System::Net::Sockets {
struct SocketAsyncOperation;
}
namespace System::Net {
class EndPoint;
}
namespace System::Net::Sockets {
struct IPPacketInformation;
}
namespace System::Net::Sockets {
class SendPacketsElement;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
template<typename T>
struct Memory_1;
}
// Forward declare root types
namespace System::Net::Sockets {
class SocketAsyncEventArgs;
}
// Type: System.Net.Sockets::SocketAsyncEventArgs
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8208))
// CS Name: System.Net.Sockets.SocketAsyncEventArgs
class CORDL_TYPE SocketAsyncEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~SocketAsyncEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "SocketAsyncEventArgs", modifiers: " const&", def_value: None }]
constexpr SocketAsyncEventArgs(SocketAsyncEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SocketAsyncEventArgs", modifiers: "&&", def_value: None }]
constexpr SocketAsyncEventArgs(SocketAsyncEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SocketAsyncEventArgs(void* ptr) noexcept : ::System::EventArgs(ptr) {
}


  constexpr SocketAsyncEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SocketAsyncEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SocketAsyncEventArgs& operator=(SocketAsyncEventArgs&& o) noexcept = default;
  constexpr SocketAsyncEventArgs& operator=(SocketAsyncEventArgs const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;

 int32_t __declspec(property(get=__get_in_progress, put=__set_in_progress))  in_progress;

constexpr void __set_in_progress(int32_t value) ;

constexpr int32_t __get_in_progress() const;

 ::System::Net::EndPoint __declspec(property(get=__get_remote_ep, put=__set_remote_ep))  remote_ep;

constexpr void __set_remote_ep(::System::Net::EndPoint value) ;

constexpr ::System::Net::EndPoint __get_remote_ep() const;

 ::System::Net::Sockets::Socket __declspec(property(get=__get_current_socket, put=__set_current_socket))  current_socket;

constexpr void __set_current_socket(::System::Net::Sockets::Socket value) ;

constexpr ::System::Net::Sockets::Socket __get_current_socket() const;

 ::System::Net::Sockets::SocketAsyncResult __declspec(property(get=__get_socket_async_result, put=__set_socket_async_result))  socket_async_result;

constexpr void __set_socket_async_result(::System::Net::Sockets::SocketAsyncResult value) ;

constexpr ::System::Net::Sockets::SocketAsyncResult __get_socket_async_result() const;

 ::System::Exception __declspec(property(get=__get__ConnectByNameError_k__BackingField, put=__set__ConnectByNameError_k__BackingField))  _ConnectByNameError_k__BackingField;

constexpr void __set__ConnectByNameError_k__BackingField(::System::Exception value) ;

constexpr ::System::Exception __get__ConnectByNameError_k__BackingField() const;

 ::System::Net::Sockets::Socket __declspec(property(get=__get__AcceptSocket_k__BackingField, put=__set__AcceptSocket_k__BackingField))  _AcceptSocket_k__BackingField;

constexpr void __set__AcceptSocket_k__BackingField(::System::Net::Sockets::Socket value) ;

constexpr ::System::Net::Sockets::Socket __get__AcceptSocket_k__BackingField() const;

 int32_t __declspec(property(get=__get__BytesTransferred_k__BackingField, put=__set__BytesTransferred_k__BackingField))  _BytesTransferred_k__BackingField;

constexpr void __set__BytesTransferred_k__BackingField(int32_t value) ;

constexpr int32_t __get__BytesTransferred_k__BackingField() const;

 bool __declspec(property(get=__get__DisconnectReuseSocket_k__BackingField, put=__set__DisconnectReuseSocket_k__BackingField))  _DisconnectReuseSocket_k__BackingField;

constexpr void __set__DisconnectReuseSocket_k__BackingField(bool value) ;

constexpr bool __get__DisconnectReuseSocket_k__BackingField() const;

 ::System::Net::Sockets::SocketAsyncOperation __declspec(property(get=__get__LastOperation_k__BackingField, put=__set__LastOperation_k__BackingField))  _LastOperation_k__BackingField;

constexpr void __set__LastOperation_k__BackingField(::System::Net::Sockets::SocketAsyncOperation value) ;

constexpr ::System::Net::Sockets::SocketAsyncOperation __get__LastOperation_k__BackingField() const;

 ::System::Net::Sockets::IPPacketInformation __declspec(property(get=__get__ReceiveMessageFromPacketInfo_k__BackingField, put=__set__ReceiveMessageFromPacketInfo_k__BackingField))  _ReceiveMessageFromPacketInfo_k__BackingField;

constexpr void __set__ReceiveMessageFromPacketInfo_k__BackingField(::System::Net::Sockets::IPPacketInformation value) ;

constexpr ::System::Net::Sockets::IPPacketInformation __get__ReceiveMessageFromPacketInfo_k__BackingField() const;

 ::ArrayW<::System::Net::Sockets::SendPacketsElement> __declspec(property(get=__get__SendPacketsElements_k__BackingField, put=__set__SendPacketsElements_k__BackingField))  _SendPacketsElements_k__BackingField;

constexpr void __set__SendPacketsElements_k__BackingField(::ArrayW<::System::Net::Sockets::SendPacketsElement> value) ;

constexpr ::ArrayW<::System::Net::Sockets::SendPacketsElement> __get__SendPacketsElements_k__BackingField() const;

 ::System::Net::Sockets::TransmitFileOptions __declspec(property(get=__get__SendPacketsFlags_k__BackingField, put=__set__SendPacketsFlags_k__BackingField))  _SendPacketsFlags_k__BackingField;

constexpr void __set__SendPacketsFlags_k__BackingField(::System::Net::Sockets::TransmitFileOptions value) ;

constexpr ::System::Net::Sockets::TransmitFileOptions __get__SendPacketsFlags_k__BackingField() const;

 int32_t __declspec(property(get=__get__SendPacketsSendSize_k__BackingField, put=__set__SendPacketsSendSize_k__BackingField))  _SendPacketsSendSize_k__BackingField;

constexpr void __set__SendPacketsSendSize_k__BackingField(int32_t value) ;

constexpr int32_t __get__SendPacketsSendSize_k__BackingField() const;

 ::System::Net::Sockets::SocketError __declspec(property(get=__get__SocketError_k__BackingField, put=__set__SocketError_k__BackingField))  _SocketError_k__BackingField;

constexpr void __set__SocketError_k__BackingField(::System::Net::Sockets::SocketError value) ;

constexpr ::System::Net::Sockets::SocketError __get__SocketError_k__BackingField() const;

 ::System::Net::Sockets::SocketFlags __declspec(property(get=__get__SocketFlags_k__BackingField, put=__set__SocketFlags_k__BackingField))  _SocketFlags_k__BackingField;

constexpr void __set__SocketFlags_k__BackingField(::System::Net::Sockets::SocketFlags value) ;

constexpr ::System::Net::Sockets::SocketFlags __get__SocketFlags_k__BackingField() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__UserToken_k__BackingField, put=__set__UserToken_k__BackingField))  _UserToken_k__BackingField;

constexpr void __set__UserToken_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__UserToken_k__BackingField() const;

 ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs> __declspec(property(get=__get_Completed, put=__set_Completed))  Completed;

constexpr void __set_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs> value) ;

constexpr ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs> __get_Completed() const;

 ::System::Memory_1<uint8_t> __declspec(property(get=__get__buffer, put=__set__buffer))  _buffer;

constexpr void __set__buffer(::System::Memory_1<uint8_t> value) ;

constexpr ::System::Memory_1<uint8_t> __get__buffer() const;

 int32_t __declspec(property(get=__get__offset, put=__set__offset))  _offset;

constexpr void __set__offset(int32_t value) ;

constexpr int32_t __get__offset() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 bool __declspec(property(get=__get__bufferIsExplicitArray, put=__set__bufferIsExplicitArray))  _bufferIsExplicitArray;

constexpr void __set__bufferIsExplicitArray(bool value) ;

constexpr bool __get__bufferIsExplicitArray() const;

 ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>> __declspec(property(get=__get__bufferList, put=__set__bufferList))  _bufferList;

constexpr void __set__bufferList(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>> value) ;

constexpr ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>> __get__bufferList() const;

 ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>> __declspec(property(get=__get__bufferListInternal, put=__set__bufferListInternal))  _bufferListInternal;

constexpr void __set__bufferListInternal(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>> value) ;

constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>> __get__bufferListInternal() const;


// Properties

 ::System::Net::Sockets::Socket __declspec(property(get=get_AcceptSocket, put=set_AcceptSocket))  AcceptSocket;

 int32_t __declspec(property(get=get_BytesTransferred, put=set_BytesTransferred))  BytesTransferred;

 ::System::Net::Sockets::SocketAsyncOperation __declspec(property(put=set_LastOperation))  LastOperation;

 ::System::Net::EndPoint __declspec(property(put=set_RemoteEndPoint))  RemoteEndPoint;

 int32_t __declspec(property(put=set_SendPacketsSendSize))  SendPacketsSendSize;

 ::System::Net::Sockets::SocketError __declspec(property(get=get_SocketError, put=set_SocketError))  SocketError;

 ::System::Net::Sockets::SocketFlags __declspec(property(put=set_SocketFlags))  SocketFlags;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_UserToken, put=set_UserToken))  UserToken;

 ::System::Net::Sockets::Socket __declspec(property(get=get_CurrentSocket))  CurrentSocket;

 ::System::Memory_1<uint8_t> __declspec(property(get=get_MemoryBuffer))  MemoryBuffer;

 int32_t __declspec(property(get=get_Offset))  Offset;

 int32_t __declspec(property(get=get_Count))  Count;

 ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>> __declspec(property(get=get_BufferList))  BufferList;


// Methods

/// @brief Method get_AcceptSocket addr 0x276bdf4 size 0x8 virtual false final false
 ::System::Net::Sockets::Socket get_AcceptSocket() ;

/// @brief Method set_AcceptSocket addr 0x276bdfc size 0x8 virtual false final false
 void set_AcceptSocket(::System::Net::Sockets::Socket value) ;

/// @brief Method get_BytesTransferred addr 0x276be04 size 0x8 virtual false final false
 int32_t get_BytesTransferred() ;

/// @brief Method set_BytesTransferred addr 0x276be0c size 0x8 virtual false final false
 void set_BytesTransferred(int32_t value) ;

/// @brief Method set_LastOperation addr 0x276be14 size 0x8 virtual false final false
 void set_LastOperation(::System::Net::Sockets::SocketAsyncOperation value) ;

/// @brief Method set_RemoteEndPoint addr 0x276be1c size 0x8 virtual false final false
 void set_RemoteEndPoint(::System::Net::EndPoint value) ;

/// @brief Method set_SendPacketsSendSize addr 0x276be24 size 0x8 virtual false final false
 void set_SendPacketsSendSize(int32_t value) ;

/// @brief Method get_SocketError addr 0x276be2c size 0x8 virtual false final false
 ::System::Net::Sockets::SocketError get_SocketError() ;

/// @brief Method set_SocketError addr 0x276be34 size 0x8 virtual false final false
 void set_SocketError(::System::Net::Sockets::SocketError value) ;

/// @brief Method set_SocketFlags addr 0x276be3c size 0x8 virtual false final false
 void set_SocketFlags(::System::Net::Sockets::SocketFlags value) ;

/// @brief Method get_UserToken addr 0x276be44 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_UserToken() ;

/// @brief Method set_UserToken addr 0x276be4c size 0x8 virtual false final false
 void set_UserToken(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method add_Completed addr 0x276be54 size 0xb0 virtual false final false
 void add_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs> value) ;

/// @brief Method remove_Completed addr 0x276bf04 size 0xb0 virtual false final false
 void remove_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs> value) ;

// Ctor Parameters []
explicit SocketAsyncEventArgs() ;

/// @brief Method .ctor addr 0x276bfb4 size 0x98 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "flowExecutionContext", ty: "bool", modifiers: "", def_value: None }]
explicit SocketAsyncEventArgs(bool flowExecutionContext) ;

/// @brief Method .ctor addr 0x276c054 size 0x8c virtual false final false
 void _ctor(bool flowExecutionContext) ;

/// @brief Method Finalize addr 0x276c0e0 size 0x10 virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x276c0f0 size 0x14 virtual false final false
 void Dispose(bool disposing) ;

/// @brief Method Dispose addr 0x276c104 size 0x64 virtual true final true
 void Dispose() ;

/// @brief Method SetBytesTransferred addr 0x2768ad0 size 0x8 virtual false final false
 void SetBytesTransferred(int32_t value) ;

/// @brief Method get_CurrentSocket addr 0x276c168 size 0x8 virtual false final false
 ::System::Net::Sockets::Socket get_CurrentSocket() ;

/// @brief Method SetCurrentSocket addr 0x276c170 size 0x8 virtual false final false
 void SetCurrentSocket(::System::Net::Sockets::Socket socket) ;

/// @brief Method SetLastOperation addr 0x276c178 size 0xc8 virtual false final false
 void SetLastOperation(::System::Net::Sockets::SocketAsyncOperation op) ;

/// @brief Method Complete_internal addr 0x276c240 size 0x28 virtual false final false
 void Complete_internal() ;

/// @brief Method OnCompleted addr 0x276c268 size 0x28 virtual true final false
 void OnCompleted(::System::Net::Sockets::SocketAsyncEventArgs e) ;

/// @brief Method get_MemoryBuffer addr 0x276c290 size 0xc virtual false final false
 ::System::Memory_1<uint8_t> get_MemoryBuffer() ;

/// @brief Method get_Offset addr 0x276c29c size 0x8 virtual false final false
 int32_t get_Offset() ;

/// @brief Method get_Count addr 0x276c2a4 size 0x8 virtual false final false
 int32_t get_Count() ;

/// @brief Method get_BufferList addr 0x276c2ac size 0x8 virtual false final false
 ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>> get_BufferList() ;

/// @brief Method SetBuffer addr 0x276c2b4 size 0xf4 virtual false final false
 void SetBuffer(::System::Memory_1<uint8_t> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Sockets::SocketAsyncEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketAsyncEventArgs, "System.Net.Sockets", "SocketAsyncEventArgs");
