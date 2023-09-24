#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Net/zzzz__WebConnectionTunnel_def.hpp"
#include "System/Net/zzzz__WebConnectionTunnel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::System__Net__WebConnectionTunnel__NtlmAuthState::System__Net__WebConnectionTunnel__NtlmAuthState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::System__Net__WebConnectionTunnel__NtlmAuthState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__WebConnectionTunnel__NtlmAuthState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::System__Net__WebConnectionTunnel__NtlmAuthState  System::Net::System__Net__WebConnectionTunnel__NtlmAuthState::None{0};
constexpr System::Net::System__Net__WebConnectionTunnel__NtlmAuthState  System::Net::System__Net__WebConnectionTunnel__NtlmAuthState::Challenge{1};
constexpr System::Net::System__Net__WebConnectionTunnel__NtlmAuthState  System::Net::System__Net__WebConnectionTunnel__NtlmAuthState::Response{2};
//  Writing Method size for method: System::Net::System__Net__WebConnectionTunnel___Initialize_d__42.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::*)()>(&System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::MoveNext)> {
  constexpr static std::size_t size = 0xdd4;
  constexpr static std::size_t addrs = 0x284e264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnectionTunnel___Initialize_d__42>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__WebConnectionTunnel___Initialize_d__42.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x284f038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnectionTunnel___Initialize_d__42>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "System::Net::WebConnectionTunnel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_have_auth_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::ValueTuple_3<System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>>", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::System__Net__WebConnectionTunnel___Initialize_d__42(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Net::WebConnectionTunnel __4__this, System::IO::Stream stream, System::Threading::CancellationToken cancellationToken, bool _have_auth_5__2, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::ValueTuple_3<System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->stream = stream;
this->cancellationToken = cancellationToken;
this->_have_auth_5__2 = _have_auth_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::__set___4__this(System::Net::WebConnectionTunnel value)  {
::cordl_internals::setInstanceField<System::Net::WebConnectionTunnel, 0x20>(this->__instance, std::forward<System::Net::WebConnectionTunnel>(value));
}
constexpr System::Net::WebConnectionTunnel System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::Net::WebConnectionTunnel, 0x20>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::__set_stream(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x28>(this->__instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::__get_stream() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x28>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::__set__have_auth_5__2(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::__get__have_auth_5__2() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::__set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::ValueTuple_3<System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::ValueTuple_3<System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>>, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::ValueTuple_3<System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>>>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::ValueTuple_3<System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>> System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::ValueTuple_3<System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>>, 0x50>(this->__instance);
}
 void System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnectionTunnel___Initialize_d__42>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Net::System__Net__WebConnectionTunnel___Initialize_d__42::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnectionTunnel___Initialize_d__42>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::*)()>(&System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x7bc;
  constexpr static std::size_t addrs = 0x284f044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x284f800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_3<System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "System::Net::WebConnectionTunnel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_retBuffer_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_status_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_buffer_5__4", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_ms_5__5", ty: "System::IO::MemoryStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::System__Net__WebConnectionTunnel___ReadHeaders_d__43(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_3<System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>> __t__builder, System::Threading::CancellationToken cancellationToken, System::IO::Stream stream, System::Net::WebConnectionTunnel __4__this, ::ArrayW<uint8_t> _retBuffer_5__2, int32_t _status_5__3, ::ArrayW<uint8_t> _buffer_5__4, System::IO::MemoryStream _ms_5__5, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->stream = stream;
this->__4__this = __4__this;
this->_retBuffer_5__2 = _retBuffer_5__2;
this->_status_5__3 = _status_5__3;
this->_buffer_5__4 = _buffer_5__4;
this->_ms_5__5 = _ms_5__5;
this->__u__1 = __u__1;
}
constexpr void System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_3<System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_3<System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_3<System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_3<System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>> System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_3<System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>>, 0x8>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__set_stream(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x28>(this->__instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__get_stream() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x28>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__set___4__this(System::Net::WebConnectionTunnel value)  {
::cordl_internals::setInstanceField<System::Net::WebConnectionTunnel, 0x30>(this->__instance, std::forward<System::Net::WebConnectionTunnel>(value));
}
constexpr System::Net::WebConnectionTunnel System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::Net::WebConnectionTunnel, 0x30>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__set__retBuffer_5__2(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x38>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__get__retBuffer_5__2() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x38>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__set__status_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__get__status_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__set__buffer_5__4(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x48>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__get__buffer_5__4() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x48>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__set__ms_5__5(System::IO::MemoryStream value)  {
::cordl_internals::setInstanceField<System::IO::MemoryStream, 0x50>(this->__instance, std::forward<System::IO::MemoryStream>(value));
}
constexpr System::IO::MemoryStream System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__get__ms_5__5() const {
return ::cordl_internals::getInstanceField<System::IO::MemoryStream, 0x50>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x58>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x58>(this->__instance);
}
 void System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnectionTunnel___ReadHeaders_d__43>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: System::Net::WebConnectionTunnel.get_Request
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpWebRequest (System::Net::WebConnectionTunnel::*)()>(&System::Net::WebConnectionTunnel::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284e038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "get_Request",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel.get_ConnectUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri (System::Net::WebConnectionTunnel::*)()>(&System::Net::WebConnectionTunnel::get_ConnectUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284e040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "get_ConnectUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionTunnel::*)(System::Net::HttpWebRequest, System::Uri)>(&System::Net::WebConnectionTunnel::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x284c794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpWebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel.get_Success
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnectionTunnel::*)()>(&System::Net::WebConnectionTunnel::get_Success)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284e048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "get_Success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel.set_Success
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionTunnel::*)(bool)>(&System::Net::WebConnectionTunnel::set_Success)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x284e050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "set_Success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel.get_CloseConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnectionTunnel::*)()>(&System::Net::WebConnectionTunnel::get_CloseConnection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284e05c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "get_CloseConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel.set_CloseConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionTunnel::*)(bool)>(&System::Net::WebConnectionTunnel::set_CloseConnection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x284e064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "set_CloseConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel.get_StatusCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::WebConnectionTunnel::*)()>(&System::Net::WebConnectionTunnel::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284e070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "get_StatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel.set_StatusCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionTunnel::*)(int32_t)>(&System::Net::WebConnectionTunnel::set_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284e078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "set_StatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel.set_StatusDescription
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionTunnel::*)(::StringW)>(&System::Net::WebConnectionTunnel::set_StatusDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284e080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "set_StatusDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel.get_Challenge
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Net::WebConnectionTunnel::*)()>(&System::Net::WebConnectionTunnel::get_Challenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284e088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "get_Challenge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel.set_Challenge
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionTunnel::*)(::ArrayW<::StringW>)>(&System::Net::WebConnectionTunnel::set_Challenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284e090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "set_Challenge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel.get_Headers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebHeaderCollection (System::Net::WebConnectionTunnel::*)()>(&System::Net::WebConnectionTunnel::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284e098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel.set_Headers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionTunnel::*)(System::Net::WebHeaderCollection)>(&System::Net::WebConnectionTunnel::set_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284e0a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "set_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebHeaderCollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel.get_ProxyVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Version (System::Net::WebConnectionTunnel::*)()>(&System::Net::WebConnectionTunnel::get_ProxyVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284e0a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "get_ProxyVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel.set_ProxyVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionTunnel::*)(System::Version)>(&System::Net::WebConnectionTunnel::set_ProxyVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284e0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "set_ProxyVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Version>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel.get_Data
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Net::WebConnectionTunnel::*)()>(&System::Net::WebConnectionTunnel::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284e0b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "get_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel.set_Data
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionTunnel::*)(::ArrayW<uint8_t>)>(&System::Net::WebConnectionTunnel::set_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284e0c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "set_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::Net::WebConnectionTunnel::*)(System::IO::Stream, System::Threading::CancellationToken)>(&System::Net::WebConnectionTunnel::Initialize)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x284c7c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel.ReadHeaders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::ValueTuple_3<System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>> (System::Net::WebConnectionTunnel::*)(System::IO::Stream, System::Threading::CancellationToken)>(&System::Net::WebConnectionTunnel::ReadHeaders)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x284e0c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "ReadHeaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnectionTunnel.FlushContents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionTunnel::*)(System::IO::Stream, int32_t)>(&System::Net::WebConnectionTunnel::FlushContents)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x284e1d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "FlushContents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::WebConnectionTunnel::__set__Request_k__BackingField(System::Net::HttpWebRequest value)  {
::cordl_internals::setInstanceField<System::Net::HttpWebRequest, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::HttpWebRequest>(value));
}
constexpr System::Net::HttpWebRequest System::Net::WebConnectionTunnel::__get__Request_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Net::HttpWebRequest, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnectionTunnel::__set__ConnectUri_k__BackingField(System::Uri value)  {
::cordl_internals::setInstanceField<System::Uri, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Uri>(value));
}
constexpr System::Uri System::Net::WebConnectionTunnel::__get__ConnectUri_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Uri, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnectionTunnel::__set_connectRequest(System::Net::HttpWebRequest value)  {
::cordl_internals::setInstanceField<System::Net::HttpWebRequest, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::HttpWebRequest>(value));
}
constexpr System::Net::HttpWebRequest System::Net::WebConnectionTunnel::__get_connectRequest() const {
return ::cordl_internals::getInstanceField<System::Net::HttpWebRequest, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnectionTunnel::__set_ntlmAuthState(System::Net::System__Net__WebConnectionTunnel__NtlmAuthState value)  {
::cordl_internals::setInstanceField<System::Net::System__Net__WebConnectionTunnel__NtlmAuthState, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::System__Net__WebConnectionTunnel__NtlmAuthState>(value));
}
constexpr System::Net::System__Net__WebConnectionTunnel__NtlmAuthState System::Net::WebConnectionTunnel::__get_ntlmAuthState() const {
return ::cordl_internals::getInstanceField<System::Net::System__Net__WebConnectionTunnel__NtlmAuthState, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnectionTunnel::__set__Success_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::WebConnectionTunnel::__get__Success_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnectionTunnel::__set__CloseConnection_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::WebConnectionTunnel::__get__CloseConnection_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x2d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnectionTunnel::__set__StatusCode_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::WebConnectionTunnel::__get__StatusCode_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnectionTunnel::__set__StatusDescription_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::WebConnectionTunnel::__get__StatusDescription_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnectionTunnel::__set__Challenge_k__BackingField(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Net::WebConnectionTunnel::__get__Challenge_k__BackingField() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnectionTunnel::__set__Headers_k__BackingField(System::Net::WebHeaderCollection value)  {
::cordl_internals::setInstanceField<System::Net::WebHeaderCollection, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::WebHeaderCollection>(value));
}
constexpr System::Net::WebHeaderCollection System::Net::WebConnectionTunnel::__get__Headers_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Net::WebHeaderCollection, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnectionTunnel::__set__ProxyVersion_k__BackingField(System::Version value)  {
::cordl_internals::setInstanceField<System::Version, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Version>(value));
}
constexpr System::Version System::Net::WebConnectionTunnel::__get__ProxyVersion_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Version, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnectionTunnel::__set__Data_k__BackingField(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Net::WebConnectionTunnel::__get__Data_k__BackingField() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::HttpWebRequest System::Net::WebConnectionTunnel::get_Request()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "get_Request",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::HttpWebRequest, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Uri System::Net::WebConnectionTunnel::get_ConnectUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "get_ConnectUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Uri, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::WebConnectionTunnel System::Net::WebConnectionTunnel::New_ctor(System::Net::HttpWebRequest request, System::Uri connectUri)  {
System::Net::WebConnectionTunnel o{THROW_UNLESS(::il2cpp_utils::New<System::Net::WebConnectionTunnel>(request, connectUri))};
return o;
}
 void System::Net::WebConnectionTunnel::_ctor(System::Net::HttpWebRequest request, System::Uri connectUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpWebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, request, connectUri);
}
 bool System::Net::WebConnectionTunnel::get_Success()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "get_Success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::WebConnectionTunnel::set_Success(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "set_Success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Net::WebConnectionTunnel::get_CloseConnection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "get_CloseConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::WebConnectionTunnel::set_CloseConnection(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "set_CloseConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::Net::WebConnectionTunnel::get_StatusCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "get_StatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::WebConnectionTunnel::set_StatusCode(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "set_StatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Net::WebConnectionTunnel::set_StatusDescription(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "set_StatusDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<::StringW> System::Net::WebConnectionTunnel::get_Challenge()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "get_Challenge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::WebConnectionTunnel::set_Challenge(::ArrayW<::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "set_Challenge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Net::WebHeaderCollection System::Net::WebConnectionTunnel::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::WebHeaderCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::WebConnectionTunnel::set_Headers(System::Net::WebHeaderCollection value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "set_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebHeaderCollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Version System::Net::WebConnectionTunnel::get_ProxyVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "get_ProxyVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Version, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::WebConnectionTunnel::set_ProxyVersion(System::Version value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "set_ProxyVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Version>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<uint8_t> System::Net::WebConnectionTunnel::get_Data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "get_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::WebConnectionTunnel::set_Data(::ArrayW<uint8_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "set_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Threading::Tasks::Task System::Net::WebConnectionTunnel::Initialize(System::IO::Stream stream, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, stream, cancellationToken);
}
 System::Threading::Tasks::Task_1<System::ValueTuple_3<System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>> System::Net::WebConnectionTunnel::ReadHeaders(System::IO::Stream stream, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "ReadHeaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_3<System::Net::WebHeaderCollection,::ArrayW<uint8_t>,int32_t>>, false>(const_cast<void*>(instance), ___internal_method, stream, cancellationToken);
}
 void System::Net::WebConnectionTunnel::FlushContents(System::IO::Stream stream, int32_t contentLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnectionTunnel>::get(),
                            "FlushContents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream, contentLength);
}
