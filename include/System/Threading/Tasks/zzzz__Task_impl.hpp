#pragma once
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/zzzz__ManualResetEventSlim_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskExceptionHolder_def.hpp"
#include "System/Threading/zzzz__ManualResetEventSlim_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Collections/Generic/zzzz__LowLevelListWithIList_1_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/Threading/zzzz__TimerCallback_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__InternalTaskOptions_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskStatus_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuation_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskFactory_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
#include "System/Threading/Tasks/zzzz__StackGuard_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__OperationCanceledException_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__AggregateException_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties.SetCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::*)()>(&System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::SetCompleted)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24b80c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties>::get(),
                            "SetCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties.UnregisterCancellationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::*)()>(&System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::UnregisterCancellationCallback)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x24b80e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties>::get(),
                            "UnregisterCancellationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::*)()>(&System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24b52d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::__set_m_capturedContext(System::Threading::ExecutionContext value)  {
::cordl_internals::setInstanceField<System::Threading::ExecutionContext, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::ExecutionContext>(value));
}
constexpr System::Threading::ExecutionContext System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::__get_m_capturedContext() const {
return ::cordl_internals::getInstanceField<System::Threading::ExecutionContext, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::__set_m_completionEvent(System::Threading::ManualResetEventSlim value)  {
::cordl_internals::setInstanceField<System::Threading::ManualResetEventSlim, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::ManualResetEventSlim>(value));
}
constexpr System::Threading::ManualResetEventSlim System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::__get_m_completionEvent() const {
return ::cordl_internals::getInstanceField<System::Threading::ManualResetEventSlim, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::__set_m_exceptionsHolder(System::Threading::Tasks::TaskExceptionHolder value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskExceptionHolder, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskExceptionHolder>(value));
}
constexpr System::Threading::Tasks::TaskExceptionHolder System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::__get_m_exceptionsHolder() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskExceptionHolder, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::__set_m_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::__get_m_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::__set_m_cancellationRegistration(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::__get_m_cancellationRegistration() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::__set_m_internalCancellationRequested(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::__get_m_internalCancellationRequested() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::__set_m_completionCountdown(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::__get_m_completionCountdown() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::__set_m_exceptionalChildren(System::Collections::Generic::LowLevelListWithIList_1<System::Threading::Tasks::Task> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::LowLevelListWithIList_1<System::Threading::Tasks::Task>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::LowLevelListWithIList_1<System::Threading::Tasks::Task>>(value));
}
constexpr System::Collections::Generic::LowLevelListWithIList_1<System::Threading::Tasks::Task> System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::__get_m_exceptionalChildren() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::LowLevelListWithIList_1<System::Threading::Tasks::Task>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::SetCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties>::get(),
                            "SetCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::UnregisterCancellationCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties>::get(),
                            "UnregisterCancellationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::System__Threading__Tasks__Task__ContingentProperties()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Threading__Tasks__Task__ContingentProperties>())) {}
 void System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres::*)()>(&System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24ba2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres::*)(System::Threading::Tasks::Task)>(&System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres::Invoke)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24bca60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres.get_InvokeMayRunArbitraryCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres::*)()>(&System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres::get_InvokeMayRunArbitraryCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24bca68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres>::get(),
                            "get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Threading::Tasks::ITaskCompletionAction
constexpr  System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres::operator System::Threading::Tasks::ITaskCompletionAction() const noexcept {
return System::Threading::Tasks::ITaskCompletionAction(::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres::System__Threading__Tasks__Task__SetOnInvokeMres()  : System::Threading::ManualResetEventSlim(THROW_UNLESS(::il2cpp_utils::New<System__Threading__Tasks__Task__SetOnInvokeMres>())) {}
 void System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres::Invoke(System::Threading::Tasks::Task completingTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, completingTask);
}
 bool System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres::get_InvokeMayRunArbitraryCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres>::get(),
                            "get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise::*)(System::Threading::CancellationToken)>(&System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x24bbb34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise::*)()>(&System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise::Complete)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x24bca70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise::__set_Token(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise::__get_Token() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise::__set_Registration(System::Threading::CancellationTokenRegistration value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationTokenRegistration, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationTokenRegistration>(value));
}
constexpr System::Threading::CancellationTokenRegistration System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise::__get_Registration() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationTokenRegistration, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise::__set_Timer(System::Threading::Timer value)  {
::cordl_internals::setInstanceField<System::Threading::Timer, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Timer>(value));
}
constexpr System::Threading::Timer System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise::__get_Timer() const {
return ::cordl_internals::getInstanceField<System::Threading::Timer, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "token", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }]
 System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise::System__Threading__Tasks__Task__DelayPromise(System::Threading::CancellationToken token)  : System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>(THROW_UNLESS(::il2cpp_utils::New<System__Threading__Tasks__Task__DelayPromise>(token))) {}
 void System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise::_ctor(System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, token);
}
 void System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise::Complete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__Task____c::*)()>(&System::Threading::Tasks::System__Threading__Tasks__Task____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24bcc0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task____c._Delay_b__247_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__Task____c::*)(::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::System__Threading__Tasks__Task____c::_Delay_b__247_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24bcc14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task____c>::get(),
                            "<Delay>b__247_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task____c._Delay_b__247_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__Task____c::*)(::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::System__Threading__Tasks__Task____c::_Delay_b__247_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24bcc74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task____c>::get(),
                            "<Delay>b__247_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task____c.__cctor_b__271_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties (System::Threading::Tasks::System__Threading__Tasks__Task____c::*)()>(&System::Threading::Tasks::System__Threading__Tasks__Task____c::__cctor_b__271_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24bccd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task____c>::get(),
                            "<.cctor>b__271_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task____c.__cctor_b__271_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::System__Threading__Tasks__Task____c::*)(System::Threading::Tasks::Task)>(&System::Threading::Tasks::System__Threading__Tasks__Task____c::__cctor_b__271_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24bcd40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task____c>::get(),
                            "<.cctor>b__271_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task____c.__cctor_b__271_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::System__Threading__Tasks__Task____c::*)(::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::System__Threading__Tasks__Task____c::__cctor_b__271_2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24bcd60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task____c>::get(),
                            "<.cctor>b__271_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Threading::Tasks::System__Threading__Tasks__Task____c::__set___9(System::Threading::Tasks::System__Threading__Tasks__Task____c value)  {
::cordl_internals::setStaticField<System::Threading::Tasks::System__Threading__Tasks__Task____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task____c>::get>(std::forward<System::Threading::Tasks::System__Threading__Tasks__Task____c>(value));
}
 System::Threading::Tasks::System__Threading__Tasks__Task____c System::Threading::Tasks::System__Threading__Tasks__Task____c::__get___9()  {
return ::cordl_internals::getStaticField<System::Threading::Tasks::System__Threading__Tasks__Task____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task____c>::get>();
}
 void System::Threading::Tasks::System__Threading__Tasks__Task____c::__set___9__247_0(System::Action_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<System::Action_1<::bs_hook::Il2CppWrapperType>, "<>9__247_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task____c>::get>(std::forward<System::Action_1<::bs_hook::Il2CppWrapperType>>(value));
}
 System::Action_1<::bs_hook::Il2CppWrapperType> System::Threading::Tasks::System__Threading__Tasks__Task____c::__get___9__247_0()  {
return ::cordl_internals::getStaticField<System::Action_1<::bs_hook::Il2CppWrapperType>, "<>9__247_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task____c>::get>();
}
 void System::Threading::Tasks::System__Threading__Tasks__Task____c::__set___9__247_1(System::Threading::TimerCallback value)  {
::cordl_internals::setStaticField<System::Threading::TimerCallback, "<>9__247_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task____c>::get>(std::forward<System::Threading::TimerCallback>(value));
}
 System::Threading::TimerCallback System::Threading::Tasks::System__Threading__Tasks__Task____c::__get___9__247_1()  {
return ::cordl_internals::getStaticField<System::Threading::TimerCallback, "<>9__247_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task____c>::get>();
}
// Ctor Parameters []
 System::Threading::Tasks::System__Threading__Tasks__Task____c::System__Threading__Tasks__Task____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Threading__Tasks__Task____c>())) {}
 void System::Threading::Tasks::System__Threading__Tasks__Task____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__Task____c::_Delay_b__247_0(::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task____c>::get(),
                            "<Delay>b__247_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 void System::Threading::Tasks::System__Threading__Tasks__Task____c::_Delay_b__247_1(::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task____c>::get(),
                            "<Delay>b__247_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties System::Threading::Tasks::System__Threading__Tasks__Task____c::__cctor_b__271_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task____c>::get(),
                            "<.cctor>b__271_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::System__Threading__Tasks__Task____c::__cctor_b__271_1(System::Threading::Tasks::Task t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task____c>::get(),
                            "<.cctor>b__271_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, t);
}
 bool System::Threading::Tasks::System__Threading__Tasks__Task____c::__cctor_b__271_2(::bs_hook::Il2CppWrapperType tc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task____c>::get(),
                            "<.cctor>b__271_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, tc);
}
//  Writing Method size for method: System::Threading::Tasks::Task._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(bool, System::Threading::Tasks::TaskCreationOptions, System::Threading::CancellationToken)>(&System::Threading::Tasks::Task::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x24b5218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24b52fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, bool)>(&System::Threading::Tasks::Task::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x24b5324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::Task, System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::Task::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x24b55a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.TaskConstructorCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::Task::TaskConstructorCore)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x24b5448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "TaskConstructorCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.AssignCancellationToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(System::Threading::CancellationToken, System::Threading::Tasks::Task, System::Threading::Tasks::TaskContinuation)>(&System::Threading::Tasks::Task::AssignCancellationToken)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x24b56f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AssignCancellationToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.TaskCancelCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::Task::TaskCancelCallback)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x24b5cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "TaskCancelCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.TrySetCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)(System::Threading::CancellationToken)>(&System::Threading::Tasks::Task::TrySetCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b4bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "TrySetCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.TrySetCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)(System::Threading::CancellationToken, ::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::Task::TrySetCanceled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x24b42f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "TrySetCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.TrySetException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)(::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::Task::TrySetException)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24b4bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "TrySetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_Options
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::TaskCreationOptions (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_Options)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x24b5a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_Options",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.OptionsMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::TaskCreationOptions (*)(int32_t)>(&System::Threading::Tasks::Task::OptionsMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b6390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "OptionsMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.AtomicStateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)(int32_t, int32_t)>(&System::Threading::Tasks::Task::AtomicStateUpdate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x24b6018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AtomicStateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.AtomicStateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)(int32_t, int32_t, ByRef<int32_t>)>(&System::Threading::Tasks::Task::AtomicStateUpdate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x24b6398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AtomicStateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.SetNotificationForWaitCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(bool)>(&System::Threading::Tasks::Task::SetNotificationForWaitCompletion)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x24b6438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "SetNotificationForWaitCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.NotifyDebuggerOfWaitCompletionIfNecessary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::NotifyDebuggerOfWaitCompletionIfNecessary)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24b64b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "NotifyDebuggerOfWaitCompletionIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.AnyTaskRequiresNotifyDebuggerOfWaitCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<System::Threading::Tasks::Task>)>(&System::Threading::Tasks::Task::AnyTaskRequiresNotifyDebuggerOfWaitCompletion)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24b6544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AnyTaskRequiresNotifyDebuggerOfWaitCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Threading::Tasks::Task>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_IsWaitNotificationEnabledOrNotRanToCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_IsWaitNotificationEnabledOrNotRanToCompletion)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24b65d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsWaitNotificationEnabledOrNotRanToCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_ShouldNotifyDebuggerOfWaitCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_ShouldNotifyDebuggerOfWaitCompletion)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24b65fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::Task),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_IsWaitNotificationEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_IsWaitNotificationEnabled)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24b6504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsWaitNotificationEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.NotifyDebuggerOfWaitCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::NotifyDebuggerOfWaitCompletion)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24b651c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "NotifyDebuggerOfWaitCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.MarkStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::MarkStarted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24b6614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "MarkStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.AddNewChild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::AddNewChild)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x24b567c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AddNewChild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.DisregardChild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::DisregardChild)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x24b5c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "DisregardChild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.InternalStartNew
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (*)(System::Threading::Tasks::Task, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::CancellationToken, System::Threading::Tasks::TaskScheduler, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::Task::InternalStartNew)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x24b6620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "InternalStartNew",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_Id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_Id)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24b4ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_InternalCurrent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (*)()>(&System::Threading::Tasks::Task::get_InternalCurrent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24b693c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_InternalCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.InternalCurrentIfAttached
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (*)(System::Threading::Tasks::TaskCreationOptions)>(&System::Threading::Tasks::Task::InternalCurrentIfAttached)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x24b6994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "InternalCurrentIfAttached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_CurrentStackGuard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::StackGuard (*)()>(&System::Threading::Tasks::Task::get_CurrentStackGuard)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x24b6a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_CurrentStackGuard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_Exception
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::AggregateException (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_Exception)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24b6aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_Exception",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_Status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::TaskStatus (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_Status)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24b6c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_IsCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_IsCanceled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24b6cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_IsCancellationRequested
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_IsCancellationRequested)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24b6d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsCancellationRequested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.EnsureContingentPropertiesInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties (System::Threading::Tasks::Task::*)(bool)>(&System::Threading::Tasks::Task::EnsureContingentPropertiesInitialized)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x24b5a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "EnsureContingentPropertiesInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.EnsureContingentPropertiesInitializedCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties (System::Threading::Tasks::Task::*)(bool)>(&System::Threading::Tasks::Task::EnsureContingentPropertiesInitializedCore)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x24b6d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "EnsureContingentPropertiesInitializedCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_CancellationToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::CancellationToken (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_CancellationToken)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24b3748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_CancellationToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_IsCancellationAcknowledged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_IsCancellationAcknowledged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24b6e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsCancellationAcknowledged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_IsCompleted)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x24b39d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.IsCompletedMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&System::Threading::Tasks::Task::IsCompletedMethod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24b6e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "IsCompletedMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_IsCompletedSuccessfully
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_IsCompletedSuccessfully)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24b6e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsCompletedSuccessfully",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_CreationOptions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::TaskCreationOptions (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_CreationOptions)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24b5668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_CreationOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.System_IAsyncResult_get_AsyncWaitHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::WaitHandle (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::System_IAsyncResult_get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x24b6e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "System.IAsyncResult.get_AsyncWaitHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_AsyncState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_AsyncState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b7008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_AsyncState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.System_IAsyncResult_get_CompletedSynchronously
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::System_IAsyncResult_get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b7010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "System.IAsyncResult.get_CompletedSynchronously",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_ExecutingTaskScheduler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::TaskScheduler (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_ExecutingTaskScheduler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b7018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_ExecutingTaskScheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_Factory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::TaskFactory (*)()>(&System::Threading::Tasks::Task::get_Factory)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24b7020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_Factory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_CompletedTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (*)()>(&System::Threading::Tasks::Task::get_CompletedTask)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24b7078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_CompletedTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_CompletedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::ManualResetEventSlim (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_CompletedEvent)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x24b6f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_CompletedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_ExceptionRecorded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_ExceptionRecorded)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x24b70d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_ExceptionRecorded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_IsFaulted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_IsFaulted)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24b6b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsFaulted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_CapturedContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::ExecutionContext (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_CapturedContext)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24b7140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_CapturedContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.set_CapturedContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(System::Threading::ExecutionContext)>(&System::Threading::Tasks::Task::set_CapturedContext)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x24b597c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "set_CapturedContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ExecutionContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24b71b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(bool)>(&System::Threading::Tasks::Task::Dispose)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x24b721c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::Task),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.ScheduleAndStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(bool)>(&System::Threading::Tasks::Task::ScheduleAndStart)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x24b672c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ScheduleAndStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.AddException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::Task::AddException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b61fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AddException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.AddException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(::bs_hook::Il2CppWrapperType, bool)>(&System::Threading::Tasks::Task::AddException)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x24b7378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AddException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.GetExceptions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::AggregateException (System::Threading::Tasks::Task::*)(bool)>(&System::Threading::Tasks::Task::GetExceptions)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x24b6b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "GetExceptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.GetExceptionDispatchInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ObjectModel::ReadOnlyCollection_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo> (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::GetExceptionDispatchInfos)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x24b76f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "GetExceptionDispatchInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.GetCancellationExceptionDispatchInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::ExceptionServices::ExceptionDispatchInfo (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::GetCancellationExceptionDispatchInfo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x24b7890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "GetCancellationExceptionDispatchInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.ThrowIfExceptional
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(bool)>(&System::Threading::Tasks::Task::ThrowIfExceptional)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x24b78c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ThrowIfExceptional",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.UpdateExceptionObservedStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::UpdateExceptionObservedStatus)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x24b7908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "UpdateExceptionObservedStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_IsExceptionObservedByParent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_IsExceptionObservedByParent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24b79dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsExceptionObservedByParent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.get_IsDelegateInvoked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::get_IsDelegateInvoked)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24b79f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsDelegateInvoked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.Finish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(bool)>(&System::Threading::Tasks::Task::Finish)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x24b6204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.FinishStageTwo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::FinishStageTwo)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x24b7a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "FinishStageTwo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.FinishStageThree
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::FinishStageThree)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24b81f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "FinishStageThree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.ProcessChildCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(System::Threading::Tasks::Task)>(&System::Threading::Tasks::Task::ProcessChildCompletion)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x24b8240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ProcessChildCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.AddExceptionsFromChildren
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::AddExceptionsFromChildren)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x24b7c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AddExceptionsFromChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::Execute)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x24b8ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b8c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.ExecuteEntry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)(bool)>(&System::Threading::Tasks::Task::ExecuteEntry)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x24b8c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ExecuteEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.ExecutionContextCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::Task::ExecutionContextCallback)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x24b8f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ExecutionContextCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::InnerInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x24b8fd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::Task),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.HandleException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(System::Exception)>(&System::Threading::Tasks::Task::HandleException)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x24b8b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "HandleException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.GetAwaiter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::CompilerServices::TaskAwaiter (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::GetAwaiter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24b3c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "GetAwaiter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.ConfigureAwait
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::CompilerServices::ConfiguredTaskAwaitable (System::Threading::Tasks::Task::*)(bool)>(&System::Threading::Tasks::Task::ConfigureAwait)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x24b3c68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ConfigureAwait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.SetContinuationForAwait
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(System::Action, bool, bool)>(&System::Threading::Tasks::Task::SetContinuationForAwait)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x24b90b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "SetContinuationForAwait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.Yield
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::CompilerServices::YieldAwaitable (*)()>(&System::Threading::Tasks::Task::Yield)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b94dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Yield",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.Wait
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::Wait)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24b94e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.Wait
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)(int32_t, System::Threading::CancellationToken)>(&System::Threading::Tasks::Task::Wait)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x24b94f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.WrappedTryRunInline
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::WrappedTryRunInline)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x24b9cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "WrappedTryRunInline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.InternalWait
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)(int32_t, System::Threading::CancellationToken)>(&System::Threading::Tasks::Task::InternalWait)> {
  constexpr static std::size_t size = 0x6ec;
  constexpr static std::size_t addrs = 0x24b960c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "InternalWait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.SpinThenBlockingWait
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)(int32_t, System::Threading::CancellationToken)>(&System::Threading::Tasks::Task::SpinThenBlockingWait)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x24ba05c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "SpinThenBlockingWait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.SpinWait
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)(int32_t)>(&System::Threading::Tasks::Task::SpinWait)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x24ba1f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "SpinWait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.InternalCancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)(bool)>(&System::Threading::Tasks::Task::InternalCancel)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x24b5ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "InternalCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.RecordInternalCancellationRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::RecordInternalCancellationRequest)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x24ba3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "RecordInternalCancellationRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.RecordInternalCancellationRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(System::Threading::CancellationToken)>(&System::Threading::Tasks::Task::RecordInternalCancellationRequest)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24ba430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "RecordInternalCancellationRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.RecordInternalCancellationRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(System::Threading::CancellationToken, ::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::Task::RecordInternalCancellationRequest)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24b60a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "RecordInternalCancellationRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.CancellationCleanupLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::CancellationCleanupLogic)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x24b60dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "CancellationCleanupLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.SetCancellationAcknowledged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::SetCancellationAcknowledged)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24b9088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "SetCancellationAcknowledged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.FinishContinuations
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::FinishContinuations)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0x24b83f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "FinishContinuations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.LogFinishCompletionNotification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)()>(&System::Threading::Tasks::Task::LogFinishCompletionNotification)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x24ba640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "LogFinishCompletionNotification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.ContinueWith
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::Threading::Tasks::Task::*)(System::Action_1<System::Threading::Tasks::Task>)>(&System::Threading::Tasks::Task::ContinueWith)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x24ba694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ContinueWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::Threading::Tasks::Task>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.ContinueWith
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::Threading::Tasks::Task::*)(System::Action_1<System::Threading::Tasks::Task>, System::Threading::Tasks::TaskScheduler, System::Threading::CancellationToken, System::Threading::Tasks::TaskContinuationOptions)>(&System::Threading::Tasks::Task::ContinueWith)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x24ba7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ContinueWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::Threading::Tasks::Task>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.ContinueWith
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::Threading::Tasks::Task::*)(System::Action_2<System::Threading::Tasks::Task,::bs_hook::Il2CppWrapperType>, ::bs_hook::Il2CppWrapperType, System::Threading::CancellationToken, System::Threading::Tasks::TaskContinuationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::Task::ContinueWith)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24bac0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ContinueWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<System::Threading::Tasks::Task,::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.ContinueWith
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::Threading::Tasks::Task::*)(System::Action_2<System::Threading::Tasks::Task,::bs_hook::Il2CppWrapperType>, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskScheduler, System::Threading::CancellationToken, System::Threading::Tasks::TaskContinuationOptions)>(&System::Threading::Tasks::Task::ContinueWith)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x24bac20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ContinueWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<System::Threading::Tasks::Task,::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.CreationOptionsFromContinuationOptions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::TaskContinuationOptions, ByRef<System::Threading::Tasks::TaskCreationOptions>, ByRef<System::Threading::Tasks::InternalTaskOptions>)>(&System::Threading::Tasks::Task::CreationOptionsFromContinuationOptions)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x24ba90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "CreationOptionsFromContinuationOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::Tasks::TaskCreationOptions>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::Tasks::InternalTaskOptions>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.ContinueWithCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(System::Threading::Tasks::Task, System::Threading::Tasks::TaskScheduler, System::Threading::CancellationToken, System::Threading::Tasks::TaskContinuationOptions)>(&System::Threading::Tasks::Task::ContinueWithCore)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x24baaec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ContinueWithCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.AddCompletionAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(System::Threading::Tasks::ITaskCompletionAction)>(&System::Threading::Tasks::Task::AddCompletionAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24baeb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AddCompletionAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::ITaskCompletionAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.AddCompletionAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(System::Threading::Tasks::ITaskCompletionAction, bool)>(&System::Threading::Tasks::Task::AddCompletionAction)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x24ba314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AddCompletionAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::ITaskCompletionAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.AddTaskContinuationComplex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)(::bs_hook::Il2CppWrapperType, bool)>(&System::Threading::Tasks::Task::AddTaskContinuationComplex)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x24baeb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AddTaskContinuationComplex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.AddTaskContinuation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::*)(::bs_hook::Il2CppWrapperType, bool)>(&System::Threading::Tasks::Task::AddTaskContinuation)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x24b93bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AddTaskContinuation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.RemoveContinuation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::Task::RemoveContinuation)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x24b5dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "RemoveContinuation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.FromException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (*)(System::Exception)>(&System::Threading::Tasks::Task::FromException)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24b4348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "FromException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.FromCancellation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (*)(System::Threading::CancellationToken)>(&System::Threading::Tasks::Task::FromCancellation)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x24bb1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "FromCancellation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.FromCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (*)(System::Threading::CancellationToken)>(&System::Threading::Tasks::Task::FromCanceled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x24b4788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "FromCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (*)(System::Action)>(&System::Threading::Tasks::Task::Run)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x24bb2a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (*)(System::Action, System::Threading::CancellationToken)>(&System::Threading::Tasks::Task::Run)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x24bb370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (*)(System::Func_1<System::Threading::Tasks::Task>)>(&System::Threading::Tasks::Task::Run)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24bb44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<System::Threading::Tasks::Task>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (*)(System::Func_1<System::Threading::Tasks::Task>, System::Threading::CancellationToken)>(&System::Threading::Tasks::Task::Run)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x24bb4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<System::Threading::Tasks::Task>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.Delay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (*)(System::TimeSpan, System::Threading::CancellationToken)>(&System::Threading::Tasks::Task::Delay)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x24bb6b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Delay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.Delay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (*)(int32_t)>(&System::Threading::Tasks::Task::Delay)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24bbadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Delay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.Delay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (*)(int32_t, System::Threading::CancellationToken)>(&System::Threading::Tasks::Task::Delay)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x24bb7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Delay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.WhenAny
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Threading::Tasks::Task> (*)(::ArrayW<System::Threading::Tasks::Task>)>(&System::Threading::Tasks::Task::WhenAny)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x24bbc48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "WhenAny",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Threading::Tasks::Task>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.WhenAny
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Threading::Tasks::Task> (*)(System::Collections::Generic::IEnumerable_1<System::Threading::Tasks::Task>)>(&System::Threading::Tasks::Task::WhenAny)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x24bc01c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "WhenAny",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<System::Threading::Tasks::Task>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.AddToActiveTasks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Threading::Tasks::Task)>(&System::Threading::Tasks::Task::AddToActiveTasks)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x24bc498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AddToActiveTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.RemoveFromActiveTasks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&System::Threading::Tasks::Task::RemoveFromActiveTasks)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x24bc5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "RemoveFromActiveTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.MarkAborted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(System::Threading::ThreadAbortException)>(&System::Threading::Tasks::Task::MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24bc740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ThreadAbortException>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::Task.ExecuteWithThreadLocal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::*)(ByRef<System::Threading::Tasks::Task>)>(&System::Threading::Tasks::Task::ExecuteWithThreadLocal)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x24b8db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ExecuteWithThreadLocal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::Tasks::Task>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Threading::IThreadPoolWorkItem
constexpr  System::Threading::Tasks::Task::operator System::Threading::IThreadPoolWorkItem() const noexcept {
return System::Threading::IThreadPoolWorkItem(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IAsyncResult
constexpr  System::Threading::Tasks::Task::operator System::IAsyncResult() const noexcept {
return System::IAsyncResult(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  System::Threading::Tasks::Task::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
 void System::Threading::Tasks::Task::__set_s_taskIdCounter(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_taskIdCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>(std::forward<int32_t>(value));
}
 int32_t System::Threading::Tasks::Task::__get_s_taskIdCounter()  {
return ::cordl_internals::getStaticField<int32_t, "s_taskIdCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>();
}
constexpr void System::Threading::Tasks::Task::__set_m_taskId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::Tasks::Task::__get_m_taskId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::Task::__set_m_action(System::Delegate value)  {
::cordl_internals::setInstanceField<System::Delegate, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Delegate>(value));
}
constexpr System::Delegate System::Threading::Tasks::Task::__get_m_action() const {
return ::cordl_internals::getInstanceField<System::Delegate, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::Task::__set_m_stateObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Threading::Tasks::Task::__get_m_stateObject() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::Task::__set_m_taskScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::Task::__get_m_taskScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::Task::__set_m_parent(System::Threading::Tasks::Task value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task>(value));
}
constexpr System::Threading::Tasks::Task System::Threading::Tasks::Task::__get_m_parent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::Task::__set_m_stateFlags(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::Tasks::Task::__get_m_stateFlags() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::Task::__set_m_continuationObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Threading::Tasks::Task::__get_m_continuationObject() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Threading::Tasks::Task::__set_s_taskCompletionSentinel(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "s_taskCompletionSentinel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType System::Threading::Tasks::Task::__get_s_taskCompletionSentinel()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "s_taskCompletionSentinel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>();
}
 void System::Threading::Tasks::Task::__set_s_asyncDebuggingEnabled(bool value)  {
::cordl_internals::setStaticField<bool, "s_asyncDebuggingEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>(std::forward<bool>(value));
}
 bool System::Threading::Tasks::Task::__get_s_asyncDebuggingEnabled()  {
return ::cordl_internals::getStaticField<bool, "s_asyncDebuggingEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>();
}
constexpr void System::Threading::Tasks::Task::__set_m_contingentProperties(System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties>(value));
}
constexpr System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties System::Threading::Tasks::Task::__get_m_contingentProperties() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Threading::Tasks::Task::__set_s_taskCancelCallback(System::Action_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<System::Action_1<::bs_hook::Il2CppWrapperType>, "s_taskCancelCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>(std::forward<System::Action_1<::bs_hook::Il2CppWrapperType>>(value));
}
 System::Action_1<::bs_hook::Il2CppWrapperType> System::Threading::Tasks::Task::__get_s_taskCancelCallback()  {
return ::cordl_internals::getStaticField<System::Action_1<::bs_hook::Il2CppWrapperType>, "s_taskCancelCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>();
}
 void System::Threading::Tasks::Task::__set_t_currentTask(System::Threading::Tasks::Task value)  {
::cordl_internals::setStaticField<System::Threading::Tasks::Task, "t_currentTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>(std::forward<System::Threading::Tasks::Task>(value));
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::__get_t_currentTask()  {
return ::cordl_internals::getStaticField<System::Threading::Tasks::Task, "t_currentTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>();
}
 void System::Threading::Tasks::Task::__set_t_stackGuard(System::Threading::Tasks::StackGuard value)  {
::cordl_internals::setStaticField<System::Threading::Tasks::StackGuard, "t_stackGuard", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>(std::forward<System::Threading::Tasks::StackGuard>(value));
}
 System::Threading::Tasks::StackGuard System::Threading::Tasks::Task::__get_t_stackGuard()  {
return ::cordl_internals::getStaticField<System::Threading::Tasks::StackGuard, "t_stackGuard", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>();
}
 void System::Threading::Tasks::Task::__set_s_createContingentProperties(System::Func_1<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties> value)  {
::cordl_internals::setStaticField<System::Func_1<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties>, "s_createContingentProperties", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>(std::forward<System::Func_1<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties>>(value));
}
 System::Func_1<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties> System::Threading::Tasks::Task::__get_s_createContingentProperties()  {
return ::cordl_internals::getStaticField<System::Func_1<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties>, "s_createContingentProperties", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>();
}
 void System::Threading::Tasks::Task::__set__Factory_k__BackingField(System::Threading::Tasks::TaskFactory value)  {
::cordl_internals::setStaticField<System::Threading::Tasks::TaskFactory, "<Factory>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>(std::forward<System::Threading::Tasks::TaskFactory>(value));
}
 System::Threading::Tasks::TaskFactory System::Threading::Tasks::Task::__get__Factory_k__BackingField()  {
return ::cordl_internals::getStaticField<System::Threading::Tasks::TaskFactory, "<Factory>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>();
}
 void System::Threading::Tasks::Task::__set__CompletedTask_k__BackingField(System::Threading::Tasks::Task value)  {
::cordl_internals::setStaticField<System::Threading::Tasks::Task, "<CompletedTask>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>(std::forward<System::Threading::Tasks::Task>(value));
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::__get__CompletedTask_k__BackingField()  {
return ::cordl_internals::getStaticField<System::Threading::Tasks::Task, "<CompletedTask>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>();
}
 void System::Threading::Tasks::Task::__set_s_IsExceptionObservedByParentPredicate(System::Predicate_1<System::Threading::Tasks::Task> value)  {
::cordl_internals::setStaticField<System::Predicate_1<System::Threading::Tasks::Task>, "s_IsExceptionObservedByParentPredicate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>(std::forward<System::Predicate_1<System::Threading::Tasks::Task>>(value));
}
 System::Predicate_1<System::Threading::Tasks::Task> System::Threading::Tasks::Task::__get_s_IsExceptionObservedByParentPredicate()  {
return ::cordl_internals::getStaticField<System::Predicate_1<System::Threading::Tasks::Task>, "s_IsExceptionObservedByParentPredicate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>();
}
 void System::Threading::Tasks::Task::__set_s_ecCallback(System::Threading::ContextCallback value)  {
::cordl_internals::setStaticField<System::Threading::ContextCallback, "s_ecCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>(std::forward<System::Threading::ContextCallback>(value));
}
 System::Threading::ContextCallback System::Threading::Tasks::Task::__get_s_ecCallback()  {
return ::cordl_internals::getStaticField<System::Threading::ContextCallback, "s_ecCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>();
}
 void System::Threading::Tasks::Task::__set_s_IsTaskContinuationNullPredicate(System::Predicate_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<System::Predicate_1<::bs_hook::Il2CppWrapperType>, "s_IsTaskContinuationNullPredicate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>(std::forward<System::Predicate_1<::bs_hook::Il2CppWrapperType>>(value));
}
 System::Predicate_1<::bs_hook::Il2CppWrapperType> System::Threading::Tasks::Task::__get_s_IsTaskContinuationNullPredicate()  {
return ::cordl_internals::getStaticField<System::Predicate_1<::bs_hook::Il2CppWrapperType>, "s_IsTaskContinuationNullPredicate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>();
}
 void System::Threading::Tasks::Task::__set_s_currentActiveTasks(System::Collections::Generic::Dictionary_2<int32_t,System::Threading::Tasks::Task> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<int32_t,System::Threading::Tasks::Task>, "s_currentActiveTasks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>(std::forward<System::Collections::Generic::Dictionary_2<int32_t,System::Threading::Tasks::Task>>(value));
}
 System::Collections::Generic::Dictionary_2<int32_t,System::Threading::Tasks::Task> System::Threading::Tasks::Task::__get_s_currentActiveTasks()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<int32_t,System::Threading::Tasks::Task>, "s_currentActiveTasks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>();
}
 void System::Threading::Tasks::Task::__set_s_activeTasksLock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "s_activeTasksLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType System::Threading::Tasks::Task::__get_s_activeTasksLock()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "s_activeTasksLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get>();
}
// Ctor Parameters [CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "ct", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }]
 System::Threading::Tasks::Task::Task(bool canceled, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::CancellationToken ct)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Task>(canceled, creationOptions, ct))) {}
 void System::Threading::Tasks::Task::_ctor(bool canceled, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::CancellationToken ct)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, canceled, creationOptions, ct);
}
// Ctor Parameters []
 System::Threading::Tasks::Task::Task()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Task>())) {}
 void System::Threading::Tasks::Task::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "promiseStyle", ty: "bool", modifiers: "", def_value: None }]
 System::Threading::Tasks::Task::Task(::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, bool promiseStyle)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Task>(state, creationOptions, promiseStyle))) {}
 void System::Threading::Tasks::Task::_ctor(::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, bool promiseStyle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, creationOptions, promiseStyle);
}
// Ctor Parameters [CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
 System::Threading::Tasks::Task::Task(System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::Task parent, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions, System::Threading::Tasks::TaskScheduler scheduler)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Task>(action, state, parent, cancellationToken, creationOptions, internalOptions, scheduler))) {}
 void System::Threading::Tasks::Task::_ctor(System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::Task parent, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action, state, parent, cancellationToken, creationOptions, internalOptions, scheduler);
}
 void System::Threading::Tasks::Task::TaskConstructorCore(System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "TaskConstructorCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action, state, cancellationToken, creationOptions, internalOptions, scheduler);
}
 void System::Threading::Tasks::Task::AssignCancellationToken(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::Task antecedent, System::Threading::Tasks::TaskContinuation continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AssignCancellationToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, antecedent, continuation);
}
 void System::Threading::Tasks::Task::TaskCancelCallback(::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "TaskCancelCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, o);
}
 bool System::Threading::Tasks::Task::TrySetCanceled(System::Threading::CancellationToken tokenToRecord)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "TrySetCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, tokenToRecord);
}
 bool System::Threading::Tasks::Task::TrySetCanceled(System::Threading::CancellationToken tokenToRecord, ::bs_hook::Il2CppWrapperType cancellationException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "TrySetCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, tokenToRecord, cancellationException);
}
 bool System::Threading::Tasks::Task::TrySetException(::bs_hook::Il2CppWrapperType exceptionObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "TrySetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, exceptionObject);
}
 System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::Task::get_Options()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_Options",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::TaskCreationOptions, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::Task::OptionsMethod(int32_t flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "OptionsMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::TaskCreationOptions, false>(nullptr, ___internal_method, flags);
}
 bool System::Threading::Tasks::Task::AtomicStateUpdate(int32_t newBits, int32_t illegalBits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AtomicStateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, newBits, illegalBits);
}
 bool System::Threading::Tasks::Task::AtomicStateUpdate(int32_t newBits, int32_t illegalBits, ByRef<int32_t> oldFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AtomicStateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, newBits, illegalBits, oldFlags);
}
 void System::Threading::Tasks::Task::SetNotificationForWaitCompletion(bool enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "SetNotificationForWaitCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, enabled);
}
 bool System::Threading::Tasks::Task::NotifyDebuggerOfWaitCompletionIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "NotifyDebuggerOfWaitCompletionIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::Task::AnyTaskRequiresNotifyDebuggerOfWaitCompletion(::ArrayW<System::Threading::Tasks::Task> tasks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AnyTaskRequiresNotifyDebuggerOfWaitCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Threading::Tasks::Task>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tasks);
}
 bool System::Threading::Tasks::Task::get_IsWaitNotificationEnabledOrNotRanToCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsWaitNotificationEnabledOrNotRanToCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::Task::get_ShouldNotifyDebuggerOfWaitCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_ShouldNotifyDebuggerOfWaitCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::Task::get_IsWaitNotificationEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsWaitNotificationEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::Task::NotifyDebuggerOfWaitCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "NotifyDebuggerOfWaitCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::Task::MarkStarted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "MarkStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::Task::AddNewChild()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AddNewChild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::Task::DisregardChild()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "DisregardChild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::InternalStartNew(System::Threading::Tasks::Task creatingTask, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskScheduler scheduler, System::Threading::Tasks::TaskCreationOptions options, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "InternalStartNew",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(nullptr, ___internal_method, creatingTask, action, state, cancellationToken, scheduler, options, internalOptions);
}
 int32_t System::Threading::Tasks::Task::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::get_InternalCurrent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_InternalCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(nullptr, ___internal_method);
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::InternalCurrentIfAttached(System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "InternalCurrentIfAttached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(nullptr, ___internal_method, creationOptions);
}
 System::Threading::Tasks::StackGuard System::Threading::Tasks::Task::get_CurrentStackGuard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_CurrentStackGuard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::StackGuard, false>(nullptr, ___internal_method);
}
 System::AggregateException System::Threading::Tasks::Task::get_Exception()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_Exception",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::AggregateException, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskStatus System::Threading::Tasks::Task::get_Status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::TaskStatus, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::Task::get_IsCanceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::Task::get_IsCancellationRequested()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsCancellationRequested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties System::Threading::Tasks::Task::EnsureContingentPropertiesInitialized(bool needsProtection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "EnsureContingentPropertiesInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties, false>(const_cast<void*>(instance), ___internal_method, needsProtection);
}
 System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties System::Threading::Tasks::Task::EnsureContingentPropertiesInitializedCore(bool needsProtection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "EnsureContingentPropertiesInitializedCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties, false>(const_cast<void*>(instance), ___internal_method, needsProtection);
}
 System::Threading::CancellationToken System::Threading::Tasks::Task::get_CancellationToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_CancellationToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::CancellationToken, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::Task::get_IsCancellationAcknowledged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsCancellationAcknowledged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::Task::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::Task::IsCompletedMethod(int32_t flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "IsCompletedMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, flags);
}
 bool System::Threading::Tasks::Task::get_IsCompletedSuccessfully()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsCompletedSuccessfully",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::Task::get_CreationOptions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_CreationOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::TaskCreationOptions, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::WaitHandle System::Threading::Tasks::Task::System_IAsyncResult_get_AsyncWaitHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "System.IAsyncResult.get_AsyncWaitHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::WaitHandle, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Threading::Tasks::Task::get_AsyncState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_AsyncState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::Task::System_IAsyncResult_get_CompletedSynchronously()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "System.IAsyncResult.get_CompletedSynchronously",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskScheduler System::Threading::Tasks::Task::get_ExecutingTaskScheduler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_ExecutingTaskScheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::TaskScheduler, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory System::Threading::Tasks::Task::get_Factory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_Factory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::TaskFactory, false>(nullptr, ___internal_method);
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::get_CompletedTask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_CompletedTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(nullptr, ___internal_method);
}
 System::Threading::ManualResetEventSlim System::Threading::Tasks::Task::get_CompletedEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_CompletedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::ManualResetEventSlim, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::Task::get_ExceptionRecorded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_ExceptionRecorded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::Task::get_IsFaulted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsFaulted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::ExecutionContext System::Threading::Tasks::Task::get_CapturedContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_CapturedContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::ExecutionContext, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::Task::set_CapturedContext(System::Threading::ExecutionContext value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "set_CapturedContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ExecutionContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Threading::Tasks::Task::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::Task::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void System::Threading::Tasks::Task::ScheduleAndStart(bool needsProtection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ScheduleAndStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, needsProtection);
}
 void System::Threading::Tasks::Task::AddException(::bs_hook::Il2CppWrapperType exceptionObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AddException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, exceptionObject);
}
 void System::Threading::Tasks::Task::AddException(::bs_hook::Il2CppWrapperType exceptionObject, bool representsCancellation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AddException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, exceptionObject, representsCancellation);
}
 System::AggregateException System::Threading::Tasks::Task::GetExceptions(bool includeTaskCanceledExceptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "GetExceptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::AggregateException, false>(const_cast<void*>(instance), ___internal_method, includeTaskCanceledExceptions);
}
 System::Collections::ObjectModel::ReadOnlyCollection_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo> System::Threading::Tasks::Task::GetExceptionDispatchInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "GetExceptionDispatchInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ObjectModel::ReadOnlyCollection_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::ExceptionServices::ExceptionDispatchInfo System::Threading::Tasks::Task::GetCancellationExceptionDispatchInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "GetCancellationExceptionDispatchInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::ExceptionServices::ExceptionDispatchInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::Task::ThrowIfExceptional(bool includeTaskCanceledExceptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ThrowIfExceptional",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, includeTaskCanceledExceptions);
}
 void System::Threading::Tasks::Task::UpdateExceptionObservedStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "UpdateExceptionObservedStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::Task::get_IsExceptionObservedByParent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsExceptionObservedByParent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::Task::get_IsDelegateInvoked()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "get_IsDelegateInvoked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::Task::Finish(bool bUserDelegateExecuted)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bUserDelegateExecuted);
}
 void System::Threading::Tasks::Task::FinishStageTwo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "FinishStageTwo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::Task::FinishStageThree()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "FinishStageThree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::Task::ProcessChildCompletion(System::Threading::Tasks::Task childTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ProcessChildCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, childTask);
}
 void System::Threading::Tasks::Task::AddExceptionsFromChildren()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AddExceptionsFromChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::Task::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::Task::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::Task::ExecuteEntry(bool bPreventDoubleExecution)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ExecuteEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, bPreventDoubleExecution);
}
 void System::Threading::Tasks::Task::ExecutionContextCallback(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ExecutionContextCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
 void System::Threading::Tasks::Task::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::Task::HandleException(System::Exception unhandledException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "HandleException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, unhandledException);
}
 System::Runtime::CompilerServices::TaskAwaiter System::Threading::Tasks::Task::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "GetAwaiter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::CompilerServices::TaskAwaiter, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::CompilerServices::ConfiguredTaskAwaitable System::Threading::Tasks::Task::ConfigureAwait(bool continueOnCapturedContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ConfigureAwait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::CompilerServices::ConfiguredTaskAwaitable, false>(const_cast<void*>(instance), ___internal_method, continueOnCapturedContext);
}
 void System::Threading::Tasks::Task::SetContinuationForAwait(System::Action continuationAction, bool continueOnCapturedContext, bool flowExecutionContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "SetContinuationForAwait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, continuationAction, continueOnCapturedContext, flowExecutionContext);
}
 System::Runtime::CompilerServices::YieldAwaitable System::Threading::Tasks::Task::Yield()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Yield",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::CompilerServices::YieldAwaitable, false>(nullptr, ___internal_method);
}
 void System::Threading::Tasks::Task::Wait()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::Task::Wait(int32_t millisecondsTimeout, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, millisecondsTimeout, cancellationToken);
}
 bool System::Threading::Tasks::Task::WrappedTryRunInline()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "WrappedTryRunInline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::Task::InternalWait(int32_t millisecondsTimeout, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "InternalWait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, millisecondsTimeout, cancellationToken);
}
 bool System::Threading::Tasks::Task::SpinThenBlockingWait(int32_t millisecondsTimeout, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "SpinThenBlockingWait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, millisecondsTimeout, cancellationToken);
}
 bool System::Threading::Tasks::Task::SpinWait(int32_t millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "SpinWait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, millisecondsTimeout);
}
 bool System::Threading::Tasks::Task::InternalCancel(bool bCancelNonExecutingOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "InternalCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, bCancelNonExecutingOnly);
}
 void System::Threading::Tasks::Task::RecordInternalCancellationRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "RecordInternalCancellationRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::Task::RecordInternalCancellationRequest(System::Threading::CancellationToken tokenToRecord)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "RecordInternalCancellationRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tokenToRecord);
}
 void System::Threading::Tasks::Task::RecordInternalCancellationRequest(System::Threading::CancellationToken tokenToRecord, ::bs_hook::Il2CppWrapperType cancellationException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "RecordInternalCancellationRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tokenToRecord, cancellationException);
}
 void System::Threading::Tasks::Task::CancellationCleanupLogic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "CancellationCleanupLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::Task::SetCancellationAcknowledged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "SetCancellationAcknowledged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::Task::FinishContinuations()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "FinishContinuations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::Task::LogFinishCompletionNotification()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "LogFinishCompletionNotification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::ContinueWith(System::Action_1<System::Threading::Tasks::Task> continuationAction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ContinueWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::Threading::Tasks::Task>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, continuationAction);
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::ContinueWith(System::Action_1<System::Threading::Tasks::Task> continuationAction, System::Threading::Tasks::TaskScheduler scheduler, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskContinuationOptions continuationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ContinueWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::Threading::Tasks::Task>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, continuationAction, scheduler, cancellationToken, continuationOptions);
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::ContinueWith(System::Action_2<System::Threading::Tasks::Task,::bs_hook::Il2CppWrapperType> continuationAction, ::bs_hook::Il2CppWrapperType state, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ContinueWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<System::Threading::Tasks::Task,::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, continuationAction, state, cancellationToken, continuationOptions, scheduler);
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::ContinueWith(System::Action_2<System::Threading::Tasks::Task,::bs_hook::Il2CppWrapperType> continuationAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskScheduler scheduler, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskContinuationOptions continuationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ContinueWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<System::Threading::Tasks::Task,::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, continuationAction, state, scheduler, cancellationToken, continuationOptions);
}
 void System::Threading::Tasks::Task::CreationOptionsFromContinuationOptions(System::Threading::Tasks::TaskContinuationOptions continuationOptions, ByRef<System::Threading::Tasks::TaskCreationOptions> creationOptions, ByRef<System::Threading::Tasks::InternalTaskOptions> internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "CreationOptionsFromContinuationOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::Tasks::TaskCreationOptions>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::Tasks::InternalTaskOptions>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, continuationOptions, creationOptions, internalOptions);
}
 void System::Threading::Tasks::Task::ContinueWithCore(System::Threading::Tasks::Task continuationTask, System::Threading::Tasks::TaskScheduler scheduler, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskContinuationOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ContinueWithCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, continuationTask, scheduler, cancellationToken, options);
}
 void System::Threading::Tasks::Task::AddCompletionAction(System::Threading::Tasks::ITaskCompletionAction action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AddCompletionAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::ITaskCompletionAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action);
}
 void System::Threading::Tasks::Task::AddCompletionAction(System::Threading::Tasks::ITaskCompletionAction action, bool addBeforeOthers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AddCompletionAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::ITaskCompletionAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action, addBeforeOthers);
}
 bool System::Threading::Tasks::Task::AddTaskContinuationComplex(::bs_hook::Il2CppWrapperType tc, bool addBeforeOthers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AddTaskContinuationComplex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, tc, addBeforeOthers);
}
 bool System::Threading::Tasks::Task::AddTaskContinuation(::bs_hook::Il2CppWrapperType tc, bool addBeforeOthers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AddTaskContinuation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, tc, addBeforeOthers);
}
 void System::Threading::Tasks::Task::RemoveContinuation(::bs_hook::Il2CppWrapperType continuationObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "RemoveContinuation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, continuationObject);
}
template<typename TResult>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::Task::FromResult(TResult result)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                        "FromResult",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, result);
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::FromException(System::Exception exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "FromException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(nullptr, ___internal_method, exception);
}
template<typename TResult>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::Task::FromException(System::Exception exception)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                        "FromException",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, exception);
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::FromCancellation(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "FromCancellation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(nullptr, ___internal_method, cancellationToken);
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::FromCanceled(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "FromCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(nullptr, ___internal_method, cancellationToken);
}
template<typename TResult>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::Task::FromCancellation(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                        "FromCancellation",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, cancellationToken);
}
template<typename TResult>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::Task::FromCanceled(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                        "FromCanceled",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, cancellationToken);
}
template<typename TResult>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::Task::FromCancellation(System::OperationCanceledException exception)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                        "FromCancellation",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::OperationCanceledException>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, exception);
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::Run(System::Action action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(nullptr, ___internal_method, action);
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::Run(System::Action action, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(nullptr, ___internal_method, action, cancellationToken);
}
template<typename TResult>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::Task::Run(System::Func_1<TResult> function)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                        "Run",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<TResult>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, function);
}
template<typename TResult>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::Task::Run(System::Func_1<TResult> function, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                        "Run",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, function, cancellationToken);
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::Run(System::Func_1<System::Threading::Tasks::Task> function)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<System::Threading::Tasks::Task>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(nullptr, ___internal_method, function);
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::Run(System::Func_1<System::Threading::Tasks::Task> function, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<System::Threading::Tasks::Task>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(nullptr, ___internal_method, function, cancellationToken);
}
template<typename TResult>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::Task::Run(System::Func_1<System::Threading::Tasks::Task_1<TResult>> function)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                        "Run",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<System::Threading::Tasks::Task_1<TResult>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, function);
}
template<typename TResult>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::Task::Run(System::Func_1<System::Threading::Tasks::Task_1<TResult>> function, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                        "Run",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<System::Threading::Tasks::Task_1<TResult>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, function, cancellationToken);
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::Delay(System::TimeSpan delay, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Delay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(nullptr, ___internal_method, delay, cancellationToken);
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::Delay(int32_t millisecondsDelay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Delay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(nullptr, ___internal_method, millisecondsDelay);
}
 System::Threading::Tasks::Task System::Threading::Tasks::Task::Delay(int32_t millisecondsDelay, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "Delay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(nullptr, ___internal_method, millisecondsDelay, cancellationToken);
}
template<typename TResult>
 System::Threading::Tasks::Task_1<::ArrayW<TResult>> System::Threading::Tasks::Task::WhenAll(System::Collections::Generic::IEnumerable_1<System::Threading::Tasks::Task_1<TResult>> tasks)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                        "WhenAll",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<System::Threading::Tasks::Task_1<TResult>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<::ArrayW<TResult>>, false>(nullptr, ___internal_method, tasks);
}
template<typename TResult>
 System::Threading::Tasks::Task_1<::ArrayW<TResult>> System::Threading::Tasks::Task::WhenAll(::ArrayW<System::Threading::Tasks::Task_1<TResult>> tasks)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                        "WhenAll",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Threading::Tasks::Task_1<TResult>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<::ArrayW<TResult>>, false>(nullptr, ___internal_method, tasks);
}
template<typename TResult>
 System::Threading::Tasks::Task_1<::ArrayW<TResult>> System::Threading::Tasks::Task::InternalWhenAll(::ArrayW<System::Threading::Tasks::Task_1<TResult>> tasks)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                        "InternalWhenAll",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Threading::Tasks::Task_1<TResult>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<::ArrayW<TResult>>, false>(nullptr, ___internal_method, tasks);
}
 System::Threading::Tasks::Task_1<System::Threading::Tasks::Task> System::Threading::Tasks::Task::WhenAny(::ArrayW<System::Threading::Tasks::Task> tasks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "WhenAny",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Threading::Tasks::Task>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Threading::Tasks::Task>, false>(nullptr, ___internal_method, tasks);
}
 System::Threading::Tasks::Task_1<System::Threading::Tasks::Task> System::Threading::Tasks::Task::WhenAny(System::Collections::Generic::IEnumerable_1<System::Threading::Tasks::Task> tasks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "WhenAny",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<System::Threading::Tasks::Task>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Threading::Tasks::Task>, false>(nullptr, ___internal_method, tasks);
}
template<typename TResult>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::Task::CreateUnwrapPromise(System::Threading::Tasks::Task outerTask, bool lookForOce)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                        "CreateUnwrapPromise",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, outerTask, lookForOce);
}
 bool System::Threading::Tasks::Task::AddToActiveTasks(System::Threading::Tasks::Task task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "AddToActiveTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, task);
}
 void System::Threading::Tasks::Task::RemoveFromActiveTasks(int32_t taskId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "RemoveFromActiveTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, taskId);
}
 void System::Threading::Tasks::Task::MarkAborted(System::Threading::ThreadAbortException e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ThreadAbortException>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void System::Threading::Tasks::Task::ExecuteWithThreadLocal(ByRef<System::Threading::Tasks::Task> currentTaskSlot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::Task>::get(),
                            "ExecuteWithThreadLocal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::Tasks::Task>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, currentTaskSlot);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1::*)(::ArrayW<System::Threading::Tasks::Task_1<T>>)>(&System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Threading::Tasks::Task_1<T>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1::*)(System::Threading::Tasks::Task)>(&System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1.get_ShouldNotifyDebuggerOfWaitCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1::*)()>(&System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1::get_ShouldNotifyDebuggerOfWaitCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1.get_InvokeMayRunArbitraryCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1::*)()>(&System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1::get_InvokeMayRunArbitraryCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1>::get(),
                            "get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Threading::Tasks::ITaskCompletionAction
constexpr  System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1::operator System::Threading::Tasks::ITaskCompletionAction() const noexcept {
return System::Threading::Tasks::ITaskCompletionAction(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1::__set_m_tasks(::ArrayW<System::Threading::Tasks::Task_1<T>> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Threading::Tasks::Task_1<T>>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Threading::Tasks::Task_1<T>>>(value));
}
constexpr ::ArrayW<System::Threading::Tasks::Task_1<T>> System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1::__get_m_tasks() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Threading::Tasks::Task_1<T>>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1::__set_m_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1::__get_m_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "tasks", ty: "::ArrayW<System::Threading::Tasks::Task_1<T>>", modifiers: "", def_value: None }]
 System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1::System__Threading__Tasks__Task__WhenAllPromise_1(::ArrayW<System::Threading::Tasks::Task_1<T>> tasks)  : System::Threading::Tasks::Task_1<::ArrayW<T>>(THROW_UNLESS(::il2cpp_utils::New<System__Threading__Tasks__Task__WhenAllPromise_1>(tasks))) {}
 void System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1::_ctor(::ArrayW<System::Threading::Tasks::Task_1<T>> tasks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Threading::Tasks::Task_1<T>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tasks);
}
 void System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1::Invoke(System::Threading::Tasks::Task ignored)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ignored);
}
 bool System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1::get_ShouldNotifyDebuggerOfWaitCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1>::get(),
                            "get_ShouldNotifyDebuggerOfWaitCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1::get_InvokeMayRunArbitraryCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1>::get(),
                            "get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>::*)(::ArrayW<System::Threading::Tasks::Task_1<bool>>)>(&System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Threading::Tasks::Task_1<bool>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>::*)(System::Threading::Tasks::Task)>(&System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>.get_ShouldNotifyDebuggerOfWaitCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>::get_ShouldNotifyDebuggerOfWaitCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>.get_InvokeMayRunArbitraryCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>::get_InvokeMayRunArbitraryCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>>::get(),
                            "get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Threading::Tasks::ITaskCompletionAction
constexpr  System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>::operator System::Threading::Tasks::ITaskCompletionAction() const noexcept {
return System::Threading::Tasks::ITaskCompletionAction(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>::__set_m_tasks(::ArrayW<System::Threading::Tasks::Task_1<bool>> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Threading::Tasks::Task_1<bool>>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Threading::Tasks::Task_1<bool>>>(value));
}
constexpr ::ArrayW<System::Threading::Tasks::Task_1<bool>> System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>::__get_m_tasks() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Threading::Tasks::Task_1<bool>>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>::__set_m_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>::__get_m_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "tasks", ty: "::ArrayW<System::Threading::Tasks::Task_1<bool>>", modifiers: "", def_value: None }]
 System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>::System__Threading__Tasks__Task__WhenAllPromise_1(::ArrayW<System::Threading::Tasks::Task_1<bool>> tasks)  : System::Threading::Tasks::Task_1<::ArrayW<bool>>(THROW_UNLESS(::il2cpp_utils::New<System__Threading__Tasks__Task__WhenAllPromise_1>(tasks))) {}
 void System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>::_ctor(::ArrayW<System::Threading::Tasks::Task_1<bool>> tasks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Threading::Tasks::Task_1<bool>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tasks);
}
 void System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>::Invoke(System::Threading::Tasks::Task ignored)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ignored);
}
 bool System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>::get_ShouldNotifyDebuggerOfWaitCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>>::get(),
                            "get_ShouldNotifyDebuggerOfWaitCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>::get_InvokeMayRunArbitraryCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<bool>>::get(),
                            "get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::*)(::ArrayW<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>)>(&System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::*)(System::Threading::Tasks::Task)>(&System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>.get_ShouldNotifyDebuggerOfWaitCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::get_ShouldNotifyDebuggerOfWaitCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>.get_InvokeMayRunArbitraryCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::get_InvokeMayRunArbitraryCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Threading::Tasks::ITaskCompletionAction
constexpr  System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::operator System::Threading::Tasks::ITaskCompletionAction() const noexcept {
return System::Threading::Tasks::ITaskCompletionAction(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__set_m_tasks(::ArrayW<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>>(value));
}
constexpr ::ArrayW<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>> System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__get_m_tasks() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__set_m_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__get_m_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "tasks", ty: "::ArrayW<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>", modifiers: "", def_value: None }]
 System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::System__Threading__Tasks__Task__WhenAllPromise_1(::ArrayW<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>> tasks)  : System::Threading::Tasks::Task_1<::ArrayW<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>(THROW_UNLESS(::il2cpp_utils::New<System__Threading__Tasks__Task__WhenAllPromise_1>(tasks))) {}
 void System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::_ctor(::ArrayW<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>> tasks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tasks);
}
 void System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::Invoke(System::Threading::Tasks::Task ignored)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ignored);
}
 bool System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::get_ShouldNotifyDebuggerOfWaitCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "get_ShouldNotifyDebuggerOfWaitCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::get_InvokeMayRunArbitraryCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "get_InvokeMayRunArbitraryCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
