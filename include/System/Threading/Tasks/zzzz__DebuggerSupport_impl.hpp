#pragma once
#include "System/Threading/Tasks/zzzz__DebuggerSupport_def.hpp"
#include "System/Collections/Generic/zzzz__LowLevelDictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__CausalityRelation_def.hpp"
#include "System/Threading/Tasks/zzzz__CausalitySynchronousWork_def.hpp"
#include "System/Threading/Tasks/zzzz__CausalityTraceLevel_def.hpp"
#include "Internal/Runtime/Augments/zzzz__AsyncStatus_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: System::Threading::Tasks::DebuggerSupport.get_LoggingOn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Threading::Tasks::DebuggerSupport::get_LoggingOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b4cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "get_LoggingOn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::DebuggerSupport.TraceOperationCreation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::CausalityTraceLevel, System::Threading::Tasks::Task, ::StringW, uint64_t)>(&System::Threading::Tasks::DebuggerSupport::TraceOperationCreation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24b4cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "TraceOperationCreation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::DebuggerSupport.TraceOperationCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::CausalityTraceLevel, System::Threading::Tasks::Task, Internal::Runtime::Augments::AsyncStatus)>(&System::Threading::Tasks::DebuggerSupport::TraceOperationCompletion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24b4cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "TraceOperationCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Internal::Runtime::Augments::AsyncStatus>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::DebuggerSupport.TraceOperationRelation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::CausalityTraceLevel, System::Threading::Tasks::Task, System::Threading::Tasks::CausalityRelation)>(&System::Threading::Tasks::DebuggerSupport::TraceOperationRelation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24b4cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "TraceOperationRelation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::CausalityRelation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::DebuggerSupport.TraceSynchronousWorkStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::CausalityTraceLevel, System::Threading::Tasks::Task, System::Threading::Tasks::CausalitySynchronousWork)>(&System::Threading::Tasks::DebuggerSupport::TraceSynchronousWorkStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24b4cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "TraceSynchronousWorkStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::CausalitySynchronousWork>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::DebuggerSupport.TraceSynchronousWorkCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::CausalityTraceLevel, System::Threading::Tasks::CausalitySynchronousWork)>(&System::Threading::Tasks::DebuggerSupport::TraceSynchronousWorkCompletion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24b4ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "TraceSynchronousWorkCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::CausalitySynchronousWork>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::DebuggerSupport.AddToActiveTasks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::Task)>(&System::Threading::Tasks::DebuggerSupport::AddToActiveTasks)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x24b4ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "AddToActiveTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::DebuggerSupport.AddToActiveTasksNonInlined
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::Task)>(&System::Threading::Tasks::DebuggerSupport::AddToActiveTasksNonInlined)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x24b4d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "AddToActiveTasksNonInlined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::DebuggerSupport.RemoveFromActiveTasks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::Task)>(&System::Threading::Tasks::DebuggerSupport::RemoveFromActiveTasks)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x24b4f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "RemoveFromActiveTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::DebuggerSupport.RemoveFromActiveTasksNonInlined
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::Task)>(&System::Threading::Tasks::DebuggerSupport::RemoveFromActiveTasksNonInlined)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x24b4ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "RemoveFromActiveTasksNonInlined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Threading::Tasks::DebuggerSupport::__set_s_activeTasks(System::Collections::Generic::LowLevelDictionary_2<int32_t,System::Threading::Tasks::Task> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::LowLevelDictionary_2<int32_t,System::Threading::Tasks::Task>, "s_activeTasks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get>(std::forward<System::Collections::Generic::LowLevelDictionary_2<int32_t,System::Threading::Tasks::Task>>(value));
}
 System::Collections::Generic::LowLevelDictionary_2<int32_t,System::Threading::Tasks::Task> System::Threading::Tasks::DebuggerSupport::__get_s_activeTasks()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::LowLevelDictionary_2<int32_t,System::Threading::Tasks::Task>, "s_activeTasks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get>();
}
 void System::Threading::Tasks::DebuggerSupport::__set_s_activeTasksLock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "s_activeTasksLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType System::Threading::Tasks::DebuggerSupport::__get_s_activeTasksLock()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "s_activeTasksLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get>();
}
 bool System::Threading::Tasks::DebuggerSupport::get_LoggingOn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "get_LoggingOn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void System::Threading::Tasks::DebuggerSupport::TraceOperationCreation(System::Threading::Tasks::CausalityTraceLevel traceLevel, System::Threading::Tasks::Task task, ::StringW operationName, uint64_t relatedContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "TraceOperationCreation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, traceLevel, task, operationName, relatedContext);
}
 void System::Threading::Tasks::DebuggerSupport::TraceOperationCompletion(System::Threading::Tasks::CausalityTraceLevel traceLevel, System::Threading::Tasks::Task task, Internal::Runtime::Augments::AsyncStatus status)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "TraceOperationCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Internal::Runtime::Augments::AsyncStatus>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, traceLevel, task, status);
}
 void System::Threading::Tasks::DebuggerSupport::TraceOperationRelation(System::Threading::Tasks::CausalityTraceLevel traceLevel, System::Threading::Tasks::Task task, System::Threading::Tasks::CausalityRelation relation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "TraceOperationRelation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::CausalityRelation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, traceLevel, task, relation);
}
 void System::Threading::Tasks::DebuggerSupport::TraceSynchronousWorkStart(System::Threading::Tasks::CausalityTraceLevel traceLevel, System::Threading::Tasks::Task task, System::Threading::Tasks::CausalitySynchronousWork work)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "TraceSynchronousWorkStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::CausalitySynchronousWork>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, traceLevel, task, work);
}
 void System::Threading::Tasks::DebuggerSupport::TraceSynchronousWorkCompletion(System::Threading::Tasks::CausalityTraceLevel traceLevel, System::Threading::Tasks::CausalitySynchronousWork work)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "TraceSynchronousWorkCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::CausalityTraceLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::CausalitySynchronousWork>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, traceLevel, work);
}
 void System::Threading::Tasks::DebuggerSupport::AddToActiveTasks(System::Threading::Tasks::Task task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "AddToActiveTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task);
}
 void System::Threading::Tasks::DebuggerSupport::AddToActiveTasksNonInlined(System::Threading::Tasks::Task task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "AddToActiveTasksNonInlined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task);
}
 void System::Threading::Tasks::DebuggerSupport::RemoveFromActiveTasks(System::Threading::Tasks::Task task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "RemoveFromActiveTasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task);
}
 void System::Threading::Tasks::DebuggerSupport::RemoveFromActiveTasksNonInlined(System::Threading::Tasks::Task task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::DebuggerSupport>::get(),
                            "RemoveFromActiveTasksNonInlined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task);
}
