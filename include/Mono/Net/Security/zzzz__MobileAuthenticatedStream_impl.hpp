#pragma once
#include "System/Net/Security/zzzz__AuthenticatedStream_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncOperationStatus_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "Mono/Net/Security/zzzz__BufferOffsetSize2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "Mono/Net/Security/zzzz__BufferOffsetSize_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsContext_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation::____Mono__Net__Security__MobileAuthenticatedStream__Operation(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation  ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation::None{0};
constexpr ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation  ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation::Handshake{1};
constexpr ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation  ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation::Authenticated{2};
constexpr ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation  ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation::Renegotiate{3};
constexpr ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation  ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation::Read{4};
constexpr ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation  ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation::Write{5};
constexpr ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation  ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation::Close{6};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType::____Mono__Net__Security__MobileAuthenticatedStream__OperationType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType  ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType::Read{0};
constexpr ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType  ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType::Write{1};
constexpr ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType  ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType::Renegotiate{2};
constexpr ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType  ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType::Shutdown{3};
//  Writing Method size for method: ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::*)()>(&::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::MoveNext)> {
  constexpr static std::size_t size = 0x904;
  constexpr static std::size_t addrs = 0x2690cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2691600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "options", ty: "::Mono::Net::Security::MonoSslAuthenticationOptions", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MobileAuthenticatedStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "runSynchronously", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Mono::Net::Security::MonoSslAuthenticationOptions options, ::Mono::Net::Security::MobileAuthenticatedStream __4__this, bool runSynchronously, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->options = options;
this->__4__this = __4__this;
this->runSynchronously = runSynchronously;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::__set_options(::Mono::Net::Security::MonoSslAuthenticationOptions value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::MonoSslAuthenticationOptions, 0x20>(this->__instance, std::forward<::Mono::Net::Security::MonoSslAuthenticationOptions>(value));
}
constexpr ::Mono::Net::Security::MonoSslAuthenticationOptions ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::__get_options() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::MonoSslAuthenticationOptions, 0x20>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::__set___4__this(::Mono::Net::Security::MobileAuthenticatedStream value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::MobileAuthenticatedStream, 0x28>(this->__instance, std::forward<::Mono::Net::Security::MobileAuthenticatedStream>(value));
}
constexpr ::Mono::Net::Security::MobileAuthenticatedStream ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::__get___4__this() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::MobileAuthenticatedStream, 0x28>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::__set_runSynchronously(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::__get_runSynchronously() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x38>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x38>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult>, 0x40>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult> ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult>, 0x40>(this->__instance);
}
 void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___ProcessAuthentication_d__48>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::*)()>(&::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::MoveNext)> {
  constexpr static std::size_t size = 0x758;
  constexpr static std::size_t addrs = 0x269160c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2691d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MobileAuthenticatedStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "type", ty: "::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType", modifiers: "", def_value: Some("{}") }, CppParam { name: "asyncRequest", ty: "::Mono::Net::Security::AsyncProtocolRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::Mono::Net::Security::MobileAuthenticatedStream __4__this, ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType type, ::Mono::Net::Security::AsyncProtocolRequest asyncRequest, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->type = type;
this->asyncRequest = asyncRequest;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::__set___4__this(::Mono::Net::Security::MobileAuthenticatedStream value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::MobileAuthenticatedStream, 0x20>(this->__instance, std::forward<::Mono::Net::Security::MobileAuthenticatedStream>(value));
}
constexpr ::Mono::Net::Security::MobileAuthenticatedStream ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::__get___4__this() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::MobileAuthenticatedStream, 0x20>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::__set_type(::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType, 0x28>(this->__instance, std::forward<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType>(value));
}
constexpr ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::__get_type() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType, 0x28>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::__set_asyncRequest(::Mono::Net::Security::AsyncProtocolRequest value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::AsyncProtocolRequest, 0x30>(this->__instance, std::forward<::Mono::Net::Security::AsyncProtocolRequest>(value));
}
constexpr ::Mono::Net::Security::AsyncProtocolRequest ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::__get_asyncRequest() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::AsyncProtocolRequest, 0x30>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x38>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x38>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult>, 0x40>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult> ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult>, 0x40>(this->__instance);
}
 void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___StartOperation_d__57>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0::*)()>(&::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2691dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0._InnerRead_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0::*)()>(&::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0::_InnerRead_b__0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2691dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0>::get(),
                            "<InnerRead>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0::__set___4__this(::Mono::Net::Security::MobileAuthenticatedStream value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::MobileAuthenticatedStream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Net::Security::MobileAuthenticatedStream>(value));
}
constexpr ::Mono::Net::Security::MobileAuthenticatedStream ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::MobileAuthenticatedStream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0::__set_len(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0::__get_len() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0::____Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0>())) {}
 void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0::_InnerRead_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream____c__DisplayClass66_0>::get(),
                            "<InnerRead>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::*)()>(&::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::MoveNext)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x2691e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2692250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MobileAuthenticatedStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "requestedSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sync", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::Mono::Net::Security::MobileAuthenticatedStream __4__this, ::System::Threading::CancellationToken cancellationToken, int32_t requestedSize, bool sync, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->requestedSize = requestedSize;
this->sync = sync;
this->__u__1 = __u__1;
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::__set___4__this(::Mono::Net::Security::MobileAuthenticatedStream value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::MobileAuthenticatedStream, 0x20>(this->__instance, std::forward<::Mono::Net::Security::MobileAuthenticatedStream>(value));
}
constexpr ::Mono::Net::Security::MobileAuthenticatedStream ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::__get___4__this() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::MobileAuthenticatedStream, 0x20>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::__set_requestedSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::__get_requestedSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::__set_sync(bool value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::__get_sync() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x38>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x38>(this->__instance);
}
 void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerRead_d__66>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::*)()>(&::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::MoveNext)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x26922a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2692538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MobileAuthenticatedStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "sync", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::CancellationToken cancellationToken, ::Mono::Net::Security::MobileAuthenticatedStream __4__this, bool sync, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->sync = sync;
this->__u__1 = __u__1;
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::__set___4__this(::Mono::Net::Security::MobileAuthenticatedStream value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::MobileAuthenticatedStream, 0x28>(this->__instance, std::forward<::Mono::Net::Security::MobileAuthenticatedStream>(value));
}
constexpr ::Mono::Net::Security::MobileAuthenticatedStream ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::__get___4__this() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::MobileAuthenticatedStream, 0x28>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::__set_sync(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::__get_sync() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->__instance);
}
constexpr void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x38>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x38>(this->__instance);
}
 void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream___InnerWrite_d__67>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(::System::IO::Stream, bool, ::System::Net::Security::SslStream, ::Mono::Security::Interface::MonoTlsSettings, ::Mono::Net::Security::MobileTlsProvider)>(&::Mono::Net::Security::MobileAuthenticatedStream::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x268bd94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileTlsProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_SslStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Security::SslStream (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_SslStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268f4cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_SslStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_Settings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsSettings (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268f4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_Settings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_Provider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::MobileTlsProvider (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_Provider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268f4dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_Provider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_TargetHost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_TargetHost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268f4e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_TargetHost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.set_TargetHost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(::StringW)>(&::Mono::Net::Security::MobileAuthenticatedStream::set_TargetHost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268f4ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "set_TargetHost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.CheckThrow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(bool, bool)>(&::Mono::Net::Security::MobileAuthenticatedStream::CheckThrow)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x268f4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "CheckThrow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.GetSSPIException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception (*)(::System::Exception)>(&::Mono::Net::Security::MobileAuthenticatedStream::GetSSPIException)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x268d5c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "GetSSPIException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.GetIOException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception (*)(::System::Exception, ::StringW)>(&::Mono::Net::Security::MobileAuthenticatedStream::GetIOException)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x268f5bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "GetIOException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.GetInternalError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception (*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::GetInternalError)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x268f740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "GetInternalError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.GetInvalidNestedCallException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception (*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::GetInvalidNestedCallException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x268f790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "GetInvalidNestedCallException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.SetException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo (::Mono::Net::Security::MobileAuthenticatedStream::*)(::System::Exception)>(&::Mono::Net::Security::MobileAuthenticatedStream::SetException)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x268d094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "SetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.AuthenticateAsClient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection, ::System::Security::Authentication::SslProtocols, bool)>(&::Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsClient)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x268f7e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "AuthenticateAsClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.AuthenticateAsServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(::System::Security::Cryptography::X509Certificates::X509Certificate, bool, ::System::Security::Authentication::SslProtocols, bool)>(&::Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsServer)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x268fb18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "AuthenticateAsServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.AuthenticateAsClientAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::Mono::Net::Security::MobileAuthenticatedStream::*)(::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection, ::System::Security::Authentication::SslProtocols, bool)>(&::Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsClientAsync)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x268fd5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "AuthenticateAsClientAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.ProcessAuthentication
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::Mono::Net::Security::MobileAuthenticatedStream::*)(bool, ::Mono::Net::Security::MonoSslAuthenticationOptions, ::System::Threading::CancellationToken)>(&::Mono::Net::Security::MobileAuthenticatedStream::ProcessAuthentication)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x268fa24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "ProcessAuthentication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MonoSslAuthenticationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.CreateContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::MobileTlsContext (::Mono::Net::Security::MobileAuthenticatedStream::*)(::Mono::Net::Security::MonoSslAuthenticationOptions)>(&::Mono::Net::Security::MobileAuthenticatedStream::CreateContext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Net::Security::MobileAuthenticatedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mono::Net::Security::MobileAuthenticatedStream::Read)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x268fe78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mono::Net::Security::MobileAuthenticatedStream::Write)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2690078;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.ReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t> (::Mono::Net::Security::MobileAuthenticatedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::Mono::Net::Security::MobileAuthenticatedStream::ReadAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2690148;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.WriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::Mono::Net::Security::MobileAuthenticatedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::Mono::Net::Security::MobileAuthenticatedStream::WriteAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26901e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.StartOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t> (::Mono::Net::Security::MobileAuthenticatedStream::*)(::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType, ::Mono::Net::Security::AsyncProtocolRequest, ::System::Threading::CancellationToken)>(&::Mono::Net::Security::MobileAuthenticatedStream::StartOperation)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x268ff5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "StartOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::AsyncProtocolRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.InternalRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Net::Security::MobileAuthenticatedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ByRef<bool>)>(&::Mono::Net::Security::MobileAuthenticatedStream::InternalRead)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x268a3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "InternalRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.InternalRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<int32_t,bool> (::Mono::Net::Security::MobileAuthenticatedStream::*)(::Mono::Net::Security::AsyncProtocolRequest, ::Mono::Net::Security::BufferOffsetSize, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mono::Net::Security::MobileAuthenticatedStream::InternalRead)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2690280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "InternalRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::AsyncProtocolRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::BufferOffsetSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.InternalWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mono::Net::Security::MobileAuthenticatedStream::InternalWrite)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2689f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "InternalWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.InternalWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)(::Mono::Net::Security::AsyncProtocolRequest, ::Mono::Net::Security::BufferOffsetSize2, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mono::Net::Security::MobileAuthenticatedStream::InternalWrite)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2690400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "InternalWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::AsyncProtocolRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::BufferOffsetSize2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.InnerRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t> (::Mono::Net::Security::MobileAuthenticatedStream::*)(bool, int32_t, ::System::Threading::CancellationToken)>(&::Mono::Net::Security::MobileAuthenticatedStream::InnerRead)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x268db94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "InnerRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.InnerWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::Mono::Net::Security::MobileAuthenticatedStream::*)(bool, ::System::Threading::CancellationToken)>(&::Mono::Net::Security::MobileAuthenticatedStream::InnerWrite)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x268d754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "InnerWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.ProcessHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::AsyncOperationStatus (::Mono::Net::Security::MobileAuthenticatedStream::*)(::Mono::Net::Security::AsyncOperationStatus, bool)>(&::Mono::Net::Security::MobileAuthenticatedStream::ProcessHandshake)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x268dd2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "ProcessHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::AsyncOperationStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.ProcessRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<int32_t,bool> (::Mono::Net::Security::MobileAuthenticatedStream::*)(::Mono::Net::Security::BufferOffsetSize)>(&::Mono::Net::Security::MobileAuthenticatedStream::ProcessRead)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x268e28c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "ProcessRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::BufferOffsetSize>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.ProcessWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<int32_t,bool> (::Mono::Net::Security::MobileAuthenticatedStream::*)(::Mono::Net::Security::BufferOffsetSize)>(&::Mono::Net::Security::MobileAuthenticatedStream::ProcessWrite)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x268e46c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "ProcessWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::BufferOffsetSize>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_IsAuthenticated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_IsAuthenticated)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x26904fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(bool)>(&::Mono::Net::Security::MobileAuthenticatedStream::Dispose)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x26905e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::Flush)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2690838;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_LocalCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_LocalCertificate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x269085c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_LocalCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_InternalLocalCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_InternalLocalCertificate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2690938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_InternalLocalCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.Seek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Mono::Net::Security::MobileAuthenticatedStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::Mono::Net::Security::MobileAuthenticatedStream::Seek)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2690a38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.SetLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(int64_t)>(&::Mono::Net::Security::MobileAuthenticatedStream::SetLength)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2690a78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_CanRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_CanRead)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2690a9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_CanTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_CanTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2690ae0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_CanWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2690b00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_CanSeek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2690b64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_Length)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2690b6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2690b8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.set_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(int64_t)>(&::Mono::Net::Security::MobileAuthenticatedStream::set_Position)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2690bac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_ReadTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_ReadTimeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2690bec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.set_ReadTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(int32_t)>(&::Mono::Net::Security::MobileAuthenticatedStream::set_ReadTimeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2690c10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.get_WriteTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::get_WriteTimeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2690c34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream.set_WriteTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)(int32_t)>(&::Mono::Net::Security::MobileAuthenticatedStream::set_WriteTimeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2690c58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileAuthenticatedStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileAuthenticatedStream._InnerWrite_b__67_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileAuthenticatedStream::*)()>(&::Mono::Net::Security::MobileAuthenticatedStream::_InnerWrite_b__67_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2690cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "<InnerWrite>b__67_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::Mono::Net::Security::MobileAuthenticatedStream::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileAuthenticatedStream::__set_xobileTlsContext(::Mono::Net::Security::MobileTlsContext value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::MobileTlsContext, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Net::Security::MobileTlsContext>(value));
}
constexpr ::Mono::Net::Security::MobileTlsContext ::Mono::Net::Security::MobileAuthenticatedStream::__get_xobileTlsContext() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::MobileTlsContext, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileAuthenticatedStream::__set_lastException(::System::Runtime::ExceptionServices::ExceptionDispatchInfo value)  {
::cordl_internals::setInstanceField<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::ExceptionServices::ExceptionDispatchInfo>(value));
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo ::Mono::Net::Security::MobileAuthenticatedStream::__get_lastException() const {
return ::cordl_internals::getInstanceField<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileAuthenticatedStream::__set_asyncHandshakeRequest(::Mono::Net::Security::AsyncProtocolRequest value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::AsyncProtocolRequest, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Net::Security::AsyncProtocolRequest>(value));
}
constexpr ::Mono::Net::Security::AsyncProtocolRequest ::Mono::Net::Security::MobileAuthenticatedStream::__get_asyncHandshakeRequest() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::AsyncProtocolRequest, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileAuthenticatedStream::__set_asyncReadRequest(::Mono::Net::Security::AsyncProtocolRequest value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::AsyncProtocolRequest, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Net::Security::AsyncProtocolRequest>(value));
}
constexpr ::Mono::Net::Security::AsyncProtocolRequest ::Mono::Net::Security::MobileAuthenticatedStream::__get_asyncReadRequest() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::AsyncProtocolRequest, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileAuthenticatedStream::__set_asyncWriteRequest(::Mono::Net::Security::AsyncProtocolRequest value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::AsyncProtocolRequest, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Net::Security::AsyncProtocolRequest>(value));
}
constexpr ::Mono::Net::Security::AsyncProtocolRequest ::Mono::Net::Security::MobileAuthenticatedStream::__get_asyncWriteRequest() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::AsyncProtocolRequest, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileAuthenticatedStream::__set_readBuffer(::Mono::Net::Security::BufferOffsetSize2 value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::BufferOffsetSize2, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Net::Security::BufferOffsetSize2>(value));
}
constexpr ::Mono::Net::Security::BufferOffsetSize2 ::Mono::Net::Security::MobileAuthenticatedStream::__get_readBuffer() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::BufferOffsetSize2, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileAuthenticatedStream::__set_writeBuffer(::Mono::Net::Security::BufferOffsetSize2 value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::BufferOffsetSize2, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Net::Security::BufferOffsetSize2>(value));
}
constexpr ::Mono::Net::Security::BufferOffsetSize2 ::Mono::Net::Security::MobileAuthenticatedStream::__get_writeBuffer() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::BufferOffsetSize2, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileAuthenticatedStream::__set_ioLock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::Mono::Net::Security::MobileAuthenticatedStream::__get_ioLock() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileAuthenticatedStream::__set_closeRequested(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Net::Security::MobileAuthenticatedStream::__get_closeRequested() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileAuthenticatedStream::__set_shutdown(bool value)  {
::cordl_internals::setInstanceField<bool, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Net::Security::MobileAuthenticatedStream::__get_shutdown() const {
return ::cordl_internals::getInstanceField<bool, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileAuthenticatedStream::__set_operation(::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation>(value));
}
constexpr ::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation ::Mono::Net::Security::MobileAuthenticatedStream::__get_operation() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__Operation, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::Mono::Net::Security::MobileAuthenticatedStream::__set_uniqueNameInteger(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "uniqueNameInteger", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get>(std::forward<int32_t>(value));
}
 int32_t ::Mono::Net::Security::MobileAuthenticatedStream::__get_uniqueNameInteger()  {
return ::cordl_internals::getStaticField<int32_t, "uniqueNameInteger", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get>();
}
constexpr void ::Mono::Net::Security::MobileAuthenticatedStream::__set__SslStream_k__BackingField(::System::Net::Security::SslStream value)  {
::cordl_internals::setInstanceField<::System::Net::Security::SslStream, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Security::SslStream>(value));
}
constexpr ::System::Net::Security::SslStream ::Mono::Net::Security::MobileAuthenticatedStream::__get__SslStream_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::Security::SslStream, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileAuthenticatedStream::__set__Settings_k__BackingField(::Mono::Security::Interface::MonoTlsSettings value)  {
::cordl_internals::setInstanceField<::Mono::Security::Interface::MonoTlsSettings, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Security::Interface::MonoTlsSettings>(value));
}
constexpr ::Mono::Security::Interface::MonoTlsSettings ::Mono::Net::Security::MobileAuthenticatedStream::__get__Settings_k__BackingField() const {
return ::cordl_internals::getInstanceField<::Mono::Security::Interface::MonoTlsSettings, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileAuthenticatedStream::__set__Provider_k__BackingField(::Mono::Net::Security::MobileTlsProvider value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::MobileTlsProvider, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Net::Security::MobileTlsProvider>(value));
}
constexpr ::Mono::Net::Security::MobileTlsProvider ::Mono::Net::Security::MobileAuthenticatedStream::__get__Provider_k__BackingField() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::MobileTlsProvider, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileAuthenticatedStream::__set__TargetHost_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Mono::Net::Security::MobileAuthenticatedStream::__get__TargetHost_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::Mono::Net::Security::MobileAuthenticatedStream::__set_nextId(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "nextId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get>(std::forward<int32_t>(value));
}
 int32_t ::Mono::Net::Security::MobileAuthenticatedStream::__get_nextId()  {
return ::cordl_internals::getStaticField<int32_t, "nextId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get>();
}
constexpr void ::Mono::Net::Security::MobileAuthenticatedStream::__set_ID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::Net::Security::MobileAuthenticatedStream::__get_ID() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "innerStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "leaveInnerStreamOpen", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "owner", ty: "::System::Net::Security::SslStream", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "::Mono::Security::Interface::MonoTlsSettings", modifiers: "", def_value: None }, CppParam { name: "provider", ty: "::Mono::Net::Security::MobileTlsProvider", modifiers: "", def_value: None }]
 ::Mono::Net::Security::MobileAuthenticatedStream::MobileAuthenticatedStream(::System::IO::Stream innerStream, bool leaveInnerStreamOpen, ::System::Net::Security::SslStream owner, ::Mono::Security::Interface::MonoTlsSettings settings, ::Mono::Net::Security::MobileTlsProvider provider)  : ::System::Net::Security::AuthenticatedStream(THROW_UNLESS(::il2cpp_utils::New<MobileAuthenticatedStream>(innerStream, leaveInnerStreamOpen, owner, settings, provider))) {}
 void ::Mono::Net::Security::MobileAuthenticatedStream::_ctor(::System::IO::Stream innerStream, bool leaveInnerStreamOpen, ::System::Net::Security::SslStream owner, ::Mono::Security::Interface::MonoTlsSettings settings, ::Mono::Net::Security::MobileTlsProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileTlsProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, innerStream, leaveInnerStreamOpen, owner, settings, provider);
}
 ::System::Net::Security::SslStream ::Mono::Net::Security::MobileAuthenticatedStream::get_SslStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_SslStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Security::SslStream, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Mono::Security::Interface::MonoTlsSettings ::Mono::Net::Security::MobileAuthenticatedStream::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_Settings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Mono::Net::Security::MobileTlsProvider ::Mono::Net::Security::MobileAuthenticatedStream::get_Provider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_Provider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileTlsProvider, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::Mono::Net::Security::MobileAuthenticatedStream::get_TargetHost()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_TargetHost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Net::Security::MobileAuthenticatedStream::set_TargetHost(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "set_TargetHost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
/// @param shutdownCheck: bool (default: false)
 void ::Mono::Net::Security::MobileAuthenticatedStream::CheckThrow(bool authSuccessCheck, bool shutdownCheck)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "CheckThrow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, authSuccessCheck, shutdownCheck);
}
 ::System::Exception ::Mono::Net::Security::MobileAuthenticatedStream::GetSSPIException(::System::Exception e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "GetSSPIException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception, false>(nullptr, ___internal_method, e);
}
 ::System::Exception ::Mono::Net::Security::MobileAuthenticatedStream::GetIOException(::System::Exception e, ::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "GetIOException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception, false>(nullptr, ___internal_method, e, message);
}
 ::System::Exception ::Mono::Net::Security::MobileAuthenticatedStream::GetInternalError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "GetInternalError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception, false>(nullptr, ___internal_method);
}
 ::System::Exception ::Mono::Net::Security::MobileAuthenticatedStream::GetInvalidNestedCallException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "GetInvalidNestedCallException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception, false>(nullptr, ___internal_method);
}
 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo ::Mono::Net::Security::MobileAuthenticatedStream::SetException(::System::Exception e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "SetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void ::Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsClient(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection clientCertificates, ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "AuthenticateAsClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, targetHost, clientCertificates, enabledSslProtocols, checkCertificateRevocation);
}
 void ::Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsServer(::System::Security::Cryptography::X509Certificates::X509Certificate serverCertificate, bool clientCertificateRequired, ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "AuthenticateAsServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serverCertificate, clientCertificateRequired, enabledSslProtocols, checkCertificateRevocation);
}
 ::System::Threading::Tasks::Task ::Mono::Net::Security::MobileAuthenticatedStream::AuthenticateAsClientAsync(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection clientCertificates, ::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "AuthenticateAsClientAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, targetHost, clientCertificates, enabledSslProtocols, checkCertificateRevocation);
}
 ::System::Threading::Tasks::Task ::Mono::Net::Security::MobileAuthenticatedStream::ProcessAuthentication(bool runSynchronously, ::Mono::Net::Security::MonoSslAuthenticationOptions options, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "ProcessAuthentication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MonoSslAuthenticationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, runSynchronously, options, cancellationToken);
}
 ::Mono::Net::Security::MobileTlsContext ::Mono::Net::Security::MobileAuthenticatedStream::CreateContext(::Mono::Net::Security::MonoSslAuthenticationOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "CreateContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MonoSslAuthenticationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileTlsContext, false>(const_cast<void*>(instance), ___internal_method, options);
}
 int32_t ::Mono::Net::Security::MobileAuthenticatedStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 void ::Mono::Net::Security::MobileAuthenticatedStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 ::System::Threading::Tasks::Task_1<int32_t> ::Mono::Net::Security::MobileAuthenticatedStream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "ReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cancellationToken);
}
 ::System::Threading::Tasks::Task ::Mono::Net::Security::MobileAuthenticatedStream::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "WriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cancellationToken);
}
 ::System::Threading::Tasks::Task_1<int32_t> ::Mono::Net::Security::MobileAuthenticatedStream::StartOperation(::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType type, ::Mono::Net::Security::AsyncProtocolRequest asyncRequest, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "StartOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::____Mono__Net__Security__MobileAuthenticatedStream__OperationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::AsyncProtocolRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, type, asyncRequest, cancellationToken);
}
 int32_t ::Mono::Net::Security::MobileAuthenticatedStream::InternalRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ByRef<bool> outWantMore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "InternalRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, outWantMore);
}
 ::System::ValueTuple_2<int32_t,bool> ::Mono::Net::Security::MobileAuthenticatedStream::InternalRead(::Mono::Net::Security::AsyncProtocolRequest asyncRequest, ::Mono::Net::Security::BufferOffsetSize internalBuffer, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "InternalRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::AsyncProtocolRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::BufferOffsetSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t,bool>, false>(const_cast<void*>(instance), ___internal_method, asyncRequest, internalBuffer, buffer, offset, size);
}
 bool ::Mono::Net::Security::MobileAuthenticatedStream::InternalWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "InternalWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size);
}
 bool ::Mono::Net::Security::MobileAuthenticatedStream::InternalWrite(::Mono::Net::Security::AsyncProtocolRequest asyncRequest, ::Mono::Net::Security::BufferOffsetSize2 internalBuffer, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "InternalWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::AsyncProtocolRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::BufferOffsetSize2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, asyncRequest, internalBuffer, buffer, offset, size);
}
 ::System::Threading::Tasks::Task_1<int32_t> ::Mono::Net::Security::MobileAuthenticatedStream::InnerRead(bool sync, int32_t requestedSize, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "InnerRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, sync, requestedSize, cancellationToken);
}
 ::System::Threading::Tasks::Task ::Mono::Net::Security::MobileAuthenticatedStream::InnerWrite(bool sync, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "InnerWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, sync, cancellationToken);
}
 ::Mono::Net::Security::AsyncOperationStatus ::Mono::Net::Security::MobileAuthenticatedStream::ProcessHandshake(::Mono::Net::Security::AsyncOperationStatus status, bool renegotiate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "ProcessHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::AsyncOperationStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::AsyncOperationStatus, false>(const_cast<void*>(instance), ___internal_method, status, renegotiate);
}
 ::System::ValueTuple_2<int32_t,bool> ::Mono::Net::Security::MobileAuthenticatedStream::ProcessRead(::Mono::Net::Security::BufferOffsetSize userBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "ProcessRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::BufferOffsetSize>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t,bool>, false>(const_cast<void*>(instance), ___internal_method, userBuffer);
}
 ::System::ValueTuple_2<int32_t,bool> ::Mono::Net::Security::MobileAuthenticatedStream::ProcessWrite(::Mono::Net::Security::BufferOffsetSize userBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "ProcessWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::BufferOffsetSize>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t,bool>, false>(const_cast<void*>(instance), ___internal_method, userBuffer);
}
 bool ::Mono::Net::Security::MobileAuthenticatedStream::get_IsAuthenticated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_IsAuthenticated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Net::Security::MobileAuthenticatedStream::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void ::Mono::Net::Security::MobileAuthenticatedStream::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Security::Cryptography::X509Certificates::X509Certificate ::Mono::Net::Security::MobileAuthenticatedStream::get_LocalCertificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_LocalCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Security::Cryptography::X509Certificates::X509Certificate ::Mono::Net::Security::MobileAuthenticatedStream::get_InternalLocalCertificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_InternalLocalCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t ::Mono::Net::Security::MobileAuthenticatedStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "Seek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SeekOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, offset, origin);
}
 void ::Mono::Net::Security::MobileAuthenticatedStream::SetLength(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "SetLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::Mono::Net::Security::MobileAuthenticatedStream::get_CanRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_CanRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Mono::Net::Security::MobileAuthenticatedStream::get_CanTimeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_CanTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Mono::Net::Security::MobileAuthenticatedStream::get_CanWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_CanWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Mono::Net::Security::MobileAuthenticatedStream::get_CanSeek()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_CanSeek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t ::Mono::Net::Security::MobileAuthenticatedStream::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t ::Mono::Net::Security::MobileAuthenticatedStream::get_Position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Net::Security::MobileAuthenticatedStream::set_Position(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "set_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::Mono::Net::Security::MobileAuthenticatedStream::get_ReadTimeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_ReadTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Net::Security::MobileAuthenticatedStream::set_ReadTimeout(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "set_ReadTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::Mono::Net::Security::MobileAuthenticatedStream::get_WriteTimeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "get_WriteTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Net::Security::MobileAuthenticatedStream::set_WriteTimeout(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "set_WriteTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::Mono::Net::Security::MobileAuthenticatedStream::_InnerWrite_b__67_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileAuthenticatedStream>::get(),
                            "<InnerWrite>b__67_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
