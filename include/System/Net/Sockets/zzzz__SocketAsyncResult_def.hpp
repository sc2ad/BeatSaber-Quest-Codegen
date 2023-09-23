#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__IOAsyncResult_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Net::Sockets {
struct SocketFlags;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class AsyncCallback;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Net::Sockets {
struct SocketOperation;
}
namespace System::Net {
class EndPoint;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System {
template<typename T>
struct Memory_1;
}
namespace System::Net {
class IPAddress;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Exception;
}
namespace System::Threading {
class WaitCallback;
}
// Forward declare root types
namespace System::Net::Sockets {
class SocketAsyncResult;
}
namespace System::Net::Sockets {
class System__Net__Sockets__SocketAsyncResult____c;
}
// Type: ::<>c
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8209))
// CS Name: System.Net.Sockets.SocketAsyncResult::<>c
class CORDL_TYPE System__Net__Sockets__SocketAsyncResult____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__Sockets__SocketAsyncResult____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Sockets__SocketAsyncResult____c", modifiers: " const&", def_value: None }]
constexpr System__Net__Sockets__SocketAsyncResult____c(System__Net__Sockets__SocketAsyncResult____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Sockets__SocketAsyncResult____c", modifiers: "&&", def_value: None }]
constexpr System__Net__Sockets__SocketAsyncResult____c(System__Net__Sockets__SocketAsyncResult____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__Sockets__SocketAsyncResult____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__Sockets__SocketAsyncResult____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__Sockets__SocketAsyncResult____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__Sockets__SocketAsyncResult____c& operator=(System__Net__Sockets__SocketAsyncResult____c&& o) noexcept = default;
  constexpr System__Net__Sockets__SocketAsyncResult____c& operator=(System__Net__Sockets__SocketAsyncResult____c const& o) noexcept = default;
                


// Fields

static System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c value) ;

static System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c __get___9() ;

static System::Threading::WaitCallback __declspec(property(get=__get___9__27_0, put=__set___9__27_0))  __9__27_0;

static void __set___9__27_0(System::Threading::WaitCallback value) ;

static System::Threading::WaitCallback __get___9__27_0() ;


// Methods

// Ctor Parameters []
explicit System__Net__Sockets__SocketAsyncResult____c() ;

/// @brief Method .ctor addr 0x276c6a4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Complete>b__27_0 addr 0x276c6ac size 0x78 virtual false final false
 void _Complete_b__27_0(::bs_hook::Il2CppWrapperType state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
// Type: System.Net.Sockets::SocketAsyncResult
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7746))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8210))
// CS Name: System.Net.Sockets.SocketAsyncResult
class CORDL_TYPE SocketAsyncResult : public System::IOAsyncResult {
public:
// Declarations
using __c = System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~SocketAsyncResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "SocketAsyncResult", modifiers: " const&", def_value: None }]
constexpr SocketAsyncResult(SocketAsyncResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SocketAsyncResult", modifiers: "&&", def_value: None }]
constexpr SocketAsyncResult(SocketAsyncResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SocketAsyncResult(void* ptr) noexcept : System::IOAsyncResult(ptr) {
}


  constexpr SocketAsyncResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SocketAsyncResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SocketAsyncResult& operator=(SocketAsyncResult&& o) noexcept = default;
  constexpr SocketAsyncResult& operator=(SocketAsyncResult const& o) noexcept = default;
                


// Fields

 System::Net::Sockets::Socket __declspec(property(get=__get_socket, put=__set_socket))  socket;

constexpr void __set_socket(System::Net::Sockets::Socket value) ;

constexpr System::Net::Sockets::Socket __get_socket() const;

 System::Net::Sockets::SocketOperation __declspec(property(get=__get_operation, put=__set_operation))  operation;

constexpr void __set_operation(System::Net::Sockets::SocketOperation value) ;

constexpr System::Net::Sockets::SocketOperation __get_operation() const;

 System::Exception __declspec(property(get=__get_DelayedException, put=__set_DelayedException))  DelayedException;

constexpr void __set_DelayedException(System::Exception value) ;

constexpr System::Exception __get_DelayedException() const;

 System::Net::EndPoint __declspec(property(get=__get_EndPoint, put=__set_EndPoint))  EndPoint;

constexpr void __set_EndPoint(System::Net::EndPoint value) ;

constexpr System::Net::EndPoint __get_EndPoint() const;

 System::Memory_1<uint8_t> __declspec(property(get=__get_Buffer, put=__set_Buffer))  Buffer;

constexpr void __set_Buffer(System::Memory_1<uint8_t> value) ;

constexpr System::Memory_1<uint8_t> __get_Buffer() const;

 int32_t __declspec(property(get=__get_Offset, put=__set_Offset))  Offset;

constexpr void __set_Offset(int32_t value) ;

constexpr int32_t __get_Offset() const;

 int32_t __declspec(property(get=__get_Size, put=__set_Size))  Size;

constexpr void __set_Size(int32_t value) ;

constexpr int32_t __get_Size() const;

 System::Net::Sockets::SocketFlags __declspec(property(get=__get_SockFlags, put=__set_SockFlags))  SockFlags;

constexpr void __set_SockFlags(System::Net::Sockets::SocketFlags value) ;

constexpr System::Net::Sockets::SocketFlags __get_SockFlags() const;

 System::Net::Sockets::Socket __declspec(property(get=__get_AcceptSocket, put=__set_AcceptSocket))  AcceptSocket;

constexpr void __set_AcceptSocket(System::Net::Sockets::Socket value) ;

constexpr System::Net::Sockets::Socket __get_AcceptSocket() const;

 ::ArrayW<System::Net::IPAddress> __declspec(property(get=__get_Addresses, put=__set_Addresses))  Addresses;

constexpr void __set_Addresses(::ArrayW<System::Net::IPAddress> value) ;

constexpr ::ArrayW<System::Net::IPAddress> __get_Addresses() const;

 int32_t __declspec(property(get=__get_Port, put=__set_Port))  Port;

constexpr void __set_Port(int32_t value) ;

constexpr int32_t __get_Port() const;

 System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>> __declspec(property(get=__get_Buffers, put=__set_Buffers))  Buffers;

constexpr void __set_Buffers(System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>> value) ;

constexpr System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>> __get_Buffers() const;

 bool __declspec(property(get=__get_ReuseSocket, put=__set_ReuseSocket))  ReuseSocket;

constexpr void __set_ReuseSocket(bool value) ;

constexpr bool __get_ReuseSocket() const;

 int32_t __declspec(property(get=__get_CurrentAddress, put=__set_CurrentAddress))  CurrentAddress;

constexpr void __set_CurrentAddress(int32_t value) ;

constexpr int32_t __get_CurrentAddress() const;

 System::Net::Sockets::Socket __declspec(property(get=__get_AcceptedSocket, put=__set_AcceptedSocket))  AcceptedSocket;

constexpr void __set_AcceptedSocket(System::Net::Sockets::Socket value) ;

constexpr System::Net::Sockets::Socket __get_AcceptedSocket() const;

 int32_t __declspec(property(get=__get_Total, put=__set_Total))  Total;

constexpr void __set_Total(int32_t value) ;

constexpr int32_t __get_Total() const;

 int32_t __declspec(property(get=__get_error, put=__set_error))  error;

constexpr void __set_error(int32_t value) ;

constexpr int32_t __get_error() const;

 int32_t __declspec(property(get=__get_EndCalled, put=__set_EndCalled))  EndCalled;

constexpr void __set_EndCalled(int32_t value) ;

constexpr int32_t __get_EndCalled() const;


// Properties

 ::cordl_internals::intptr_t __declspec(property(get=get_Handle))  Handle;

 System::Net::Sockets::SocketError __declspec(property(get=get_ErrorCode))  ErrorCode;


// Methods

/// @brief Method get_Handle addr 0x276c3a8 size 0x64 virtual false final false
 ::cordl_internals::intptr_t get_Handle() ;

// Ctor Parameters []
explicit SocketAsyncResult() ;

/// @brief Method .ctor addr 0x276c04c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x276c40c size 0xb4 virtual false final false
 void Init(System::Net::Sockets::Socket socket, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state, System::Net::Sockets::SocketOperation operation) ;

// Ctor Parameters [CppParam { name: "socket", ty: "System::Net::Sockets::Socket", modifiers: "", def_value: None }, CppParam { name: "callback", ty: "System::AsyncCallback", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "operation", ty: "System::Net::Sockets::SocketOperation", modifiers: "", def_value: None }]
explicit SocketAsyncResult(System::Net::Sockets::Socket socket, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state, System::Net::Sockets::SocketOperation operation) ;

/// @brief Method .ctor addr 0x276c4c0 size 0x38 virtual false final false
 void _ctor(System::Net::Sockets::Socket socket, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state, System::Net::Sockets::SocketOperation operation) ;

/// @brief Method get_ErrorCode addr 0x276c4f8 size 0x80 virtual false final false
 System::Net::Sockets::SocketError get_ErrorCode() ;

/// @brief Method CheckIfThrowDelayedException addr 0x276c578 size 0xa8 virtual false final false
 void CheckIfThrowDelayedException() ;

/// @brief Method CompleteDisposed addr 0x276c620 size 0x4 virtual true final false
 void CompleteDisposed() ;

/// @brief Method Complete addr 0x27682c0 size 0x1f0 virtual false final false
 void Complete() ;

/// @brief Method Complete addr 0x276c624 size 0xc virtual false final false
 void Complete(bool synch) ;

/// @brief Method Complete addr 0x2768d80 size 0x8 virtual false final false
 void Complete(int32_t total) ;

/// @brief Method Complete addr 0x276c630 size 0x10 virtual false final false
 void Complete(System::Exception e, bool synch) ;

/// @brief Method Complete addr 0x2767b38 size 0x8 virtual false final false
 void Complete(System::Exception e) ;

/// @brief Method Complete addr 0x2767b40 size 0x8 virtual false final false
 void Complete(System::Net::Sockets::Socket s) ;

/// @brief Method Complete addr 0x2767d88 size 0xc virtual false final false
 void Complete(System::Net::Sockets::Socket s, int32_t total) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
NEED_NO_BOX(System::Net::Sockets::SocketAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketAsyncResult, "System.Net.Sockets", "SocketAsyncResult");
NEED_NO_BOX(System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::System__Net__Sockets__SocketAsyncResult____c, "System.Net.Sockets", "SocketAsyncResult/<>c");
