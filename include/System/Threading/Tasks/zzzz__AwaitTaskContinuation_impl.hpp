#pragma once
#include "System/Threading/Tasks/zzzz__TaskContinuation_impl.hpp"
#include "System/Threading/Tasks/zzzz__AwaitTaskContinuation_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: System::Threading::Tasks::AwaitTaskContinuation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::AwaitTaskContinuation::*)(System::Action, bool)>(&System::Threading::Tasks::AwaitTaskContinuation::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x24bd220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::AwaitTaskContinuation.CreateTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::Threading::Tasks::AwaitTaskContinuation::*)(System::Action_1<::bs_hook::Il2CppWrapperType>, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::AwaitTaskContinuation::CreateTask)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24bdc60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "CreateTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::AwaitTaskContinuation.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::AwaitTaskContinuation::*)(System::Threading::Tasks::Task, bool)>(&System::Threading::Tasks::AwaitTaskContinuation::Run)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x24bdb44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::AwaitTaskContinuation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::AwaitTaskContinuation.get_IsValidLocationForInlining
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Threading::Tasks::AwaitTaskContinuation::get_IsValidLocationForInlining)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x24bdea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "get_IsValidLocationForInlining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::AwaitTaskContinuation.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::AwaitTaskContinuation::*)()>(&System::Threading::Tasks::AwaitTaskContinuation::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x24bdfd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::AwaitTaskContinuation.InvokeAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::AwaitTaskContinuation::InvokeAction)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24be100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "InvokeAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::AwaitTaskContinuation.GetInvokeActionCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::ContextCallback (*)()>(&System::Threading::Tasks::AwaitTaskContinuation::GetInvokeActionCallback)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x24be16c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "GetInvokeActionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::AwaitTaskContinuation.RunCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::AwaitTaskContinuation::*)(System::Threading::ContextCallback, ::bs_hook::Il2CppWrapperType, ByRef<System::Threading::Tasks::Task>)>(&System::Threading::Tasks::AwaitTaskContinuation::RunCallback)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x24bd48c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "RunCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ContextCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::Tasks::Task>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::AwaitTaskContinuation.RunOrScheduleAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action, bool, ByRef<System::Threading::Tasks::Task>)>(&System::Threading::Tasks::AwaitTaskContinuation::RunOrScheduleAction)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x24ba4bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "RunOrScheduleAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::Tasks::Task>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::AwaitTaskContinuation.UnsafeScheduleAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action)>(&System::Threading::Tasks::AwaitTaskContinuation::UnsafeScheduleAction)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24b9450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "UnsafeScheduleAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::AwaitTaskContinuation.ThrowAsyncIfNecessary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Exception)>(&System::Threading::Tasks::AwaitTaskContinuation::ThrowAsyncIfNecessary)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24bde4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "ThrowAsyncIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::AwaitTaskContinuation.MarkAborted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::AwaitTaskContinuation::*)(System::Threading::ThreadAbortException)>(&System::Threading::Tasks::AwaitTaskContinuation::MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24be214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ThreadAbortException>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Threading::IThreadPoolWorkItem
constexpr  System::Threading::Tasks::AwaitTaskContinuation::operator System::Threading::IThreadPoolWorkItem() const noexcept {
return System::Threading::IThreadPoolWorkItem(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::AwaitTaskContinuation::__set_m_capturedContext(System::Threading::ExecutionContext value)  {
::cordl_internals::setInstanceField<System::Threading::ExecutionContext, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::ExecutionContext>(value));
}
constexpr System::Threading::ExecutionContext System::Threading::Tasks::AwaitTaskContinuation::__get_m_capturedContext() const {
return ::cordl_internals::getInstanceField<System::Threading::ExecutionContext, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::AwaitTaskContinuation::__set_m_action(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action System::Threading::Tasks::AwaitTaskContinuation::__get_m_action() const {
return ::cordl_internals::getInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Threading::Tasks::AwaitTaskContinuation::__set_s_invokeActionCallback(System::Threading::ContextCallback value)  {
::cordl_internals::setStaticField<System::Threading::ContextCallback, "s_invokeActionCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get>(std::forward<System::Threading::ContextCallback>(value));
}
 System::Threading::ContextCallback System::Threading::Tasks::AwaitTaskContinuation::__get_s_invokeActionCallback()  {
return ::cordl_internals::getStaticField<System::Threading::ContextCallback, "s_invokeActionCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get>();
}
// Ctor Parameters [CppParam { name: "action", ty: "System::Action", modifiers: "", def_value: None }, CppParam { name: "flowExecutionContext", ty: "bool", modifiers: "", def_value: None }]
 System::Threading::Tasks::AwaitTaskContinuation::AwaitTaskContinuation(System::Action action, bool flowExecutionContext)  : System::Threading::Tasks::TaskContinuation(THROW_UNLESS(::il2cpp_utils::New<AwaitTaskContinuation>(action, flowExecutionContext))) {}
 void System::Threading::Tasks::AwaitTaskContinuation::_ctor(System::Action action, bool flowExecutionContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action, flowExecutionContext);
}
 System::Threading::Tasks::Task System::Threading::Tasks::AwaitTaskContinuation::CreateTask(System::Action_1<::bs_hook::Il2CppWrapperType> action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "CreateTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, action, state, scheduler);
}
 void System::Threading::Tasks::AwaitTaskContinuation::Run(System::Threading::Tasks::Task ignored, bool canInlineContinuationTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ignored, canInlineContinuationTask);
}
 bool System::Threading::Tasks::AwaitTaskContinuation::get_IsValidLocationForInlining()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "get_IsValidLocationForInlining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void System::Threading::Tasks::AwaitTaskContinuation::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::AwaitTaskContinuation::InvokeAction(::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "InvokeAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state);
}
 System::Threading::ContextCallback System::Threading::Tasks::AwaitTaskContinuation::GetInvokeActionCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "GetInvokeActionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::ContextCallback, false>(nullptr, ___internal_method);
}
 void System::Threading::Tasks::AwaitTaskContinuation::RunCallback(System::Threading::ContextCallback callback, ::bs_hook::Il2CppWrapperType state, ByRef<System::Threading::Tasks::Task> currentTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "RunCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ContextCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::Tasks::Task>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback, state, currentTask);
}
 void System::Threading::Tasks::AwaitTaskContinuation::RunOrScheduleAction(System::Action action, bool allowInlining, ByRef<System::Threading::Tasks::Task> currentTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "RunOrScheduleAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::Tasks::Task>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, allowInlining, currentTask);
}
 void System::Threading::Tasks::AwaitTaskContinuation::UnsafeScheduleAction(System::Action action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "UnsafeScheduleAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action);
}
 void System::Threading::Tasks::AwaitTaskContinuation::ThrowAsyncIfNecessary(System::Exception exc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "ThrowAsyncIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, exc);
}
 void System::Threading::Tasks::AwaitTaskContinuation::MarkAborted(System::Threading::ThreadAbortException e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::AwaitTaskContinuation>::get(),
                            "MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ThreadAbortException>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
