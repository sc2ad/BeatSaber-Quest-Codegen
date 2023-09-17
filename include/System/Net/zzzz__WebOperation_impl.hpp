#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Net/zzzz__WebCompletionSource_1_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/Net/zzzz__WebConnection_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Net/zzzz__WebResponseStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
//  Writing Method size for method: ::System::Net::____System__Net__WebOperation___GetRequestStream_d__50.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebOperation___GetRequestStream_d__50::*)()>(&::System::Net::____System__Net__WebOperation___GetRequestStream_d__50::MoveNext)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2850484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebOperation___GetRequestStream_d__50>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebOperation___GetRequestStream_d__50.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebOperation___GetRequestStream_d__50::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__WebOperation___GetRequestStream_d__50::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x28506a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebOperation___GetRequestStream_d__50>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__WebOperation___GetRequestStream_d__50::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebOperation", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__WebOperation___GetRequestStream_d__50::____System__Net__WebOperation___GetRequestStream_d__50(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream> __t__builder, ::System::Net::WebOperation __4__this, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void ::System::Net::____System__Net__WebOperation___GetRequestStream_d__50::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebOperation___GetRequestStream_d__50::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebOperation___GetRequestStream_d__50::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream> ::System::Net::____System__Net__WebOperation___GetRequestStream_d__50::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream>, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebOperation___GetRequestStream_d__50::__set___4__this(::System::Net::WebOperation value)  {
::cordl_internals::setInstanceField<::System::Net::WebOperation, 0x20>(this->__instance, std::forward<::System::Net::WebOperation>(value));
}
constexpr ::System::Net::WebOperation ::System::Net::____System__Net__WebOperation___GetRequestStream_d__50::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::WebOperation, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebOperation___GetRequestStream_d__50::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream>, 0x28>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream> ::System::Net::____System__Net__WebOperation___GetRequestStream_d__50::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream>, 0x28>(this->__instance);
}
 void ::System::Net::____System__Net__WebOperation___GetRequestStream_d__50::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebOperation___GetRequestStream_d__50>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__WebOperation___GetRequestStream_d__50::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebOperation___GetRequestStream_d__50>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::____System__Net__WebOperation___Run_d__58.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebOperation___Run_d__58::*)()>(&::System::Net::____System__Net__WebOperation___Run_d__58::MoveNext)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x28506f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebOperation___Run_d__58>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__WebOperation___Run_d__58.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__WebOperation___Run_d__58::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__WebOperation___Run_d__58::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2850d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebOperation___Run_d__58>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__WebOperation___Run_d__58::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebOperation", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_requestStream_5__2", ty: "::System::Net::WebRequestStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_stream_5__3", ty: "::System::Net::WebResponseStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__WebOperation___Run_d__58::____System__Net__WebOperation___Run_d__58(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Net::WebOperation __4__this, ::System::Net::WebRequestStream _requestStream_5__2, ::System::Net::WebResponseStream _stream_5__3, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream> __u__1, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_requestStream_5__2 = _requestStream_5__2;
this->_stream_5__3 = _stream_5__3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void ::System::Net::____System__Net__WebOperation___Run_d__58::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__WebOperation___Run_d__58::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebOperation___Run_d__58::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ::System::Net::____System__Net__WebOperation___Run_d__58::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebOperation___Run_d__58::__set___4__this(::System::Net::WebOperation value)  {
::cordl_internals::setInstanceField<::System::Net::WebOperation, 0x28>(this->__instance, std::forward<::System::Net::WebOperation>(value));
}
constexpr ::System::Net::WebOperation ::System::Net::____System__Net__WebOperation___Run_d__58::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::WebOperation, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebOperation___Run_d__58::__set__requestStream_5__2(::System::Net::WebRequestStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebRequestStream, 0x30>(this->__instance, std::forward<::System::Net::WebRequestStream>(value));
}
constexpr ::System::Net::WebRequestStream ::System::Net::____System__Net__WebOperation___Run_d__58::__get__requestStream_5__2() const {
return ::cordl_internals::getInstanceField<::System::Net::WebRequestStream, 0x30>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebOperation___Run_d__58::__set__stream_5__3(::System::Net::WebResponseStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebResponseStream, 0x38>(this->__instance, std::forward<::System::Net::WebResponseStream>(value));
}
constexpr ::System::Net::WebResponseStream ::System::Net::____System__Net__WebOperation___Run_d__58::__get__stream_5__3() const {
return ::cordl_internals::getInstanceField<::System::Net::WebResponseStream, 0x38>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebOperation___Run_d__58::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream>, 0x40>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream> ::System::Net::____System__Net__WebOperation___Run_d__58::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream>, 0x40>(this->__instance);
}
constexpr void ::System::Net::____System__Net__WebOperation___Run_d__58::__set___u__2(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x50>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter ::System::Net::____System__Net__WebOperation___Run_d__58::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x50>(this->__instance);
}
 void ::System::Net::____System__Net__WebOperation___Run_d__58::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebOperation___Run_d__58>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__WebOperation___Run_d__58::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__WebOperation___Run_d__58>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::WebOperation.get_Request
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpWebRequest (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284f858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "get_Request",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_Connection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebConnection (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_Connection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284f860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "get_Connection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.set_Connection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebOperation::*)(::System::Net::WebConnection)>(&::System::Net::WebOperation::set_Connection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284f868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "set_Connection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_ServicePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServicePoint (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_ServicePoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284f870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "get_ServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.set_ServicePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebOperation::*)(::System::Net::ServicePoint)>(&::System::Net::WebOperation::set_ServicePoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284f878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "set_ServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_WriteBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::BufferOffsetSize (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_WriteBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284f880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "get_WriteBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_IsNtlmChallenge
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_IsNtlmChallenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284f888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "get_IsNtlmChallenge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebOperation::*)(::System::Net::HttpWebRequest, ::System::Net::BufferOffsetSize, bool, ::System::Threading::CancellationToken)>(&::System::Net::WebOperation::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x284f890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::BufferOffsetSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_Aborted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_Aborted)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2848960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "get_Aborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_Closed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_Closed)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x284fa24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "get_Closed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.Abort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::Abort)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2848920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "Abort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::Close)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x284fc0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.SetCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::SetCanceled)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x284fb40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "SetCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.SetError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebOperation::*)(::System::Exception)>(&::System::Net::WebOperation::SetError)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x284fefc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "SetError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.SetDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::System::Runtime::ExceptionServices::ExceptionDispatchInfo,bool> (::System::Net::WebOperation::*)(ByRef<::System::Runtime::ExceptionServices::ExceptionDispatchInfo>)>(&::System::Net::WebOperation::SetDisposed)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x284fa50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "SetDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::ExceptionServices::ExceptionDispatchInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.CheckDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo (::System::Net::WebOperation::*)(::System::Threading::CancellationToken)>(&::System::Net::WebOperation::CheckDisposed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x284ffa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "CheckDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.ThrowIfDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::ThrowIfDisposed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2850044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "ThrowIfDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.ThrowIfDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebOperation::*)(::System::Threading::CancellationToken)>(&::System::Net::WebOperation::ThrowIfDisposed)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x284c0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "ThrowIfDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.ThrowIfClosedOrDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::ThrowIfClosedOrDisposed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x284d5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "ThrowIfClosedOrDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.ThrowIfClosedOrDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebOperation::*)(::System::Threading::CancellationToken)>(&::System::Net::WebOperation::ThrowIfClosedOrDisposed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x284cdc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "ThrowIfClosedOrDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.CheckThrowDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo (::System::Net::WebOperation::*)(bool, ByRef<::System::Runtime::ExceptionServices::ExceptionDispatchInfo>)>(&::System::Net::WebOperation::CheckThrowDisposed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x284ffec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "CheckThrowDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::ExceptionServices::ExceptionDispatchInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.RegisterRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebOperation::*)(::System::Net::ServicePoint, ::System::Net::WebConnection)>(&::System::Net::WebOperation::RegisterRequest)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x284b2c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "RegisterRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.SetPriorityRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebOperation::*)(::System::Net::WebOperation)>(&::System::Net::WebOperation::SetPriorityRequest)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x28500a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "SetPriorityRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.GetRequestStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream> (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::GetRequestStream)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2850230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "GetRequestStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.GetRequestStreamInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebRequestStream> (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::GetRequestStreamInternal)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2850320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "GetRequestStreamInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_WriteStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebRequestStream (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_WriteStream)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2850370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "get_WriteStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.GetResponseStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebResponseStream> (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::GetResponseStream)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2850388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "GetResponseStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_Finished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation>> (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_Finished)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28503d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "get_Finished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::Run)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x284b514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.CompleteRequestWritten
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebOperation::*)(::System::Net::WebRequestStream, ::System::Exception)>(&::System::Net::WebOperation::CompleteRequestWritten)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28503e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "CompleteRequestWritten",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequestStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.Finish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebOperation::*)(bool, ::System::Exception)>(&::System::Net::WebOperation::Finish)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x284fcb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation._RegisterRequest_b__48_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::_RegisterRequest_b__48_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2850460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "<RegisterRequest>b__48_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Net::WebOperation::__set__Request_k__BackingField(::System::Net::HttpWebRequest value)  {
::cordl_internals::setInstanceField<::System::Net::HttpWebRequest, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::HttpWebRequest>(value));
}
constexpr ::System::Net::HttpWebRequest ::System::Net::WebOperation::__get__Request_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::HttpWebRequest, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebOperation::__set__Connection_k__BackingField(::System::Net::WebConnection value)  {
::cordl_internals::setInstanceField<::System::Net::WebConnection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebConnection>(value));
}
constexpr ::System::Net::WebConnection ::System::Net::WebOperation::__get__Connection_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::WebConnection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebOperation::__set__ServicePoint_k__BackingField(::System::Net::ServicePoint value)  {
::cordl_internals::setInstanceField<::System::Net::ServicePoint, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::ServicePoint>(value));
}
constexpr ::System::Net::ServicePoint ::System::Net::WebOperation::__get__ServicePoint_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::ServicePoint, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebOperation::__set__WriteBuffer_k__BackingField(::System::Net::BufferOffsetSize value)  {
::cordl_internals::setInstanceField<::System::Net::BufferOffsetSize, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::BufferOffsetSize>(value));
}
constexpr ::System::Net::BufferOffsetSize ::System::Net::WebOperation::__get__WriteBuffer_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::BufferOffsetSize, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebOperation::__set__IsNtlmChallenge_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::WebOperation::__get__IsNtlmChallenge_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebOperation::__set_cts(::System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::CancellationTokenSource>(value));
}
constexpr ::System::Threading::CancellationTokenSource ::System::Net::WebOperation::__get_cts() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebOperation::__set_requestTask(::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream> value)  {
::cordl_internals::setInstanceField<::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream>>(value));
}
constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream> ::System::Net::WebOperation::__get_requestTask() const {
return ::cordl_internals::getInstanceField<::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebOperation::__set_requestWrittenTask(::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream> value)  {
::cordl_internals::setInstanceField<::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream>>(value));
}
constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream> ::System::Net::WebOperation::__get_requestWrittenTask() const {
return ::cordl_internals::getInstanceField<::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebOperation::__set_responseTask(::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream> value)  {
::cordl_internals::setInstanceField<::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream>>(value));
}
constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream> ::System::Net::WebOperation::__get_responseTask() const {
return ::cordl_internals::getInstanceField<::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebOperation::__set_finishedTask(::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation>> value)  {
::cordl_internals::setInstanceField<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation>>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation>>>(value));
}
constexpr ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation>> ::System::Net::WebOperation::__get_finishedTask() const {
return ::cordl_internals::getInstanceField<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation>>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebOperation::__set_writeStream(::System::Net::WebRequestStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebRequestStream, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebRequestStream>(value));
}
constexpr ::System::Net::WebRequestStream ::System::Net::WebOperation::__get_writeStream() const {
return ::cordl_internals::getInstanceField<::System::Net::WebRequestStream, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebOperation::__set_responseStream(::System::Net::WebResponseStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebResponseStream, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebResponseStream>(value));
}
constexpr ::System::Net::WebResponseStream ::System::Net::WebOperation::__get_responseStream() const {
return ::cordl_internals::getInstanceField<::System::Net::WebResponseStream, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebOperation::__set_disposedInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo value)  {
::cordl_internals::setInstanceField<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::ExceptionServices::ExceptionDispatchInfo>(value));
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo ::System::Net::WebOperation::__get_disposedInfo() const {
return ::cordl_internals::getInstanceField<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebOperation::__set_closedInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo value)  {
::cordl_internals::setInstanceField<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::ExceptionServices::ExceptionDispatchInfo>(value));
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo ::System::Net::WebOperation::__get_closedInfo() const {
return ::cordl_internals::getInstanceField<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebOperation::__set_priorityRequest(::System::Net::WebOperation value)  {
::cordl_internals::setInstanceField<::System::Net::WebOperation, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebOperation>(value));
}
constexpr ::System::Net::WebOperation ::System::Net::WebOperation::__get_priorityRequest() const {
return ::cordl_internals::getInstanceField<::System::Net::WebOperation, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebOperation::__set_requestSent(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::WebOperation::__get_requestSent() const {
return ::cordl_internals::getInstanceField<int32_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::WebOperation::__set_finished(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::WebOperation::__get_finished() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Net::HttpWebRequest ::System::Net::WebOperation::get_Request()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "get_Request",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::HttpWebRequest, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::WebConnection ::System::Net::WebOperation::get_Connection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "get_Connection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebConnection, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::WebOperation::set_Connection(::System::Net::WebConnection value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "set_Connection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Net::ServicePoint ::System::Net::WebOperation::get_ServicePoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "get_ServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::WebOperation::set_ServicePoint(::System::Net::ServicePoint value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "set_ServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Net::BufferOffsetSize ::System::Net::WebOperation::get_WriteBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "get_WriteBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::BufferOffsetSize, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::WebOperation::get_IsNtlmChallenge()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "get_IsNtlmChallenge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "request", ty: "::System::Net::HttpWebRequest", modifiers: "", def_value: None }, CppParam { name: "writeBuffer", ty: "::System::Net::BufferOffsetSize", modifiers: "", def_value: None }, CppParam { name: "isNtlmChallenge", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
 ::System::Net::WebOperation::WebOperation(::System::Net::HttpWebRequest request, ::System::Net::BufferOffsetSize writeBuffer, bool isNtlmChallenge, ::System::Threading::CancellationToken cancellationToken)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<WebOperation>(request, writeBuffer, isNtlmChallenge, cancellationToken))) {}
 void ::System::Net::WebOperation::_ctor(::System::Net::HttpWebRequest request, ::System::Net::BufferOffsetSize writeBuffer, bool isNtlmChallenge, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::BufferOffsetSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, request, writeBuffer, isNtlmChallenge, cancellationToken);
}
 bool ::System::Net::WebOperation::get_Aborted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "get_Aborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::WebOperation::get_Closed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "get_Closed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::WebOperation::Abort()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "Abort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::WebOperation::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::WebOperation::SetCanceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "SetCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::WebOperation::SetError(::System::Exception error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "SetError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, error);
}
 ::System::ValueTuple_2<::System::Runtime::ExceptionServices::ExceptionDispatchInfo,bool> ::System::Net::WebOperation::SetDisposed(ByRef<::System::Runtime::ExceptionServices::ExceptionDispatchInfo> field)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "SetDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::ExceptionServices::ExceptionDispatchInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::System::Runtime::ExceptionServices::ExceptionDispatchInfo,bool>, false>(const_cast<void*>(instance), ___internal_method, field);
}
 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo ::System::Net::WebOperation::CheckDisposed(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "CheckDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 void ::System::Net::WebOperation::ThrowIfDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "ThrowIfDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::WebOperation::ThrowIfDisposed(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "ThrowIfDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 void ::System::Net::WebOperation::ThrowIfClosedOrDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "ThrowIfClosedOrDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::WebOperation::ThrowIfClosedOrDisposed(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "ThrowIfClosedOrDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo ::System::Net::WebOperation::CheckThrowDisposed(bool throwIt, ByRef<::System::Runtime::ExceptionServices::ExceptionDispatchInfo> field)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "CheckThrowDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::ExceptionServices::ExceptionDispatchInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo, false>(const_cast<void*>(instance), ___internal_method, throwIt, field);
}
 void ::System::Net::WebOperation::RegisterRequest(::System::Net::ServicePoint servicePoint, ::System::Net::WebConnection connection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "RegisterRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ServicePoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, servicePoint, connection);
}
 void ::System::Net::WebOperation::SetPriorityRequest(::System::Net::WebOperation operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "SetPriorityRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, operation);
}
 ::System::Threading::Tasks::Task_1<::System::IO::Stream> ::System::Net::WebOperation::GetRequestStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "GetRequestStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<::System::Net::WebRequestStream> ::System::Net::WebOperation::GetRequestStreamInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "GetRequestStreamInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebRequestStream>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::WebRequestStream ::System::Net::WebOperation::get_WriteStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "get_WriteStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequestStream, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<::System::Net::WebResponseStream> ::System::Net::WebOperation::GetResponseStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "GetResponseStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebResponseStream>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation>> ::System::Net::WebOperation::get_Finished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "get_Finished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation>>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::WebOperation::Run()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param error: ::System::Exception (default: csnull)
 void ::System::Net::WebOperation::CompleteRequestWritten(::System::Net::WebRequestStream stream, ::System::Exception error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "CompleteRequestWritten",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequestStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream, error);
}
/// @param error: ::System::Exception (default: csnull)
 void ::System::Net::WebOperation::Finish(bool ok, ::System::Exception error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ok, error);
}
 void ::System::Net::WebOperation::_RegisterRequest_b__48_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebOperation>::get(),
                            "<RegisterRequest>b__48_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
