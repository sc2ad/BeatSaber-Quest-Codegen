#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/Security/zzzz__AuthenticatedStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace Mono::Net::Security {
class BufferOffsetSize;
}
namespace Mono::Net::Security {
struct Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Mono::Net::Security {
class BufferOffsetSize2;
}
namespace System::IO {
struct SeekOrigin;
}
namespace Mono::Net::Security {
struct AsyncOperationStatus;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Exception;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace Mono::Net::Security {
class AsyncProtocolRequest;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace Mono::Net::Security {
class MonoSslAuthenticationOptions;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace Mono::Net::Security {
struct Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67;
}
namespace Mono::Net::Security {
class MobileTlsContext;
}
namespace Mono::Net::Security {
struct Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48;
}
namespace System {
class IDisposable;
}
namespace Mono::Net::Security {
struct Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57;
}
namespace Mono::Net::Security {
class Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0;
}
namespace Mono::Net::Security {
struct Mono__Net__Security__MobileAuthenticatedStream__Operation;
}
namespace Mono::Net::Security {
struct Mono__Net__Security__MobileAuthenticatedStream__OperationType;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
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
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace Mono::Net::Security {
class AsyncProtocolResult;
}
// Forward declare root types
namespace Mono::Net::Security {
struct Mono__Net__Security__MobileAuthenticatedStream__Operation;
}
namespace Mono::Net::Security {
struct Mono__Net__Security__MobileAuthenticatedStream__OperationType;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace Mono::Net::Security {
class Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0;
}
namespace Mono::Net::Security {
struct Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66;
}
namespace Mono::Net::Security {
struct Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67;
}
namespace Mono::Net::Security {
struct Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48;
}
namespace Mono::Net::Security {
struct Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57;
}
// Type: ::Operation
namespace Mono::Net::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7680))
// CS Name: Mono.Net.Security.MobileAuthenticatedStream::Operation
struct CORDL_TYPE Mono__Net__Security__MobileAuthenticatedStream__Operation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Mono__Net__Security__MobileAuthenticatedStream__Operation(int32_t value__) noexcept;


                    constexpr Mono__Net__Security__MobileAuthenticatedStream__Operation(Mono__Net__Security__MobileAuthenticatedStream__Operation const&) = default;
                    constexpr Mono__Net__Security__MobileAuthenticatedStream__Operation(Mono__Net__Security__MobileAuthenticatedStream__Operation&&) = default;
                    constexpr Mono__Net__Security__MobileAuthenticatedStream__Operation& operator=(Mono__Net__Security__MobileAuthenticatedStream__Operation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Net__Security__MobileAuthenticatedStream__Operation& operator=(Mono__Net__Security__MobileAuthenticatedStream__Operation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Net__Security__MobileAuthenticatedStream__Operation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Mono__Net__Security__MobileAuthenticatedStream__Operation_Unwrapped : int32_t {
__None = 0,
__Handshake = 1,
__Authenticated = 2,
__Renegotiate = 3,
__Read = 4,
__Write = 5,
__Close = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Mono__Net__Security__MobileAuthenticatedStream__Operation_Unwrapped () const noexcept {
return std::bit_cast<__Mono__Net__Security__MobileAuthenticatedStream__Operation_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__Operation const None;

/// @brief Field Handshake offset 0
static Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__Operation const Handshake;

/// @brief Field Authenticated offset 0
static Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__Operation const Authenticated;

/// @brief Field Renegotiate offset 0
static Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__Operation const Renegotiate;

/// @brief Field Read offset 0
static Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__Operation const Read;

/// @brief Field Write offset 0
static Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__Operation const Write;

/// @brief Field Close offset 0
static Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__Operation const Close;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
// Type: ::OperationType
namespace Mono::Net::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7681))
// CS Name: Mono.Net.Security.MobileAuthenticatedStream::OperationType
struct CORDL_TYPE Mono__Net__Security__MobileAuthenticatedStream__OperationType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Mono__Net__Security__MobileAuthenticatedStream__OperationType(int32_t value__) noexcept;


                    constexpr Mono__Net__Security__MobileAuthenticatedStream__OperationType(Mono__Net__Security__MobileAuthenticatedStream__OperationType const&) = default;
                    constexpr Mono__Net__Security__MobileAuthenticatedStream__OperationType(Mono__Net__Security__MobileAuthenticatedStream__OperationType&&) = default;
                    constexpr Mono__Net__Security__MobileAuthenticatedStream__OperationType& operator=(Mono__Net__Security__MobileAuthenticatedStream__OperationType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Net__Security__MobileAuthenticatedStream__OperationType& operator=(Mono__Net__Security__MobileAuthenticatedStream__OperationType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Net__Security__MobileAuthenticatedStream__OperationType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Mono__Net__Security__MobileAuthenticatedStream__OperationType_Unwrapped : int32_t {
__Read = 0,
__Write = 1,
__Renegotiate = 2,
__Shutdown = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Mono__Net__Security__MobileAuthenticatedStream__OperationType_Unwrapped () const noexcept {
return std::bit_cast<__Mono__Net__Security__MobileAuthenticatedStream__OperationType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Read offset 0
static Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__OperationType const Read;

/// @brief Field Write offset 0
static Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__OperationType const Write;

/// @brief Field Renegotiate offset 0
static Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__OperationType const Renegotiate;

/// @brief Field Shutdown offset 0
static Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__OperationType const Shutdown;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
// Type: ::<ProcessAuthentication>d__48
namespace Mono::Net::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7682))
// CS Name: Mono.Net.Security.MobileAuthenticatedStream::<ProcessAuthentication>d__48
struct CORDL_TYPE Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "options", ty: "Mono::Net::Security::MonoSslAuthenticationOptions", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "Mono::Net::Security::MobileAuthenticatedStream", modifiers: "", def_value: None }, CppParam { name: "runSynchronously", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<Mono::Net::Security::AsyncProtocolResult>", modifiers: "", def_value: None }]
constexpr Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, Mono::Net::Security::MonoSslAuthenticationOptions options, Mono::Net::Security::MobileAuthenticatedStream __4__this, bool runSynchronously, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<Mono::Net::Security::AsyncProtocolResult> __u__1) noexcept;


                    constexpr Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48(Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48 const&) = default;
                    constexpr Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48(Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48&&) = default;
                    constexpr Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48& operator=(Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48& operator=(Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 Mono::Net::Security::MonoSslAuthenticationOptions __declspec(property(get=__get_options, put=__set_options))  options;

constexpr void __set_options(Mono::Net::Security::MonoSslAuthenticationOptions value) ;

constexpr Mono::Net::Security::MonoSslAuthenticationOptions __get_options() const;

 Mono::Net::Security::MobileAuthenticatedStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Mono::Net::Security::MobileAuthenticatedStream value) ;

constexpr Mono::Net::Security::MobileAuthenticatedStream __get___4__this() const;

 bool __declspec(property(get=__get_runSynchronously, put=__set_runSynchronously))  runSynchronously;

constexpr void __set_runSynchronously(bool value) ;

constexpr bool __get_runSynchronously() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<Mono::Net::Security::AsyncProtocolResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<Mono::Net::Security::AsyncProtocolResult> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<Mono::Net::Security::AsyncProtocolResult> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2690cfc size 0x904 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2691600 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
// Type: ::<StartOperation>d__57
namespace Mono::Net::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7683))
// CS Name: Mono.Net.Security.MobileAuthenticatedStream::<StartOperation>d__57
struct CORDL_TYPE Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "Mono::Net::Security::MobileAuthenticatedStream", modifiers: "", def_value: None }, CppParam { name: "type", ty: "Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__OperationType", modifiers: "", def_value: None }, CppParam { name: "asyncRequest", ty: "Mono::Net::Security::AsyncProtocolRequest", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<Mono::Net::Security::AsyncProtocolResult>", modifiers: "", def_value: None }]
constexpr Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, Mono::Net::Security::MobileAuthenticatedStream __4__this, Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__OperationType type, Mono::Net::Security::AsyncProtocolRequest asyncRequest, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<Mono::Net::Security::AsyncProtocolResult> __u__1) noexcept;


                    constexpr Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57(Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57 const&) = default;
                    constexpr Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57(Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57&&) = default;
                    constexpr Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57& operator=(Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57& operator=(Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __get___t__builder() const;

 Mono::Net::Security::MobileAuthenticatedStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Mono::Net::Security::MobileAuthenticatedStream value) ;

constexpr Mono::Net::Security::MobileAuthenticatedStream __get___4__this() const;

 Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__OperationType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__OperationType value) ;

constexpr Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__OperationType __get_type() const;

 Mono::Net::Security::AsyncProtocolRequest __declspec(property(get=__get_asyncRequest, put=__set_asyncRequest))  asyncRequest;

constexpr void __set_asyncRequest(Mono::Net::Security::AsyncProtocolRequest value) ;

constexpr Mono::Net::Security::AsyncProtocolRequest __get_asyncRequest() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<Mono::Net::Security::AsyncProtocolResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<Mono::Net::Security::AsyncProtocolResult> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<Mono::Net::Security::AsyncProtocolResult> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x269160c size 0x758 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2691d64 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
// Type: ::<>c__DisplayClass66_0
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7684))
// CS Name: Mono.Net.Security.MobileAuthenticatedStream::<>c__DisplayClass66_0
class CORDL_TYPE Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0", modifiers: " const&", def_value: None }]
constexpr Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0(Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0", modifiers: "&&", def_value: None }]
constexpr Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0(Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0& operator=(Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0&& o) noexcept = default;
  constexpr Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0& operator=(Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0 const& o) noexcept = default;
                


// Fields

 Mono::Net::Security::MobileAuthenticatedStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Mono::Net::Security::MobileAuthenticatedStream value) ;

constexpr Mono::Net::Security::MobileAuthenticatedStream __get___4__this() const;

 int32_t __declspec(property(get=__get_len, put=__set_len))  len;

constexpr void __set_len(int32_t value) ;

constexpr int32_t __get_len() const;


// Methods

static Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0 New_ctor() ;

/// @brief Method .ctor addr 0x2691dbc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <InnerRead>b__0 addr 0x2691dc4 size 0x48 virtual false final false
 int32_t _InnerRead_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
// Type: ::<InnerRead>d__66
namespace Mono::Net::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7685))
// CS Name: Mono.Net.Security.MobileAuthenticatedStream::<InnerRead>d__66
struct CORDL_TYPE Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "Mono::Net::Security::MobileAuthenticatedStream", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "requestedSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sync", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, Mono::Net::Security::MobileAuthenticatedStream __4__this, System::Threading::CancellationToken cancellationToken, int32_t requestedSize, bool sync, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;


                    constexpr Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66(Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66 const&) = default;
                    constexpr Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66(Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66&&) = default;
                    constexpr Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66& operator=(Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66& operator=(Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __get___t__builder() const;

 Mono::Net::Security::MobileAuthenticatedStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Mono::Net::Security::MobileAuthenticatedStream value) ;

constexpr Mono::Net::Security::MobileAuthenticatedStream __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 int32_t __declspec(property(get=__get_requestedSize, put=__set_requestedSize))  requestedSize;

constexpr void __set_requestedSize(int32_t value) ;

constexpr int32_t __get_requestedSize() const;

 bool __declspec(property(get=__get_sync, put=__set_sync))  sync;

constexpr void __set_sync(bool value) ;

constexpr bool __get_sync() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2691e0c size 0x444 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2692250 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
// Type: ::<InnerWrite>d__67
namespace Mono::Net::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7686))
// CS Name: Mono.Net.Security.MobileAuthenticatedStream::<InnerWrite>d__67
struct CORDL_TYPE Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "Mono::Net::Security::MobileAuthenticatedStream", modifiers: "", def_value: None }, CppParam { name: "sync", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Threading::CancellationToken cancellationToken, Mono::Net::Security::MobileAuthenticatedStream __4__this, bool sync, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;


                    constexpr Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67(Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67 const&) = default;
                    constexpr Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67(Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67&&) = default;
                    constexpr Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67& operator=(Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67& operator=(Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 Mono::Net::Security::MobileAuthenticatedStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Mono::Net::Security::MobileAuthenticatedStream value) ;

constexpr Mono::Net::Security::MobileAuthenticatedStream __get___4__this() const;

 bool __declspec(property(get=__get_sync, put=__set_sync))  sync;

constexpr void __set_sync(bool value) ;

constexpr bool __get_sync() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x26922a8 size 0x290 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2692538 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
// Type: Mono.Net.Security::MobileAuthenticatedStream
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8215))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7687))
// CS Name: Mono.Net.Security.MobileAuthenticatedStream
class CORDL_TYPE MobileAuthenticatedStream : public System::Net::Security::AuthenticatedStream {
public:
// Declarations
using _InnerWrite_d__67 = Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67;

using _InnerRead_d__66 = Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66;

using __c__DisplayClass66_0 = Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0;

using _StartOperation_d__57 = Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57;

using _ProcessAuthentication_d__48 = Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48;

using OperationType = Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__OperationType;

using Operation = Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__Operation;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~MobileAuthenticatedStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "MobileAuthenticatedStream", modifiers: " const&", def_value: None }]
constexpr MobileAuthenticatedStream(MobileAuthenticatedStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MobileAuthenticatedStream", modifiers: "&&", def_value: None }]
constexpr MobileAuthenticatedStream(MobileAuthenticatedStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MobileAuthenticatedStream(void* ptr) noexcept : System::Net::Security::AuthenticatedStream(ptr) {
}


  constexpr MobileAuthenticatedStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MobileAuthenticatedStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MobileAuthenticatedStream& operator=(MobileAuthenticatedStream&& o) noexcept = default;
  constexpr MobileAuthenticatedStream& operator=(MobileAuthenticatedStream const& o) noexcept = default;
                


// Fields

 Mono::Net::Security::MobileTlsContext __declspec(property(get=__get_xobileTlsContext, put=__set_xobileTlsContext))  xobileTlsContext;

constexpr void __set_xobileTlsContext(Mono::Net::Security::MobileTlsContext value) ;

constexpr Mono::Net::Security::MobileTlsContext __get_xobileTlsContext() const;

 System::Runtime::ExceptionServices::ExceptionDispatchInfo __declspec(property(get=__get_lastException, put=__set_lastException))  lastException;

constexpr void __set_lastException(System::Runtime::ExceptionServices::ExceptionDispatchInfo value) ;

constexpr System::Runtime::ExceptionServices::ExceptionDispatchInfo __get_lastException() const;

 Mono::Net::Security::AsyncProtocolRequest __declspec(property(get=__get_asyncHandshakeRequest, put=__set_asyncHandshakeRequest))  asyncHandshakeRequest;

constexpr void __set_asyncHandshakeRequest(Mono::Net::Security::AsyncProtocolRequest value) ;

constexpr Mono::Net::Security::AsyncProtocolRequest __get_asyncHandshakeRequest() const;

 Mono::Net::Security::AsyncProtocolRequest __declspec(property(get=__get_asyncReadRequest, put=__set_asyncReadRequest))  asyncReadRequest;

constexpr void __set_asyncReadRequest(Mono::Net::Security::AsyncProtocolRequest value) ;

constexpr Mono::Net::Security::AsyncProtocolRequest __get_asyncReadRequest() const;

 Mono::Net::Security::AsyncProtocolRequest __declspec(property(get=__get_asyncWriteRequest, put=__set_asyncWriteRequest))  asyncWriteRequest;

constexpr void __set_asyncWriteRequest(Mono::Net::Security::AsyncProtocolRequest value) ;

constexpr Mono::Net::Security::AsyncProtocolRequest __get_asyncWriteRequest() const;

 Mono::Net::Security::BufferOffsetSize2 __declspec(property(get=__get_readBuffer, put=__set_readBuffer))  readBuffer;

constexpr void __set_readBuffer(Mono::Net::Security::BufferOffsetSize2 value) ;

constexpr Mono::Net::Security::BufferOffsetSize2 __get_readBuffer() const;

 Mono::Net::Security::BufferOffsetSize2 __declspec(property(get=__get_writeBuffer, put=__set_writeBuffer))  writeBuffer;

constexpr void __set_writeBuffer(Mono::Net::Security::BufferOffsetSize2 value) ;

constexpr Mono::Net::Security::BufferOffsetSize2 __get_writeBuffer() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_ioLock, put=__set_ioLock))  ioLock;

constexpr void __set_ioLock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_ioLock() const;

 int32_t __declspec(property(get=__get_closeRequested, put=__set_closeRequested))  closeRequested;

constexpr void __set_closeRequested(int32_t value) ;

constexpr int32_t __get_closeRequested() const;

 bool __declspec(property(get=__get_shutdown, put=__set_shutdown))  shutdown;

constexpr void __set_shutdown(bool value) ;

constexpr bool __get_shutdown() const;

 Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__Operation __declspec(property(get=__get_operation, put=__set_operation))  operation;

constexpr void __set_operation(Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__Operation value) ;

constexpr Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__Operation __get_operation() const;

static int32_t __declspec(property(get=__get_uniqueNameInteger, put=__set_uniqueNameInteger))  uniqueNameInteger;

static void __set_uniqueNameInteger(int32_t value) ;

static int32_t __get_uniqueNameInteger() ;

 System::Net::Security::SslStream __declspec(property(get=__get__SslStream_k__BackingField, put=__set__SslStream_k__BackingField))  _SslStream_k__BackingField;

constexpr void __set__SslStream_k__BackingField(System::Net::Security::SslStream value) ;

constexpr System::Net::Security::SslStream __get__SslStream_k__BackingField() const;

 Mono::Security::Interface::MonoTlsSettings __declspec(property(get=__get__Settings_k__BackingField, put=__set__Settings_k__BackingField))  _Settings_k__BackingField;

constexpr void __set__Settings_k__BackingField(Mono::Security::Interface::MonoTlsSettings value) ;

constexpr Mono::Security::Interface::MonoTlsSettings __get__Settings_k__BackingField() const;

 Mono::Net::Security::MobileTlsProvider __declspec(property(get=__get__Provider_k__BackingField, put=__set__Provider_k__BackingField))  _Provider_k__BackingField;

constexpr void __set__Provider_k__BackingField(Mono::Net::Security::MobileTlsProvider value) ;

constexpr Mono::Net::Security::MobileTlsProvider __get__Provider_k__BackingField() const;

 ::StringW __declspec(property(get=__get__TargetHost_k__BackingField, put=__set__TargetHost_k__BackingField))  _TargetHost_k__BackingField;

constexpr void __set__TargetHost_k__BackingField(::StringW value) ;

constexpr ::StringW __get__TargetHost_k__BackingField() const;

static int32_t __declspec(property(get=__get_nextId, put=__set_nextId))  nextId;

static void __set_nextId(int32_t value) ;

static int32_t __get_nextId() ;

 int32_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(int32_t value) ;

constexpr int32_t __get_ID() const;


// Properties

 System::Net::Security::SslStream __declspec(property(get=get_SslStream))  SslStream;

 Mono::Security::Interface::MonoTlsSettings __declspec(property(get=get_Settings))  Settings;

 Mono::Net::Security::MobileTlsProvider __declspec(property(get=get_Provider))  Provider;

 ::StringW __declspec(property(get=get_TargetHost, put=set_TargetHost))  TargetHost;

 bool __declspec(property(get=get_IsAuthenticated))  IsAuthenticated;

 System::Security::Cryptography::X509Certificates::X509Certificate __declspec(property(get=get_LocalCertificate))  LocalCertificate;

 System::Security::Cryptography::X509Certificates::X509Certificate __declspec(property(get=get_InternalLocalCertificate))  InternalLocalCertificate;

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanTimeout))  CanTimeout;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;

 int32_t __declspec(property(get=get_ReadTimeout, put=set_ReadTimeout))  ReadTimeout;

 int32_t __declspec(property(get=get_WriteTimeout, put=set_WriteTimeout))  WriteTimeout;


// Methods

static Mono::Net::Security::MobileAuthenticatedStream New_ctor(System::IO::Stream innerStream, bool leaveInnerStreamOpen, System::Net::Security::SslStream owner, Mono::Security::Interface::MonoTlsSettings settings, Mono::Net::Security::MobileTlsProvider provider) ;

/// @brief Method .ctor addr 0x268bd94 size 0x134 virtual false final false
 void _ctor(System::IO::Stream innerStream, bool leaveInnerStreamOpen, System::Net::Security::SslStream owner, Mono::Security::Interface::MonoTlsSettings settings, Mono::Net::Security::MobileTlsProvider provider) ;

/// @brief Method get_SslStream addr 0x268f4cc size 0x8 virtual true final true
 System::Net::Security::SslStream get_SslStream() ;

/// @brief Method get_Settings addr 0x268f4d4 size 0x8 virtual false final false
 Mono::Security::Interface::MonoTlsSettings get_Settings() ;

/// @brief Method get_Provider addr 0x268f4dc size 0x8 virtual false final false
 Mono::Net::Security::MobileTlsProvider get_Provider() ;

/// @brief Method get_TargetHost addr 0x268f4e4 size 0x8 virtual false final false
 ::StringW get_TargetHost() ;

/// @brief Method set_TargetHost addr 0x268f4ec size 0x8 virtual false final false
 void set_TargetHost(::StringW value) ;

/// @brief Method CheckThrow addr 0x268f4f4 size 0xc8 virtual false final false
 void CheckThrow(bool authSuccessCheck, bool shutdownCheck) ;

/// @brief Method GetSSPIException addr 0x268d5c0 size 0x194 virtual false final false
static System::Exception GetSSPIException(System::Exception e) ;

/// @brief Method GetIOException addr 0x268f5bc size 0x184 virtual false final false
static System::Exception GetIOException(System::Exception e, ::StringW message) ;

/// @brief Method GetInternalError addr 0x268f740 size 0x50 virtual false final false
static System::Exception GetInternalError() ;

/// @brief Method GetInvalidNestedCallException addr 0x268f790 size 0x50 virtual false final false
static System::Exception GetInvalidNestedCallException() ;

/// @brief Method SetException addr 0x268d094 size 0x40 virtual false final false
 System::Runtime::ExceptionServices::ExceptionDispatchInfo SetException(System::Exception e) ;

/// @brief Method AuthenticateAsClient addr 0x268f7e0 size 0x1d8 virtual false final false
 void AuthenticateAsClient(::StringW targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection clientCertificates, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation) ;

/// @brief Method AuthenticateAsServer addr 0x268fb18 size 0x1d8 virtual false final false
 void AuthenticateAsServer(System::Security::Cryptography::X509Certificates::X509Certificate serverCertificate, bool clientCertificateRequired, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation) ;

/// @brief Method AuthenticateAsClientAsync addr 0x268fd5c size 0x11c virtual true final true
 System::Threading::Tasks::Task AuthenticateAsClientAsync(::StringW targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection clientCertificates, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation) ;

/// @brief Method ProcessAuthentication addr 0x268fa24 size 0xf4 virtual false final false
 System::Threading::Tasks::Task ProcessAuthentication(bool runSynchronously, Mono::Net::Security::MonoSslAuthenticationOptions options, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method CreateContext addr 0x0 size 0xffffffffffffffff virtual true final false
 Mono::Net::Security::MobileTlsContext CreateContext(Mono::Net::Security::MonoSslAuthenticationOptions options) ;

/// @brief Method Read addr 0x268fe78 size 0xe4 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Write addr 0x2690078 size 0xd0 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method ReadAsync addr 0x2690148 size 0x9c virtual true final false
 System::Threading::Tasks::Task_1<int32_t> ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WriteAsync addr 0x26901e4 size 0x9c virtual true final false
 System::Threading::Tasks::Task WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method StartOperation addr 0x268ff5c size 0x11c virtual false final false
 System::Threading::Tasks::Task_1<int32_t> StartOperation(Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__OperationType type, Mono::Net::Security::AsyncProtocolRequest asyncRequest, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method InternalRead addr 0x268a3e8 size 0x10c virtual false final false
 int32_t InternalRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ByRef<bool> outWantMore) ;

/// @brief Method InternalRead addr 0x2690280 size 0x180 virtual false final false
 System::ValueTuple_2<int32_t,bool> InternalRead(Mono::Net::Security::AsyncProtocolRequest asyncRequest, Mono::Net::Security::BufferOffsetSize internalBuffer, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method InternalWrite addr 0x2689f00 size 0x1f0 virtual false final false
 bool InternalWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method InternalWrite addr 0x2690400 size 0xfc virtual false final false
 bool InternalWrite(Mono::Net::Security::AsyncProtocolRequest asyncRequest, Mono::Net::Security::BufferOffsetSize2 internalBuffer, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method InnerRead addr 0x268db94 size 0x11c virtual false final false
 System::Threading::Tasks::Task_1<int32_t> InnerRead(bool sync, int32_t requestedSize, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method InnerWrite addr 0x268d754 size 0xe4 virtual false final false
 System::Threading::Tasks::Task InnerWrite(bool sync, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ProcessHandshake addr 0x268dd2c size 0x3d8 virtual false final false
 Mono::Net::Security::AsyncOperationStatus ProcessHandshake(Mono::Net::Security::AsyncOperationStatus status, bool renegotiate) ;

/// @brief Method ProcessRead addr 0x268e28c size 0x160 virtual false final false
 System::ValueTuple_2<int32_t,bool> ProcessRead(Mono::Net::Security::BufferOffsetSize userBuffer) ;

/// @brief Method ProcessWrite addr 0x268e46c size 0x160 virtual false final false
 System::ValueTuple_2<int32_t,bool> ProcessWrite(Mono::Net::Security::BufferOffsetSize userBuffer) ;

/// @brief Method get_IsAuthenticated addr 0x26904fc size 0xe8 virtual true final false
 bool get_IsAuthenticated() ;

/// @brief Method Dispose addr 0x26905e4 size 0x1e4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Flush addr 0x2690838 size 0x24 virtual true final false
 void Flush() ;

/// @brief Method get_LocalCertificate addr 0x269085c size 0xdc virtual true final true
 System::Security::Cryptography::X509Certificates::X509Certificate get_LocalCertificate() ;

/// @brief Method get_InternalLocalCertificate addr 0x2690938 size 0x100 virtual true final true
 System::Security::Cryptography::X509Certificates::X509Certificate get_InternalLocalCertificate() ;

/// @brief Method Seek addr 0x2690a38 size 0x40 virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x2690a78 size 0x24 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method get_CanRead addr 0x2690a9c size 0x44 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanTimeout addr 0x2690ae0 size 0x20 virtual true final false
 bool get_CanTimeout() ;

/// @brief Method get_CanWrite addr 0x2690b00 size 0x64 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_CanSeek addr 0x2690b64 size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_Length addr 0x2690b6c size 0x20 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x2690b8c size 0x20 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x2690bac size 0x40 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method get_ReadTimeout addr 0x2690bec size 0x24 virtual true final false
 int32_t get_ReadTimeout() ;

/// @brief Method set_ReadTimeout addr 0x2690c10 size 0x24 virtual true final false
 void set_ReadTimeout(int32_t value) ;

/// @brief Method get_WriteTimeout addr 0x2690c34 size 0x24 virtual true final false
 int32_t get_WriteTimeout() ;

/// @brief Method set_WriteTimeout addr 0x2690c58 size 0x24 virtual true final false
 void set_WriteTimeout(int32_t value) ;

/// @brief Method <InnerWrite>b__67_0 addr 0x2690cc8 size 0x34 virtual false final false
 void _InnerWrite_b__67_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__Operation, "Mono.Net.Security", "MobileAuthenticatedStream/Operation");
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream__OperationType, "Mono.Net.Security", "MobileAuthenticatedStream/OperationType");
NEED_NO_BOX(Mono::Net::Security::MobileAuthenticatedStream);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::MobileAuthenticatedStream, "Mono.Net.Security", "MobileAuthenticatedStream");
NEED_NO_BOX(Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0, "Mono.Net.Security", "MobileAuthenticatedStream/<>c__DisplayClass66_0");
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66, "Mono.Net.Security", "MobileAuthenticatedStream/<InnerRead>d__66");
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67, "Mono.Net.Security", "MobileAuthenticatedStream/<InnerWrite>d__67");
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48, "Mono.Net.Security", "MobileAuthenticatedStream/<ProcessAuthentication>d__48");
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57, "Mono.Net.Security", "MobileAuthenticatedStream/<StartOperation>d__57");
