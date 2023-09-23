#pragma once
#include "System/Net/Sockets/zzzz__SocketAsyncEventArgs_impl.hpp"
#include "System/Net/Sockets/zzzz__Socket_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/zzzz__IOAsyncCallback_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncOperation_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/Net/Sockets/zzzz__IOControlCode_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceComponent_def.hpp"
#include "System/Net/Sockets/zzzz__SocketShutdown_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/Net/Sockets/zzzz__SocketOptionLevel_def.hpp"
#include "System/Net/Sockets/zzzz__SelectMode_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Net/Sockets/zzzz__IPProtectionLevel_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncEventArgs_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Net/Sockets/zzzz__SocketOperation_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__IOSelectorJob_def.hpp"
#include "System/Net/Sockets/zzzz__SafeSocketHandle_def.hpp"
#include "System/Net/Sockets/zzzz__SocketFlags_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/Net/zzzz__SocketAddress_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/Sockets/zzzz__SocketType_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/Sockets/zzzz__SocketOptionName_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncResult_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Net/Sockets/zzzz__ProtocolType_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceOnCompletedFlags_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceStatus_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/zzzz__IOAsyncResult_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs::*)()>(&System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286ba2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs::__set_TaskAccept(System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<System::Net::Sockets::Socket> value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<System::Net::Sockets::Socket>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<System::Net::Sockets::Socket>>(value));
}
constexpr System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<System::Net::Sockets::Socket> System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs::__get_TaskAccept() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<System::Net::Sockets::Socket>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs::__set_TaskReceive(System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs>(value));
}
constexpr System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs::__get_TaskReceive() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs::__set_TaskSend(System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs>(value));
}
constexpr System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs::__get_TaskSend() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs::__set_ValueTaskReceive(System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>(value));
}
constexpr System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs::__get_ValueTaskReceive() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs::__set_ValueTaskSend(System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>(value));
}
constexpr System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs::__get_ValueTaskSend() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs::System__Net__Sockets__Socket__CachedEventArgs()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Net__Sockets__Socket__CachedEventArgs>())) {}
 void System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>::*)()>(&System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>.GetCompletionResponsibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> (System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>::*)(ByRef<bool>)>(&System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>::GetCompletionResponsibility)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>>::get(),
                            "GetCompletionResponsibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>::__set__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>::__get__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>::__set__accessed(bool value)  {
::cordl_internals::setInstanceField<bool, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>::__get__accessed() const {
return ::cordl_internals::getInstanceField<bool, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1()  : System::Net::Sockets::SocketAsyncEventArgs(THROW_UNLESS(::il2cpp_utils::New<System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1>())) {}
 void System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>::GetCompletionResponsibility(ByRef<bool> responsibleForReturningToPool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>>::get(),
                            "GetCompletionResponsibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, responsibleForReturningToPool);
}
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs::*)()>(&System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x286b9e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs::__set__wrapExceptionsInIOExceptions(bool value)  {
::cordl_internals::setInstanceField<bool, 0xd1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs::__get__wrapExceptionsInIOExceptions() const {
return ::cordl_internals::getInstanceField<bool, 0xd1>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs()  : System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<int32_t>(THROW_UNLESS(::il2cpp_utils::New<System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs>())) {}
 void System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::*)()>(&GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2766414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c._OnCompleted_b__14_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::*)(::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::_OnCompleted_b__14_0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x276641c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c>::get(),
                            "<OnCompleted>b__14_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c._InvokeContinuation_b__20_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::*)(::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::_InvokeContinuation_b__20_0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x27664d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c>::get(),
                            "<InvokeContinuation>b__20_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c.__cctor_b__27_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::*)(::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::__cctor_b__27_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x276657c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c>::get(),
                            "<.cctor>b__27_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c.__cctor_b__27_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::*)(::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::__cctor_b__27_1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x27665cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c>::get(),
                            "<.cctor>b__27_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::__set___9(GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c>::get>(std::forward<GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c>(value));
}
 GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c>::get>();
}
 void GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::__set___9__14_0(System::Threading::ContextCallback value)  {
::cordl_internals::setStaticField<System::Threading::ContextCallback, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c>::get>(std::forward<System::Threading::ContextCallback>(value));
}
 System::Threading::ContextCallback GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::__get___9__14_0()  {
return ::cordl_internals::getStaticField<System::Threading::ContextCallback, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c>::get>();
}
 void GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::__set___9__20_0(System::Threading::SendOrPostCallback value)  {
::cordl_internals::setStaticField<System::Threading::SendOrPostCallback, "<>9__20_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c>::get>(std::forward<System::Threading::SendOrPostCallback>(value));
}
 System::Threading::SendOrPostCallback GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::__get___9__20_0()  {
return ::cordl_internals::getStaticField<System::Threading::SendOrPostCallback, "<>9__20_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c>::get>();
}
// Ctor Parameters []
 GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c>())) {}
 void GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::_OnCompleted_b__14_0(::bs_hook::Il2CppWrapperType runState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c>::get(),
                            "<OnCompleted>b__14_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, runState);
}
 void GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::_InvokeContinuation_b__20_0(::bs_hook::Il2CppWrapperType s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c>::get(),
                            "<InvokeContinuation>b__20_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
 void GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::__cctor_b__27_0(::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c>::get(),
                            "<.cctor>b__27_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 void GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c::__cctor_b__27_1(::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs____c>::get(),
                            "<.cctor>b__27_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::*)()>(&System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x286ba34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs.get_WrapExceptionsInIOExceptions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::*)()>(&System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::get_WrapExceptionsInIOExceptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286baa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "get_WrapExceptionsInIOExceptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs.set_WrapExceptionsInIOExceptions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::*)(bool)>(&System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::set_WrapExceptionsInIOExceptions)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x286baa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "set_WrapExceptionsInIOExceptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs.Reserve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::*)()>(&System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::Reserve)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2862974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "Reserve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::*)()>(&System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::Release)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x286bab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs.OnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::*)(System::Net::Sockets::SocketAsyncEventArgs)>(&System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::OnCompleted)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x286bb24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs.ReceiveAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::ValueTask_1<int32_t> (System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::*)(System::Net::Sockets::Socket)>(&System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::ReceiveAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x28629f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "ReceiveAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs.SendAsyncForNetworkStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::ValueTask (System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::*)(System::Net::Sockets::Socket)>(&System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::SendAsyncForNetworkStream)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2862e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "SendAsyncForNetworkStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs.GetStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Sources::ValueTaskSourceStatus (System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::*)(int16_t)>(&System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::GetStatus)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x286c0f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "GetStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs.OnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::*)(System::Action_1<::bs_hook::Il2CppWrapperType>, ::bs_hook::Il2CppWrapperType, int16_t, System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags)>(&System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::OnCompleted)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x286c1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs.InvokeContinuation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::*)(System::Action_1<::bs_hook::Il2CppWrapperType>, ::bs_hook::Il2CppWrapperType, bool)>(&System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::InvokeContinuation)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x286bd24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "InvokeContinuation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::*)(int16_t)>(&System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::GetResult)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x286c438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs.System_Threading_Tasks_Sources_IValueTaskSource_GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::*)(int16_t)>(&System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::System_Threading_Tasks_Sources_IValueTaskSource_GetResult)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x286c4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "System.Threading.Tasks.Sources.IValueTaskSource.GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs.ThrowIncorrectTokenException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::*)()>(&System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::ThrowIncorrectTokenException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x286c188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "ThrowIncorrectTokenException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs.ThrowMultipleContinuationsException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::*)()>(&System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::ThrowMultipleContinuationsException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x286c3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "ThrowMultipleContinuationsException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs.ThrowException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::*)(System::Net::Sockets::SocketError)>(&System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::ThrowException)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x286c480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "ThrowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketError>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs.CreateException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::*)(System::Net::Sockets::SocketError)>(&System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::CreateException)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x286c004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "CreateException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketError>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Threading::Tasks::Sources::IValueTaskSource
constexpr  System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::operator System::Threading::Tasks::Sources::IValueTaskSource() const noexcept {
return System::Threading::Tasks::Sources::IValueTaskSource(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>
constexpr  System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::operator System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>() const noexcept {
return System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>(::bs_hook::Il2CppWrapperType::instance);
}
 void System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::__set_Reserved(System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs value)  {
::cordl_internals::setStaticField<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs, "Reserved", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get>(std::forward<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>(value));
}
 System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::__get_Reserved()  {
return ::cordl_internals::getStaticField<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs, "Reserved", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get>();
}
 void System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::__set_s_completedSentinel(System::Action_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<System::Action_1<::bs_hook::Il2CppWrapperType>, "s_completedSentinel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get>(std::forward<System::Action_1<::bs_hook::Il2CppWrapperType>>(value));
}
 System::Action_1<::bs_hook::Il2CppWrapperType> System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::__get_s_completedSentinel()  {
return ::cordl_internals::getStaticField<System::Action_1<::bs_hook::Il2CppWrapperType>, "s_completedSentinel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get>();
}
 void System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::__set_s_availableSentinel(System::Action_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<System::Action_1<::bs_hook::Il2CppWrapperType>, "s_availableSentinel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get>(std::forward<System::Action_1<::bs_hook::Il2CppWrapperType>>(value));
}
 System::Action_1<::bs_hook::Il2CppWrapperType> System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::__get_s_availableSentinel()  {
return ::cordl_internals::getStaticField<System::Action_1<::bs_hook::Il2CppWrapperType>, "s_availableSentinel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get>();
}
constexpr void System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::__set__continuation(System::Action_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<System::Action_1<::bs_hook::Il2CppWrapperType>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr System::Action_1<::bs_hook::Il2CppWrapperType> System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::__get__continuation() const {
return ::cordl_internals::getInstanceField<System::Action_1<::bs_hook::Il2CppWrapperType>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::__set__executionContext(System::Threading::ExecutionContext value)  {
::cordl_internals::setInstanceField<System::Threading::ExecutionContext, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::ExecutionContext>(value));
}
constexpr System::Threading::ExecutionContext System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::__get__executionContext() const {
return ::cordl_internals::getInstanceField<System::Threading::ExecutionContext, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::__set__scheduler(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::__get__scheduler() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::__set__token(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int16_t>(value));
}
constexpr int16_t System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::__get__token() const {
return ::cordl_internals::getInstanceField<int16_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::__set__WrapExceptionsInIOExceptions_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xd2>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::__get__WrapExceptionsInIOExceptions_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xd2>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs()  : System::Net::Sockets::SocketAsyncEventArgs(THROW_UNLESS(::il2cpp_utils::New<System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>())) {}
 void System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::get_WrapExceptionsInIOExceptions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "get_WrapExceptionsInIOExceptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::set_WrapExceptionsInIOExceptions(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "set_WrapExceptionsInIOExceptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::Reserve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "Reserve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::OnCompleted(System::Net::Sockets::SocketAsyncEventArgs _)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, _);
}
 System::Threading::Tasks::ValueTask_1<int32_t> System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::ReceiveAsync(System::Net::Sockets::Socket socket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "ReceiveAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::ValueTask_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, socket);
}
 System::Threading::Tasks::ValueTask System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::SendAsyncForNetworkStream(System::Net::Sockets::Socket socket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "SendAsyncForNetworkStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::ValueTask, false>(const_cast<void*>(instance), ___internal_method, socket);
}
 System::Threading::Tasks::Sources::ValueTaskSourceStatus System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::GetStatus(int16_t token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "GetStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Sources::ValueTaskSourceStatus, false>(const_cast<void*>(instance), ___internal_method, token);
}
 void System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::OnCompleted(System::Action_1<::bs_hook::Il2CppWrapperType> continuation, ::bs_hook::Il2CppWrapperType state, int16_t token, System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, continuation, state, token, flags);
}
 void System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::InvokeContinuation(System::Action_1<::bs_hook::Il2CppWrapperType> continuation, ::bs_hook::Il2CppWrapperType state, bool forceAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "InvokeContinuation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, continuation, state, forceAsync);
}
 int32_t System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::GetResult(int16_t token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, token);
}
 void System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::System_Threading_Tasks_Sources_IValueTaskSource_GetResult(int16_t token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "System.Threading.Tasks.Sources.IValueTaskSource.GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, token);
}
 void System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::ThrowIncorrectTokenException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "ThrowIncorrectTokenException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::ThrowMultipleContinuationsException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "ThrowMultipleContinuationsException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::ThrowException(System::Net::Sockets::SocketError error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "ThrowException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, error);
}
 System::Exception System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs::CreateException(System::Net::Sockets::SocketError error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>::get(),
                            "CreateException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(const_cast<void*>(instance), ___internal_method, error);
}
// Ctor Parameters [CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "buf", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::Sockets::System__Net__Sockets__Socket__WSABUF::System__Net__Sockets__Socket__WSABUF(int32_t len, ::cordl_internals::intptr_t buf) noexcept : ::bs_hook::ValueTypeWrapper() {this->len = len;
this->buf = buf;
}
constexpr void System::Net::Sockets::System__Net__Sockets__Socket__WSABUF::__set_len(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::System__Net__Sockets__Socket__WSABUF::__get_len() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Net::Sockets::System__Net__Sockets__Socket__WSABUF::__set_buf(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::Net::Sockets::System__Net__Sockets__Socket__WSABUF::__get_buf() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)()>(&System::Net::Sockets::System__Net__Sockets__Socket____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2766680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c._ReceiveAsync_b__14_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs (System::Net::Sockets::System__Net__Sockets__Socket____c::*)()>(&System::Net::Sockets::System__Net__Sockets__Socket____c::_ReceiveAsync_b__14_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2766688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<ReceiveAsync>b__14_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c._ReceiveAsync_b__14_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs (System::Net::Sockets::System__Net__Sockets__Socket____c::*)()>(&System::Net::Sockets::System__Net__Sockets__Socket____c::_ReceiveAsync_b__14_1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x27666e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<ReceiveAsync>b__14_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c._ReceiveAsyncApm_b__15_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::_ReceiveAsyncApm_b__15_0)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2766740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<ReceiveAsyncApm>b__15_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c._ReceiveAsyncApm_b__15_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::_ReceiveAsyncApm_b__15_1)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x2766978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<ReceiveAsyncApm>b__15_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c._SendAsyncForNetworkStream_b__22_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs (System::Net::Sockets::System__Net__Sockets__Socket____c::*)()>(&System::Net::Sockets::System__Net__Sockets__Socket____c::_SendAsyncForNetworkStream_b__22_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2766dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<SendAsyncForNetworkStream>b__22_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c._SendAsyncForNetworkStream_b__22_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs (System::Net::Sockets::System__Net__Sockets__Socket____c::*)()>(&System::Net::Sockets::System__Net__Sockets__Socket____c::_SendAsyncForNetworkStream_b__22_1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2766e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<SendAsyncForNetworkStream>b__22_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c._SendAsyncApm_b__23_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::_SendAsyncApm_b__23_0)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2766e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<SendAsyncApm>b__23_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c._SendAsyncApm_b__23_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::_SendAsyncApm_b__23_1)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x276709c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<SendAsyncApm>b__23_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c._SendAsync_b__295_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IOAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::_SendAsync_b__295_0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x27673a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<SendAsync>b__295_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c._BeginSend_b__297_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IOAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::_BeginSend_b__297_0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2767434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<BeginSend>b__297_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c.__cctor_b__367_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(::bs_hook::Il2CppWrapperType, System::Net::Sockets::SocketAsyncEventArgs)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_0)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x27674c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c.__cctor_b__367_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(::bs_hook::Il2CppWrapperType, System::Net::Sockets::SocketAsyncEventArgs)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_1)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x27675c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c.__cctor_b__367_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(::bs_hook::Il2CppWrapperType, System::Net::Sockets::SocketAsyncEventArgs)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_2)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x27676a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c.__cctor_b__367_3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_3)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x2767780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c.__cctor_b__367_4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IOAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_4)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2767a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c.__cctor_b__367_5
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IOAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_5)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2767b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c.__cctor_b__367_6
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_6)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2767d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c.__cctor_b__367_7
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IOAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_7)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2768024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c.__cctor_b__367_8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_8)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x27684b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c.__cctor_b__367_9
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IOAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_9)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2768740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_9",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c.__cctor_b__367_10
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_10)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2768840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_10",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c.__cctor_b__367_11
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IOAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_11)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x2768ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_11",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c.__cctor_b__367_12
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IOAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_12)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2768d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_12",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c.__cctor_b__367_13
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_13)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2768e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_13",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c.__cctor_b__367_14
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IOAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_14)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2769148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_14",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c.__cctor_b__367_15
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_15)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x27692cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_15",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c.__cctor_b__367_16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IOAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_16)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x276955c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c.__cctor_b__367_17
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c::*)(System::IAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_17)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2769668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_17",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__set___9(System::Net::Sockets::System__Net__Sockets__Socket____c value)  {
::cordl_internals::setStaticField<System::Net::Sockets::System__Net__Sockets__Socket____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>(std::forward<System::Net::Sockets::System__Net__Sockets__Socket____c>(value));
}
 System::Net::Sockets::System__Net__Sockets__Socket____c System::Net::Sockets::System__Net__Sockets__Socket____c::__get___9()  {
return ::cordl_internals::getStaticField<System::Net::Sockets::System__Net__Sockets__Socket____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>();
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__set___9__14_0(System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs> value)  {
::cordl_internals::setStaticField<System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs>, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>(std::forward<System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs>>(value));
}
 System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs> System::Net::Sockets::System__Net__Sockets__Socket____c::__get___9__14_0()  {
return ::cordl_internals::getStaticField<System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs>, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>();
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__set___9__14_1(System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs> value)  {
::cordl_internals::setStaticField<System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>, "<>9__14_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>(std::forward<System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>>(value));
}
 System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs> System::Net::Sockets::System__Net__Sockets__Socket____c::__get___9__14_1()  {
return ::cordl_internals::getStaticField<System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>, "<>9__14_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>();
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__set___9__15_0(System::AsyncCallback value)  {
::cordl_internals::setStaticField<System::AsyncCallback, "<>9__15_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>(std::forward<System::AsyncCallback>(value));
}
 System::AsyncCallback System::Net::Sockets::System__Net__Sockets__Socket____c::__get___9__15_0()  {
return ::cordl_internals::getStaticField<System::AsyncCallback, "<>9__15_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>();
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__set___9__15_1(System::AsyncCallback value)  {
::cordl_internals::setStaticField<System::AsyncCallback, "<>9__15_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>(std::forward<System::AsyncCallback>(value));
}
 System::AsyncCallback System::Net::Sockets::System__Net__Sockets__Socket____c::__get___9__15_1()  {
return ::cordl_internals::getStaticField<System::AsyncCallback, "<>9__15_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>();
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__set___9__22_0(System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs> value)  {
::cordl_internals::setStaticField<System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs>, "<>9__22_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>(std::forward<System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs>>(value));
}
 System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs> System::Net::Sockets::System__Net__Sockets__Socket____c::__get___9__22_0()  {
return ::cordl_internals::getStaticField<System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs>, "<>9__22_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>();
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__set___9__22_1(System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs> value)  {
::cordl_internals::setStaticField<System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>, "<>9__22_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>(std::forward<System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>>(value));
}
 System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs> System::Net::Sockets::System__Net__Sockets__Socket____c::__get___9__22_1()  {
return ::cordl_internals::getStaticField<System::Func_1<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs>, "<>9__22_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>();
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__set___9__23_0(System::AsyncCallback value)  {
::cordl_internals::setStaticField<System::AsyncCallback, "<>9__23_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>(std::forward<System::AsyncCallback>(value));
}
 System::AsyncCallback System::Net::Sockets::System__Net__Sockets__Socket____c::__get___9__23_0()  {
return ::cordl_internals::getStaticField<System::AsyncCallback, "<>9__23_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>();
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__set___9__23_1(System::AsyncCallback value)  {
::cordl_internals::setStaticField<System::AsyncCallback, "<>9__23_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>(std::forward<System::AsyncCallback>(value));
}
 System::AsyncCallback System::Net::Sockets::System__Net__Sockets__Socket____c::__get___9__23_1()  {
return ::cordl_internals::getStaticField<System::AsyncCallback, "<>9__23_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>();
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__set___9__295_0(System::IOAsyncCallback value)  {
::cordl_internals::setStaticField<System::IOAsyncCallback, "<>9__295_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>(std::forward<System::IOAsyncCallback>(value));
}
 System::IOAsyncCallback System::Net::Sockets::System__Net__Sockets__Socket____c::__get___9__295_0()  {
return ::cordl_internals::getStaticField<System::IOAsyncCallback, "<>9__295_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>();
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__set___9__297_0(System::IOAsyncCallback value)  {
::cordl_internals::setStaticField<System::IOAsyncCallback, "<>9__297_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>(std::forward<System::IOAsyncCallback>(value));
}
 System::IOAsyncCallback System::Net::Sockets::System__Net__Sockets__Socket____c::__get___9__297_0()  {
return ::cordl_internals::getStaticField<System::IOAsyncCallback, "<>9__297_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get>();
}
// Ctor Parameters []
 System::Net::Sockets::System__Net__Sockets__Socket____c::System__Net__Sockets__Socket____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Net__Sockets__Socket____c>())) {}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs System::Net::Sockets::System__Net__Sockets__Socket____c::_ReceiveAsync_b__14_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<ReceiveAsync>b__14_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs System::Net::Sockets::System__Net__Sockets__Socket____c::_ReceiveAsync_b__14_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<ReceiveAsync>b__14_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::_ReceiveAsyncApm_b__15_0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<ReceiveAsyncApm>b__15_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::_ReceiveAsyncApm_b__15_1(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<ReceiveAsyncApm>b__15_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
 System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs System::Net::Sockets::System__Net__Sockets__Socket____c::_SendAsyncForNetworkStream_b__22_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<SendAsyncForNetworkStream>b__22_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs System::Net::Sockets::System__Net__Sockets__Socket____c::_SendAsyncForNetworkStream_b__22_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<SendAsyncForNetworkStream>b__22_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Sockets::System__Net__Sockets__Socket__AwaitableSocketAsyncEventArgs, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::_SendAsyncApm_b__23_0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<SendAsyncApm>b__23_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::_SendAsyncApm_b__23_1(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<SendAsyncApm>b__23_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::_SendAsync_b__295_0(System::IOAsyncResult s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<SendAsync>b__295_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::_BeginSend_b__297_0(System::IOAsyncResult s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<BeginSend>b__297_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_0(::bs_hook::Il2CppWrapperType s, System::Net::Sockets::SocketAsyncEventArgs e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s, e);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_1(::bs_hook::Il2CppWrapperType s, System::Net::Sockets::SocketAsyncEventArgs e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s, e);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_2(::bs_hook::Il2CppWrapperType s, System::Net::Sockets::SocketAsyncEventArgs e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s, e);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_3(System::IAsyncResult ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ares);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_4(System::IOAsyncResult ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ares);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_5(System::IOAsyncResult ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_5",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ares);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_6(System::IAsyncResult ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ares);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_7(System::IOAsyncResult ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ares);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_8(System::IAsyncResult ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ares);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_9(System::IOAsyncResult ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_9",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ares);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_10(System::IAsyncResult ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_10",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ares);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_11(System::IOAsyncResult ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_11",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ares);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_12(System::IOAsyncResult ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_12",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ares);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_13(System::IAsyncResult ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_13",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ares);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_14(System::IOAsyncResult ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_14",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ares);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_15(System::IAsyncResult ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_15",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ares);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_16(System::IOAsyncResult ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ares);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c::__cctor_b__367_17(System::IAsyncResult ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c>::get(),
                            "<.cctor>b__367_17",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ares);
}
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass240_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass240_0::*)()>(&System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass240_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27698f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass240_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass240_0._BeginConnect_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass240_0::*)(System::Threading::Tasks::Task_1<::ArrayW<System::Net::IPAddress>>)>(&System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass240_0::_BeginConnect_b__0)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2769900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass240_0>::get(),
                            "<BeginConnect>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<::ArrayW<System::Net::IPAddress>>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass240_0::__set_sockares(System::Net::Sockets::SocketAsyncResult value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::SocketAsyncResult, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::SocketAsyncResult>(value));
}
constexpr System::Net::Sockets::SocketAsyncResult System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass240_0::__get_sockares() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::SocketAsyncResult, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass240_0::System__Net__Sockets__Socket____c__DisplayClass240_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Net__Sockets__Socket____c__DisplayClass240_0>())) {}
 void System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass240_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass240_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass240_0::_BeginConnect_b__0(System::Threading::Tasks::Task_1<::ArrayW<System::Net::IPAddress>> t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass240_0>::get(),
                            "<BeginConnect>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<::ArrayW<System::Net::IPAddress>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t);
}
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass298_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass298_0::*)()>(&System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass298_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2769a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass298_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass298_0._BeginSendCallback_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass298_0::*)(System::IOAsyncResult)>(&System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass298_0::_BeginSendCallback_b__0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2769a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass298_0>::get(),
                            "<BeginSendCallback>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass298_0::__set_sent_so_far(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass298_0::__get_sent_so_far() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass298_0::System__Net__Sockets__Socket____c__DisplayClass298_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Net__Sockets__Socket____c__DisplayClass298_0>())) {}
 void System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass298_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass298_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass298_0::_BeginSendCallback_b__0(System::IOAsyncResult s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass298_0>::get(),
                            "<BeginSendCallback>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, s);
}
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass355_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass355_0::*)()>(&System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass355_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2769acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass355_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass355_0._QueueIOSelectorJob_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass355_0::*)(System::Threading::Tasks::Task)>(&System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass355_0::_QueueIOSelectorJob_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2769ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass355_0>::get(),
                            "<QueueIOSelectorJob>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass355_0::__set___4__this(System::Net::Sockets::Socket value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::Socket, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::Socket>(value));
}
constexpr System::Net::Sockets::Socket System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass355_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::Socket, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass355_0::__set_job(System::IOSelectorJob value)  {
::cordl_internals::setInstanceField<System::IOSelectorJob, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IOSelectorJob>(value));
}
constexpr System::IOSelectorJob System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass355_0::__get_job() const {
return ::cordl_internals::getInstanceField<System::IOSelectorJob, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass355_0::__set_handle(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass355_0::__get_handle() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass355_0::System__Net__Sockets__Socket____c__DisplayClass355_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Net__Sockets__Socket____c__DisplayClass355_0>())) {}
 void System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass355_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass355_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass355_0::_QueueIOSelectorJob_b__0(System::Threading::Tasks::Task t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket____c__DisplayClass355_0>::get(),
                            "<QueueIOSelectorJob>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t);
}
//  Writing Method size for method: System::Net::Sockets::Socket.ReceiveAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::ValueTask_1<int32_t> (System::Net::Sockets::Socket::*)(System::Memory_1<uint8_t>, System::Net::Sockets::SocketFlags, bool, System::Threading::CancellationToken)>(&System::Net::Sockets::Socket::ReceiveAsync)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x2861914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReceiveAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.ReceiveAsyncApm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<int32_t> (System::Net::Sockets::Socket::*)(System::Memory_1<uint8_t>, System::Net::Sockets::SocketFlags)>(&System::Net::Sockets::Socket::ReceiveAsyncApm)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x2862a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReceiveAsyncApm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.SendAsyncForNetworkStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::ValueTask (System::Net::Sockets::Socket::*)(System::ReadOnlyMemory_1<uint8_t>, System::Net::Sockets::SocketFlags, System::Threading::CancellationToken)>(&System::Net::Sockets::Socket::SendAsyncForNetworkStream)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x286219c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SendAsyncForNetworkStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlyMemory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.SendAsyncApm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<int32_t> (System::Net::Sockets::Socket::*)(System::ReadOnlyMemory_1<uint8_t>, System::Net::Sockets::SocketFlags)>(&System::Net::Sockets::Socket::SendAsyncApm)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x2862ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SendAsyncApm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlyMemory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.CompleteAccept
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::Sockets::Socket, System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<System::Net::Sockets::Socket>)>(&System::Net::Sockets::Socket::CompleteAccept)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x28632e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "CompleteAccept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<System::Net::Sockets::Socket>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.CompleteSendReceive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::Sockets::Socket, System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs, bool)>(&System::Net::Sockets::Socket::CompleteSendReceive)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2863530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "CompleteSendReceive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.GetException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (*)(System::Net::Sockets::SocketError, bool)>(&System::Net::Sockets::Socket::GetException)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2863444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "GetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketError>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.ReturnSocketAsyncEventArgs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs, bool)>(&System::Net::Sockets::Socket::ReturnSocketAsyncEventArgs)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2863674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReturnSocketAsyncEventArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.ReturnSocketAsyncEventArgs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<System::Net::Sockets::Socket>)>(&System::Net::Sockets::Socket::ReturnSocketAsyncEventArgs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2863404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReturnSocketAsyncEventArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<System::Net::Sockets::Socket>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(System::Net::Sockets::AddressFamily, System::Net::Sockets::SocketType, System::Net::Sockets::ProtocolType)>(&System::Net::Sockets::Socket::_ctor)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x28636c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::AddressFamily>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::ProtocolType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.get_OSSupportsIPv4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Net::Sockets::Socket::get_OSSupportsIPv4)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2863d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_OSSupportsIPv4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.get_OSSupportsIPv6
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Net::Sockets::Socket::get_OSSupportsIPv6)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2863da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_OSSupportsIPv6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.get_Handle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::get_Handle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2863e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.get_AddressFamily
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::AddressFamily (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::get_AddressFamily)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2863e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_AddressFamily",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.get_SocketType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::SocketType (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::get_SocketType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2863e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_SocketType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.get_ProtocolType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::ProtocolType (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::get_ProtocolType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2863e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_ProtocolType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.set_ExclusiveAddressUse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(bool)>(&System::Net::Sockets::Socket::set_ExclusiveAddressUse)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2863e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_ExclusiveAddressUse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.set_ReceiveBufferSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(int32_t)>(&System::Net::Sockets::Socket::set_ReceiveBufferSize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2863fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_ReceiveBufferSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.set_SendBufferSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(int32_t)>(&System::Net::Sockets::Socket::set_SendBufferSize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x286404c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_SendBufferSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.set_ReceiveTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(int32_t)>(&System::Net::Sockets::Socket::set_ReceiveTimeout)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x28640b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_ReceiveTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.set_SendTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(int32_t)>(&System::Net::Sockets::Socket::set_SendTimeout)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x286411c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_SendTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.get_Ttl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::get_Ttl)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2864188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_Ttl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.set_Ttl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(int16_t)>(&System::Net::Sockets::Socket::set_Ttl)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2864280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_Ttl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.set_DontFragment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(bool)>(&System::Net::Sockets::Socket::set_DontFragment)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2864370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_DontFragment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.get_DualMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::get_DualMode)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x28643f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_DualMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.set_DualMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(bool)>(&System::Net::Sockets::Socket::set_DualMode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28644dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_DualMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.get_IsDualMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::get_IsDualMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2864564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_IsDualMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.CanTryAddressFamily
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::Socket::*)(System::Net::Sockets::AddressFamily)>(&System::Net::Sockets::Socket::CanTryAddressFamily)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x286457c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "CanTryAddressFamily",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::AddressFamily>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>, System::Net::Sockets::SocketFlags)>(&System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x28645b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Net::Sockets::SocketFlags)>(&System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2860310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Receive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Net::Sockets::SocketFlags)>(&System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x285fbb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Receive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>, System::Net::Sockets::SocketFlags)>(&System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2864da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.IOControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(System::Net::Sockets::IOControlCode, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Net::Sockets::Socket::IOControl)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28652f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "IOControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::IOControlCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.SetIPProtectionLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(System::Net::Sockets::IPProtectionLevel)>(&System::Net::Sockets::Socket::SetIPProtectionLevel)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2863b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SetIPProtectionLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::IPProtectionLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.BeginSend
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Net::Sockets::SocketFlags, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::Sockets::Socket::BeginSend)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2861250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginSend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.EndSend
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(System::IAsyncResult)>(&System::Net::Sockets::Socket::EndSend)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x28614ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndSend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.BeginReceive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Net::Sockets::SocketFlags, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::Sockets::Socket::BeginReceive)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2860c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginReceive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.EndReceive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(System::IAsyncResult)>(&System::Net::Sockets::Socket::EndReceive)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2860ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndReceive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.get_InternalSyncObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)()>(&System::Net::Sockets::Socket::get_InternalSyncObject)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2865a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_InternalSyncObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.get_CleanedUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::get_CleanedUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2865ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_CleanedUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.InitializeSockets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Sockets::Socket::InitializeSockets)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x2863914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "InitializeSockets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2865b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::Finalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2865bb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Sockets::Socket),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.InternalShutdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(System::Net::Sockets::SocketShutdown)>(&System::Net::Sockets::Socket::InternalShutdown)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28607d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "InternalShutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketShutdown>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.SetSocketOption
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(System::Net::Sockets::SocketOptionLevel, System::Net::Sockets::SocketOptionName, int32_t, bool)>(&System::Net::Sockets::Socket::SetSocketOption)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2862788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SetSocketOption",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(System::Net::Sockets::AddressFamily, System::Net::Sockets::SocketType, System::Net::Sockets::ProtocolType, System::Net::Sockets::SafeSocketHandle)>(&System::Net::Sockets::Socket::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2865ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::AddressFamily>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::ProtocolType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.SocketDefaults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::SocketDefaults)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2863c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SocketDefaults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Socket_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(System::Net::Sockets::AddressFamily, System::Net::Sockets::SocketType, System::Net::Sockets::ProtocolType, ByRef<int32_t>)>(&System::Net::Sockets::Socket::Socket_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2863b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Socket_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::AddressFamily>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::ProtocolType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.get_Available
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::get_Available)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x285f6ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_Available",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Available_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::Net::Sockets::SafeSocketHandle, ByRef<int32_t>)>(&System::Net::Sockets::Socket::Available_internal)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x286608c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Available_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Available_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::intptr_t, ByRef<int32_t>)>(&System::Net::Sockets::Socket::Available_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28661b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Available_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.set_EnableBroadcast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(bool)>(&System::Net::Sockets::Socket::set_EnableBroadcast)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x28661b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_EnableBroadcast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.get_IsBound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::get_IsBound)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2866234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_IsBound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.get_LocalEndPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::EndPoint (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::get_LocalEndPoint)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x286623c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_LocalEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.LocalEndPoint_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::SocketAddress (*)(System::Net::Sockets::SafeSocketHandle, int32_t, ByRef<int32_t>)>(&System::Net::Sockets::Socket::LocalEndPoint_internal)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2866330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "LocalEndPoint_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.LocalEndPoint_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::SocketAddress (*)(::cordl_internals::intptr_t, int32_t, ByRef<int32_t>)>(&System::Net::Sockets::Socket::LocalEndPoint_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2866460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "LocalEndPoint_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.get_Blocking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::get_Blocking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2866464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_Blocking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.set_Blocking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(bool)>(&System::Net::Sockets::Socket::set_Blocking)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x286646c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_Blocking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Blocking_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::Sockets::SafeSocketHandle, bool, ByRef<int32_t>)>(&System::Net::Sockets::Socket::Blocking_internal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x286653c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Blocking_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Blocking_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t, bool, ByRef<int32_t>)>(&System::Net::Sockets::Socket::Blocking_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286665c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Blocking_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.get_Connected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::get_Connected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2866664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_Connected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.set_NoDelay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(bool)>(&System::Net::Sockets::Socket::set_NoDelay)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2865fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_NoDelay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.get_RemoteEndPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::EndPoint (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::get_RemoteEndPoint)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x28666c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_RemoteEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.RemoteEndPoint_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::SocketAddress (*)(System::Net::Sockets::SafeSocketHandle, int32_t, ByRef<int32_t>)>(&System::Net::Sockets::Socket::RemoteEndPoint_internal)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x28667c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "RemoteEndPoint_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.RemoteEndPoint_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::SocketAddress (*)(::cordl_internals::intptr_t, int32_t, ByRef<int32_t>)>(&System::Net::Sockets::Socket::RemoteEndPoint_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x28668f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "RemoteEndPoint_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Poll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::Socket::*)(int32_t, System::Net::Sockets::SelectMode)>(&System::Net::Sockets::Socket::Poll)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x28668f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Poll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SelectMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Poll_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Net::Sockets::SafeSocketHandle, System::Net::Sockets::SelectMode, int32_t, ByRef<int32_t>)>(&System::Net::Sockets::Socket::Poll_internal)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2866a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Poll_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SelectMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Poll_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::cordl_internals::intptr_t, System::Net::Sockets::SelectMode, int32_t, ByRef<int32_t>)>(&System::Net::Sockets::Socket::Poll_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2866bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Poll_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SelectMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Accept
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::Socket (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::Accept)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2866bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Accept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Accept
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(System::Net::Sockets::Socket)>(&System::Net::Sockets::Socket::Accept)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2866e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Accept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.AcceptAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::Socket::*)(System::Net::Sockets::SocketAsyncEventArgs)>(&System::Net::Sockets::Socket::AcceptAsync)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2866f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "AcceptAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.BeginAccept
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::Sockets::Socket::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::Sockets::Socket::BeginAccept)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2867390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginAccept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.EndAccept
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::Socket (System::Net::Sockets::Socket::*)(System::IAsyncResult)>(&System::Net::Sockets::Socket::EndAccept)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2867500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndAccept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.EndAccept
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::Socket (System::Net::Sockets::Socket::*)(ByRef<::ArrayW<uint8_t>>, ByRef<int32_t>, System::IAsyncResult)>(&System::Net::Sockets::Socket::EndAccept)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2867528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndAccept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Accept_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::SafeSocketHandle (*)(System::Net::Sockets::SafeSocketHandle, ByRef<int32_t>, bool)>(&System::Net::Sockets::Socket::Accept_internal)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2866d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Accept_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Accept_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(::cordl_internals::intptr_t, ByRef<int32_t>, bool)>(&System::Net::Sockets::Socket::Accept_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2867768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Accept_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Bind
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(System::Net::EndPoint)>(&System::Net::Sockets::Socket::Bind)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2867770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Bind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::EndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Bind_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::Sockets::SafeSocketHandle, System::Net::SocketAddress, ByRef<int32_t>)>(&System::Net::Sockets::Socket::Bind_internal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x28679a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Bind_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::SocketAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Bind_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t, System::Net::SocketAddress, ByRef<int32_t>)>(&System::Net::Sockets::Socket::Bind_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2867ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Bind_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::SocketAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Listen
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(int32_t)>(&System::Net::Sockets::Socket::Listen)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2867acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Listen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Listen_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::Sockets::SafeSocketHandle, int32_t, ByRef<int32_t>)>(&System::Net::Sockets::Socket::Listen_internal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2867bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Listen_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Listen_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t, int32_t, ByRef<int32_t>)>(&System::Net::Sockets::Socket::Listen_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2867ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Listen_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Connect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(System::Net::IPAddress, int32_t)>(&System::Net::Sockets::Socket::Connect)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2867ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Connect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(System::Net::EndPoint)>(&System::Net::Sockets::Socket::Connect)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x2867d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::EndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.BeginConnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::Sockets::Socket::*)(::StringW, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::Sockets::Socket::BeginConnect)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x28681e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginConnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.BeginConnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::Sockets::Socket::*)(System::Net::EndPoint, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::Sockets::Socket::BeginConnect)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x28684c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginConnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::EndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.BeginMConnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Net::Sockets::SocketAsyncResult)>(&System::Net::Sockets::Socket::BeginMConnect)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2868a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginMConnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.BeginSConnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Net::Sockets::SocketAsyncResult)>(&System::Net::Sockets::Socket::BeginSConnect)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x286860c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginSConnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.EndConnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(System::IAsyncResult)>(&System::Net::Sockets::Socket::EndConnect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2868c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndConnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Connect_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::Sockets::SafeSocketHandle, System::Net::SocketAddress, ByRef<int32_t>, bool)>(&System::Net::Sockets::Socket::Connect_internal)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x28680c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Connect_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::SocketAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Connect_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t, System::Net::SocketAddress, ByRef<int32_t>, bool)>(&System::Net::Sockets::Socket::Connect_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2868d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Connect_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::SocketAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Disconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(bool)>(&System::Net::Sockets::Socket::Disconnect)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2868d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.EndDisconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(System::IAsyncResult)>(&System::Net::Sockets::Socket::EndDisconnect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2868f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndDisconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Disconnect_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::Sockets::SafeSocketHandle, bool, ByRef<int32_t>)>(&System::Net::Sockets::Socket::Disconnect_internal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2868e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Disconnect_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Disconnect_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t, bool, ByRef<int32_t>)>(&System::Net::Sockets::Socket::Disconnect_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2868ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Disconnect_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Receive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Net::Sockets::SocketFlags, ByRef<System::Net::Sockets::SocketError>)>(&System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2864c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Receive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(System::Memory_1<uint8_t>, int32_t, int32_t, System::Net::Sockets::SocketFlags, ByRef<System::Net::Sockets::SocketError>)>(&System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x28692c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Receive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>, System::Net::Sockets::SocketFlags, ByRef<System::Net::Sockets::SocketError>)>(&System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x2864e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Receive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(System::Span_1<uint8_t>, System::Net::Sockets::SocketFlags, ByRef<System::Net::Sockets::SocketError>)>(&System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x285fe90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(System::ReadOnlySpan_1<uint8_t>, System::Net::Sockets::SocketFlags, ByRef<System::Net::Sockets::SocketError>)>(&System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x28605ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.ReceiveAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::Socket::*)(System::Net::Sockets::SocketAsyncEventArgs)>(&System::Net::Sockets::Socket::ReceiveAsync)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x286961c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReceiveAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.BeginReceive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Net::Sockets::SocketFlags, ByRef<System::Net::Sockets::SocketError>, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::Sockets::Socket::BeginReceive)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2865790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginReceive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.EndReceive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(System::IAsyncResult, ByRef<System::Net::Sockets::SocketError>)>(&System::Net::Sockets::Socket::EndReceive)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2865920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndReceive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Receive_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::Net::Sockets::SafeSocketHandle, void*, int32_t, System::Net::Sockets::SocketFlags, ByRef<int32_t>, bool)>(&System::Net::Sockets::Socket::Receive_internal)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x28694d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Receive_array_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::intptr_t, void*, int32_t, System::Net::Sockets::SocketFlags, ByRef<int32_t>, bool)>(&System::Net::Sockets::Socket::Receive_array_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2869820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive_array_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Receive_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::Net::Sockets::SafeSocketHandle, void*, int32_t, System::Net::Sockets::SocketFlags, ByRef<int32_t>, bool)>(&System::Net::Sockets::Socket::Receive_internal)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2869184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Receive_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::intptr_t, void*, int32_t, System::Net::Sockets::SocketFlags, ByRef<int32_t>, bool)>(&System::Net::Sockets::Socket::Receive_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2869828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.ReceiveFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Net::Sockets::SocketFlags, ByRef<System::Net::EndPoint>)>(&System::Net::Sockets::Socket::ReceiveFrom)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2869830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReceiveFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::EndPoint>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.ReceiveFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Net::Sockets::SocketFlags, ByRef<System::Net::EndPoint>, ByRef<System::Net::Sockets::SocketError>)>(&System::Net::Sockets::Socket::ReceiveFrom)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2869948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReceiveFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::EndPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.ReceiveFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(System::Memory_1<uint8_t>, int32_t, int32_t, System::Net::Sockets::SocketFlags, ByRef<System::Net::EndPoint>, ByRef<System::Net::Sockets::SocketError>)>(&System::Net::Sockets::Socket::ReceiveFrom)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2869c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReceiveFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::EndPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.EndReceiveFrom_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(System::Net::Sockets::SocketAsyncResult, System::Net::Sockets::SocketAsyncEventArgs)>(&System::Net::Sockets::Socket::EndReceiveFrom_internal)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2869ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndReceiveFrom_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.ReceiveFrom_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::Net::Sockets::SafeSocketHandle, void*, int32_t, System::Net::Sockets::SocketFlags, ByRef<System::Net::SocketAddress>, ByRef<int32_t>, bool)>(&System::Net::Sockets::Socket::ReceiveFrom_internal)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2869ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReceiveFrom_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::SocketAddress>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.ReceiveFrom_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::intptr_t, void*, int32_t, System::Net::Sockets::SocketFlags, ByRef<System::Net::SocketAddress>, ByRef<int32_t>, bool)>(&System::Net::Sockets::Socket::ReceiveFrom_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2869f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReceiveFrom_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::SocketAddress>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Net::Sockets::SocketFlags, ByRef<System::Net::Sockets::SocketError>)>(&System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2864b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>, System::Net::Sockets::SocketFlags, ByRef<System::Net::Sockets::SocketError>)>(&System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x286461c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.SendAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::Socket::*)(System::Net::Sockets::SocketAsyncEventArgs)>(&System::Net::Sockets::Socket::SendAsync)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x286a200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SendAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.BeginSend
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Net::Sockets::SocketFlags, ByRef<System::Net::Sockets::SocketError>, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::Sockets::Socket::BeginSend)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2865484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginSend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.BeginSendCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::Sockets::SocketAsyncResult, int32_t)>(&System::Net::Sockets::Socket::BeginSendCallback)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x286a4e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginSendCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.EndSend
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(System::IAsyncResult, ByRef<System::Net::Sockets::SocketError>)>(&System::Net::Sockets::Socket::EndSend)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x28656a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndSend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Send_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::Net::Sockets::SafeSocketHandle, void*, int32_t, System::Net::Sockets::SocketFlags, ByRef<int32_t>, bool)>(&System::Net::Sockets::Socket::Send_internal)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x286a0bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Send_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Send_array_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::intptr_t, void*, int32_t, System::Net::Sockets::SocketFlags, ByRef<int32_t>, bool)>(&System::Net::Sockets::Socket::Send_array_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286a87c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Send_array_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Send_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::Net::Sockets::SafeSocketHandle, void*, int32_t, System::Net::Sockets::SocketFlags, ByRef<int32_t>, bool)>(&System::Net::Sockets::Socket::Send_internal)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2869f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Send_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Send_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::intptr_t, void*, int32_t, System::Net::Sockets::SocketFlags, ByRef<int32_t>, bool)>(&System::Net::Sockets::Socket::Send_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286a884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Send_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.SendTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Net::Sockets::SocketFlags, System::Net::EndPoint)>(&System::Net::Sockets::Socket::SendTo)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x286a88c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SendTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::EndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.EndSendTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(System::IAsyncResult)>(&System::Net::Sockets::Socket::EndSendTo)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x286ab88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndSendTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.SendTo_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::Net::Sockets::SafeSocketHandle, void*, int32_t, System::Net::Sockets::SocketFlags, System::Net::SocketAddress, ByRef<int32_t>, bool)>(&System::Net::Sockets::Socket::SendTo_internal)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x286aa34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SendTo_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::SocketAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.SendTo_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::intptr_t, void*, int32_t, System::Net::Sockets::SocketFlags, System::Net::SocketAddress, ByRef<int32_t>, bool)>(&System::Net::Sockets::Socket::SendTo_icall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286ac40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SendTo_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::SocketAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.GetSocketOption
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Net::Sockets::Socket::*)(System::Net::Sockets::SocketOptionLevel, System::Net::Sockets::SocketOptionName)>(&System::Net::Sockets::Socket::GetSocketOption)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x285f0fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "GetSocketOption",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.GetSocketOption_obj_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::Sockets::SafeSocketHandle, System::Net::Sockets::SocketOptionLevel, System::Net::Sockets::SocketOptionName, ByRef<::bs_hook::Il2CppWrapperType>, ByRef<int32_t>)>(&System::Net::Sockets::Socket::GetSocketOption_obj_internal)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x286ac48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "GetSocketOption_obj_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.GetSocketOption_obj_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t, System::Net::Sockets::SocketOptionLevel, System::Net::Sockets::SocketOptionName, ByRef<::bs_hook::Il2CppWrapperType>, ByRef<int32_t>)>(&System::Net::Sockets::Socket::GetSocketOption_obj_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x286ad80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "GetSocketOption_obj_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.SetSocketOption
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(System::Net::Sockets::SocketOptionLevel, System::Net::Sockets::SocketOptionName, bool)>(&System::Net::Sockets::Socket::SetSocketOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286ad84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SetSocketOption",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.SetSocketOption
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(System::Net::Sockets::SocketOptionLevel, System::Net::Sockets::SocketOptionName, int32_t)>(&System::Net::Sockets::Socket::SetSocketOption)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2863ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SetSocketOption",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.SetSocketOption_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::Sockets::SafeSocketHandle, System::Net::Sockets::SocketOptionLevel, System::Net::Sockets::SocketOptionName, ::bs_hook::Il2CppWrapperType, ::ArrayW<uint8_t>, int32_t, ByRef<int32_t>)>(&System::Net::Sockets::Socket::SetSocketOption_internal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2865d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SetSocketOption_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.SetSocketOption_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t, System::Net::Sockets::SocketOptionLevel, System::Net::Sockets::SocketOptionName, ::bs_hook::Il2CppWrapperType, ::ArrayW<uint8_t>, int32_t, ByRef<int32_t>)>(&System::Net::Sockets::Socket::SetSocketOption_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x286ad8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SetSocketOption_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.IOControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Sockets::Socket::*)(int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Net::Sockets::Socket::IOControl)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x28652f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "IOControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.IOControl_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::Net::Sockets::SafeSocketHandle, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ByRef<int32_t>)>(&System::Net::Sockets::Socket::IOControl_internal)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x286ad90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "IOControl_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.IOControl_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::intptr_t, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ByRef<int32_t>)>(&System::Net::Sockets::Socket::IOControl_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x286aed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "IOControl_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::Close)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286aedc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(int32_t)>(&System::Net::Sockets::Socket::Close)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2860858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Close_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t, ByRef<int32_t>)>(&System::Net::Sockets::Socket::Close_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x286aee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Close_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Shutdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(System::Net::Sockets::SocketShutdown)>(&System::Net::Sockets::Socket::Shutdown)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x286aee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Shutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketShutdown>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Shutdown_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::Sockets::SafeSocketHandle, System::Net::Sockets::SocketShutdown, ByRef<int32_t>)>(&System::Net::Sockets::Socket::Shutdown_internal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2865c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Shutdown_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketShutdown>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Shutdown_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t, System::Net::Sockets::SocketShutdown, ByRef<int32_t>)>(&System::Net::Sockets::Socket::Shutdown_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x286b000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Shutdown_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketShutdown>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(bool)>(&System::Net::Sockets::Socket::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x286b004;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Sockets::Socket),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.Linger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(::cordl_internals::intptr_t)>(&System::Net::Sockets::Socket::Linger)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x286b064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Linger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.ThrowIfDisposedAndClosed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::ThrowIfDisposedAndClosed)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2866000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ThrowIfDisposedAndClosed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.ThrowIfBufferNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>)>(&System::Net::Sockets::Socket::ThrowIfBufferNull)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2868ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ThrowIfBufferNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.ThrowIfBufferOutOfRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Net::Sockets::Socket::ThrowIfBufferOutOfRange)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2869050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ThrowIfBufferOutOfRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.ThrowIfUdp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)()>(&System::Net::Sockets::Socket::ThrowIfUdp)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x286666c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ThrowIfUdp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.ValidateEndIAsyncResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::SocketAsyncResult (System::Net::Sockets::Socket::*)(System::IAsyncResult, ::StringW, ::StringW)>(&System::Net::Sockets::Socket::ValidateEndIAsyncResult)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x286761c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ValidateEndIAsyncResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.QueueIOSelectorJob
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(System::Threading::SemaphoreSlim, ::cordl_internals::intptr_t, System::IOSelectorJob)>(&System::Net::Sockets::Socket::QueueIOSelectorJob)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2867250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "QueueIOSelectorJob",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::SemaphoreSlim>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOSelectorJob>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.InitSocketAsyncEventArgs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::*)(System::Net::Sockets::SocketAsyncEventArgs, System::AsyncCallback, ::bs_hook::Il2CppWrapperType, System::Net::Sockets::SocketOperation)>(&System::Net::Sockets::Socket::InitSocketAsyncEventArgs)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x28671d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "InitSocketAsyncEventArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.SocketOperationToSocketAsyncOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::SocketAsyncOperation (System::Net::Sockets::Socket::*)(System::Net::Sockets::SocketOperation)>(&System::Net::Sockets::Socket::SocketOperationToSocketAsyncOperation)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x286b1d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SocketOperationToSocketAsyncOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.RemapIPEndPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPEndPoint (System::Net::Sockets::Socket::*)(System::Net::IPEndPoint)>(&System::Net::Sockets::Socket::RemapIPEndPoint)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28678ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "RemapIPEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.cancel_blocking_socket_operation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Thread)>(&System::Net::Sockets::Socket::cancel_blocking_socket_operation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x286b27c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "cancel_blocking_socket_operation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Thread>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.get_FamilyHint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::Net::Sockets::Socket::get_FamilyHint)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x286b280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_FamilyHint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.IsProtocolSupported_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Net::NetworkInformation::NetworkInterfaceComponent)>(&System::Net::Sockets::Socket::IsProtocolSupported_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x286b308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "IsProtocolSupported_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::NetworkInterfaceComponent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::Socket.IsProtocolSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Net::NetworkInformation::NetworkInterfaceComponent)>(&System::Net::Sockets::Socket::IsProtocolSupported)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2865af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "IsProtocolSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::NetworkInterfaceComponent>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  System::Net::Sockets::Socket::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
 void System::Net::Sockets::Socket::__set_AcceptCompletedHandler(System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs> value)  {
::cordl_internals::setStaticField<System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs>, "AcceptCompletedHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs>>(value));
}
 System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs> System::Net::Sockets::Socket::__get_AcceptCompletedHandler()  {
return ::cordl_internals::getStaticField<System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs>, "AcceptCompletedHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_ReceiveCompletedHandler(System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs> value)  {
::cordl_internals::setStaticField<System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs>, "ReceiveCompletedHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs>>(value));
}
 System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs> System::Net::Sockets::Socket::__get_ReceiveCompletedHandler()  {
return ::cordl_internals::getStaticField<System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs>, "ReceiveCompletedHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_SendCompletedHandler(System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs> value)  {
::cordl_internals::setStaticField<System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs>, "SendCompletedHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs>>(value));
}
 System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs> System::Net::Sockets::Socket::__get_SendCompletedHandler()  {
return ::cordl_internals::getStaticField<System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs>, "SendCompletedHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_s_rentedSocketSentinel(System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<System::Net::Sockets::Socket> value)  {
::cordl_internals::setStaticField<System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<System::Net::Sockets::Socket>, "s_rentedSocketSentinel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<System::Net::Sockets::Socket>>(value));
}
 System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<System::Net::Sockets::Socket> System::Net::Sockets::Socket::__get_s_rentedSocketSentinel()  {
return ::cordl_internals::getStaticField<System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<System::Net::Sockets::Socket>, "s_rentedSocketSentinel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_s_rentedInt32Sentinel(System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs value)  {
::cordl_internals::setStaticField<System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs, "s_rentedInt32Sentinel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs>(value));
}
 System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs System::Net::Sockets::Socket::__get_s_rentedInt32Sentinel()  {
return ::cordl_internals::getStaticField<System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs, "s_rentedInt32Sentinel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_s_zeroTask(System::Threading::Tasks::Task_1<int32_t> value)  {
::cordl_internals::setStaticField<System::Threading::Tasks::Task_1<int32_t>, "s_zeroTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::Threading::Tasks::Task_1<int32_t>>(value));
}
 System::Threading::Tasks::Task_1<int32_t> System::Net::Sockets::Socket::__get_s_zeroTask()  {
return ::cordl_internals::getStaticField<System::Threading::Tasks::Task_1<int32_t>, "s_zeroTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
constexpr void System::Net::Sockets::Socket::__set__cachedTaskEventArgs(System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs>(value));
}
constexpr System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs System::Net::Sockets::Socket::__get__cachedTaskEventArgs() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::System__Net__Sockets__Socket__CachedEventArgs, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Net::Sockets::Socket::__set_s_InternalSyncObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType System::Net::Sockets::Socket::__get_s_InternalSyncObject()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_s_SupportsIPv4(bool value)  {
::cordl_internals::setStaticField<bool, "s_SupportsIPv4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<bool>(value));
}
 bool System::Net::Sockets::Socket::__get_s_SupportsIPv4()  {
return ::cordl_internals::getStaticField<bool, "s_SupportsIPv4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_s_SupportsIPv6(bool value)  {
::cordl_internals::setStaticField<bool, "s_SupportsIPv6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<bool>(value));
}
 bool System::Net::Sockets::Socket::__get_s_SupportsIPv6()  {
return ::cordl_internals::getStaticField<bool, "s_SupportsIPv6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_s_OSSupportsIPv6(bool value)  {
::cordl_internals::setStaticField<bool, "s_OSSupportsIPv6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<bool>(value));
}
 bool System::Net::Sockets::Socket::__get_s_OSSupportsIPv6()  {
return ::cordl_internals::getStaticField<bool, "s_OSSupportsIPv6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_s_Initialized(bool value)  {
::cordl_internals::setStaticField<bool, "s_Initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<bool>(value));
}
 bool System::Net::Sockets::Socket::__get_s_Initialized()  {
return ::cordl_internals::getStaticField<bool, "s_Initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_s_LoggingEnabled(bool value)  {
::cordl_internals::setStaticField<bool, "s_LoggingEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<bool>(value));
}
 bool System::Net::Sockets::Socket::__get_s_LoggingEnabled()  {
return ::cordl_internals::getStaticField<bool, "s_LoggingEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_s_PerfCountersEnabled(bool value)  {
::cordl_internals::setStaticField<bool, "s_PerfCountersEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<bool>(value));
}
 bool System::Net::Sockets::Socket::__get_s_PerfCountersEnabled()  {
return ::cordl_internals::getStaticField<bool, "s_PerfCountersEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
constexpr void System::Net::Sockets::Socket::__set_is_closed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Sockets::Socket::__get_is_closed() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::Socket::__set_is_listening(bool value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Sockets::Socket::__get_is_listening() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::Socket::__set_useOverlappedIO(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Sockets::Socket::__get_useOverlappedIO() const {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::Socket::__set_linger_timeout(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::Socket::__get_linger_timeout() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::Socket::__set_addressFamily(System::Net::Sockets::AddressFamily value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::AddressFamily, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::AddressFamily>(value));
}
constexpr System::Net::Sockets::AddressFamily System::Net::Sockets::Socket::__get_addressFamily() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::AddressFamily, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::Socket::__set_socketType(System::Net::Sockets::SocketType value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::SocketType, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::SocketType>(value));
}
constexpr System::Net::Sockets::SocketType System::Net::Sockets::Socket::__get_socketType() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::SocketType, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::Socket::__set_protocolType(System::Net::Sockets::ProtocolType value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::ProtocolType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::ProtocolType>(value));
}
constexpr System::Net::Sockets::ProtocolType System::Net::Sockets::Socket::__get_protocolType() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::ProtocolType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::Socket::__set_m_Handle(System::Net::Sockets::SafeSocketHandle value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::SafeSocketHandle, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::SafeSocketHandle>(value));
}
constexpr System::Net::Sockets::SafeSocketHandle System::Net::Sockets::Socket::__get_m_Handle() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::SafeSocketHandle, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::Socket::__set_seed_endpoint(System::Net::EndPoint value)  {
::cordl_internals::setInstanceField<System::Net::EndPoint, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::EndPoint>(value));
}
constexpr System::Net::EndPoint System::Net::Sockets::Socket::__get_seed_endpoint() const {
return ::cordl_internals::getInstanceField<System::Net::EndPoint, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::Socket::__set_ReadSem(System::Threading::SemaphoreSlim value)  {
::cordl_internals::setInstanceField<System::Threading::SemaphoreSlim, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::SemaphoreSlim>(value));
}
constexpr System::Threading::SemaphoreSlim System::Net::Sockets::Socket::__get_ReadSem() const {
return ::cordl_internals::getInstanceField<System::Threading::SemaphoreSlim, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::Socket::__set_WriteSem(System::Threading::SemaphoreSlim value)  {
::cordl_internals::setInstanceField<System::Threading::SemaphoreSlim, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::SemaphoreSlim>(value));
}
constexpr System::Threading::SemaphoreSlim System::Net::Sockets::Socket::__get_WriteSem() const {
return ::cordl_internals::getInstanceField<System::Threading::SemaphoreSlim, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::Socket::__set_is_blocking(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Sockets::Socket::__get_is_blocking() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::Socket::__set_is_bound(bool value)  {
::cordl_internals::setInstanceField<bool, 0x51>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Sockets::Socket::__get_is_bound() const {
return ::cordl_internals::getInstanceField<bool, 0x51>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::Socket::__set_is_connected(bool value)  {
::cordl_internals::setInstanceField<bool, 0x52>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Sockets::Socket::__get_is_connected() const {
return ::cordl_internals::getInstanceField<bool, 0x52>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::Socket::__set_m_IntCleanedUp(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::Socket::__get_m_IntCleanedUp() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::Socket::__set_connect_in_progress(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Sockets::Socket::__get_connect_in_progress() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::Socket::__set_ID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::Socket::__get_ID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Net::Sockets::Socket::__set_AcceptAsyncCallback(System::AsyncCallback value)  {
::cordl_internals::setStaticField<System::AsyncCallback, "AcceptAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::AsyncCallback>(value));
}
 System::AsyncCallback System::Net::Sockets::Socket::__get_AcceptAsyncCallback()  {
return ::cordl_internals::getStaticField<System::AsyncCallback, "AcceptAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_BeginAcceptCallback(System::IOAsyncCallback value)  {
::cordl_internals::setStaticField<System::IOAsyncCallback, "BeginAcceptCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::IOAsyncCallback>(value));
}
 System::IOAsyncCallback System::Net::Sockets::Socket::__get_BeginAcceptCallback()  {
return ::cordl_internals::getStaticField<System::IOAsyncCallback, "BeginAcceptCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_BeginAcceptReceiveCallback(System::IOAsyncCallback value)  {
::cordl_internals::setStaticField<System::IOAsyncCallback, "BeginAcceptReceiveCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::IOAsyncCallback>(value));
}
 System::IOAsyncCallback System::Net::Sockets::Socket::__get_BeginAcceptReceiveCallback()  {
return ::cordl_internals::getStaticField<System::IOAsyncCallback, "BeginAcceptReceiveCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_ConnectAsyncCallback(System::AsyncCallback value)  {
::cordl_internals::setStaticField<System::AsyncCallback, "ConnectAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::AsyncCallback>(value));
}
 System::AsyncCallback System::Net::Sockets::Socket::__get_ConnectAsyncCallback()  {
return ::cordl_internals::getStaticField<System::AsyncCallback, "ConnectAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_BeginConnectCallback(System::IOAsyncCallback value)  {
::cordl_internals::setStaticField<System::IOAsyncCallback, "BeginConnectCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::IOAsyncCallback>(value));
}
 System::IOAsyncCallback System::Net::Sockets::Socket::__get_BeginConnectCallback()  {
return ::cordl_internals::getStaticField<System::IOAsyncCallback, "BeginConnectCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_DisconnectAsyncCallback(System::AsyncCallback value)  {
::cordl_internals::setStaticField<System::AsyncCallback, "DisconnectAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::AsyncCallback>(value));
}
 System::AsyncCallback System::Net::Sockets::Socket::__get_DisconnectAsyncCallback()  {
return ::cordl_internals::getStaticField<System::AsyncCallback, "DisconnectAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_BeginDisconnectCallback(System::IOAsyncCallback value)  {
::cordl_internals::setStaticField<System::IOAsyncCallback, "BeginDisconnectCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::IOAsyncCallback>(value));
}
 System::IOAsyncCallback System::Net::Sockets::Socket::__get_BeginDisconnectCallback()  {
return ::cordl_internals::getStaticField<System::IOAsyncCallback, "BeginDisconnectCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_ReceiveAsyncCallback(System::AsyncCallback value)  {
::cordl_internals::setStaticField<System::AsyncCallback, "ReceiveAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::AsyncCallback>(value));
}
 System::AsyncCallback System::Net::Sockets::Socket::__get_ReceiveAsyncCallback()  {
return ::cordl_internals::getStaticField<System::AsyncCallback, "ReceiveAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_BeginReceiveCallback(System::IOAsyncCallback value)  {
::cordl_internals::setStaticField<System::IOAsyncCallback, "BeginReceiveCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::IOAsyncCallback>(value));
}
 System::IOAsyncCallback System::Net::Sockets::Socket::__get_BeginReceiveCallback()  {
return ::cordl_internals::getStaticField<System::IOAsyncCallback, "BeginReceiveCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_BeginReceiveGenericCallback(System::IOAsyncCallback value)  {
::cordl_internals::setStaticField<System::IOAsyncCallback, "BeginReceiveGenericCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::IOAsyncCallback>(value));
}
 System::IOAsyncCallback System::Net::Sockets::Socket::__get_BeginReceiveGenericCallback()  {
return ::cordl_internals::getStaticField<System::IOAsyncCallback, "BeginReceiveGenericCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_ReceiveFromAsyncCallback(System::AsyncCallback value)  {
::cordl_internals::setStaticField<System::AsyncCallback, "ReceiveFromAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::AsyncCallback>(value));
}
 System::AsyncCallback System::Net::Sockets::Socket::__get_ReceiveFromAsyncCallback()  {
return ::cordl_internals::getStaticField<System::AsyncCallback, "ReceiveFromAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_BeginReceiveFromCallback(System::IOAsyncCallback value)  {
::cordl_internals::setStaticField<System::IOAsyncCallback, "BeginReceiveFromCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::IOAsyncCallback>(value));
}
 System::IOAsyncCallback System::Net::Sockets::Socket::__get_BeginReceiveFromCallback()  {
return ::cordl_internals::getStaticField<System::IOAsyncCallback, "BeginReceiveFromCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_SendAsyncCallback(System::AsyncCallback value)  {
::cordl_internals::setStaticField<System::AsyncCallback, "SendAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::AsyncCallback>(value));
}
 System::AsyncCallback System::Net::Sockets::Socket::__get_SendAsyncCallback()  {
return ::cordl_internals::getStaticField<System::AsyncCallback, "SendAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_BeginSendGenericCallback(System::IOAsyncCallback value)  {
::cordl_internals::setStaticField<System::IOAsyncCallback, "BeginSendGenericCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::IOAsyncCallback>(value));
}
 System::IOAsyncCallback System::Net::Sockets::Socket::__get_BeginSendGenericCallback()  {
return ::cordl_internals::getStaticField<System::IOAsyncCallback, "BeginSendGenericCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 void System::Net::Sockets::Socket::__set_SendToAsyncCallback(System::AsyncCallback value)  {
::cordl_internals::setStaticField<System::AsyncCallback, "SendToAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>(std::forward<System::AsyncCallback>(value));
}
 System::AsyncCallback System::Net::Sockets::Socket::__get_SendToAsyncCallback()  {
return ::cordl_internals::getStaticField<System::AsyncCallback, "SendToAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get>();
}
 System::Threading::Tasks::ValueTask_1<int32_t> System::Net::Sockets::Socket::ReceiveAsync(System::Memory_1<uint8_t> buffer, System::Net::Sockets::SocketFlags socketFlags, bool fromNetworkStream, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReceiveAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::ValueTask_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, socketFlags, fromNetworkStream, cancellationToken);
}
 System::Threading::Tasks::Task_1<int32_t> System::Net::Sockets::Socket::ReceiveAsyncApm(System::Memory_1<uint8_t> buffer, System::Net::Sockets::SocketFlags socketFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReceiveAsyncApm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, socketFlags);
}
 System::Threading::Tasks::ValueTask System::Net::Sockets::Socket::SendAsyncForNetworkStream(System::ReadOnlyMemory_1<uint8_t> buffer, System::Net::Sockets::SocketFlags socketFlags, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SendAsyncForNetworkStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlyMemory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::ValueTask, false>(const_cast<void*>(instance), ___internal_method, buffer, socketFlags, cancellationToken);
}
 System::Threading::Tasks::Task_1<int32_t> System::Net::Sockets::Socket::SendAsyncApm(System::ReadOnlyMemory_1<uint8_t> buffer, System::Net::Sockets::SocketFlags socketFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SendAsyncApm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlyMemory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, socketFlags);
}
 void System::Net::Sockets::Socket::CompleteAccept(System::Net::Sockets::Socket s, System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<System::Net::Sockets::Socket> saea)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "CompleteAccept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<System::Net::Sockets::Socket>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, s, saea);
}
 void System::Net::Sockets::Socket::CompleteSendReceive(System::Net::Sockets::Socket s, System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs saea, bool isReceive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "CompleteSendReceive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, s, saea, isReceive);
}
/// @param wrapExceptionsInIOExceptions: bool (default: false)
 System::Exception System::Net::Sockets::Socket::GetException(System::Net::Sockets::SocketError error, bool wrapExceptionsInIOExceptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "GetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketError>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(nullptr, ___internal_method, error, wrapExceptionsInIOExceptions);
}
 void System::Net::Sockets::Socket::ReturnSocketAsyncEventArgs(System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs saea, bool isReceive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReturnSocketAsyncEventArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::System__Net__Sockets__Socket__Int32TaskSocketAsyncEventArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saea, isReceive);
}
 void System::Net::Sockets::Socket::ReturnSocketAsyncEventArgs(System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<System::Net::Sockets::Socket> saea)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReturnSocketAsyncEventArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1<System::Net::Sockets::Socket>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saea);
}
// Ctor Parameters [CppParam { name: "addressFamily", ty: "System::Net::Sockets::AddressFamily", modifiers: "", def_value: None }, CppParam { name: "socketType", ty: "System::Net::Sockets::SocketType", modifiers: "", def_value: None }, CppParam { name: "protocolType", ty: "System::Net::Sockets::ProtocolType", modifiers: "", def_value: None }]
 System::Net::Sockets::Socket::Socket(System::Net::Sockets::AddressFamily addressFamily, System::Net::Sockets::SocketType socketType, System::Net::Sockets::ProtocolType protocolType)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Socket>(addressFamily, socketType, protocolType))) {}
 void System::Net::Sockets::Socket::_ctor(System::Net::Sockets::AddressFamily addressFamily, System::Net::Sockets::SocketType socketType, System::Net::Sockets::ProtocolType protocolType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::AddressFamily>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::ProtocolType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, addressFamily, socketType, protocolType);
}
 bool System::Net::Sockets::Socket::get_OSSupportsIPv4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_OSSupportsIPv4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool System::Net::Sockets::Socket::get_OSSupportsIPv6()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_OSSupportsIPv6",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 ::cordl_internals::intptr_t System::Net::Sockets::Socket::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::Sockets::AddressFamily System::Net::Sockets::Socket::get_AddressFamily()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_AddressFamily",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Sockets::AddressFamily, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::Sockets::SocketType System::Net::Sockets::Socket::get_SocketType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_SocketType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Sockets::SocketType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::Sockets::ProtocolType System::Net::Sockets::Socket::get_ProtocolType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_ProtocolType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Sockets::ProtocolType, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::Socket::set_ExclusiveAddressUse(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_ExclusiveAddressUse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Net::Sockets::Socket::set_ReceiveBufferSize(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_ReceiveBufferSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Net::Sockets::Socket::set_SendBufferSize(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_SendBufferSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Net::Sockets::Socket::set_ReceiveTimeout(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_ReceiveTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Net::Sockets::Socket::set_SendTimeout(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_SendTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int16_t System::Net::Sockets::Socket::get_Ttl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_Ttl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::Socket::set_Ttl(int16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_Ttl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Net::Sockets::Socket::set_DontFragment(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_DontFragment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Net::Sockets::Socket::get_DualMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_DualMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::Socket::set_DualMode(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_DualMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Net::Sockets::Socket::get_IsDualMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_IsDualMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::Sockets::Socket::CanTryAddressFamily(System::Net::Sockets::AddressFamily family)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "CanTryAddressFamily",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::AddressFamily>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, family);
}
 int32_t System::Net::Sockets::Socket::Send(System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>> buffers, System::Net::Sockets::SocketFlags socketFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffers, socketFlags);
}
 int32_t System::Net::Sockets::Socket::Send(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, socketFlags);
}
 int32_t System::Net::Sockets::Socket::Receive(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, socketFlags);
}
 int32_t System::Net::Sockets::Socket::Receive(System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>> buffers, System::Net::Sockets::SocketFlags socketFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffers, socketFlags);
}
 int32_t System::Net::Sockets::Socket::IOControl(System::Net::Sockets::IOControlCode ioControlCode, ::ArrayW<uint8_t> optionInValue, ::ArrayW<uint8_t> optionOutValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "IOControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::IOControlCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, ioControlCode, optionInValue, optionOutValue);
}
 void System::Net::Sockets::Socket::SetIPProtectionLevel(System::Net::Sockets::IPProtectionLevel level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SetIPProtectionLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::IPProtectionLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, level);
}
 System::IAsyncResult System::Net::Sockets::Socket::BeginSend(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginSend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, socketFlags, callback, state);
}
 int32_t System::Net::Sockets::Socket::EndSend(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndSend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 System::IAsyncResult System::Net::Sockets::Socket::BeginReceive(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginReceive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, socketFlags, callback, state);
}
 int32_t System::Net::Sockets::Socket::EndReceive(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndReceive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 ::bs_hook::Il2CppWrapperType System::Net::Sockets::Socket::get_InternalSyncObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_InternalSyncObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method);
}
 bool System::Net::Sockets::Socket::get_CleanedUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_CleanedUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::Socket::InitializeSockets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "InitializeSockets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void System::Net::Sockets::Socket::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::Socket::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::Socket::InternalShutdown(System::Net::Sockets::SocketShutdown how)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "InternalShutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketShutdown>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, how);
}
 void System::Net::Sockets::Socket::SetSocketOption(System::Net::Sockets::SocketOptionLevel optionLevel, System::Net::Sockets::SocketOptionName optionName, int32_t optionValue, bool silent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SetSocketOption",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, optionLevel, optionName, optionValue, silent);
}
// Ctor Parameters [CppParam { name: "family", ty: "System::Net::Sockets::AddressFamily", modifiers: "", def_value: None }, CppParam { name: "type", ty: "System::Net::Sockets::SocketType", modifiers: "", def_value: None }, CppParam { name: "proto", ty: "System::Net::Sockets::ProtocolType", modifiers: "", def_value: None }, CppParam { name: "safe_handle", ty: "System::Net::Sockets::SafeSocketHandle", modifiers: "", def_value: None }]
 System::Net::Sockets::Socket::Socket(System::Net::Sockets::AddressFamily family, System::Net::Sockets::SocketType type, System::Net::Sockets::ProtocolType proto, System::Net::Sockets::SafeSocketHandle safe_handle)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Socket>(family, type, proto, safe_handle))) {}
 void System::Net::Sockets::Socket::_ctor(System::Net::Sockets::AddressFamily family, System::Net::Sockets::SocketType type, System::Net::Sockets::ProtocolType proto, System::Net::Sockets::SafeSocketHandle safe_handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::AddressFamily>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::ProtocolType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, family, type, proto, safe_handle);
}
 void System::Net::Sockets::Socket::SocketDefaults()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SocketDefaults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::cordl_internals::intptr_t System::Net::Sockets::Socket::Socket_icall(System::Net::Sockets::AddressFamily family, System::Net::Sockets::SocketType type, System::Net::Sockets::ProtocolType proto, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Socket_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::AddressFamily>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::ProtocolType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, family, type, proto, error);
}
 int32_t System::Net::Sockets::Socket::get_Available()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_Available",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Net::Sockets::Socket::Available_internal(System::Net::Sockets::SafeSocketHandle safeHandle, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Available_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, error);
}
 int32_t System::Net::Sockets::Socket::Available_icall(::cordl_internals::intptr_t socket, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Available_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, socket, error);
}
 void System::Net::Sockets::Socket::set_EnableBroadcast(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_EnableBroadcast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Net::Sockets::Socket::get_IsBound()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_IsBound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::EndPoint System::Net::Sockets::Socket::get_LocalEndPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_LocalEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::EndPoint, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::SocketAddress System::Net::Sockets::Socket::LocalEndPoint_internal(System::Net::Sockets::SafeSocketHandle safeHandle, int32_t family, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "LocalEndPoint_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::SocketAddress, false>(nullptr, ___internal_method, safeHandle, family, error);
}
 System::Net::SocketAddress System::Net::Sockets::Socket::LocalEndPoint_icall(::cordl_internals::intptr_t socket, int32_t family, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "LocalEndPoint_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::SocketAddress, false>(nullptr, ___internal_method, socket, family, error);
}
 bool System::Net::Sockets::Socket::get_Blocking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_Blocking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::Socket::set_Blocking(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_Blocking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Net::Sockets::Socket::Blocking_internal(System::Net::Sockets::SafeSocketHandle safeHandle, bool block, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Blocking_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, block, error);
}
 void System::Net::Sockets::Socket::Blocking_icall(::cordl_internals::intptr_t socket, bool block, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Blocking_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, socket, block, error);
}
 bool System::Net::Sockets::Socket::get_Connected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_Connected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::Socket::set_NoDelay(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "set_NoDelay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Net::EndPoint System::Net::Sockets::Socket::get_RemoteEndPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_RemoteEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::EndPoint, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::SocketAddress System::Net::Sockets::Socket::RemoteEndPoint_internal(System::Net::Sockets::SafeSocketHandle safeHandle, int32_t family, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "RemoteEndPoint_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::SocketAddress, false>(nullptr, ___internal_method, safeHandle, family, error);
}
 System::Net::SocketAddress System::Net::Sockets::Socket::RemoteEndPoint_icall(::cordl_internals::intptr_t socket, int32_t family, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "RemoteEndPoint_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::SocketAddress, false>(nullptr, ___internal_method, socket, family, error);
}
 bool System::Net::Sockets::Socket::Poll(int32_t microSeconds, System::Net::Sockets::SelectMode mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Poll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SelectMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, microSeconds, mode);
}
 bool System::Net::Sockets::Socket::Poll_internal(System::Net::Sockets::SafeSocketHandle safeHandle, System::Net::Sockets::SelectMode mode, int32_t timeout, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Poll_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SelectMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, safeHandle, mode, timeout, error);
}
 bool System::Net::Sockets::Socket::Poll_icall(::cordl_internals::intptr_t socket, System::Net::Sockets::SelectMode mode, int32_t timeout, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Poll_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SelectMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, socket, mode, timeout, error);
}
 System::Net::Sockets::Socket System::Net::Sockets::Socket::Accept()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Accept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Sockets::Socket, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::Socket::Accept(System::Net::Sockets::Socket acceptSocket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Accept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, acceptSocket);
}
 bool System::Net::Sockets::Socket::AcceptAsync(System::Net::Sockets::SocketAsyncEventArgs e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "AcceptAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, e);
}
 System::IAsyncResult System::Net::Sockets::Socket::BeginAccept(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginAccept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, state);
}
 System::Net::Sockets::Socket System::Net::Sockets::Socket::EndAccept(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndAccept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Sockets::Socket, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 System::Net::Sockets::Socket System::Net::Sockets::Socket::EndAccept(ByRef<::ArrayW<uint8_t>> buffer, ByRef<int32_t> bytesTransferred, System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndAccept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Sockets::Socket, false>(const_cast<void*>(instance), ___internal_method, buffer, bytesTransferred, asyncResult);
}
 System::Net::Sockets::SafeSocketHandle System::Net::Sockets::Socket::Accept_internal(System::Net::Sockets::SafeSocketHandle safeHandle, ByRef<int32_t> error, bool blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Accept_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Sockets::SafeSocketHandle, false>(nullptr, ___internal_method, safeHandle, error, blocking);
}
 ::cordl_internals::intptr_t System::Net::Sockets::Socket::Accept_icall(::cordl_internals::intptr_t sock, ByRef<int32_t> error, bool blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Accept_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, sock, error, blocking);
}
 void System::Net::Sockets::Socket::Bind(System::Net::EndPoint localEP)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Bind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::EndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, localEP);
}
 void System::Net::Sockets::Socket::Bind_internal(System::Net::Sockets::SafeSocketHandle safeHandle, System::Net::SocketAddress sa, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Bind_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::SocketAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, sa, error);
}
 void System::Net::Sockets::Socket::Bind_icall(::cordl_internals::intptr_t sock, System::Net::SocketAddress sa, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Bind_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::SocketAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sock, sa, error);
}
 void System::Net::Sockets::Socket::Listen(int32_t backlog)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Listen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, backlog);
}
 void System::Net::Sockets::Socket::Listen_internal(System::Net::Sockets::SafeSocketHandle safeHandle, int32_t backlog, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Listen_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, backlog, error);
}
 void System::Net::Sockets::Socket::Listen_icall(::cordl_internals::intptr_t sock, int32_t backlog, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Listen_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sock, backlog, error);
}
 void System::Net::Sockets::Socket::Connect(System::Net::IPAddress address, int32_t port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, address, port);
}
 void System::Net::Sockets::Socket::Connect(System::Net::EndPoint remoteEP)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::EndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, remoteEP);
}
 System::IAsyncResult System::Net::Sockets::Socket::BeginConnect(::StringW host, int32_t port, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginConnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, host, port, callback, state);
}
 System::IAsyncResult System::Net::Sockets::Socket::BeginConnect(System::Net::EndPoint remoteEP, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginConnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::EndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, remoteEP, callback, state);
}
 bool System::Net::Sockets::Socket::BeginMConnect(System::Net::Sockets::SocketAsyncResult sockares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginMConnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sockares);
}
 bool System::Net::Sockets::Socket::BeginSConnect(System::Net::Sockets::SocketAsyncResult sockares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginSConnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sockares);
}
 void System::Net::Sockets::Socket::EndConnect(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndConnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 void System::Net::Sockets::Socket::Connect_internal(System::Net::Sockets::SafeSocketHandle safeHandle, System::Net::SocketAddress sa, ByRef<int32_t> error, bool blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Connect_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::SocketAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, sa, error, blocking);
}
 void System::Net::Sockets::Socket::Connect_icall(::cordl_internals::intptr_t sock, System::Net::SocketAddress sa, ByRef<int32_t> error, bool blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Connect_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::SocketAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sock, sa, error, blocking);
}
 void System::Net::Sockets::Socket::Disconnect(bool reuseSocket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reuseSocket);
}
 void System::Net::Sockets::Socket::EndDisconnect(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndDisconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 void System::Net::Sockets::Socket::Disconnect_internal(System::Net::Sockets::SafeSocketHandle safeHandle, bool reuse, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Disconnect_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, reuse, error);
}
 void System::Net::Sockets::Socket::Disconnect_icall(::cordl_internals::intptr_t sock, bool reuse, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Disconnect_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sock, reuse, error);
}
 int32_t System::Net::Sockets::Socket::Receive(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, ByRef<System::Net::Sockets::SocketError> errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, socketFlags, errorCode);
}
 int32_t System::Net::Sockets::Socket::Receive(System::Memory_1<uint8_t> buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, ByRef<System::Net::Sockets::SocketError> errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, socketFlags, errorCode);
}
 int32_t System::Net::Sockets::Socket::Receive(System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>> buffers, System::Net::Sockets::SocketFlags socketFlags, ByRef<System::Net::Sockets::SocketError> errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffers, socketFlags, errorCode);
}
 int32_t System::Net::Sockets::Socket::Receive(System::Span_1<uint8_t> buffer, System::Net::Sockets::SocketFlags socketFlags, ByRef<System::Net::Sockets::SocketError> errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, socketFlags, errorCode);
}
 int32_t System::Net::Sockets::Socket::Send(System::ReadOnlySpan_1<uint8_t> buffer, System::Net::Sockets::SocketFlags socketFlags, ByRef<System::Net::Sockets::SocketError> errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, socketFlags, errorCode);
}
 bool System::Net::Sockets::Socket::ReceiveAsync(System::Net::Sockets::SocketAsyncEventArgs e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReceiveAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, e);
}
 System::IAsyncResult System::Net::Sockets::Socket::BeginReceive(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, ByRef<System::Net::Sockets::SocketError> errorCode, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginReceive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, socketFlags, errorCode, callback, state);
}
 int32_t System::Net::Sockets::Socket::EndReceive(System::IAsyncResult asyncResult, ByRef<System::Net::Sockets::SocketError> errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndReceive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, asyncResult, errorCode);
}
 int32_t System::Net::Sockets::Socket::Receive_internal(System::Net::Sockets::SafeSocketHandle safeHandle, void* bufarray, int32_t count, System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, bufarray, count, flags, error, blocking);
}
 int32_t System::Net::Sockets::Socket::Receive_array_icall(::cordl_internals::intptr_t sock, void* bufarray, int32_t count, System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive_array_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, bufarray, count, flags, error, blocking);
}
 int32_t System::Net::Sockets::Socket::Receive_internal(System::Net::Sockets::SafeSocketHandle safeHandle, void* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, buffer, count, flags, error, blocking);
}
 int32_t System::Net::Sockets::Socket::Receive_icall(::cordl_internals::intptr_t sock, void* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Receive_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, buffer, count, flags, error, blocking);
}
 int32_t System::Net::Sockets::Socket::ReceiveFrom(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, ByRef<System::Net::EndPoint> remoteEP)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReceiveFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::EndPoint>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, socketFlags, remoteEP);
}
 int32_t System::Net::Sockets::Socket::ReceiveFrom(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, ByRef<System::Net::EndPoint> remoteEP, ByRef<System::Net::Sockets::SocketError> errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReceiveFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::EndPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, socketFlags, remoteEP, errorCode);
}
 int32_t System::Net::Sockets::Socket::ReceiveFrom(System::Memory_1<uint8_t> buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, ByRef<System::Net::EndPoint> remoteEP, ByRef<System::Net::Sockets::SocketError> errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReceiveFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::EndPoint>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, socketFlags, remoteEP, errorCode);
}
 int32_t System::Net::Sockets::Socket::EndReceiveFrom_internal(System::Net::Sockets::SocketAsyncResult sockares, System::Net::Sockets::SocketAsyncEventArgs ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndReceiveFrom_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, sockares, ares);
}
 int32_t System::Net::Sockets::Socket::ReceiveFrom_internal(System::Net::Sockets::SafeSocketHandle safeHandle, void* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, ByRef<System::Net::SocketAddress> sockaddr, ByRef<int32_t> error, bool blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReceiveFrom_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::SocketAddress>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, buffer, count, flags, sockaddr, error, blocking);
}
 int32_t System::Net::Sockets::Socket::ReceiveFrom_icall(::cordl_internals::intptr_t sock, void* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, ByRef<System::Net::SocketAddress> sockaddr, ByRef<int32_t> error, bool blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ReceiveFrom_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::SocketAddress>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, buffer, count, flags, sockaddr, error, blocking);
}
 int32_t System::Net::Sockets::Socket::Send(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, ByRef<System::Net::Sockets::SocketError> errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, socketFlags, errorCode);
}
 int32_t System::Net::Sockets::Socket::Send(System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>> buffers, System::Net::Sockets::SocketFlags socketFlags, ByRef<System::Net::Sockets::SocketError> errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffers, socketFlags, errorCode);
}
 bool System::Net::Sockets::Socket::SendAsync(System::Net::Sockets::SocketAsyncEventArgs e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SendAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, e);
}
 System::IAsyncResult System::Net::Sockets::Socket::BeginSend(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, ByRef<System::Net::Sockets::SocketError> errorCode, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginSend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, socketFlags, errorCode, callback, state);
}
 void System::Net::Sockets::Socket::BeginSendCallback(System::Net::Sockets::SocketAsyncResult sockares, int32_t sent_so_far)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "BeginSendCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sockares, sent_so_far);
}
 int32_t System::Net::Sockets::Socket::EndSend(System::IAsyncResult asyncResult, ByRef<System::Net::Sockets::SocketError> errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndSend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::SocketError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, asyncResult, errorCode);
}
 int32_t System::Net::Sockets::Socket::Send_internal(System::Net::Sockets::SafeSocketHandle safeHandle, void* bufarray, int32_t count, System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Send_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, bufarray, count, flags, error, blocking);
}
 int32_t System::Net::Sockets::Socket::Send_array_icall(::cordl_internals::intptr_t sock, void* bufarray, int32_t count, System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Send_array_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, bufarray, count, flags, error, blocking);
}
 int32_t System::Net::Sockets::Socket::Send_internal(System::Net::Sockets::SafeSocketHandle safeHandle, void* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Send_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, buffer, count, flags, error, blocking);
}
 int32_t System::Net::Sockets::Socket::Send_icall(::cordl_internals::intptr_t sock, void* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Send_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, buffer, count, flags, error, blocking);
}
 int32_t System::Net::Sockets::Socket::SendTo(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, System::Net::EndPoint remoteEP)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SendTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::EndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size, socketFlags, remoteEP);
}
 int32_t System::Net::Sockets::Socket::EndSendTo(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "EndSendTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 int32_t System::Net::Sockets::Socket::SendTo_internal(System::Net::Sockets::SafeSocketHandle safeHandle, void* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, System::Net::SocketAddress sa, ByRef<int32_t> error, bool blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SendTo_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::SocketAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, buffer, count, flags, sa, error, blocking);
}
 int32_t System::Net::Sockets::Socket::SendTo_icall(::cordl_internals::intptr_t sock, void* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, System::Net::SocketAddress sa, ByRef<int32_t> error, bool blocking)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SendTo_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::SocketAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, buffer, count, flags, sa, error, blocking);
}
 ::bs_hook::Il2CppWrapperType System::Net::Sockets::Socket::GetSocketOption(System::Net::Sockets::SocketOptionLevel optionLevel, System::Net::Sockets::SocketOptionName optionName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "GetSocketOption",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, optionLevel, optionName);
}
 void System::Net::Sockets::Socket::GetSocketOption_obj_internal(System::Net::Sockets::SafeSocketHandle safeHandle, System::Net::Sockets::SocketOptionLevel level, System::Net::Sockets::SocketOptionName name, ByRef<::bs_hook::Il2CppWrapperType> obj_val, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "GetSocketOption_obj_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, level, name, obj_val, error);
}
 void System::Net::Sockets::Socket::GetSocketOption_obj_icall(::cordl_internals::intptr_t socket, System::Net::Sockets::SocketOptionLevel level, System::Net::Sockets::SocketOptionName name, ByRef<::bs_hook::Il2CppWrapperType> obj_val, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "GetSocketOption_obj_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, socket, level, name, obj_val, error);
}
 void System::Net::Sockets::Socket::SetSocketOption(System::Net::Sockets::SocketOptionLevel optionLevel, System::Net::Sockets::SocketOptionName optionName, bool optionValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SetSocketOption",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, optionLevel, optionName, optionValue);
}
 void System::Net::Sockets::Socket::SetSocketOption(System::Net::Sockets::SocketOptionLevel optionLevel, System::Net::Sockets::SocketOptionName optionName, int32_t optionValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SetSocketOption",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, optionLevel, optionName, optionValue);
}
 void System::Net::Sockets::Socket::SetSocketOption_internal(System::Net::Sockets::SafeSocketHandle safeHandle, System::Net::Sockets::SocketOptionLevel level, System::Net::Sockets::SocketOptionName name, ::bs_hook::Il2CppWrapperType obj_val, ::ArrayW<uint8_t> byte_val, int32_t int_val, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SetSocketOption_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, level, name, obj_val, byte_val, int_val, error);
}
 void System::Net::Sockets::Socket::SetSocketOption_icall(::cordl_internals::intptr_t socket, System::Net::Sockets::SocketOptionLevel level, System::Net::Sockets::SocketOptionName name, ::bs_hook::Il2CppWrapperType obj_val, ::ArrayW<uint8_t> byte_val, int32_t int_val, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SetSocketOption_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, socket, level, name, obj_val, byte_val, int_val, error);
}
 int32_t System::Net::Sockets::Socket::IOControl(int32_t ioControlCode, ::ArrayW<uint8_t> optionInValue, ::ArrayW<uint8_t> optionOutValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "IOControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, ioControlCode, optionInValue, optionOutValue);
}
 int32_t System::Net::Sockets::Socket::IOControl_internal(System::Net::Sockets::SafeSocketHandle safeHandle, int32_t ioctl_code, ::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "IOControl_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, ioctl_code, input, output, error);
}
 int32_t System::Net::Sockets::Socket::IOControl_icall(::cordl_internals::intptr_t sock, int32_t ioctl_code, ::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "IOControl_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, ioctl_code, input, output, error);
}
 void System::Net::Sockets::Socket::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::Socket::Close(int32_t timeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timeout);
}
 void System::Net::Sockets::Socket::Close_icall(::cordl_internals::intptr_t socket, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Close_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, socket, error);
}
 void System::Net::Sockets::Socket::Shutdown(System::Net::Sockets::SocketShutdown how)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Shutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketShutdown>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, how);
}
 void System::Net::Sockets::Socket::Shutdown_internal(System::Net::Sockets::SafeSocketHandle safeHandle, System::Net::Sockets::SocketShutdown how, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Shutdown_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SafeSocketHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketShutdown>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, how, error);
}
 void System::Net::Sockets::Socket::Shutdown_icall(::cordl_internals::intptr_t socket, System::Net::Sockets::SocketShutdown how, ByRef<int32_t> error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Shutdown_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketShutdown>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, socket, how, error);
}
 void System::Net::Sockets::Socket::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void System::Net::Sockets::Socket::Linger(::cordl_internals::intptr_t handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "Linger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, handle);
}
 void System::Net::Sockets::Socket::ThrowIfDisposedAndClosed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ThrowIfDisposedAndClosed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::Socket::ThrowIfBufferNull(::ArrayW<uint8_t> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ThrowIfBufferNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer);
}
 void System::Net::Sockets::Socket::ThrowIfBufferOutOfRange(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ThrowIfBufferOutOfRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, size);
}
 void System::Net::Sockets::Socket::ThrowIfUdp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ThrowIfUdp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::Sockets::SocketAsyncResult System::Net::Sockets::Socket::ValidateEndIAsyncResult(System::IAsyncResult ares, ::StringW methodName, ::StringW argName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "ValidateEndIAsyncResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Sockets::SocketAsyncResult, false>(const_cast<void*>(instance), ___internal_method, ares, methodName, argName);
}
 void System::Net::Sockets::Socket::QueueIOSelectorJob(System::Threading::SemaphoreSlim sem, ::cordl_internals::intptr_t handle, System::IOSelectorJob job)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "QueueIOSelectorJob",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::SemaphoreSlim>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IOSelectorJob>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sem, handle, job);
}
 void System::Net::Sockets::Socket::InitSocketAsyncEventArgs(System::Net::Sockets::SocketAsyncEventArgs e, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state, System::Net::Sockets::SocketOperation operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "InitSocketAsyncEventArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e, callback, state, operation);
}
 System::Net::Sockets::SocketAsyncOperation System::Net::Sockets::Socket::SocketOperationToSocketAsyncOperation(System::Net::Sockets::SocketOperation op)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "SocketOperationToSocketAsyncOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Sockets::SocketAsyncOperation, false>(const_cast<void*>(instance), ___internal_method, op);
}
 System::Net::IPEndPoint System::Net::Sockets::Socket::RemapIPEndPoint(System::Net::IPEndPoint input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "RemapIPEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::IPEndPoint, false>(const_cast<void*>(instance), ___internal_method, input);
}
 void System::Net::Sockets::Socket::cancel_blocking_socket_operation(System::Threading::Thread thread)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "cancel_blocking_socket_operation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Thread>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, thread);
}
 int32_t System::Net::Sockets::Socket::get_FamilyHint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "get_FamilyHint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 bool System::Net::Sockets::Socket::IsProtocolSupported_internal(System::Net::NetworkInformation::NetworkInterfaceComponent networkInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "IsProtocolSupported_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::NetworkInterfaceComponent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, networkInterface);
}
 bool System::Net::Sockets::Socket::IsProtocolSupported(System::Net::NetworkInformation::NetworkInterfaceComponent networkInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::Socket>::get(),
                            "IsProtocolSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::NetworkInterfaceComponent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, networkInterface);
}
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1::*)()>(&System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1.GetCompletionResponsibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> (System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1::*)(ByRef<bool>)>(&System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1::GetCompletionResponsibility)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1>::get(),
                            "GetCompletionResponsibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1::__set__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1::__get__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1::__set__accessed(bool value)  {
::cordl_internals::setInstanceField<bool, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1::__get__accessed() const {
return ::cordl_internals::getInstanceField<bool, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1()  : System::Net::Sockets::SocketAsyncEventArgs(THROW_UNLESS(::il2cpp_utils::New<System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1>())) {}
 void System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1::GetCompletionResponsibility(ByRef<bool> responsibleForReturningToPool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::System__Net__Sockets__Socket__TaskSocketAsyncEventArgs_1>::get(),
                            "GetCompletionResponsibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>, false>(const_cast<void*>(instance), ___internal_method, responsibleForReturningToPool);
}
