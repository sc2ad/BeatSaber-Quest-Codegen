#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Net {
class WebOperation;
}
namespace System {
class Exception;
}
namespace System {
struct DateTime;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class WebConnectionTunnel;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Net {
class WebException;
}
namespace System::Net {
class NetworkCredential;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System {
class IDisposable;
}
namespace System::Net {
class ServicePoint;
}
namespace Mono::Net::Security {
class MonoTlsStream;
}
namespace System::Net {
class WebRequestStream;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Net {
class IPEndPoint;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct ____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Net {
class IPAddress;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct ____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Net::Sockets {
class NetworkStream;
}
// Forward declare root types
namespace System::Net {
class WebConnection;
}
namespace System::Net {
class ____System__Net__WebConnection____c;
}
namespace System::Net {
struct ____System__Net__WebConnection___Connect_d__16;
}
namespace System::Net {
struct ____System__Net__WebConnection___CreateStream_d__18;
}
namespace System::Net {
struct ____System__Net__WebConnection___InitConnection_d__19;
}
// Type: ::<>c
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8066))
// CS Name: System.Net.WebConnection::<>c
class CORDL_TYPE ____System__Net__WebConnection____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__Net__WebConnection____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__WebConnection____c", modifiers: " const&", def_value: None }]
constexpr ____System__Net__WebConnection____c(____System__Net__WebConnection____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__WebConnection____c", modifiers: "&&", def_value: None }]
constexpr ____System__Net__WebConnection____c(____System__Net__WebConnection____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__WebConnection____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Net__WebConnection____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Net__WebConnection____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Net__WebConnection____c& operator=(____System__Net__WebConnection____c&& o) noexcept = default;
  constexpr ____System__Net__WebConnection____c& operator=(____System__Net__WebConnection____c const& o) noexcept = default;
                


// Fields

static ::System::Net::____System__Net__WebConnection____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::System::Net::____System__Net__WebConnection____c value) ;

static ::System::Net::____System__Net__WebConnection____c __get___9() ;

static ::System::Func_4<::System::Net::IPEndPoint,::System::AsyncCallback,::bs_hook::Il2CppWrapperType,::System::IAsyncResult> __declspec(property(get=__get___9__16_0, put=__set___9__16_0))  __9__16_0;

static void __set___9__16_0(::System::Func_4<::System::Net::IPEndPoint,::System::AsyncCallback,::bs_hook::Il2CppWrapperType,::System::IAsyncResult> value) ;

static ::System::Func_4<::System::Net::IPEndPoint,::System::AsyncCallback,::bs_hook::Il2CppWrapperType,::System::IAsyncResult> __get___9__16_0() ;

static ::System::Action_1<::System::IAsyncResult> __declspec(property(get=__get___9__16_1, put=__set___9__16_1))  __9__16_1;

static void __set___9__16_1(::System::Action_1<::System::IAsyncResult> value) ;

static ::System::Action_1<::System::IAsyncResult> __get___9__16_1() ;


// Methods

// Ctor Parameters []
explicit ____System__Net__WebConnection____c() ;

/// @brief Method .ctor addr 0x284b67c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Connect>b__16_0 addr 0x284b684 size 0xa0 virtual false final false
 ::System::IAsyncResult _Connect_b__16_0(::System::Net::IPEndPoint targetEndPoint, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method <Connect>b__16_1 addr 0x284b724 size 0xf4 virtual false final false
 void _Connect_b__16_1(::System::IAsyncResult asyncResult) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<Connect>d__16
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8067))
// CS Name: System.Net.WebConnection::<Connect>d__16
struct CORDL_TYPE ____System__Net__WebConnection___Connect_d__16 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebConnection", modifiers: "", def_value: None }, CppParam { name: "operation", ty: "::System::Net::WebOperation", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_connectException_5__2", ty: "::System::Exception", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::ArrayW<::System::Net::IPAddress>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr ____System__Net__WebConnection___Connect_d__16(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebConnection __4__this, ::System::Net::WebOperation operation, ::System::Threading::CancellationToken cancellationToken, ::System::Exception _connectException_5__2, ::ArrayW<::System::Net::IPAddress> __7__wrap2, int32_t __7__wrap3, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;


                    constexpr ____System__Net__WebConnection___Connect_d__16(____System__Net__WebConnection___Connect_d__16 const&) = default;
                    constexpr ____System__Net__WebConnection___Connect_d__16(____System__Net__WebConnection___Connect_d__16&&) = default;
                    constexpr ____System__Net__WebConnection___Connect_d__16& operator=(____System__Net__WebConnection___Connect_d__16 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__WebConnection___Connect_d__16& operator=(____System__Net__WebConnection___Connect_d__16&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__WebConnection___Connect_d__16(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 ::System::Net::WebConnection __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Net::WebConnection value) ;

constexpr ::System::Net::WebConnection __get___4__this() const;

 ::System::Net::WebOperation __declspec(property(get=__get_operation, put=__set_operation))  operation;

constexpr void __set_operation(::System::Net::WebOperation value) ;

constexpr ::System::Net::WebOperation __get_operation() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Exception __declspec(property(get=__get__connectException_5__2, put=__set__connectException_5__2))  _connectException_5__2;

constexpr void __set__connectException_5__2(::System::Exception value) ;

constexpr ::System::Exception __get__connectException_5__2() const;

 ::ArrayW<::System::Net::IPAddress> __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2))  __7__wrap2;

constexpr void __set___7__wrap2(::ArrayW<::System::Net::IPAddress> value) ;

constexpr ::ArrayW<::System::Net::IPAddress> __get___7__wrap2() const;

 int32_t __declspec(property(get=__get___7__wrap3, put=__set___7__wrap3))  __7__wrap3;

constexpr void __set___7__wrap3(int32_t value) ;

constexpr int32_t __get___7__wrap3() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x284b818 size 0x8c0 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x284c11c size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<CreateStream>d__18
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8068))
// CS Name: System.Net.WebConnection::<CreateStream>d__18
struct CORDL_TYPE ____System__Net__WebConnection___CreateStream_d__18 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebConnection", modifiers: "", def_value: None }, CppParam { name: "operation", ty: "::System::Net::WebOperation", modifiers: "", def_value: None }, CppParam { name: "reused", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_stream_5__2", ty: "::System::Net::Sockets::NetworkStream", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream>", modifiers: "", def_value: None }]
constexpr ____System__Net__WebConnection___CreateStream_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::System::Net::WebConnection __4__this, ::System::Net::WebOperation operation, bool reused, ::System::Threading::CancellationToken cancellationToken, ::System::Net::Sockets::NetworkStream _stream_5__2, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream> __u__2) noexcept;


                    constexpr ____System__Net__WebConnection___CreateStream_d__18(____System__Net__WebConnection___CreateStream_d__18 const&) = default;
                    constexpr ____System__Net__WebConnection___CreateStream_d__18(____System__Net__WebConnection___CreateStream_d__18&&) = default;
                    constexpr ____System__Net__WebConnection___CreateStream_d__18& operator=(____System__Net__WebConnection___CreateStream_d__18 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__WebConnection___CreateStream_d__18& operator=(____System__Net__WebConnection___CreateStream_d__18&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x68};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__WebConnection___CreateStream_d__18(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __get___t__builder() const;

 ::System::Net::WebConnection __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Net::WebConnection value) ;

constexpr ::System::Net::WebConnection __get___4__this() const;

 ::System::Net::WebOperation __declspec(property(get=__get_operation, put=__set_operation))  operation;

constexpr void __set_operation(::System::Net::WebOperation value) ;

constexpr ::System::Net::WebOperation __get_operation() const;

 bool __declspec(property(get=__get_reused, put=__set_reused))  reused;

constexpr void __set_reused(bool value) ;

constexpr bool __get_reused() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Net::Sockets::NetworkStream __declspec(property(get=__get__stream_5__2, put=__set__stream_5__2))  _stream_5__2;

constexpr void __set__stream_5__2(::System::Net::Sockets::NetworkStream value) ;

constexpr ::System::Net::Sockets::NetworkStream __get__stream_5__2() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream> value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::IO::Stream> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x284c128 size 0x66c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x284c8a4 size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<InitConnection>d__19
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8069))
// CS Name: System.Net.WebConnection::<InitConnection>d__19
struct CORDL_TYPE ____System__Net__WebConnection___InitConnection_d__19 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebRequestStream>", modifiers: "", def_value: None }, CppParam { name: "operation", ty: "::System::Net::WebOperation", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebConnection", modifiers: "", def_value: None }, CppParam { name: "_reused_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
constexpr ____System__Net__WebConnection___InitConnection_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebRequestStream> __t__builder, ::System::Net::WebOperation operation, ::System::Threading::CancellationToken cancellationToken, ::System::Net::WebConnection __4__this, bool _reused_5__2, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__2) noexcept;


                    constexpr ____System__Net__WebConnection___InitConnection_d__19(____System__Net__WebConnection___InitConnection_d__19 const&) = default;
                    constexpr ____System__Net__WebConnection___InitConnection_d__19(____System__Net__WebConnection___InitConnection_d__19&&) = default;
                    constexpr ____System__Net__WebConnection___InitConnection_d__19& operator=(____System__Net__WebConnection___InitConnection_d__19 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__WebConnection___InitConnection_d__19& operator=(____System__Net__WebConnection___InitConnection_d__19&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__WebConnection___InitConnection_d__19(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebRequestStream> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebRequestStream> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebRequestStream> __get___t__builder() const;

 ::System::Net::WebOperation __declspec(property(get=__get_operation, put=__set_operation))  operation;

constexpr void __set_operation(::System::Net::WebOperation value) ;

constexpr ::System::Net::WebOperation __get_operation() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::Net::WebConnection __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Net::WebConnection value) ;

constexpr ::System::Net::WebConnection __get___4__this() const;

 bool __declspec(property(get=__get__reused_5__2, put=__set__reused_5__2))  _reused_5__2;

constexpr void __set__reused_5__2(bool value) ;

constexpr bool __get__reused_5__2() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x284c8fc size 0x4cc virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x284cf74 size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::WebConnection
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8070))
// CS Name: System.Net.WebConnection
class CORDL_TYPE WebConnection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _InitConnection_d__19 = ::System::Net::____System__Net__WebConnection___InitConnection_d__19;

using _CreateStream_d__18 = ::System::Net::____System__Net__WebConnection___CreateStream_d__18;

using _Connect_d__16 = ::System::Net::____System__Net__WebConnection___Connect_d__16;

using __c = ::System::Net::____System__Net__WebConnection____c;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~WebConnection() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebConnection", modifiers: " const&", def_value: None }]
constexpr WebConnection(WebConnection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebConnection", modifiers: "&&", def_value: None }]
constexpr WebConnection(WebConnection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebConnection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WebConnection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebConnection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebConnection& operator=(WebConnection&& o) noexcept = default;
  constexpr WebConnection& operator=(WebConnection const& o) noexcept = default;
                


// Fields

 ::System::Net::NetworkCredential __declspec(property(get=__get_ntlm_credentials, put=__set_ntlm_credentials))  ntlm_credentials;

constexpr void __set_ntlm_credentials(::System::Net::NetworkCredential value) ;

constexpr ::System::Net::NetworkCredential __get_ntlm_credentials() const;

 bool __declspec(property(get=__get_ntlm_authenticated, put=__set_ntlm_authenticated))  ntlm_authenticated;

constexpr void __set_ntlm_authenticated(bool value) ;

constexpr bool __get_ntlm_authenticated() const;

 bool __declspec(property(get=__get_unsafe_sharing, put=__set_unsafe_sharing))  unsafe_sharing;

constexpr void __set_unsafe_sharing(bool value) ;

constexpr bool __get_unsafe_sharing() const;

 ::System::IO::Stream __declspec(property(get=__get_networkStream, put=__set_networkStream))  networkStream;

constexpr void __set_networkStream(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_networkStream() const;

 ::System::Net::Sockets::Socket __declspec(property(get=__get_socket, put=__set_socket))  socket;

constexpr void __set_socket(::System::Net::Sockets::Socket value) ;

constexpr ::System::Net::Sockets::Socket __get_socket() const;

 ::Mono::Net::Security::MonoTlsStream __declspec(property(get=__get_monoTlsStream, put=__set_monoTlsStream))  monoTlsStream;

constexpr void __set_monoTlsStream(::Mono::Net::Security::MonoTlsStream value) ;

constexpr ::Mono::Net::Security::MonoTlsStream __get_monoTlsStream() const;

 ::System::Net::WebConnectionTunnel __declspec(property(get=__get_tunnel, put=__set_tunnel))  tunnel;

constexpr void __set_tunnel(::System::Net::WebConnectionTunnel value) ;

constexpr ::System::Net::WebConnectionTunnel __get_tunnel() const;

 int32_t __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(int32_t value) ;

constexpr int32_t __get_disposed() const;

 ::System::Net::ServicePoint __declspec(property(get=__get__ServicePoint_k__BackingField, put=__set__ServicePoint_k__BackingField))  _ServicePoint_k__BackingField;

constexpr void __set__ServicePoint_k__BackingField(::System::Net::ServicePoint value) ;

constexpr ::System::Net::ServicePoint __get__ServicePoint_k__BackingField() const;

 ::System::DateTime __declspec(property(get=__get_idleSince, put=__set_idleSince))  idleSince;

constexpr void __set_idleSince(::System::DateTime value) ;

constexpr ::System::DateTime __get_idleSince() const;

 ::System::Net::WebOperation __declspec(property(get=__get_currentOperation, put=__set_currentOperation))  currentOperation;

constexpr void __set_currentOperation(::System::Net::WebOperation value) ;

constexpr ::System::Net::WebOperation __get_currentOperation() const;


// Properties

 ::System::Net::ServicePoint __declspec(property(get=get_ServicePoint))  ServicePoint;

 bool __declspec(property(get=get_Closed))  Closed;

 ::System::DateTime __declspec(property(get=get_IdleSince))  IdleSince;

 bool __declspec(property(get=get_NtlmAuthenticated, put=set_NtlmAuthenticated))  NtlmAuthenticated;

 ::System::Net::NetworkCredential __declspec(property(get=get_NtlmCredential, put=set_NtlmCredential))  NtlmCredential;

 bool __declspec(property(get=get_UnsafeAuthenticatedConnectionSharing, put=set_UnsafeAuthenticatedConnectionSharing))  UnsafeAuthenticatedConnectionSharing;


// Methods

/// @brief Method get_ServicePoint addr 0x284a458 size 0x8 virtual false final false
 ::System::Net::ServicePoint get_ServicePoint() ;

// Ctor Parameters [CppParam { name: "sPoint", ty: "::System::Net::ServicePoint", modifiers: "", def_value: None }]
explicit WebConnection(::System::Net::ServicePoint sPoint) ;

/// @brief Method .ctor addr 0x28492e4 size 0x28 virtual false final false
 void _ctor(::System::Net::ServicePoint sPoint) ;

/// @brief Method CanReuse addr 0x284a460 size 0x30 virtual false final false
 bool CanReuse() ;

/// @brief Method CheckReusable addr 0x284a490 size 0x9c virtual false final false
 bool CheckReusable() ;

/// @brief Method Connect addr 0x284a52c size 0xe4 virtual false final false
 ::System::Threading::Tasks::Task Connect(::System::Net::WebOperation operation, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method CreateStream addr 0x284a610 size 0x120 virtual false final false
 ::System::Threading::Tasks::Task_1<bool> CreateStream(::System::Net::WebOperation operation, bool reused, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method InitConnection addr 0x284a730 size 0x104 virtual false final false
 ::System::Threading::Tasks::Task_1<::System::Net::WebRequestStream> InitConnection(::System::Net::WebOperation operation, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method GetException addr 0x284a834 size 0x188 virtual false final false
static ::System::Net::WebException GetException(::System::Net::WebExceptionStatus status, ::System::Exception error) ;

/// @brief Method ReadLine addr 0x284a9bc size 0x1e8 virtual false final false
static bool ReadLine(::ArrayW<uint8_t> buffer, ByRef<int32_t> start, int32_t max, ByRef<::StringW> output) ;

/// @brief Method CanReuseConnection addr 0x2848cc4 size 0x42c virtual false final false
 bool CanReuseConnection(::System::Net::WebOperation operation) ;

/// @brief Method PrepareSharingNtlm addr 0x284aba4 size 0x31c virtual false final false
 bool PrepareSharingNtlm(::System::Net::WebOperation operation) ;

/// @brief Method Reset addr 0x284aec0 size 0xb8 virtual false final false
 void Reset() ;

/// @brief Method Close addr 0x284af84 size 0xc8 virtual false final false
 void Close(bool reset) ;

/// @brief Method CloseSocket addr 0x284b04c size 0x26c virtual false final false
 void CloseSocket() ;

/// @brief Method get_Closed addr 0x2848910 size 0x10 virtual false final false
 bool get_Closed() ;

/// @brief Method get_IdleSince addr 0x284b2b8 size 0x8 virtual false final false
 ::System::DateTime get_IdleSince() ;

/// @brief Method StartOperation addr 0x28490f0 size 0x1f4 virtual false final false
 bool StartOperation(::System::Net::WebOperation operation, bool reused) ;

/// @brief Method Continue addr 0x2847aac size 0x160 virtual false final false
 bool Continue(::System::Net::WebOperation next) ;

/// @brief Method Dispose addr 0x284b5a8 size 0x38 virtual false final false
 void Dispose(bool disposing) ;

/// @brief Method Dispose addr 0x2848908 size 0x8 virtual true final true
 void Dispose() ;

/// @brief Method ResetNtlm addr 0x284af78 size 0xc virtual false final false
 void ResetNtlm() ;

/// @brief Method get_NtlmAuthenticated addr 0x284b5e0 size 0x8 virtual false final false
 bool get_NtlmAuthenticated() ;

/// @brief Method set_NtlmAuthenticated addr 0x284b5e8 size 0xc virtual false final false
 void set_NtlmAuthenticated(bool value) ;

/// @brief Method get_NtlmCredential addr 0x284b5f4 size 0x8 virtual false final false
 ::System::Net::NetworkCredential get_NtlmCredential() ;

/// @brief Method set_NtlmCredential addr 0x284b5fc size 0x8 virtual false final false
 void set_NtlmCredential(::System::Net::NetworkCredential value) ;

/// @brief Method get_UnsafeAuthenticatedConnectionSharing addr 0x284b604 size 0x8 virtual false final false
 bool get_UnsafeAuthenticatedConnectionSharing() ;

/// @brief Method set_UnsafeAuthenticatedConnectionSharing addr 0x284b60c size 0xc virtual false final false
 void set_UnsafeAuthenticatedConnectionSharing(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::WebConnection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnection, "System.Net", "WebConnection");
NEED_NO_BOX(::System::Net::____System__Net__WebConnection____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__WebConnection____c, "System.Net", "WebConnection/<>c");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__WebConnection___Connect_d__16, "System.Net", "WebConnection/<Connect>d__16");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__WebConnection___CreateStream_d__18, "System.Net", "WebConnection/<CreateStream>d__18");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__WebConnection___InitConnection_d__19, "System.Net", "WebConnection/<InitConnection>d__19");
