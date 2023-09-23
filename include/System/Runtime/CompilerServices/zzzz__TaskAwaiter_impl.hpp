#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
//  Writing Method size for method: System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0::*)()>(&System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236eef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0._OutputWaitEtwEvents_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0::*)()>(&System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0::_OutputWaitEtwEvents_b__0)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x236eef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0>::get(),
                            "<OutputWaitEtwEvents>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0::__set_task(System::Threading::Tasks::Task value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task>(value));
}
constexpr System::Threading::Tasks::Task System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0::__get_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0::__set_continuation(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0::__get_continuation() const {
return ::cordl_internals::getInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0>())) {}
 void System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0::_OutputWaitEtwEvents_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::System__Runtime__CompilerServices__TaskAwaiter____c__DisplayClass11_0>::get(),
                            "<OutputWaitEtwEvents>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter::*)(System::Threading::Tasks::Task)>(&System::Runtime::CompilerServices::TaskAwaiter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236ea34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter::*)()>(&System::Runtime::CompilerServices::TaskAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x236ea3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x236e880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter::*)()>(&System::Runtime::CompilerServices::TaskAwaiter::GetResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236eb0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter.ValidateEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::Task)>(&System::Runtime::CompilerServices::TaskAwaiter::ValidateEnd)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x236eb14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter>::get(),
                            "ValidateEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter.HandleNonSuccessAndDebuggerNotification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::Task)>(&System::Runtime::CompilerServices::TaskAwaiter::HandleNonSuccessAndDebuggerNotification)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x236eb60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter>::get(),
                            "HandleNonSuccessAndDebuggerNotification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter.ThrowForNonSuccess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::Task)>(&System::Runtime::CompilerServices::TaskAwaiter::ThrowForNonSuccess)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x236ebc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter>::get(),
                            "ThrowForNonSuccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter.OnCompletedInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::Task, System::Action, bool, bool)>(&System::Runtime::CompilerServices::TaskAwaiter::OnCompletedInternal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x236ea58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter>::get(),
                            "OnCompletedInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter.OutputWaitEtwEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Action (*)(System::Threading::Tasks::Task, System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter::OutputWaitEtwEvents)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x236ed14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter>::get(),
                            "OutputWaitEtwEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter::TaskAwaiter(System::Threading::Tasks::Task m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter::__set_m_task(System::Threading::Tasks::Task value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task>(value));
}
constexpr System::Threading::Tasks::Task System::Runtime::CompilerServices::TaskAwaiter::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter::_ctor(System::Threading::Tasks::Task task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 void System::Runtime::CompilerServices::TaskAwaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter::ValidateEnd(System::Threading::Tasks::Task task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter>::get(),
                            "ValidateEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task);
}
 void System::Runtime::CompilerServices::TaskAwaiter::HandleNonSuccessAndDebuggerNotification(System::Threading::Tasks::Task task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter>::get(),
                            "HandleNonSuccessAndDebuggerNotification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task);
}
 void System::Runtime::CompilerServices::TaskAwaiter::ThrowForNonSuccess(System::Threading::Tasks::Task task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter>::get(),
                            "ThrowForNonSuccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task);
}
 void System::Runtime::CompilerServices::TaskAwaiter::OnCompletedInternal(System::Threading::Tasks::Task task, System::Action continuation, bool continueOnCapturedContext, bool flowExecutionContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter>::get(),
                            "OnCompletedInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task, continuation, continueOnCapturedContext, flowExecutionContext);
}
 System::Action System::Runtime::CompilerServices::TaskAwaiter::OutputWaitEtwEvents(System::Threading::Tasks::Task task, System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter>::get(),
                            "OutputWaitEtwEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Action, false>(nullptr, ___internal_method, task, continuation);
}
