#pragma once
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
//  Writing Method size for method: ::System::Threading::____System__Threading__SemaphoreSlim__TaskNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::____System__Threading__SemaphoreSlim__TaskNode::*)()>(&::System::Threading::____System__Threading__SemaphoreSlim__TaskNode::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x24a79e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::____System__Threading__SemaphoreSlim__TaskNode.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::____System__Threading__SemaphoreSlim__TaskNode::*)()>(&::System::Threading::____System__Threading__SemaphoreSlim__TaskNode::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x24a8108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::____System__Threading__SemaphoreSlim__TaskNode.System_Threading_IThreadPoolWorkItem_MarkAborted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::____System__Threading__SemaphoreSlim__TaskNode::*)(::System::Threading::ThreadAbortException)>(&::System::Threading::____System__Threading__SemaphoreSlim__TaskNode::System_Threading_IThreadPoolWorkItem_MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24a8154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode>::get(),
                            "System.Threading.IThreadPoolWorkItem.MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Threading::IThreadPoolWorkItem
constexpr  ::System::Threading::____System__Threading__SemaphoreSlim__TaskNode::operator ::System::Threading::IThreadPoolWorkItem() const noexcept {
return ::System::Threading::IThreadPoolWorkItem(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::____System__Threading__SemaphoreSlim__TaskNode::__set_Prev(::System::Threading::____System__Threading__SemaphoreSlim__TaskNode value)  {
::cordl_internals::setInstanceField<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode>(value));
}
constexpr ::System::Threading::____System__Threading__SemaphoreSlim__TaskNode ::System::Threading::____System__Threading__SemaphoreSlim__TaskNode::__get_Prev() const {
return ::cordl_internals::getInstanceField<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::____System__Threading__SemaphoreSlim__TaskNode::__set_Next(::System::Threading::____System__Threading__SemaphoreSlim__TaskNode value)  {
::cordl_internals::setInstanceField<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode>(value));
}
constexpr ::System::Threading::____System__Threading__SemaphoreSlim__TaskNode ::System::Threading::____System__Threading__SemaphoreSlim__TaskNode::__get_Next() const {
return ::cordl_internals::getInstanceField<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Threading::____System__Threading__SemaphoreSlim__TaskNode::____System__Threading__SemaphoreSlim__TaskNode()  : ::System::Threading::Tasks::Task_1<bool>(THROW_UNLESS(::il2cpp_utils::New<____System__Threading__SemaphoreSlim__TaskNode>())) {}
 void ::System::Threading::____System__Threading__SemaphoreSlim__TaskNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Threading::____System__Threading__SemaphoreSlim__TaskNode::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Threading::____System__Threading__SemaphoreSlim__TaskNode::System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException tae)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode>::get(),
                            "System.Threading.IThreadPoolWorkItem.MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tae);
}
//  Writing Method size for method: ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::*)()>(&::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x76c;
  constexpr static std::size_t addrs = 0x24a8158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24a88c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "asyncWaiter", ty: "::System::Threading::____System__Threading__SemaphoreSlim__TaskNode", modifiers: "", def_value: Some("csnull") }, CppParam { name: "millisecondsTimeout", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Threading::SemaphoreSlim", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_cts_5__2", ty: "::System::Threading::CancellationTokenSource", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap2", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::System::Threading::CancellationToken cancellationToken, ::System::Threading::____System__Threading__SemaphoreSlim__TaskNode asyncWaiter, int32_t millisecondsTimeout, ::System::Threading::SemaphoreSlim __4__this, ::System::Threading::CancellationTokenSource _cts_5__2, ::bs_hook::Il2CppWrapperType __7__wrap2, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task> __u__1, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->asyncWaiter = asyncWaiter;
this->millisecondsTimeout = millisecondsTimeout;
this->__4__this = __4__this;
this->_cts_5__2 = _cts_5__2;
this->__7__wrap2 = __7__wrap2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->__instance);
}
constexpr void ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set_asyncWaiter(::System::Threading::____System__Threading__SemaphoreSlim__TaskNode value)  {
::cordl_internals::setInstanceField<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode, 0x28>(this->__instance, std::forward<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode>(value));
}
constexpr ::System::Threading::____System__Threading__SemaphoreSlim__TaskNode ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get_asyncWaiter() const {
return ::cordl_internals::getInstanceField<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode, 0x28>(this->__instance);
}
constexpr void ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set_millisecondsTimeout(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get_millisecondsTimeout() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set___4__this(::System::Threading::SemaphoreSlim value)  {
::cordl_internals::setInstanceField<::System::Threading::SemaphoreSlim, 0x38>(this->__instance, std::forward<::System::Threading::SemaphoreSlim>(value));
}
constexpr ::System::Threading::SemaphoreSlim ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Threading::SemaphoreSlim, 0x38>(this->__instance);
}
constexpr void ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set__cts_5__2(::System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource, 0x40>(this->__instance, std::forward<::System::Threading::CancellationTokenSource>(value));
}
constexpr ::System::Threading::CancellationTokenSource ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get__cts_5__2() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource, 0x40>(this->__instance);
}
constexpr void ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set___7__wrap2(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x48>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get___7__wrap2() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x48>(this->__instance);
}
constexpr void ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task>, 0x50>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task> ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task>, 0x50>(this->__instance);
}
constexpr void ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set___u__2(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>, 0x60>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>, 0x60>(this->__instance);
}
 void ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::____System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.get_CurrentCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::SemaphoreSlim::*)()>(&::System::Threading::SemaphoreSlim::get_CurrentCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24a6d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "get_CurrentCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SemaphoreSlim::*)(int32_t)>(&::System::Threading::SemaphoreSlim::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a6d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SemaphoreSlim::*)(int32_t, int32_t)>(&::System::Threading::SemaphoreSlim::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x24a6d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Wait
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SemaphoreSlim::*)()>(&::System::Threading::SemaphoreSlim::Wait)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24a6ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Wait
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::SemaphoreSlim::*)(int32_t)>(&::System::Threading::SemaphoreSlim::Wait)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a73c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Wait
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::SemaphoreSlim::*)(int32_t, ::System::Threading::CancellationToken)>(&::System::Threading::SemaphoreSlim::Wait)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x24a6eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.WaitUntilCountOrTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::SemaphoreSlim::*)(int32_t, uint32_t, ::System::Threading::CancellationToken)>(&::System::Threading::SemaphoreSlim::WaitUntilCountOrTimeout)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24a7734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "WaitUntilCountOrTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.WaitAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Threading::SemaphoreSlim::*)()>(&::System::Threading::SemaphoreSlim::WaitAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24a7828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "WaitAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.WaitAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task (::System::Threading::SemaphoreSlim::*)(::System::Threading::CancellationToken)>(&::System::Threading::SemaphoreSlim::WaitAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24a7834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "WaitAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.WaitAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool> (::System::Threading::SemaphoreSlim::*)(int32_t, ::System::Threading::CancellationToken)>(&::System::Threading::SemaphoreSlim::WaitAsync)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x24a7450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "WaitAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.CreateAndAddAsyncWaiter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode (::System::Threading::SemaphoreSlim::*)()>(&::System::Threading::SemaphoreSlim::CreateAndAddAsyncWaiter)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x24a7840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "CreateAndAddAsyncWaiter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.RemoveAsyncWaiter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::SemaphoreSlim::*)(::System::Threading::____System__Threading__SemaphoreSlim__TaskNode)>(&::System::Threading::SemaphoreSlim::RemoveAsyncWaiter)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x24a7a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "RemoveAsyncWaiter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.WaitUntilCountOrTimeoutAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool> (::System::Threading::SemaphoreSlim::*)(::System::Threading::____System__Threading__SemaphoreSlim__TaskNode, int32_t, ::System::Threading::CancellationToken)>(&::System::Threading::SemaphoreSlim::WaitUntilCountOrTimeoutAsync)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x24a78c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "WaitUntilCountOrTimeoutAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::SemaphoreSlim::*)()>(&::System::Threading::SemaphoreSlim::Release)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a7ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::SemaphoreSlim::*)(int32_t)>(&::System::Threading::SemaphoreSlim::Release)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x24a7ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.QueueWaiterTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::____System__Threading__SemaphoreSlim__TaskNode)>(&::System::Threading::SemaphoreSlim::QueueWaiterTask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24a7df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "QueueWaiterTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SemaphoreSlim::*)()>(&::System::Threading::SemaphoreSlim::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24a7e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SemaphoreSlim::*)(bool)>(&::System::Threading::SemaphoreSlim::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x24a7e6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Threading::SemaphoreSlim),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.CancellationTokenCanceledEventHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&::System::Threading::SemaphoreSlim::CancellationTokenCanceledEventHandler)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x24a7ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "CancellationTokenCanceledEventHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.CheckDispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SemaphoreSlim::*)()>(&::System::Threading::SemaphoreSlim::CheckDispose)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x24a73cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "CheckDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.GetResourceString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Threading::SemaphoreSlim::GetResourceString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a6ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "GetResourceString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::System::Threading::SemaphoreSlim::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::SemaphoreSlim::__set_m_currentCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::SemaphoreSlim::__get_m_currentCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::SemaphoreSlim::__set_m_maxCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::SemaphoreSlim::__get_m_maxCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::SemaphoreSlim::__set_m_waitCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::SemaphoreSlim::__get_m_waitCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::SemaphoreSlim::__set_m_lockObj(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Threading::SemaphoreSlim::__get_m_lockObj() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::SemaphoreSlim::__set_m_waitHandle(::System::Threading::ManualResetEvent value)  {
::cordl_internals::setInstanceField<::System::Threading::ManualResetEvent, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::ManualResetEvent>(value));
}
constexpr ::System::Threading::ManualResetEvent ::System::Threading::SemaphoreSlim::__get_m_waitHandle() const {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::SemaphoreSlim::__set_m_asyncHead(::System::Threading::____System__Threading__SemaphoreSlim__TaskNode value)  {
::cordl_internals::setInstanceField<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode>(value));
}
constexpr ::System::Threading::____System__Threading__SemaphoreSlim__TaskNode ::System::Threading::SemaphoreSlim::__get_m_asyncHead() const {
return ::cordl_internals::getInstanceField<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::SemaphoreSlim::__set_m_asyncTail(::System::Threading::____System__Threading__SemaphoreSlim__TaskNode value)  {
::cordl_internals::setInstanceField<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode>(value));
}
constexpr ::System::Threading::____System__Threading__SemaphoreSlim__TaskNode ::System::Threading::SemaphoreSlim::__get_m_asyncTail() const {
return ::cordl_internals::getInstanceField<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Threading::SemaphoreSlim::__set_s_trueTask(::System::Threading::Tasks::Task_1<bool> value)  {
::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<bool>, "s_trueTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get>(std::forward<::System::Threading::Tasks::Task_1<bool>>(value));
}
 ::System::Threading::Tasks::Task_1<bool> ::System::Threading::SemaphoreSlim::__get_s_trueTask()  {
return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<bool>, "s_trueTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get>();
}
 void ::System::Threading::SemaphoreSlim::__set_s_falseTask(::System::Threading::Tasks::Task_1<bool> value)  {
::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<bool>, "s_falseTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get>(std::forward<::System::Threading::Tasks::Task_1<bool>>(value));
}
 ::System::Threading::Tasks::Task_1<bool> ::System::Threading::SemaphoreSlim::__get_s_falseTask()  {
return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<bool>, "s_falseTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get>();
}
 void ::System::Threading::SemaphoreSlim::__set_s_cancellationTokenCanceledEventHandler(::System::Action_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<::System::Action_1<::bs_hook::Il2CppWrapperType>, "s_cancellationTokenCanceledEventHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get>(std::forward<::System::Action_1<::bs_hook::Il2CppWrapperType>>(value));
}
 ::System::Action_1<::bs_hook::Il2CppWrapperType> ::System::Threading::SemaphoreSlim::__get_s_cancellationTokenCanceledEventHandler()  {
return ::cordl_internals::getStaticField<::System::Action_1<::bs_hook::Il2CppWrapperType>, "s_cancellationTokenCanceledEventHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get>();
}
 int32_t ::System::Threading::SemaphoreSlim::get_CurrentCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "get_CurrentCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "initialCount", ty: "int32_t", modifiers: "", def_value: None }]
 ::System::Threading::SemaphoreSlim::SemaphoreSlim(int32_t initialCount)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SemaphoreSlim>(initialCount))) {}
 void ::System::Threading::SemaphoreSlim::_ctor(int32_t initialCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initialCount);
}
// Ctor Parameters [CppParam { name: "initialCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxCount", ty: "int32_t", modifiers: "", def_value: None }]
 ::System::Threading::SemaphoreSlim::SemaphoreSlim(int32_t initialCount, int32_t maxCount)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SemaphoreSlim>(initialCount, maxCount))) {}
 void ::System::Threading::SemaphoreSlim::_ctor(int32_t initialCount, int32_t maxCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initialCount, maxCount);
}
 void ::System::Threading::SemaphoreSlim::Wait()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Threading::SemaphoreSlim::Wait(int32_t millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, millisecondsTimeout);
}
 bool ::System::Threading::SemaphoreSlim::Wait(int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, millisecondsTimeout, cancellationToken);
}
 bool ::System::Threading::SemaphoreSlim::WaitUntilCountOrTimeout(int32_t millisecondsTimeout, uint32_t startTime, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "WaitUntilCountOrTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, millisecondsTimeout, startTime, cancellationToken);
}
 ::System::Threading::Tasks::Task ::System::Threading::SemaphoreSlim::WaitAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "WaitAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task ::System::Threading::SemaphoreSlim::WaitAsync(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "WaitAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 ::System::Threading::Tasks::Task_1<bool> ::System::Threading::SemaphoreSlim::WaitAsync(int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "WaitAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>, false>(const_cast<void*>(instance), ___internal_method, millisecondsTimeout, cancellationToken);
}
 ::System::Threading::____System__Threading__SemaphoreSlim__TaskNode ::System::Threading::SemaphoreSlim::CreateAndAddAsyncWaiter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "CreateAndAddAsyncWaiter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Threading::SemaphoreSlim::RemoveAsyncWaiter(::System::Threading::____System__Threading__SemaphoreSlim__TaskNode task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "RemoveAsyncWaiter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, task);
}
 ::System::Threading::Tasks::Task_1<bool> ::System::Threading::SemaphoreSlim::WaitUntilCountOrTimeoutAsync(::System::Threading::____System__Threading__SemaphoreSlim__TaskNode asyncWaiter, int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "WaitUntilCountOrTimeoutAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>, false>(const_cast<void*>(instance), ___internal_method, asyncWaiter, millisecondsTimeout, cancellationToken);
}
 int32_t ::System::Threading::SemaphoreSlim::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Threading::SemaphoreSlim::Release(int32_t releaseCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, releaseCount);
}
 void ::System::Threading::SemaphoreSlim::QueueWaiterTask(::System::Threading::____System__Threading__SemaphoreSlim__TaskNode waiterTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "QueueWaiterTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::____System__Threading__SemaphoreSlim__TaskNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, waiterTask);
}
 void ::System::Threading::SemaphoreSlim::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Threading::SemaphoreSlim::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void ::System::Threading::SemaphoreSlim::CancellationTokenCanceledEventHandler(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "CancellationTokenCanceledEventHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
 void ::System::Threading::SemaphoreSlim::CheckDispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "CheckDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Threading::SemaphoreSlim::GetResourceString(::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim>::get(),
                            "GetResourceString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, str);
}
} // end anonymous namespace
