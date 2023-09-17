#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
class Version;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::IO {
class Stream;
}
namespace System {
class Uri;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Runtime::CompilerServices {
struct ____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct ____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::IO {
class MemoryStream;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace System::Net {
struct ____System__Net__WebConnectionTunnel__NtlmAuthState;
}
namespace System::Net {
class WebConnectionTunnel;
}
namespace System::Net {
struct ____System__Net__WebConnectionTunnel___Initialize_d__42;
}
namespace System::Net {
struct ____System__Net__WebConnectionTunnel___ReadHeaders_d__43;
}
// Type: ::NtlmAuthState
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8072))
// CS Name: System.Net.WebConnectionTunnel::NtlmAuthState
struct CORDL_TYPE ____System__Net__WebConnectionTunnel__NtlmAuthState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Net__WebConnectionTunnel__NtlmAuthState(int32_t value__) noexcept;


                    constexpr ____System__Net__WebConnectionTunnel__NtlmAuthState(____System__Net__WebConnectionTunnel__NtlmAuthState const&) = default;
                    constexpr ____System__Net__WebConnectionTunnel__NtlmAuthState(____System__Net__WebConnectionTunnel__NtlmAuthState&&) = default;
                    constexpr ____System__Net__WebConnectionTunnel__NtlmAuthState& operator=(____System__Net__WebConnectionTunnel__NtlmAuthState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__WebConnectionTunnel__NtlmAuthState& operator=(____System__Net__WebConnectionTunnel__NtlmAuthState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__WebConnectionTunnel__NtlmAuthState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______System__Net__WebConnectionTunnel__NtlmAuthState_Unwrapped : int32_t {
__None = 0,
__Challenge = 1,
__Response = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______System__Net__WebConnectionTunnel__NtlmAuthState_Unwrapped () const noexcept {
return std::bit_cast<______System__Net__WebConnectionTunnel__NtlmAuthState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Net::____System__Net__WebConnectionTunnel__NtlmAuthState const None;

/// @brief Field Challenge offset 0
static ::System::Net::____System__Net__WebConnectionTunnel__NtlmAuthState const Challenge;

/// @brief Field Response offset 0
static ::System::Net::____System__Net__WebConnectionTunnel__NtlmAuthState const Response;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<Initialize>d__42
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8073))
// CS Name: System.Net.WebConnectionTunnel::<Initialize>d__42
struct CORDL_TYPE ____System__Net__WebConnectionTunnel___Initialize_d__42 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebConnectionTunnel", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_have_auth_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_3<::System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>>", modifiers: "", def_value: None }]
constexpr ____System__Net__WebConnectionTunnel___Initialize_d__42(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebConnectionTunnel __4__this, ::System::IO::Stream stream, ::System::Threading::CancellationToken cancellationToken, bool _have_auth_5__2, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_3<::System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>> __u__2) noexcept;


                    constexpr ____System__Net__WebConnectionTunnel___Initialize_d__42(____System__Net__WebConnectionTunnel___Initialize_d__42 const&) = default;
                    constexpr ____System__Net__WebConnectionTunnel___Initialize_d__42(____System__Net__WebConnectionTunnel___Initialize_d__42&&) = default;
                    constexpr ____System__Net__WebConnectionTunnel___Initialize_d__42& operator=(____System__Net__WebConnectionTunnel___Initialize_d__42 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__WebConnectionTunnel___Initialize_d__42& operator=(____System__Net__WebConnectionTunnel___Initialize_d__42&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__WebConnectionTunnel___Initialize_d__42(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::System::Net::WebConnectionTunnel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Net::WebConnectionTunnel value) ;

constexpr ::System::Net::WebConnectionTunnel __get___4__this() const;

 ::System::IO::Stream __declspec(property(get=__get_stream, put=__set_stream))  stream;

constexpr void __set_stream(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_stream() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 bool __declspec(property(get=__get__have_auth_5__2, put=__set__have_auth_5__2))  _have_auth_5__2;

constexpr void __set__have_auth_5__2(bool value) ;

constexpr bool __get__have_auth_5__2() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_3<::System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_3<::System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>> value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_3<::System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x284e264 size 0xdd4 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x284f038 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<ReadHeaders>d__43
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8074))
// CS Name: System.Net.WebConnectionTunnel::<ReadHeaders>d__43
struct CORDL_TYPE ____System__Net__WebConnectionTunnel___ReadHeaders_d__43 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebConnectionTunnel", modifiers: "", def_value: None }, CppParam { name: "_retBuffer_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_status_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_buffer_5__4", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_ms_5__5", ty: "::System::IO::MemoryStream", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr ____System__Net__WebConnectionTunnel___ReadHeaders_d__43(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>> __t__builder, ::System::Threading::CancellationToken cancellationToken, ::System::IO::Stream stream, ::System::Net::WebConnectionTunnel __4__this, ::ArrayW<uint8_t> _retBuffer_5__2, int32_t _status_5__3, ::ArrayW<uint8_t> _buffer_5__4, ::System::IO::MemoryStream _ms_5__5, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;


                    constexpr ____System__Net__WebConnectionTunnel___ReadHeaders_d__43(____System__Net__WebConnectionTunnel___ReadHeaders_d__43 const&) = default;
                    constexpr ____System__Net__WebConnectionTunnel___ReadHeaders_d__43(____System__Net__WebConnectionTunnel___ReadHeaders_d__43&&) = default;
                    constexpr ____System__Net__WebConnectionTunnel___ReadHeaders_d__43& operator=(____System__Net__WebConnectionTunnel___ReadHeaders_d__43 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__WebConnectionTunnel___ReadHeaders_d__43& operator=(____System__Net__WebConnectionTunnel___ReadHeaders_d__43&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x68};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__WebConnectionTunnel___ReadHeaders_d__43(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>> __get___t__builder() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::System::IO::Stream __declspec(property(get=__get_stream, put=__set_stream))  stream;

constexpr void __set_stream(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_stream() const;

 ::System::Net::WebConnectionTunnel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Net::WebConnectionTunnel value) ;

constexpr ::System::Net::WebConnectionTunnel __get___4__this() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__retBuffer_5__2, put=__set__retBuffer_5__2))  _retBuffer_5__2;

constexpr void __set__retBuffer_5__2(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__retBuffer_5__2() const;

 int32_t __declspec(property(get=__get__status_5__3, put=__set__status_5__3))  _status_5__3;

constexpr void __set__status_5__3(int32_t value) ;

constexpr int32_t __get__status_5__3() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__buffer_5__4, put=__set__buffer_5__4))  _buffer_5__4;

constexpr void __set__buffer_5__4(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__buffer_5__4() const;

 ::System::IO::MemoryStream __declspec(property(get=__get__ms_5__5, put=__set__ms_5__5))  _ms_5__5;

constexpr void __set__ms_5__5(::System::IO::MemoryStream value) ;

constexpr ::System::IO::MemoryStream __get__ms_5__5() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x284f044 size 0x7bc virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x284f800 size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::WebConnectionTunnel
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8075))
// CS Name: System.Net.WebConnectionTunnel
class CORDL_TYPE WebConnectionTunnel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _ReadHeaders_d__43 = ::System::Net::____System__Net__WebConnectionTunnel___ReadHeaders_d__43;

using _Initialize_d__42 = ::System::Net::____System__Net__WebConnectionTunnel___Initialize_d__42;

using NtlmAuthState = ::System::Net::____System__Net__WebConnectionTunnel__NtlmAuthState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~WebConnectionTunnel() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebConnectionTunnel", modifiers: " const&", def_value: None }]
constexpr WebConnectionTunnel(WebConnectionTunnel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebConnectionTunnel", modifiers: "&&", def_value: None }]
constexpr WebConnectionTunnel(WebConnectionTunnel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebConnectionTunnel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WebConnectionTunnel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebConnectionTunnel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebConnectionTunnel& operator=(WebConnectionTunnel&& o) noexcept = default;
  constexpr WebConnectionTunnel& operator=(WebConnectionTunnel const& o) noexcept = default;
                


// Fields

 ::System::Net::HttpWebRequest __declspec(property(get=__get__Request_k__BackingField, put=__set__Request_k__BackingField))  _Request_k__BackingField;

constexpr void __set__Request_k__BackingField(::System::Net::HttpWebRequest value) ;

constexpr ::System::Net::HttpWebRequest __get__Request_k__BackingField() const;

 ::System::Uri __declspec(property(get=__get__ConnectUri_k__BackingField, put=__set__ConnectUri_k__BackingField))  _ConnectUri_k__BackingField;

constexpr void __set__ConnectUri_k__BackingField(::System::Uri value) ;

constexpr ::System::Uri __get__ConnectUri_k__BackingField() const;

 ::System::Net::HttpWebRequest __declspec(property(get=__get_connectRequest, put=__set_connectRequest))  connectRequest;

constexpr void __set_connectRequest(::System::Net::HttpWebRequest value) ;

constexpr ::System::Net::HttpWebRequest __get_connectRequest() const;

 ::System::Net::____System__Net__WebConnectionTunnel__NtlmAuthState __declspec(property(get=__get_ntlmAuthState, put=__set_ntlmAuthState))  ntlmAuthState;

constexpr void __set_ntlmAuthState(::System::Net::____System__Net__WebConnectionTunnel__NtlmAuthState value) ;

constexpr ::System::Net::____System__Net__WebConnectionTunnel__NtlmAuthState __get_ntlmAuthState() const;

 bool __declspec(property(get=__get__Success_k__BackingField, put=__set__Success_k__BackingField))  _Success_k__BackingField;

constexpr void __set__Success_k__BackingField(bool value) ;

constexpr bool __get__Success_k__BackingField() const;

 bool __declspec(property(get=__get__CloseConnection_k__BackingField, put=__set__CloseConnection_k__BackingField))  _CloseConnection_k__BackingField;

constexpr void __set__CloseConnection_k__BackingField(bool value) ;

constexpr bool __get__CloseConnection_k__BackingField() const;

 int32_t __declspec(property(get=__get__StatusCode_k__BackingField, put=__set__StatusCode_k__BackingField))  _StatusCode_k__BackingField;

constexpr void __set__StatusCode_k__BackingField(int32_t value) ;

constexpr int32_t __get__StatusCode_k__BackingField() const;

 ::StringW __declspec(property(get=__get__StatusDescription_k__BackingField, put=__set__StatusDescription_k__BackingField))  _StatusDescription_k__BackingField;

constexpr void __set__StatusDescription_k__BackingField(::StringW value) ;

constexpr ::StringW __get__StatusDescription_k__BackingField() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__Challenge_k__BackingField, put=__set__Challenge_k__BackingField))  _Challenge_k__BackingField;

constexpr void __set__Challenge_k__BackingField(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__Challenge_k__BackingField() const;

 ::System::Net::WebHeaderCollection __declspec(property(get=__get__Headers_k__BackingField, put=__set__Headers_k__BackingField))  _Headers_k__BackingField;

constexpr void __set__Headers_k__BackingField(::System::Net::WebHeaderCollection value) ;

constexpr ::System::Net::WebHeaderCollection __get__Headers_k__BackingField() const;

 ::System::Version __declspec(property(get=__get__ProxyVersion_k__BackingField, put=__set__ProxyVersion_k__BackingField))  _ProxyVersion_k__BackingField;

constexpr void __set__ProxyVersion_k__BackingField(::System::Version value) ;

constexpr ::System::Version __get__ProxyVersion_k__BackingField() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__Data_k__BackingField, put=__set__Data_k__BackingField))  _Data_k__BackingField;

constexpr void __set__Data_k__BackingField(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__Data_k__BackingField() const;


// Properties

 ::System::Net::HttpWebRequest __declspec(property(get=get_Request))  Request;

 ::System::Uri __declspec(property(get=get_ConnectUri))  ConnectUri;

 bool __declspec(property(get=get_Success, put=set_Success))  Success;

 bool __declspec(property(get=get_CloseConnection, put=set_CloseConnection))  CloseConnection;

 int32_t __declspec(property(get=get_StatusCode, put=set_StatusCode))  StatusCode;

 ::StringW __declspec(property(put=set_StatusDescription))  StatusDescription;

 ::ArrayW<::StringW> __declspec(property(get=get_Challenge, put=set_Challenge))  Challenge;

 ::System::Net::WebHeaderCollection __declspec(property(get=get_Headers, put=set_Headers))  Headers;

 ::System::Version __declspec(property(get=get_ProxyVersion, put=set_ProxyVersion))  ProxyVersion;

 ::ArrayW<uint8_t> __declspec(property(get=get_Data, put=set_Data))  Data;


// Methods

/// @brief Method get_Request addr 0x284e038 size 0x8 virtual false final false
 ::System::Net::HttpWebRequest get_Request() ;

/// @brief Method get_ConnectUri addr 0x284e040 size 0x8 virtual false final false
 ::System::Uri get_ConnectUri() ;

// Ctor Parameters [CppParam { name: "request", ty: "::System::Net::HttpWebRequest", modifiers: "", def_value: None }, CppParam { name: "connectUri", ty: "::System::Uri", modifiers: "", def_value: None }]
explicit WebConnectionTunnel(::System::Net::HttpWebRequest request, ::System::Uri connectUri) ;

/// @brief Method .ctor addr 0x284c794 size 0x2c virtual false final false
 void _ctor(::System::Net::HttpWebRequest request, ::System::Uri connectUri) ;

/// @brief Method get_Success addr 0x284e048 size 0x8 virtual false final false
 bool get_Success() ;

/// @brief Method set_Success addr 0x284e050 size 0xc virtual false final false
 void set_Success(bool value) ;

/// @brief Method get_CloseConnection addr 0x284e05c size 0x8 virtual false final false
 bool get_CloseConnection() ;

/// @brief Method set_CloseConnection addr 0x284e064 size 0xc virtual false final false
 void set_CloseConnection(bool value) ;

/// @brief Method get_StatusCode addr 0x284e070 size 0x8 virtual false final false
 int32_t get_StatusCode() ;

/// @brief Method set_StatusCode addr 0x284e078 size 0x8 virtual false final false
 void set_StatusCode(int32_t value) ;

/// @brief Method set_StatusDescription addr 0x284e080 size 0x8 virtual false final false
 void set_StatusDescription(::StringW value) ;

/// @brief Method get_Challenge addr 0x284e088 size 0x8 virtual false final false
 ::ArrayW<::StringW> get_Challenge() ;

/// @brief Method set_Challenge addr 0x284e090 size 0x8 virtual false final false
 void set_Challenge(::ArrayW<::StringW> value) ;

/// @brief Method get_Headers addr 0x284e098 size 0x8 virtual false final false
 ::System::Net::WebHeaderCollection get_Headers() ;

/// @brief Method set_Headers addr 0x284e0a0 size 0x8 virtual false final false
 void set_Headers(::System::Net::WebHeaderCollection value) ;

/// @brief Method get_ProxyVersion addr 0x284e0a8 size 0x8 virtual false final false
 ::System::Version get_ProxyVersion() ;

/// @brief Method set_ProxyVersion addr 0x284e0b0 size 0x8 virtual false final false
 void set_ProxyVersion(::System::Version value) ;

/// @brief Method get_Data addr 0x284e0b8 size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_Data() ;

/// @brief Method set_Data addr 0x284e0c0 size 0x8 virtual false final false
 void set_Data(::ArrayW<uint8_t> value) ;

/// @brief Method Initialize addr 0x284c7c0 size 0xe4 virtual false final false
 ::System::Threading::Tasks::Task Initialize(::System::IO::Stream stream, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReadHeaders addr 0x284e0c8 size 0x108 virtual false final false
 ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>> ReadHeaders(::System::IO::Stream stream, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method FlushContents addr 0x284e1d0 size 0x94 virtual false final false
 void FlushContents(::System::IO::Stream stream, int32_t contentLength) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__WebConnectionTunnel__NtlmAuthState, "System.Net", "WebConnectionTunnel/NtlmAuthState");
NEED_NO_BOX(::System::Net::WebConnectionTunnel);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnectionTunnel, "System.Net", "WebConnectionTunnel");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__WebConnectionTunnel___Initialize_d__42, "System.Net", "WebConnectionTunnel/<Initialize>d__42");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__WebConnectionTunnel___ReadHeaders_d__43, "System.Net", "WebConnectionTunnel/<ReadHeaders>d__43");
