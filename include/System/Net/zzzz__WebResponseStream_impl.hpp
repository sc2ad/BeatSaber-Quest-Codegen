#pragma once
#include "System/Net/zzzz__WebConnectionStream_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Net/zzzz__WebResponseStream_def.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Net/zzzz__ReadState_def.hpp"
#include "System/Net/zzzz__WebCompletionSource_def.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Net/zzzz__WebException_def.hpp"
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
//  Writing Method size for method: ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::*)()>(&::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x8e4;
  constexpr static std::size_t addrs = 0x2856918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x28571fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_completion_5__2", ty: "::System::Net::WebCompletionSource", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_nbytes_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_throwMe_5__4", ty: "::System::Exception", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::____System__Net__WebResponseStream___ReadAsync_d__40(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::System::Threading::CancellationToken cancellationToken, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Net::WebResponseStream __4__this, ::System::Net::WebCompletionSource _completion_5__2, int32_t _nbytes_5__3, ::System::Exception _throwMe_5__4, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::bs_hook::Il2CppWrapperType> __u__1, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->buffer = buffer;
this->offset = offset;
this->count = count;
this->__4__this = __4__this;
this->_completion_5__2 = _completion_5__2;
this->_nbytes_5__3 = _nbytes_5__3;
this->_throwMe_5__4 = _throwMe_5__4;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__set_buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__get_buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__set_offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__get_offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__set___4__this(::System::Net::WebResponseStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebResponseStream, 0x38>(this->__instance, std::forward<::System::Net::WebResponseStream>(value));
}
constexpr ::System::Net::WebResponseStream ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::WebResponseStream, 0x38>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__set__completion_5__2(::System::Net::WebCompletionSource value)  {
::cordl_internals::setInstanceField<::System::Net::WebCompletionSource, 0x40>(this->__instance, std::forward<::System::Net::WebCompletionSource>(value));
}
constexpr ::System::Net::WebCompletionSource ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__get__completion_5__2() const {
return ::cordl_internals::getInstanceField<::System::Net::WebCompletionSource, 0x40>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__set__nbytes_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__get__nbytes_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__set__throwMe_5__4(::System::Exception value)  {
::cordl_internals::setInstanceField<::System::Exception, 0x50>(this->__instance, std::forward<::System::Exception>(value));
}
constexpr ::System::Exception ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__get__throwMe_5__4() const {
return ::cordl_internals::getInstanceField<::System::Exception, 0x50>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::bs_hook::Il2CppWrapperType>, 0x58>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::bs_hook::Il2CppWrapperType> ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::bs_hook::Il2CppWrapperType>, 0x58>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__set___u__2(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x68>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x68>(this->__instance);
}
 void ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream___ReadAsync_d__40>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::*)()>(&::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285543c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0._ProcessRead_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t> (::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::*)(::System::Threading::CancellationToken)>(&::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::_ProcessRead_b__0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2857254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0>::get(),
                            "<ProcessRead>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0._ProcessRead_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::*)()>(&::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::_ProcessRead_b__1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2857290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0>::get(),
                            "<ProcessRead>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0._ProcessRead_b__2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::*)()>(&::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::_ProcessRead_b__2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28572d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0>::get(),
                            "<ProcessRead>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::__set___4__this(::System::Net::WebResponseStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebResponseStream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebResponseStream>(value));
}
constexpr ::System::Net::WebResponseStream ::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::WebResponseStream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::__set_buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::__get_buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::__set_offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::__get_offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::__set_size(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::__get_size() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::____System__Net__WebResponseStream____c__DisplayClass41_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Net__WebResponseStream____c__DisplayClass41_0>())) {}
 void ::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<int32_t> ::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::_ProcessRead_b__0(::System::Threading::CancellationToken ct)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0>::get(),
                            "<ProcessRead>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, ct);
}
 void ::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::_ProcessRead_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0>::get(),
                            "<ProcessRead>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0::_ProcessRead_b__2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream____c__DisplayClass41_0>::get(),
                            "<ProcessRead>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::*)()>(&::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::MoveNext)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x28572f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x285785c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_maximumSize_5__2", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ms_5__3", ty: "::System::IO::MemoryStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_buffer_5__4", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> __t__builder, ::System::Threading::CancellationToken cancellationToken, ::System::Net::WebResponseStream __4__this, int64_t _maximumSize_5__2, ::System::IO::MemoryStream _ms_5__3, ::ArrayW<uint8_t> _buffer_5__4, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->_maximumSize_5__2 = _maximumSize_5__2;
this->_ms_5__3 = _ms_5__3;
this->_buffer_5__4 = _buffer_5__4;
this->__u__1 = __u__1;
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::__set___4__this(::System::Net::WebResponseStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebResponseStream, 0x28>(this->__instance, std::forward<::System::Net::WebResponseStream>(value));
}
constexpr ::System::Net::WebResponseStream ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::WebResponseStream, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::__set__maximumSize_5__2(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x30>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::__get__maximumSize_5__2() const {
return ::cordl_internals::getInstanceField<int64_t, 0x30>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::__set__ms_5__3(::System::IO::MemoryStream value)  {
::cordl_internals::setInstanceField<::System::IO::MemoryStream, 0x38>(this->__instance, std::forward<::System::IO::MemoryStream>(value));
}
constexpr ::System::IO::MemoryStream ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::__get__ms_5__3() const {
return ::cordl_internals::getInstanceField<::System::IO::MemoryStream, 0x38>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::__set__buffer_5__4(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x40>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::__get__buffer_5__4() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x40>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x48>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x48>(this->__instance);
}
 void ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream___ReadAllAsyncInner_d__47>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::*)()>(&::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::MoveNext)> {
  constexpr static std::size_t size = 0x95c;
  constexpr static std::size_t addrs = 0x28578b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2858210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "resending", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_completion_5__2", ty: "::System::Net::WebCompletionSource", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_timeoutCts_5__3", ty: "::System::Threading::CancellationTokenSource", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_timeoutTask_5__4", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::____System__Net__WebResponseStream___ReadAllAsync_d__48(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebResponseStream __4__this, ::System::Threading::CancellationToken cancellationToken, bool resending, ::System::Net::WebCompletionSource _completion_5__2, ::System::Threading::CancellationTokenSource _timeoutCts_5__3, ::System::Threading::Tasks::Task _timeoutTask_5__4, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task> __u__1, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t>> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->resending = resending;
this->_completion_5__2 = _completion_5__2;
this->_timeoutCts_5__3 = _timeoutCts_5__3;
this->_timeoutTask_5__4 = _timeoutTask_5__4;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__set___4__this(::System::Net::WebResponseStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebResponseStream, 0x20>(this->__instance, std::forward<::System::Net::WebResponseStream>(value));
}
constexpr ::System::Net::WebResponseStream ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::WebResponseStream, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__set_resending(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__get_resending() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__set__completion_5__2(::System::Net::WebCompletionSource value)  {
::cordl_internals::setInstanceField<::System::Net::WebCompletionSource, 0x38>(this->__instance, std::forward<::System::Net::WebCompletionSource>(value));
}
constexpr ::System::Net::WebCompletionSource ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__get__completion_5__2() const {
return ::cordl_internals::getInstanceField<::System::Net::WebCompletionSource, 0x38>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__set__timeoutCts_5__3(::System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource, 0x40>(this->__instance, std::forward<::System::Threading::CancellationTokenSource>(value));
}
constexpr ::System::Threading::CancellationTokenSource ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__get__timeoutCts_5__3() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource, 0x40>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__set__timeoutTask_5__4(::System::Threading::Tasks::Task value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task, 0x48>(this->__instance, std::forward<::System::Threading::Tasks::Task>(value));
}
constexpr ::System::Threading::Tasks::Task ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__get__timeoutTask_5__4() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task, 0x48>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task>, 0x50>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task> ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task>, 0x50>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__set___u__2(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t>>, 0x60>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t>>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t>> ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t>>, 0x60>(this->__instance);
}
 void ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream___ReadAllAsync_d__48>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::*)()>(&::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::MoveNext)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x285821c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28588d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebResponseStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_buffer_5__2", ty: "::System::Net::BufferOffsetSize", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_state_5__3", ty: "::System::Net::ReadState", modifiers: "", def_value: Some("{}") }, CppParam { name: "_position_5__4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::____System__Net__WebResponseStream___InitReadAsync_d__52(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::WebResponseStream __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Net::BufferOffsetSize _buffer_5__2, ::System::Net::ReadState _state_5__3, int32_t _position_5__4, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->_buffer_5__2 = _buffer_5__2;
this->_state_5__3 = _state_5__3;
this->_position_5__4 = _position_5__4;
this->__u__1 = __u__1;
}
constexpr void ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::__set___4__this(::System::Net::WebResponseStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebResponseStream, 0x20>(this->__instance, std::forward<::System::Net::WebResponseStream>(value));
}
constexpr ::System::Net::WebResponseStream ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::WebResponseStream, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::__set__buffer_5__2(::System::Net::BufferOffsetSize value)  {
::cordl_internals::setInstanceField<::System::Net::BufferOffsetSize, 0x30>(this->__instance, std::forward<::System::Net::BufferOffsetSize>(value));
}
constexpr ::System::Net::BufferOffsetSize ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::__get__buffer_5__2() const {
return ::cordl_internals::getInstanceField<::System::Net::BufferOffsetSize, 0x30>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::__set__state_5__3(::System::Net::ReadState value)  {
::cordl_internals::setInstanceField<::System::Net::ReadState, 0x38>(this->__instance, std::forward<::System::Net::ReadState>(value));
}
constexpr ::System::Net::ReadState ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::__get__state_5__3() const {
return ::cordl_internals::getInstanceField<::System::Net::ReadState, 0x38>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::__set__position_5__4(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::__get__position_5__4() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x40>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x40>(this->__instance);
}
 void ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebResponseStream___InitReadAsync_d__52>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::WebResponseStream.get_RequestStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebRequestStream (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_RequestStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2854f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "get_RequestStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.get_Headers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2854f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.set_Headers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebResponseStream::*)(::System::Net::WebHeaderCollection)>(&::System::Net::WebResponseStream::set_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2854f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "set_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.get_StatusCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpStatusCode (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2854f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "get_StatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.set_StatusCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebResponseStream::*)(::System::Net::HttpStatusCode)>(&::System::Net::WebResponseStream::set_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2854fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "set_StatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.get_StatusDescription
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_StatusDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2854fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "get_StatusDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.set_StatusDescription
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebResponseStream::*)(::StringW)>(&::System::Net::WebResponseStream::set_StatusDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2854fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "set_StatusDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2854fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.set_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebResponseStream::*)(::System::Version)>(&::System::Net::WebResponseStream::set_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2854fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "set_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.get_KeepAlive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_KeepAlive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2854fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "get_KeepAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.set_KeepAlive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebResponseStream::*)(bool)>(&::System::Net::WebResponseStream::set_KeepAlive)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2854fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "set_KeepAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebResponseStream::*)(::System::Net::WebRequestStream)>(&::System::Net::WebResponseStream::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2854fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequestStream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.get_CanRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2855064;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::WebResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.get_CanWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285506c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::WebResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.get_ChunkedRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_ChunkedRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2855074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "get_ChunkedRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.set_ChunkedRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebResponseStream::*)(bool)>(&::System::Net::WebResponseStream::set_ChunkedRead)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x285507c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "set_ChunkedRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.ReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t> (::System::Net::WebResponseStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebResponseStream::ReadAsync)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2855088;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::WebResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.ProcessRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t> (::System::Net::WebResponseStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebResponseStream::ProcessRead)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x28551bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "ProcessRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.TryReadFromBufferedContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebResponseStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ByRef<int32_t>)>(&::System::Net::WebResponseStream::TryReadFromBufferedContent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2855444;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::WebResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.get_ExpectContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebResponseStream::*)()>(&::System::Net::WebResponseStream::get_ExpectContent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2855510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "get_ExpectContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebResponseStream::*)(::System::Net::BufferOffsetSize)>(&::System::Net::WebResponseStream::Initialize)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x28555a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::BufferOffsetSize>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.ReadAllAsyncInner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> (::System::Net::WebResponseStream::*)(::System::Threading::CancellationToken)>(&::System::Net::WebResponseStream::ReadAllAsyncInner)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2855acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "ReadAllAsyncInner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.ReadAllAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::WebResponseStream::*)(bool, ::System::Threading::CancellationToken)>(&::System::Net::WebResponseStream::ReadAllAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2855bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "ReadAllAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.WriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::WebResponseStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::WebResponseStream::WriteAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2855cc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::WebResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.Close_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebResponseStream::*)(ByRef<bool>)>(&::System::Net::WebResponseStream::Close_internal)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2855d5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::WebResponseStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.GetReadException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebException (::System::Net::WebResponseStream::*)(::System::Net::WebExceptionStatus, ::System::Exception, ::StringW)>(&::System::Net::WebResponseStream::GetReadException)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2855de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "GetReadException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebExceptionStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.InitReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Net::WebResponseStream::*)(::System::Threading::CancellationToken)>(&::System::Net::WebResponseStream::InitReadAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2856084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "InitReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebResponseStream.GetResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebResponseStream::*)(::System::Net::BufferOffsetSize, ByRef<int32_t>, ByRef<::System::Net::ReadState>)>(&::System::Net::WebResponseStream::GetResponse)> {
  constexpr static std::size_t size = 0x7b8;
  constexpr static std::size_t addrs = 0x2856160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "GetResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::BufferOffsetSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::ReadState>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Net::WebResponseStream::__set_innerStream(::System::Net::WebReadStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebReadStream, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebReadStream>(value));
}
constexpr ::System::Net::WebReadStream ::System::Net::WebResponseStream::__get_innerStream() const {
return ::cordl_internals::getInstanceField<::System::Net::WebReadStream, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebResponseStream::__set_nextReadCalled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::WebResponseStream::__get_nextReadCalled() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebResponseStream::__set_bufferedEntireContent(bool value)  {
::cordl_internals::setInstanceField<bool, 0x61>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::WebResponseStream::__get_bufferedEntireContent() const {
return ::cordl_internals::getInstanceField<bool, 0x61>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebResponseStream::__set_pendingRead(::System::Net::WebCompletionSource value)  {
::cordl_internals::setInstanceField<::System::Net::WebCompletionSource, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebCompletionSource>(value));
}
constexpr ::System::Net::WebCompletionSource ::System::Net::WebResponseStream::__get_pendingRead() const {
return ::cordl_internals::getInstanceField<::System::Net::WebCompletionSource, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebResponseStream::__set_locker(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Net::WebResponseStream::__get_locker() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebResponseStream::__set_nestedRead(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::WebResponseStream::__get_nestedRead() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebResponseStream::__set_read_eof(bool value)  {
::cordl_internals::setInstanceField<bool, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::WebResponseStream::__get_read_eof() const {
return ::cordl_internals::getInstanceField<bool, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebResponseStream::__set__RequestStream_k__BackingField(::System::Net::WebRequestStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebRequestStream, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebRequestStream>(value));
}
constexpr ::System::Net::WebRequestStream ::System::Net::WebResponseStream::__get__RequestStream_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::WebRequestStream, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebResponseStream::__set__Headers_k__BackingField(::System::Net::WebHeaderCollection value)  {
::cordl_internals::setInstanceField<::System::Net::WebHeaderCollection, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebHeaderCollection>(value));
}
constexpr ::System::Net::WebHeaderCollection ::System::Net::WebResponseStream::__get__Headers_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::WebHeaderCollection, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebResponseStream::__set__StatusCode_k__BackingField(::System::Net::HttpStatusCode value)  {
::cordl_internals::setInstanceField<::System::Net::HttpStatusCode, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::HttpStatusCode>(value));
}
constexpr ::System::Net::HttpStatusCode ::System::Net::WebResponseStream::__get__StatusCode_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::HttpStatusCode, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebResponseStream::__set__StatusDescription_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::WebResponseStream::__get__StatusDescription_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebResponseStream::__set__Version_k__BackingField(::System::Version value)  {
::cordl_internals::setInstanceField<::System::Version, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Version>(value));
}
constexpr ::System::Version ::System::Net::WebResponseStream::__get__Version_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Version, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebResponseStream::__set__KeepAlive_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::WebResponseStream::__get__KeepAlive_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebResponseStream::__set__ChunkedRead_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa9>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::WebResponseStream::__get__ChunkedRead_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xa9>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Net::WebRequestStream ::System::Net::WebResponseStream::get_RequestStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "get_RequestStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequestStream, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::WebHeaderCollection ::System::Net::WebResponseStream::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::WebResponseStream::set_Headers(::System::Net::WebHeaderCollection value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "set_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Net::HttpStatusCode ::System::Net::WebResponseStream::get_StatusCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "get_StatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::HttpStatusCode, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::WebResponseStream::set_StatusCode(::System::Net::HttpStatusCode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "set_StatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW ::System::Net::WebResponseStream::get_StatusDescription()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "get_StatusDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::WebResponseStream::set_StatusDescription(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "set_StatusDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Version ::System::Net::WebResponseStream::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Version, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::WebResponseStream::set_Version(::System::Version value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "set_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::System::Net::WebResponseStream::get_KeepAlive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "get_KeepAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::WebResponseStream::set_KeepAlive(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "set_KeepAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "request", ty: "::System::Net::WebRequestStream", modifiers: "", def_value: None }]
 ::System::Net::WebResponseStream::WebResponseStream(::System::Net::WebRequestStream request)  : ::System::Net::WebConnectionStream(THROW_UNLESS(::il2cpp_utils::New<WebResponseStream>(request))) {}
 void ::System::Net::WebResponseStream::_ctor(::System::Net::WebRequestStream request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequestStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, request);
}
 bool ::System::Net::WebResponseStream::get_CanRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "get_CanRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::WebResponseStream::get_CanWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "get_CanWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::WebResponseStream::get_ChunkedRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "get_ChunkedRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::WebResponseStream::set_ChunkedRead(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "set_ChunkedRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Threading::Tasks::Task_1<int32_t> ::System::Net::WebResponseStream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "ReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cancellationToken);
}
 ::System::Threading::Tasks::Task_1<int32_t> ::System::Net::WebResponseStream::ProcessRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "ProcessRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, cancellationToken);
}
 bool ::System::Net::WebResponseStream::TryReadFromBufferedContent(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ByRef<int32_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "TryReadFromBufferedContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, result);
}
 bool ::System::Net::WebResponseStream::get_ExpectContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "get_ExpectContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::WebResponseStream::Initialize(::System::Net::BufferOffsetSize buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::BufferOffsetSize>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer);
}
 ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> ::System::Net::WebResponseStream::ReadAllAsyncInner(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "ReadAllAsyncInner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 ::System::Threading::Tasks::Task ::System::Net::WebResponseStream::ReadAllAsync(bool resending, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "ReadAllAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, resending, cancellationToken);
}
 ::System::Threading::Tasks::Task ::System::Net::WebResponseStream::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "WriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cancellationToken);
}
 void ::System::Net::WebResponseStream::Close_internal(ByRef<bool> disposed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "Close_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposed);
}
 ::System::Net::WebException ::System::Net::WebResponseStream::GetReadException(::System::Net::WebExceptionStatus status, ::System::Exception error, ::StringW where)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "GetReadException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebExceptionStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebException, false>(const_cast<void*>(instance), ___internal_method, status, error, where);
}
 ::System::Threading::Tasks::Task ::System::Net::WebResponseStream::InitReadAsync(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "InitReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 bool ::System::Net::WebResponseStream::GetResponse(::System::Net::BufferOffsetSize buffer, ByRef<int32_t> pos, ByRef<::System::Net::ReadState> state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebResponseStream>::get(),
                            "GetResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::BufferOffsetSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::ReadState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, buffer, pos, state);
}
} // end anonymous namespace
