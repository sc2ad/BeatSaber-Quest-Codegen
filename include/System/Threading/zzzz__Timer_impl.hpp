#pragma once
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Threading/zzzz__TimerCallback_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
//  Writing Method size for method: System::Threading::System__Threading__Timer__TimerComparer.System_Collections_IComparer_Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Threading::System__Threading__Timer__TimerComparer::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&System::Threading::System__Threading__Timer__TimerComparer::System_Collections_IComparer_Compare)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x24b2aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__TimerComparer>::get(),
                            "System.Collections.IComparer.Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__Timer__TimerComparer.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Threading::System__Threading__Timer__TimerComparer::*)(System::Threading::Timer, System::Threading::Timer)>(&System::Threading::System__Threading__Timer__TimerComparer::Compare)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24b2b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__TimerComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Timer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Timer>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::IComparer
constexpr  System::Threading::System__Threading__Timer__TimerComparer::operator System::Collections::IComparer() const {
return System::Collections::IComparer(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to System::Collections::Generic::IComparer_1<System::Threading::Timer>
constexpr  System::Threading::System__Threading__Timer__TimerComparer::operator System::Collections::Generic::IComparer_1<System::Threading::Timer>() const {
return System::Collections::Generic::IComparer_1<System::Threading::Timer>(::cordl_internals::Box(this).convert());
}
 int32_t System::Threading::System__Threading__Timer__TimerComparer::System_Collections_IComparer_Compare(::bs_hook::Il2CppWrapperType x, ::bs_hook::Il2CppWrapperType y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__TimerComparer>::get(),
                            "System.Collections.IComparer.Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, x, y);
}
 int32_t System::Threading::System__Threading__Timer__TimerComparer::Compare(System::Threading::Timer tx, System::Threading::Timer ty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__TimerComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Timer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Timer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, tx, ty);
}
//  Writing Method size for method: System::Threading::System__Threading__Timer__Scheduler.InitScheduler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__Timer__Scheduler::*)()>(&System::Threading::System__Threading__Timer__Scheduler::InitScheduler)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x24b2bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "InitScheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__Timer__Scheduler.WakeupScheduler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__Timer__Scheduler::*)()>(&System::Threading::System__Threading__Timer__Scheduler::WakeupScheduler)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24b2ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "WakeupScheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__Timer__Scheduler.SchedulerThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__Timer__Scheduler::*)()>(&System::Threading::System__Threading__Timer__Scheduler::SchedulerThread)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x24b2cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "SchedulerThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__Timer__Scheduler.get_Instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::System__Threading__Timer__Scheduler (*)()>(&System::Threading::System__Threading__Timer__Scheduler::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24b3108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__Timer__Scheduler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__Timer__Scheduler::*)()>(&System::Threading::System__Threading__Timer__Scheduler::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x24b3160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__Timer__Scheduler.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__Timer__Scheduler::*)(System::Threading::Timer)>(&System::Threading::System__Threading__Timer__Scheduler::Remove)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x24b2840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Timer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__Timer__Scheduler.Change
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__Timer__Scheduler::*)(System::Threading::Timer, int64_t)>(&System::Threading::System__Threading__Timer__Scheduler::Change)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x24b2910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "Change",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Timer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__Timer__Scheduler.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__Timer__Scheduler::*)(System::Threading::Timer)>(&System::Threading::System__Threading__Timer__Scheduler::Add)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x24b322c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Timer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__Timer__Scheduler.InternalRemove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__Timer__Scheduler::*)(System::Threading::Timer)>(&System::Threading::System__Threading__Timer__Scheduler::InternalRemove)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x24b31fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "InternalRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Timer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__Timer__Scheduler.TimerCB
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&System::Threading::System__Threading__Timer__Scheduler::TimerCB)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x24b331c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "TimerCB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__Timer__Scheduler.FireTimer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__Timer__Scheduler::*)(System::Threading::Timer)>(&System::Threading::System__Threading__Timer__Scheduler::FireTimer)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x24b3394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "FireTimer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Timer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__Timer__Scheduler.RunSchedulerLoop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Threading::System__Threading__Timer__Scheduler::*)()>(&System::Threading::System__Threading__Timer__Scheduler::RunSchedulerLoop)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x24b2df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "RunSchedulerLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Threading::System__Threading__Timer__Scheduler::__set_instance(System::Threading::System__Threading__Timer__Scheduler value)  {
::cordl_internals::setStaticField<System::Threading::System__Threading__Timer__Scheduler, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get>(std::forward<System::Threading::System__Threading__Timer__Scheduler>(value));
}
 System::Threading::System__Threading__Timer__Scheduler System::Threading::System__Threading__Timer__Scheduler::__get_instance()  {
return ::cordl_internals::getStaticField<System::Threading::System__Threading__Timer__Scheduler, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get>();
}
constexpr void System::Threading::System__Threading__Timer__Scheduler::__set_needReSort(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Threading::System__Threading__Timer__Scheduler::__get_needReSort() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::System__Threading__Timer__Scheduler::__set_list(System::Collections::Generic::List_1<System::Threading::Timer> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::Threading::Timer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::Threading::Timer>>(value));
}
constexpr System::Collections::Generic::List_1<System::Threading::Timer> System::Threading::System__Threading__Timer__Scheduler::__get_list() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::Threading::Timer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::System__Threading__Timer__Scheduler::__set_current_next_run(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Threading::System__Threading__Timer__Scheduler::__get_current_next_run() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::System__Threading__Timer__Scheduler::__set_changed(System::Threading::ManualResetEvent value)  {
::cordl_internals::setInstanceField<System::Threading::ManualResetEvent, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::ManualResetEvent>(value));
}
constexpr System::Threading::ManualResetEvent System::Threading::System__Threading__Timer__Scheduler::__get_changed() const {
return ::cordl_internals::getInstanceField<System::Threading::ManualResetEvent, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Threading::System__Threading__Timer__Scheduler::InitScheduler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "InitScheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::System__Threading__Timer__Scheduler::WakeupScheduler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "WakeupScheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::System__Threading__Timer__Scheduler::SchedulerThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "SchedulerThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::System__Threading__Timer__Scheduler System::Threading::System__Threading__Timer__Scheduler::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::System__Threading__Timer__Scheduler, false>(nullptr, ___internal_method);
}
 System::Threading::System__Threading__Timer__Scheduler System::Threading::System__Threading__Timer__Scheduler::New_ctor()  {
System::Threading::System__Threading__Timer__Scheduler o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::System__Threading__Timer__Scheduler>())};
return o;
}
 void System::Threading::System__Threading__Timer__Scheduler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::System__Threading__Timer__Scheduler::Remove(System::Threading::Timer timer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Timer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timer);
}
 void System::Threading::System__Threading__Timer__Scheduler::Change(System::Threading::Timer timer, int64_t new_next_run)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "Change",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Timer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timer, new_next_run);
}
 void System::Threading::System__Threading__Timer__Scheduler::Add(System::Threading::Timer timer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Timer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timer);
}
 void System::Threading::System__Threading__Timer__Scheduler::InternalRemove(System::Threading::Timer timer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "InternalRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Timer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timer);
}
 void System::Threading::System__Threading__Timer__Scheduler::TimerCB(::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "TimerCB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, o);
}
 void System::Threading::System__Threading__Timer__Scheduler::FireTimer(System::Threading::Timer timer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "FireTimer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Timer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timer);
}
 int32_t System::Threading::System__Threading__Timer__Scheduler::RunSchedulerLoop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__Timer__Scheduler>::get(),
                            "RunSchedulerLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Timer.get_scheduler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::System__Threading__Timer__Scheduler (*)()>(&System::Threading::Timer::get_scheduler)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x24b23b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            "get_scheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Timer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Timer::*)(System::Threading::TimerCallback, ::bs_hook::Il2CppWrapperType, int32_t, int32_t)>(&System::Threading::Timer::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x24b2440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::TimerCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Timer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Timer::*)(System::Threading::TimerCallback, ::bs_hook::Il2CppWrapperType, System::TimeSpan, System::TimeSpan)>(&System::Threading::Timer::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24b2500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::TimerCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Timer.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Timer::*)(System::Threading::TimerCallback, ::bs_hook::Il2CppWrapperType, int64_t, int64_t)>(&System::Threading::Timer::Init)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x24b248c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::TimerCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Timer.Change
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Timer::*)(int32_t, int32_t)>(&System::Threading::Timer::Change)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24b2770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            "Change",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Timer.Change
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Timer::*)(System::TimeSpan, System::TimeSpan)>(&System::Threading::Timer::Change)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x24b2790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            "Change",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Timer.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Timer::*)()>(&System::Threading::Timer::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x24b2808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Timer.Change
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Timer::*)(int64_t, int64_t, bool)>(&System::Threading::Timer::Change)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x24b2590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            "Change",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Timer.KeepRootedWhileScheduled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Timer::*)()>(&System::Threading::Timer::KeepRootedWhileScheduled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24b2aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            "KeepRootedWhileScheduled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Timer.GetTimeMonotonic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&System::Threading::Timer::GetTimeMonotonic)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24b290c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            "GetTimeMonotonic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  System::Threading::Timer::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Timer::__set_callback(System::Threading::TimerCallback value)  {
::cordl_internals::setInstanceField<System::Threading::TimerCallback, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::TimerCallback>(value));
}
constexpr System::Threading::TimerCallback System::Threading::Timer::__get_callback() const {
return ::cordl_internals::getInstanceField<System::Threading::TimerCallback, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Timer::__set_state(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Threading::Timer::__get_state() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Timer::__set_due_time_ms(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Threading::Timer::__get_due_time_ms() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Timer::__set_period_ms(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Threading::Timer::__get_period_ms() const {
return ::cordl_internals::getInstanceField<int64_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Timer::__set_next_run(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Threading::Timer::__get_next_run() const {
return ::cordl_internals::getInstanceField<int64_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Timer::__set_disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Threading::Timer::__get_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Timer::__set_is_dead(bool value)  {
::cordl_internals::setInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Threading::Timer::__get_is_dead() const {
return ::cordl_internals::getInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Timer::__set_is_added(bool value)  {
::cordl_internals::setInstanceField<bool, 0x42>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Threading::Timer::__get_is_added() const {
return ::cordl_internals::getInstanceField<bool, 0x42>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::System__Threading__Timer__Scheduler System::Threading::Timer::get_scheduler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            "get_scheduler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::System__Threading__Timer__Scheduler, false>(nullptr, ___internal_method);
}
 System::Threading::Timer System::Threading::Timer::New_ctor(System::Threading::TimerCallback callback, ::bs_hook::Il2CppWrapperType state, int32_t dueTime, int32_t period)  {
System::Threading::Timer o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Timer>(callback, state, dueTime, period))};
return o;
}
 void System::Threading::Timer::_ctor(System::Threading::TimerCallback callback, ::bs_hook::Il2CppWrapperType state, int32_t dueTime, int32_t period)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::TimerCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback, state, dueTime, period);
}
 System::Threading::Timer System::Threading::Timer::New_ctor(System::Threading::TimerCallback callback, ::bs_hook::Il2CppWrapperType state, System::TimeSpan dueTime, System::TimeSpan period)  {
System::Threading::Timer o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Timer>(callback, state, dueTime, period))};
return o;
}
 void System::Threading::Timer::_ctor(System::Threading::TimerCallback callback, ::bs_hook::Il2CppWrapperType state, System::TimeSpan dueTime, System::TimeSpan period)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::TimerCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback, state, dueTime, period);
}
 void System::Threading::Timer::Init(System::Threading::TimerCallback callback, ::bs_hook::Il2CppWrapperType state, int64_t dueTime, int64_t period)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::TimerCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback, state, dueTime, period);
}
 bool System::Threading::Timer::Change(int32_t dueTime, int32_t period)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            "Change",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, dueTime, period);
}
 bool System::Threading::Timer::Change(System::TimeSpan dueTime, System::TimeSpan period)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            "Change",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, dueTime, period);
}
 void System::Threading::Timer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::Timer::Change(int64_t dueTime, int64_t period, bool first)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            "Change",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, dueTime, period, first);
}
 void System::Threading::Timer::KeepRootedWhileScheduled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            "KeepRootedWhileScheduled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::Threading::Timer::GetTimeMonotonic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Timer>::get(),
                            "GetTimeMonotonic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
