#pragma once
#include "System/Net/zzzz__WebConnectionStream_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/Net/zzzz__WebConnectionTunnel_def.hpp"
#include "System/Net/zzzz__WebCompletionSource_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Net/zzzz__WebConnection_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
//  Writing Method size for method: ::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31::*)()>(&::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x2852b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2852df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31::____System__Net__WebRequestStream___FinishWriting_d__31(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
constexpr void ::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31::__set___4__this(::System::Net::WebRequestStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebRequestStream, 0x20>(this->__instance, std::forward<::System::Net::WebRequestStream>(value));
}
constexpr ::System::Net::WebRequestStream ::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::WebRequestStream, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter ::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x30>(this->__instance);
}
 void ::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___FinishWriting_d__31>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::*)()>(&::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::MoveNext)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x2852e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28532ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "completion", ty: "::System::Net::WebCompletionSource", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::____System__Net__WebRequestStream___WriteAsyncInner_d__33(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream __4__this, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken, ::System::Net::WebCompletionSource completion, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->buffer = buffer;
this->offset = offset;
this->size = size;
this->cancellationToken = cancellationToken;
this->completion = completion;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__set___4__this(::System::Net::WebRequestStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebRequestStream, 0x20>(this->__instance, std::forward<::System::Net::WebRequestStream>(value));
}
constexpr ::System::Net::WebRequestStream ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::WebRequestStream, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__set_buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__get_buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__set_offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__get_offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__set_size(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__get_size() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x38>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x38>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__set_completion(::System::Net::WebCompletionSource value)  {
::cordl_internals::setInstanceField<::System::Net::WebCompletionSource, 0x40>(this->__instance, std::forward<::System::Net::WebCompletionSource>(value));
}
constexpr ::System::Net::WebCompletionSource ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__get_completion() const {
return ::cordl_internals::getInstanceField<::System::Net::WebCompletionSource, 0x40>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x48>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x48>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x58>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x58>(this->__instance);
}
 void ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___WriteAsyncInner_d__33>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::*)()>(&::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x28532b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28537ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::____System__Net__WebRequestStream___ProcessWrite_d__34(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream __4__this, ::System::Threading::CancellationToken cancellationToken, int32_t size, ::ArrayW<uint8_t> buffer, int32_t offset, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->size = size;
this->buffer = buffer;
this->offset = offset;
this->__u__1 = __u__1;
}
constexpr void ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::__set___4__this(::System::Net::WebRequestStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebRequestStream, 0x20>(this->__instance, std::forward<::System::Net::WebRequestStream>(value));
}
constexpr ::System::Net::WebRequestStream ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::WebRequestStream, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::__set_size(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::__get_size() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::__set_buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x38>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::__get_buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x38>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::__set_offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::__get_offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x48>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x48>(this->__instance);
}
 void ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___ProcessWrite_d__34>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::____System__Net__WebRequestStream___Initialize_d__36.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebRequestStream___Initialize_d__36::*)()>(&::System::Net::____System__Net__WebRequestStream___Initialize_d__36::MoveNext)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x28537f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___Initialize_d__36>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebRequestStream___Initialize_d__36.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebRequestStream___Initialize_d__36::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__WebRequestStream___Initialize_d__36::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2853b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___Initialize_d__36>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__WebRequestStream___Initialize_d__36::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__WebRequestStream___Initialize_d__36::____System__Net__WebRequestStream___Initialize_d__36(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void ::System::Net::____System__Net__WebRequestStream___Initialize_d__36::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebRequestStream___Initialize_d__36::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___Initialize_d__36::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::System::Net::____System__Net__WebRequestStream___Initialize_d__36::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___Initialize_d__36::__set___4__this(::System::Net::WebRequestStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebRequestStream, 0x20>(this->__instance, std::forward<::System::Net::WebRequestStream>(value));
}
constexpr ::System::Net::WebRequestStream ::System::Net::____System__Net__WebRequestStream___Initialize_d__36::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::WebRequestStream, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___Initialize_d__36::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::System::Net::____System__Net__WebRequestStream___Initialize_d__36::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___Initialize_d__36::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter ::System::Net::____System__Net__WebRequestStream___Initialize_d__36::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x30>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___Initialize_d__36::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter ::System::Net::____System__Net__WebRequestStream___Initialize_d__36::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->__instance);
}
 void ::System::Net::____System__Net__WebRequestStream___Initialize_d__36::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___Initialize_d__36>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__WebRequestStream___Initialize_d__36::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___Initialize_d__36>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::*)()>(&::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x2853b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28541a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "setInternalLength", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::____System__Net__WebRequestStream___SetHeadersAsync_d__37(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream __4__this, ::System::Threading::CancellationToken cancellationToken, bool setInternalLength, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->setInternalLength = setInternalLength;
this->__u__1 = __u__1;
}
constexpr void ::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::__set___4__this(::System::Net::WebRequestStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebRequestStream, 0x20>(this->__instance, std::forward<::System::Net::WebRequestStream>(value));
}
constexpr ::System::Net::WebRequestStream ::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::WebRequestStream, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::__set_setInternalLength(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::__get_setInternalLength() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x38>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter ::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x38>(this->__instance);
}
 void ::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___SetHeadersAsync_d__37>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::*)()>(&::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::MoveNext)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x28541b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x285466c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_buffer_5__2", ty: "::System::Net::BufferOffsetSize", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::____System__Net__WebRequestStream___WriteRequestAsync_d__38(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Net::BufferOffsetSize _buffer_5__2, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->_buffer_5__2 = _buffer_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::__set___4__this(::System::Net::WebRequestStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebRequestStream, 0x20>(this->__instance, std::forward<::System::Net::WebRequestStream>(value));
}
constexpr ::System::Net::WebRequestStream ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::WebRequestStream, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::__set__buffer_5__2(::System::Net::BufferOffsetSize value)  {
::cordl_internals::setInstanceField<::System::Net::BufferOffsetSize, 0x30>(this->__instance, std::forward<::System::Net::BufferOffsetSize>(value));
}
constexpr ::System::Net::BufferOffsetSize ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::__get__buffer_5__2() const {
return ::cordl_internals::getInstanceField<::System::Net::BufferOffsetSize, 0x30>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x38>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x38>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x48>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x48>(this->__instance);
}
 void ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___WriteRequestAsync_d__38>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39::*)()>(&::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2854678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28548ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39::__set___4__this(::System::Net::WebRequestStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebRequestStream, 0x20>(this->__instance, std::forward<::System::Net::WebRequestStream>(value));
}
constexpr ::System::Net::WebRequestStream ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::WebRequestStream, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x30>(this->__instance);
}
 void ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_inner_d__39>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::*)()>(&::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x28548b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2854f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebRequestStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_cts_5__2", ty: "::System::Threading::CancellationTokenSource", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_timeoutTask_5__3", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::____System__Net__WebRequestStream___WriteChunkTrailer_d__40(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebRequestStream __4__this, ::System::Threading::CancellationTokenSource _cts_5__2, ::System::Threading::Tasks::Task _timeoutTask_5__3, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task> __u__1, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_cts_5__2 = _cts_5__2;
this->_timeoutTask_5__3 = _timeoutTask_5__3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::__set___4__this(::System::Net::WebRequestStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebRequestStream, 0x20>(this->__instance, std::forward<::System::Net::WebRequestStream>(value));
}
constexpr ::System::Net::WebRequestStream ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::WebRequestStream, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::__set__cts_5__2(::System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource, 0x28>(this->__instance, std::forward<::System::Threading::CancellationTokenSource>(value));
}
constexpr ::System::Threading::CancellationTokenSource ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::__get__cts_5__2() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::__set__timeoutTask_5__3(::System::Threading::Tasks::Task value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task, 0x30>(this->__instance, std::forward<::System::Threading::Tasks::Task>(value));
}
constexpr ::System::Threading::Tasks::Task ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::__get__timeoutTask_5__3() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task, 0x30>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task>, 0x38>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task> ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task>, 0x38>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::__set___u__2(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x48>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x48>(this->__instance);
}
 void ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebRequestStream___WriteChunkTrailer_d__40>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::WebRequestStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequestStream::*)(::System::Net::WebConnection, ::System::Net::WebOperation, ::System::IO::Stream, ::System::Net::WebConnectionTunnel)>(&::System::Net::WebRequestStream::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x284ce14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnectionTunnel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_InnerStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_InnerStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2851d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "get_InnerStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_KeepAlive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_KeepAlive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2851d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "get_KeepAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_CanRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2851d70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::WebRequestStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_CanWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2851d78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::WebRequestStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_HasWriteBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_HasWriteBuffer)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2851d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "get_HasWriteBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.get_WriteBufferLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::get_WriteBufferLength)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2851db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "get_WriteBufferLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.GetWriteBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::BufferOffsetSize (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::GetWriteBuffer)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2851df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "GetWriteBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.FinishWriting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::FinishWriting)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2851ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "FinishWriting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::WebRequestStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::WriteAsync)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2851fac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::WebRequestStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteAsyncInner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::WebRequestStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Net::WebCompletionSource, ::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::WriteAsyncInner)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2852204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "WriteAsyncInner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebCompletionSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.ProcessWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::WebRequestStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::ProcessWrite)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2852308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "ProcessWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.CheckWriteOverflow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequestStream::*)(int64_t, int64_t, int64_t)>(&::System::Net::WebRequestStream::CheckWriteOverflow)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2852408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "CheckWriteOverflow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::Initialize)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2850c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.SetHeadersAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::WebRequestStream::*)(bool, ::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::SetHeadersAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x28524a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "SetHeadersAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteRequestAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::WriteRequestAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2852588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "WriteRequestAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteChunkTrailer_inner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::WebRequestStream::*)(::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::WriteChunkTrailer_inner)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2852664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "WriteChunkTrailer_inner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.WriteChunkTrailer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::WriteChunkTrailer)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x285273c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "WriteChunkTrailer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.KillBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequestStream::*)()>(&::System::Net::WebRequestStream::KillBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283f138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "KillBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.ReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t> (::System::Net::WebRequestStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebRequestStream::ReadAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2852810;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::WebRequestStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.TryReadFromBufferedContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebRequestStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ByRef<int32_t>)>(&::System::Net::WebRequestStream::TryReadFromBufferedContent)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28528c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::WebRequestStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestStream.Close_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequestStream::*)(ByRef<bool>)>(&::System::Net::WebRequestStream::Close_internal)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2852900;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::WebRequestStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
 void ::System::Net::WebRequestStream::__set_crlf(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "crlf", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> ::System::Net::WebRequestStream::__get_crlf()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "crlf", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get>();
}
constexpr void ::System::Net::WebRequestStream::__set_writeBuffer(::System::IO::MemoryStream value)  {
::cordl_internals::setInstanceField<::System::IO::MemoryStream, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IO::MemoryStream>(value));
}
constexpr ::System::IO::MemoryStream ::System::Net::WebRequestStream::__get_writeBuffer() const {
return ::cordl_internals::getInstanceField<::System::IO::MemoryStream, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebRequestStream::__set_requestWritten(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::WebRequestStream::__get_requestWritten() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebRequestStream::__set_allowBuffering(bool value)  {
::cordl_internals::setInstanceField<bool, 0x61>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::WebRequestStream::__get_allowBuffering() const {
return ::cordl_internals::getInstanceField<bool, 0x61>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebRequestStream::__set_sendChunked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x62>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::WebRequestStream::__get_sendChunked() const {
return ::cordl_internals::getInstanceField<bool, 0x62>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebRequestStream::__set_pendingWrite(::System::Net::WebCompletionSource value)  {
::cordl_internals::setInstanceField<::System::Net::WebCompletionSource, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebCompletionSource>(value));
}
constexpr ::System::Net::WebCompletionSource ::System::Net::WebRequestStream::__get_pendingWrite() const {
return ::cordl_internals::getInstanceField<::System::Net::WebCompletionSource, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebRequestStream::__set_totalWritten(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::System::Net::WebRequestStream::__get_totalWritten() const {
return ::cordl_internals::getInstanceField<int64_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebRequestStream::__set_headers(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Net::WebRequestStream::__get_headers() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebRequestStream::__set_headersSent(bool value)  {
::cordl_internals::setInstanceField<bool, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::WebRequestStream::__get_headersSent() const {
return ::cordl_internals::getInstanceField<bool, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebRequestStream::__set_completeRequestWritten(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::WebRequestStream::__get_completeRequestWritten() const {
return ::cordl_internals::getInstanceField<int32_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebRequestStream::__set_chunkTrailerWritten(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::WebRequestStream::__get_chunkTrailerWritten() const {
return ::cordl_internals::getInstanceField<int32_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebRequestStream::__set__InnerStream_k__BackingField(::System::IO::Stream value)  {
::cordl_internals::setInstanceField<::System::IO::Stream, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IO::Stream>(value));
}
constexpr ::System::IO::Stream ::System::Net::WebRequestStream::__get__InnerStream_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebRequestStream::__set__KeepAlive_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::WebRequestStream::__get__KeepAlive_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "connection", ty: "::System::Net::WebConnection", modifiers: "", def_value: None }, CppParam { name: "operation", ty: "::System::Net::WebOperation", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "tunnel", ty: "::System::Net::WebConnectionTunnel", modifiers: "", def_value: None }]
 ::System::Net::WebRequestStream::WebRequestStream(::System::Net::WebConnection connection, ::System::Net::WebOperation operation, ::System::IO::Stream stream, ::System::Net::WebConnectionTunnel tunnel)  : ::System::Net::WebConnectionStream(THROW_UNLESS(::il2cpp_utils::New<WebRequestStream>(connection, operation, stream, tunnel))) {}
 void ::System::Net::WebRequestStream::_ctor(::System::Net::WebConnection connection, ::System::Net::WebOperation operation, ::System::IO::Stream stream, ::System::Net::WebConnectionTunnel tunnel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnectionTunnel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connection, operation, stream, tunnel);
}
 ::System::IO::Stream ::System::Net::WebRequestStream::get_InnerStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "get_InnerStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::WebRequestStream::get_KeepAlive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "get_KeepAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::WebRequestStream::get_CanRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "get_CanRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::WebRequestStream::get_CanWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "get_CanWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::WebRequestStream::get_HasWriteBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "get_HasWriteBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Net::WebRequestStream::get_WriteBufferLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "get_WriteBufferLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::BufferOffsetSize ::System::Net::WebRequestStream::GetWriteBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "GetWriteBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::BufferOffsetSize, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task ::System::Net::WebRequestStream::FinishWriting(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "FinishWriting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 ::System::Threading::Tasks::Task ::System::Net::WebRequestStream::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "WriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cancellationToken);
}
 ::System::Threading::Tasks::Task ::System::Net::WebRequestStream::WriteAsyncInner(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::WebCompletionSource completion, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "WriteAsyncInner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebCompletionSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, completion, cancellationToken);
}
 ::System::Threading::Tasks::Task ::System::Net::WebRequestStream::ProcessWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "ProcessWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, cancellationToken);
}
 void ::System::Net::WebRequestStream::CheckWriteOverflow(int64_t contentLength, int64_t totalWritten, int64_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "CheckWriteOverflow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, contentLength, totalWritten, size);
}
 ::System::Threading::Tasks::Task ::System::Net::WebRequestStream::Initialize(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 ::System::Threading::Tasks::Task ::System::Net::WebRequestStream::SetHeadersAsync(bool setInternalLength, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "SetHeadersAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, setInternalLength, cancellationToken);
}
 ::System::Threading::Tasks::Task ::System::Net::WebRequestStream::WriteRequestAsync(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "WriteRequestAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 ::System::Threading::Tasks::Task ::System::Net::WebRequestStream::WriteChunkTrailer_inner(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "WriteChunkTrailer_inner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 ::System::Threading::Tasks::Task ::System::Net::WebRequestStream::WriteChunkTrailer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "WriteChunkTrailer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::WebRequestStream::KillBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "KillBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<int32_t> ::System::Net::WebRequestStream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "ReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, cancellationToken);
}
 bool ::System::Net::WebRequestStream::TryReadFromBufferedContent(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ByRef<int32_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "TryReadFromBufferedContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, result);
}
 void ::System::Net::WebRequestStream::Close_internal(ByRef<bool> disposed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestStream>::get(),
                            "Close_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposed);
}
} // end anonymous namespace
