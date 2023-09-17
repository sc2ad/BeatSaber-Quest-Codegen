#pragma once
#include "System/Net/zzzz__WebReadStream_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Net/zzzz__MonoChunkStream_def.hpp"
#include "System/Net/zzzz__MonoChunkParser_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
//  Writing Method size for method: ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::*)()>(&::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x284272c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2842a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::MonoChunkStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_moreBytes_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::____System__Net__MonoChunkStream___ProcessReadAsync_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::System::Threading::CancellationToken cancellationToken, ::System::Net::MonoChunkStream __4__this, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::ArrayW<uint8_t> _moreBytes_5__2, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->buffer = buffer;
this->offset = offset;
this->size = size;
this->_moreBytes_5__2 = _moreBytes_5__2;
this->__u__1 = __u__1;
}
constexpr void ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::__set___4__this(::System::Net::MonoChunkStream value)  {
::cordl_internals::setInstanceField<::System::Net::MonoChunkStream, 0x28>(this->__instance, std::forward<::System::Net::MonoChunkStream>(value));
}
constexpr ::System::Net::MonoChunkStream ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::MonoChunkStream, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::__set_buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::__get_buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance);
}
constexpr void ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::__set_offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::__get_offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->__instance);
}
constexpr void ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::__set_size(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::__get_size() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->__instance);
}
constexpr void ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::__set__moreBytes_5__2(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x40>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::__get__moreBytes_5__2() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x40>(this->__instance);
}
constexpr void ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x48>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x48>(this->__instance);
}
 void ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__MonoChunkStream___ProcessReadAsync_d__7>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::*)()>(&::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x2842af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2842ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::MonoChunkStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "_buffer_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::____System__Net__MonoChunkStream___FinishReading_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::MonoChunkStream __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, ::ArrayW<uint8_t> _buffer_5__2, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->_buffer_5__2 = _buffer_5__2;
this->__u__2 = __u__2;
}
constexpr void ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::__set___4__this(::System::Net::MonoChunkStream value)  {
::cordl_internals::setInstanceField<::System::Net::MonoChunkStream, 0x20>(this->__instance, std::forward<::System::Net::MonoChunkStream>(value));
}
constexpr ::System::Net::MonoChunkStream ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::MonoChunkStream, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x30>(this->__instance);
}
constexpr void ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::__set__buffer_5__2(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x40>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::__get__buffer_5__2() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x40>(this->__instance);
}
constexpr void ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::__set___u__2(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x48>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x48>(this->__instance);
}
 void ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__MonoChunkStream___FinishReading_d__8>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::MonoChunkStream.get_Decoder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::MonoChunkParser (::System::Net::MonoChunkStream::*)()>(&::System::Net::MonoChunkStream::get_Decoder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28422bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream>::get(),
                            "get_Decoder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::MonoChunkStream::*)(::System::Net::WebOperation, ::System::IO::Stream, ::System::Net::WebHeaderCollection)>(&::System::Net::MonoChunkStream::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x28422c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkStream.ProcessReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t> (::System::Net::MonoChunkStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::MonoChunkStream::ProcessReadAsync)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x28423c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::MonoChunkStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkStream.FinishReading
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::MonoChunkStream::*)(::System::Threading::CancellationToken)>(&::System::Net::MonoChunkStream::FinishReading)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x28424e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::MonoChunkStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkStream.ThrowExpectingChunkTrailer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Net::MonoChunkStream::ThrowExpectingChunkTrailer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x28425c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream>::get(),
                            "ThrowExpectingChunkTrailer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkStream.__n__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::MonoChunkStream::*)(::System::Threading::CancellationToken)>(&::System::Net::MonoChunkStream::__n__0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2842624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream>::get(),
                            "<>n__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Net::MonoChunkStream::__set__Headers_k__BackingField(::System::Net::WebHeaderCollection value)  {
::cordl_internals::setInstanceField<::System::Net::WebHeaderCollection, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebHeaderCollection>(value));
}
constexpr ::System::Net::WebHeaderCollection ::System::Net::MonoChunkStream::__get__Headers_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::WebHeaderCollection, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::MonoChunkStream::__set__Decoder_k__BackingField(::System::Net::MonoChunkParser value)  {
::cordl_internals::setInstanceField<::System::Net::MonoChunkParser, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::MonoChunkParser>(value));
}
constexpr ::System::Net::MonoChunkParser ::System::Net::MonoChunkStream::__get__Decoder_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::MonoChunkParser, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Net::MonoChunkParser ::System::Net::MonoChunkStream::get_Decoder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream>::get(),
                            "get_Decoder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::MonoChunkParser, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "operation", ty: "::System::Net::WebOperation", modifiers: "", def_value: None }, CppParam { name: "innerStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "headers", ty: "::System::Net::WebHeaderCollection", modifiers: "", def_value: None }]
 ::System::Net::MonoChunkStream::MonoChunkStream(::System::Net::WebOperation operation, ::System::IO::Stream innerStream, ::System::Net::WebHeaderCollection headers)  : ::System::Net::WebReadStream(THROW_UNLESS(::il2cpp_utils::New<MonoChunkStream>(operation, innerStream, headers))) {}
 void ::System::Net::MonoChunkStream::_ctor(::System::Net::WebOperation operation, ::System::IO::Stream innerStream, ::System::Net::WebHeaderCollection headers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, operation, innerStream, headers);
}
 ::System::Threading::Tasks::Task_1<int32_t> ::System::Net::MonoChunkStream::ProcessReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream>::get(),
                            "ProcessReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, cancellationToken);
}
 ::System::Threading::Tasks::Task ::System::Net::MonoChunkStream::FinishReading(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream>::get(),
                            "FinishReading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 void ::System::Net::MonoChunkStream::ThrowExpectingChunkTrailer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream>::get(),
                            "ThrowExpectingChunkTrailer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 ::System::Threading::Tasks::Task ::System::Net::MonoChunkStream::__n__0(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkStream>::get(),
                            "<>n__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
} // end anonymous namespace
