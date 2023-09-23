#pragma once
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/Threading/zzzz__Lock_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__UnobservedTaskExceptionEventArgs_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
//  Writing Method size for method: System::Threading::Tasks::TaskScheduler.QueueTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskScheduler::*)(System::Threading::Tasks::Task)>(&System::Threading::Tasks::TaskScheduler::QueueTask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::TaskScheduler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskScheduler.TryExecuteTaskInline
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::TaskScheduler::*)(System::Threading::Tasks::Task, bool)>(&System::Threading::Tasks::TaskScheduler::TryExecuteTaskInline)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::TaskScheduler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskScheduler.TryRunInline
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::TaskScheduler::*)(System::Threading::Tasks::Task, bool)>(&System::Threading::Tasks::TaskScheduler::TryRunInline)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x24b9dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                            "TryRunInline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskScheduler.TryDequeue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::TaskScheduler::*)(System::Threading::Tasks::Task)>(&System::Threading::Tasks::TaskScheduler::TryDequeue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24bf35c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::TaskScheduler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskScheduler.NotifyWorkItemProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskScheduler::*)()>(&System::Threading::Tasks::TaskScheduler::NotifyWorkItemProgress)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24bf364;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::TaskScheduler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskScheduler.get_RequiresAtomicStartTransition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::TaskScheduler::*)()>(&System::Threading::Tasks::TaskScheduler::get_RequiresAtomicStartTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24bf368;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::TaskScheduler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskScheduler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskScheduler::*)()>(&System::Threading::Tasks::TaskScheduler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24bf370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskScheduler.get_Default
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::TaskScheduler (*)()>(&System::Threading::Tasks::TaskScheduler::get_Default)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24bf378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                            "get_Default",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskScheduler.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::TaskScheduler (*)()>(&System::Threading::Tasks::TaskScheduler::get_Current)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x24ba708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskScheduler.get_InternalCurrent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::TaskScheduler (*)()>(&System::Threading::Tasks::TaskScheduler::get_InternalCurrent)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x24b92e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                            "get_InternalCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskScheduler.get_Id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Threading::Tasks::TaskScheduler::*)()>(&System::Threading::Tasks::TaskScheduler::get_Id)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x24b9fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskScheduler.PublishUnobservedTaskException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, System::Threading::Tasks::UnobservedTaskExceptionEventArgs)>(&System::Threading::Tasks::TaskScheduler::PublishUnobservedTaskException)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x24be490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                            "PublishUnobservedTaskException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::UnobservedTaskExceptionEventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Threading::Tasks::TaskScheduler::__set_s_activeTaskSchedulers(System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Threading::Tasks::TaskScheduler,::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setStaticField<System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Threading::Tasks::TaskScheduler,::bs_hook::Il2CppWrapperType>, "s_activeTaskSchedulers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get>(std::forward<System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Threading::Tasks::TaskScheduler,::bs_hook::Il2CppWrapperType>>(value));
}
 System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Threading::Tasks::TaskScheduler,::bs_hook::Il2CppWrapperType> System::Threading::Tasks::TaskScheduler::__get_s_activeTaskSchedulers()  {
return ::cordl_internals::getStaticField<System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Threading::Tasks::TaskScheduler,::bs_hook::Il2CppWrapperType>, "s_activeTaskSchedulers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get>();
}
 void System::Threading::Tasks::TaskScheduler::__set_s_defaultTaskScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setStaticField<System::Threading::Tasks::TaskScheduler, "s_defaultTaskScheduler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get>(std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
 System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskScheduler::__get_s_defaultTaskScheduler()  {
return ::cordl_internals::getStaticField<System::Threading::Tasks::TaskScheduler, "s_defaultTaskScheduler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get>();
}
 void System::Threading::Tasks::TaskScheduler::__set_s_taskSchedulerIdCounter(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_taskSchedulerIdCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get>(std::forward<int32_t>(value));
}
 int32_t System::Threading::Tasks::TaskScheduler::__get_s_taskSchedulerIdCounter()  {
return ::cordl_internals::getStaticField<int32_t, "s_taskSchedulerIdCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get>();
}
constexpr void System::Threading::Tasks::TaskScheduler::__set_m_taskSchedulerId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::Tasks::TaskScheduler::__get_m_taskSchedulerId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Threading::Tasks::TaskScheduler::__set__unobservedTaskException(System::EventHandler_1<System::Threading::Tasks::UnobservedTaskExceptionEventArgs> value)  {
::cordl_internals::setStaticField<System::EventHandler_1<System::Threading::Tasks::UnobservedTaskExceptionEventArgs>, "_unobservedTaskException", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get>(std::forward<System::EventHandler_1<System::Threading::Tasks::UnobservedTaskExceptionEventArgs>>(value));
}
 System::EventHandler_1<System::Threading::Tasks::UnobservedTaskExceptionEventArgs> System::Threading::Tasks::TaskScheduler::__get__unobservedTaskException()  {
return ::cordl_internals::getStaticField<System::EventHandler_1<System::Threading::Tasks::UnobservedTaskExceptionEventArgs>, "_unobservedTaskException", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get>();
}
 void System::Threading::Tasks::TaskScheduler::__set__unobservedTaskExceptionLockObject(System::Threading::Lock value)  {
::cordl_internals::setStaticField<System::Threading::Lock, "_unobservedTaskExceptionLockObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get>(std::forward<System::Threading::Lock>(value));
}
 System::Threading::Lock System::Threading::Tasks::TaskScheduler::__get__unobservedTaskExceptionLockObject()  {
return ::cordl_internals::getStaticField<System::Threading::Lock, "_unobservedTaskExceptionLockObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get>();
}
 void System::Threading::Tasks::TaskScheduler::QueueTask(System::Threading::Tasks::Task task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                            "QueueTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, task);
}
 bool System::Threading::Tasks::TaskScheduler::TryExecuteTaskInline(System::Threading::Tasks::Task task, bool taskWasPreviouslyQueued)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                            "TryExecuteTaskInline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, task, taskWasPreviouslyQueued);
}
 bool System::Threading::Tasks::TaskScheduler::TryRunInline(System::Threading::Tasks::Task task, bool taskWasPreviouslyQueued)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                            "TryRunInline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, task, taskWasPreviouslyQueued);
}
 bool System::Threading::Tasks::TaskScheduler::TryDequeue(System::Threading::Tasks::Task task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                            "TryDequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, task);
}
 void System::Threading::Tasks::TaskScheduler::NotifyWorkItemProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                            "NotifyWorkItemProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Tasks::TaskScheduler::get_RequiresAtomicStartTransition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                            "get_RequiresAtomicStartTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 System::Threading::Tasks::TaskScheduler::TaskScheduler()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TaskScheduler>())) {}
 void System::Threading::Tasks::TaskScheduler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskScheduler::get_Default()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                            "get_Default",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::TaskScheduler, false>(nullptr, ___internal_method);
}
 System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskScheduler::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::TaskScheduler, false>(nullptr, ___internal_method);
}
 System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskScheduler::get_InternalCurrent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                            "get_InternalCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::TaskScheduler, false>(nullptr, ___internal_method);
}
 int32_t System::Threading::Tasks::TaskScheduler::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                            "get_Id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::TaskScheduler::PublishUnobservedTaskException(::bs_hook::Il2CppWrapperType sender, System::Threading::Tasks::UnobservedTaskExceptionEventArgs ueea)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskScheduler>::get(),
                            "PublishUnobservedTaskException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::UnobservedTaskExceptionEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sender, ueea);
}
