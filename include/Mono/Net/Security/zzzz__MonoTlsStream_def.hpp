#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Net {
class WebConnectionTunnel;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System::IO {
class Stream;
}
namespace System {
class IDisposable;
}
namespace System::Net::Sockets {
class NetworkStream;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::Threading {
struct CancellationToken;
}
namespace Mono::Net::Security {
struct Mono__Net__Security__MonoTlsStream___CreateStream_d__18;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Runtime::CompilerServices {
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
// Forward declare root types
namespace Mono::Net::Security {
class MonoTlsStream;
}
namespace Mono::Net::Security {
struct Mono__Net__Security__MonoTlsStream___CreateStream_d__18;
}
// Type: ::<CreateStream>d__18
namespace Mono::Net::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7694))
// CS Name: Mono.Net.Security.MonoTlsStream::<CreateStream>d__18
struct CORDL_TYPE Mono__Net__Security__MonoTlsStream___CreateStream_d__18 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::IO::Stream>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "Mono::Net::Security::MonoTlsStream", modifiers: "", def_value: None }, CppParam { name: "tunnel", ty: "System::Net::WebConnectionTunnel", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_socket_5__2", ty: "System::Net::Sockets::Socket", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr Mono__Net__Security__MonoTlsStream___CreateStream_d__18(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::IO::Stream> __t__builder, Mono::Net::Security::MonoTlsStream __4__this, System::Net::WebConnectionTunnel tunnel, System::Threading::CancellationToken cancellationToken, System::Net::Sockets::Socket _socket_5__2, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;


                    constexpr Mono__Net__Security__MonoTlsStream___CreateStream_d__18(Mono__Net__Security__MonoTlsStream___CreateStream_d__18 const&) = default;
                    constexpr Mono__Net__Security__MonoTlsStream___CreateStream_d__18(Mono__Net__Security__MonoTlsStream___CreateStream_d__18&&) = default;
                    constexpr Mono__Net__Security__MonoTlsStream___CreateStream_d__18& operator=(Mono__Net__Security__MonoTlsStream___CreateStream_d__18 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Net__Security__MonoTlsStream___CreateStream_d__18& operator=(Mono__Net__Security__MonoTlsStream___CreateStream_d__18&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Net__Security__MonoTlsStream___CreateStream_d__18(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::IO::Stream> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::IO::Stream> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::IO::Stream> __get___t__builder() const;

 Mono::Net::Security::MonoTlsStream __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Mono::Net::Security::MonoTlsStream value) ;

constexpr Mono::Net::Security::MonoTlsStream __get___4__this() const;

 System::Net::WebConnectionTunnel __declspec(property(get=__get_tunnel, put=__set_tunnel))  tunnel;

constexpr void __set_tunnel(System::Net::WebConnectionTunnel value) ;

constexpr System::Net::WebConnectionTunnel __get_tunnel() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Net::Sockets::Socket __declspec(property(get=__get__socket_5__2, put=__set__socket_5__2))  _socket_5__2;

constexpr void __set__socket_5__2(System::Net::Sockets::Socket value) ;

constexpr System::Net::Sockets::Socket __get__socket_5__2() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2693cdc size 0x6a4 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2694380 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
// Type: Mono.Net.Security::MonoTlsStream
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7695))
// CS Name: Mono.Net.Security.MonoTlsStream
class CORDL_TYPE MonoTlsStream : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _CreateStream_d__18 = Mono::Net::Security::Mono__Net__Security__MonoTlsStream___CreateStream_d__18;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MonoTlsStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoTlsStream", modifiers: " const&", def_value: None }]
constexpr MonoTlsStream(MonoTlsStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoTlsStream", modifiers: "&&", def_value: None }]
constexpr MonoTlsStream(MonoTlsStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoTlsStream(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MonoTlsStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoTlsStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoTlsStream& operator=(MonoTlsStream&& o) noexcept = default;
  constexpr MonoTlsStream& operator=(MonoTlsStream const& o) noexcept = default;
                


// Fields

 Mono::Net::Security::MobileTlsProvider __declspec(property(get=__get_provider, put=__set_provider))  provider;

constexpr void __set_provider(Mono::Net::Security::MobileTlsProvider value) ;

constexpr Mono::Net::Security::MobileTlsProvider __get_provider() const;

 System::Net::Sockets::NetworkStream __declspec(property(get=__get_networkStream, put=__set_networkStream))  networkStream;

constexpr void __set_networkStream(System::Net::Sockets::NetworkStream value) ;

constexpr System::Net::Sockets::NetworkStream __get_networkStream() const;

 System::Net::HttpWebRequest __declspec(property(get=__get_request, put=__set_request))  request;

constexpr void __set_request(System::Net::HttpWebRequest value) ;

constexpr System::Net::HttpWebRequest __get_request() const;

 Mono::Security::Interface::MonoTlsSettings __declspec(property(get=__get_settings, put=__set_settings))  settings;

constexpr void __set_settings(Mono::Security::Interface::MonoTlsSettings value) ;

constexpr Mono::Security::Interface::MonoTlsSettings __get_settings() const;

 System::Net::Security::SslStream __declspec(property(get=__get_sslStream, put=__set_sslStream))  sslStream;

constexpr void __set_sslStream(System::Net::Security::SslStream value) ;

constexpr System::Net::Security::SslStream __get_sslStream() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_sslStreamLock, put=__set_sslStreamLock))  sslStreamLock;

constexpr void __set_sslStreamLock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_sslStreamLock() const;

 System::Net::WebExceptionStatus __declspec(property(get=__get_status, put=__set_status))  status;

constexpr void __set_status(System::Net::WebExceptionStatus value) ;

constexpr System::Net::WebExceptionStatus __get_status() const;

 bool __declspec(property(get=__get__CertificateValidationFailed_k__BackingField, put=__set__CertificateValidationFailed_k__BackingField))  _CertificateValidationFailed_k__BackingField;

constexpr void __set__CertificateValidationFailed_k__BackingField(bool value) ;

constexpr bool __get__CertificateValidationFailed_k__BackingField() const;


// Properties

 System::Net::HttpWebRequest __declspec(property(get=get_Request))  Request;

 System::Net::WebExceptionStatus __declspec(property(get=get_ExceptionStatus))  ExceptionStatus;

 bool __declspec(property(get=get_CertificateValidationFailed, put=set_CertificateValidationFailed))  CertificateValidationFailed;


// Methods

/// @brief Method get_Request addr 0x2693a08 size 0x8 virtual false final false
 System::Net::HttpWebRequest get_Request() ;

/// @brief Method get_ExceptionStatus addr 0x2693a10 size 0x8 virtual false final false
 System::Net::WebExceptionStatus get_ExceptionStatus() ;

/// @brief Method get_CertificateValidationFailed addr 0x2693a18 size 0x8 virtual false final false
 bool get_CertificateValidationFailed() ;

/// @brief Method set_CertificateValidationFailed addr 0x2693a20 size 0xc virtual false final false
 void set_CertificateValidationFailed(bool value) ;

static Mono::Net::Security::MonoTlsStream New_ctor(System::Net::HttpWebRequest request, System::Net::Sockets::NetworkStream networkStream) ;

/// @brief Method .ctor addr 0x2693a2c size 0xd4 virtual false final false
 void _ctor(System::Net::HttpWebRequest request, System::Net::Sockets::NetworkStream networkStream) ;

/// @brief Method CreateStream addr 0x2693b00 size 0x104 virtual false final false
 System::Threading::Tasks::Task_1<System::IO::Stream> CreateStream(System::Net::WebConnectionTunnel tunnel, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Dispose addr 0x2693c04 size 0x4 virtual true final true
 void Dispose() ;

/// @brief Method CloseSslStream addr 0x2693c08 size 0xd4 virtual false final false
 void CloseSslStream() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
NEED_NO_BOX(Mono::Net::Security::MonoTlsStream);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::MonoTlsStream, "Mono.Net.Security", "MonoTlsStream");
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::Mono__Net__Security__MonoTlsStream___CreateStream_d__18, "Mono.Net.Security", "MonoTlsStream/<CreateStream>d__18");
