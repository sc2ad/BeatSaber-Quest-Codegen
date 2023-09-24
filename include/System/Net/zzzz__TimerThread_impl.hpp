#pragma once
#include "System/Net/zzzz__TimerThread_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Net/zzzz__TimerThread_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Net/zzzz__TimerThread_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/Threading/zzzz__AutoResetEvent_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
//  Writing Method size for method: System::Net::System__Net__TimerThread__Queue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__TimerThread__Queue::*)(int32_t)>(&System::Net::System__Net__TimerThread__Queue::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2818b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Queue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__Queue.get_Duration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::System__Net__TimerThread__Queue::*)()>(&System::Net::System__Net__TimerThread__Queue::get_Duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2818b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Queue>::get(),
                            "get_Duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__Queue.CreateTimer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::System__Net__TimerThread__Timer (System::Net::System__Net__TimerThread__Queue::*)(System::Net::System__Net__TimerThread__Callback, ::bs_hook::Il2CppWrapperType)>(&System::Net::System__Net__TimerThread__Queue::CreateTimer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::System__Net__TimerThread__Queue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Queue>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::System__Net__TimerThread__Queue::__set_m_DurationMilliseconds(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__TimerThread__Queue::__get_m_DurationMilliseconds() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::System__Net__TimerThread__Queue System::Net::System__Net__TimerThread__Queue::New_ctor(int32_t durationMilliseconds)  {
System::Net::System__Net__TimerThread__Queue o{THROW_UNLESS(::il2cpp_utils::New<System::Net::System__Net__TimerThread__Queue>(durationMilliseconds))};
return o;
}
 void System::Net::System__Net__TimerThread__Queue::_ctor(int32_t durationMilliseconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Queue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, durationMilliseconds);
}
 int32_t System::Net::System__Net__TimerThread__Queue::get_Duration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Queue>::get(),
                            "get_Duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::System__Net__TimerThread__Timer System::Net::System__Net__TimerThread__Queue::CreateTimer(System::Net::System__Net__TimerThread__Callback callback, ::bs_hook::Il2CppWrapperType context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Queue>::get(),
                            "CreateTimer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__TimerThread__Callback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::System__Net__TimerThread__Timer, false>(const_cast<void*>(instance), ___internal_method, callback, context);
}
//  Writing Method size for method: System::Net::System__Net__TimerThread__Timer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__TimerThread__Timer::*)(int32_t)>(&System::Net::System__Net__TimerThread__Timer::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2818b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Timer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__Timer.get_StartTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::System__Net__TimerThread__Timer::*)()>(&System::Net::System__Net__TimerThread__Timer::get_StartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2818bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Timer>::get(),
                            "get_StartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__Timer.get_Expiration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::System__Net__TimerThread__Timer::*)()>(&System::Net::System__Net__TimerThread__Timer::get_Expiration)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2818bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Timer>::get(),
                            "get_Expiration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__Timer.Cancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::System__Net__TimerThread__Timer::*)()>(&System::Net::System__Net__TimerThread__Timer::Cancel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::System__Net__TimerThread__Timer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Timer>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__Timer.get_HasExpired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::System__Net__TimerThread__Timer::*)()>(&System::Net::System__Net__TimerThread__Timer::get_HasExpired)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::System__Net__TimerThread__Timer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Timer>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__Timer.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__TimerThread__Timer::*)()>(&System::Net::System__Net__TimerThread__Timer::Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2818bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Timer>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  System::Net::System__Net__TimerThread__Timer::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::System__Net__TimerThread__Timer::__set_m_StartTimeMilliseconds(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__TimerThread__Timer::__get_m_StartTimeMilliseconds() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::System__Net__TimerThread__Timer::__set_m_DurationMilliseconds(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__TimerThread__Timer::__get_m_DurationMilliseconds() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::System__Net__TimerThread__Timer System::Net::System__Net__TimerThread__Timer::New_ctor(int32_t durationMilliseconds)  {
System::Net::System__Net__TimerThread__Timer o{THROW_UNLESS(::il2cpp_utils::New<System::Net::System__Net__TimerThread__Timer>(durationMilliseconds))};
return o;
}
 void System::Net::System__Net__TimerThread__Timer::_ctor(int32_t durationMilliseconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Timer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, durationMilliseconds);
}
 int32_t System::Net::System__Net__TimerThread__Timer::get_StartTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Timer>::get(),
                            "get_StartTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Net::System__Net__TimerThread__Timer::get_Expiration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Timer>::get(),
                            "get_Expiration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::System__Net__TimerThread__Timer::Cancel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Timer>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::System__Net__TimerThread__Timer::get_HasExpired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Timer>::get(),
                            "get_HasExpired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::System__Net__TimerThread__Timer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Timer>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Net::System__Net__TimerThread__Callback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__TimerThread__Callback::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&System::Net::System__Net__TimerThread__Callback::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2818bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Callback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__Callback.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__TimerThread__Callback::*)(System::Net::System__Net__TimerThread__Timer, int32_t, ::bs_hook::Il2CppWrapperType)>(&System::Net::System__Net__TimerThread__Callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2818cfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::System__Net__TimerThread__Callback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Callback>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 System::Net::System__Net__TimerThread__Callback System::Net::System__Net__TimerThread__Callback::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
System::Net::System__Net__TimerThread__Callback o{THROW_UNLESS(::il2cpp_utils::New<System::Net::System__Net__TimerThread__Callback>(object, method))};
return o;
}
 void System::Net::System__Net__TimerThread__Callback::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Callback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void System::Net::System__Net__TimerThread__Callback::Invoke(System::Net::System__Net__TimerThread__Timer timer, int32_t timeNoticed, ::bs_hook::Il2CppWrapperType context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__Callback>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__TimerThread__Timer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timer, timeNoticed, context);
}
//  Writing Method size for method: System::Net::System__Net__TimerThread__TimerQueue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__TimerThread__TimerQueue::*)(int32_t)>(&System::Net::System__Net__TimerThread__TimerQueue::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2817504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerQueue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__TimerQueue.CreateTimer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::System__Net__TimerThread__Timer (System::Net::System__Net__TimerThread__TimerQueue::*)(System::Net::System__Net__TimerThread__Callback, ::bs_hook::Il2CppWrapperType)>(&System::Net::System__Net__TimerThread__TimerQueue::CreateTimer)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2818d40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::System__Net__TimerThread__TimerQueue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerQueue>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__TimerQueue.Fire
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::System__Net__TimerThread__TimerQueue::*)(ByRef<int32_t>)>(&System::Net::System__Net__TimerThread__TimerQueue::Fire)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2818814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerQueue>::get(),
                            "Fire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::System__Net__TimerThread__TimerQueue::__set_m_ThisHandle(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::Net::System__Net__TimerThread__TimerQueue::__get_m_ThisHandle() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::System__Net__TimerThread__TimerQueue::__set_m_Timers(System::Net::System__Net__TimerThread__TimerNode value)  {
::cordl_internals::setInstanceField<System::Net::System__Net__TimerThread__TimerNode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::System__Net__TimerThread__TimerNode>(value));
}
constexpr System::Net::System__Net__TimerThread__TimerNode System::Net::System__Net__TimerThread__TimerQueue::__get_m_Timers() const {
return ::cordl_internals::getInstanceField<System::Net::System__Net__TimerThread__TimerNode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::System__Net__TimerThread__TimerQueue System::Net::System__Net__TimerThread__TimerQueue::New_ctor(int32_t durationMilliseconds)  {
System::Net::System__Net__TimerThread__TimerQueue o{THROW_UNLESS(::il2cpp_utils::New<System::Net::System__Net__TimerThread__TimerQueue>(durationMilliseconds))};
return o;
}
 void System::Net::System__Net__TimerThread__TimerQueue::_ctor(int32_t durationMilliseconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerQueue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, durationMilliseconds);
}
 System::Net::System__Net__TimerThread__Timer System::Net::System__Net__TimerThread__TimerQueue::CreateTimer(System::Net::System__Net__TimerThread__Callback callback, ::bs_hook::Il2CppWrapperType context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerQueue>::get(),
                            "CreateTimer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__TimerThread__Callback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::System__Net__TimerThread__Timer, false>(const_cast<void*>(instance), ___internal_method, callback, context);
}
 bool System::Net::System__Net__TimerThread__TimerQueue::Fire(ByRef<int32_t> nextExpiration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerQueue>::get(),
                            "Fire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, nextExpiration);
}
//  Writing Method size for method: System::Net::System__Net__TimerThread__InfiniteTimerQueue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__TimerThread__InfiniteTimerQueue::*)()>(&System::Net::System__Net__TimerThread__InfiniteTimerQueue::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28174e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__InfiniteTimerQueue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__InfiniteTimerQueue.CreateTimer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::System__Net__TimerThread__Timer (System::Net::System__Net__TimerThread__InfiniteTimerQueue::*)(System::Net::System__Net__TimerThread__Callback, ::bs_hook::Il2CppWrapperType)>(&System::Net::System__Net__TimerThread__InfiniteTimerQueue::CreateTimer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2819220;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::System__Net__TimerThread__InfiniteTimerQueue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__InfiniteTimerQueue>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
 System::Net::System__Net__TimerThread__InfiniteTimerQueue System::Net::System__Net__TimerThread__InfiniteTimerQueue::New_ctor()  {
System::Net::System__Net__TimerThread__InfiniteTimerQueue o{THROW_UNLESS(::il2cpp_utils::New<System::Net::System__Net__TimerThread__InfiniteTimerQueue>())};
return o;
}
 void System::Net::System__Net__TimerThread__InfiniteTimerQueue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__InfiniteTimerQueue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::System__Net__TimerThread__Timer System::Net::System__Net__TimerThread__InfiniteTimerQueue::CreateTimer(System::Net::System__Net__TimerThread__Callback callback, ::bs_hook::Il2CppWrapperType context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__InfiniteTimerQueue>::get(),
                            "CreateTimer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__TimerThread__Callback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::System__Net__TimerThread__Timer, false>(const_cast<void*>(instance), ___internal_method, callback, context);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState::System__Net__TimerThread__TimerNode__TimerState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState  GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState::Ready{0};
constexpr GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState  GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState::Fired{1};
constexpr GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState  GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState::Cancelled{2};
constexpr GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState  GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState::Sentinel{3};
//  Writing Method size for method: System::Net::System__Net__TimerThread__TimerNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__TimerThread__TimerNode::*)(System::Net::System__Net__TimerThread__Callback, ::bs_hook::Il2CppWrapperType, int32_t, ::bs_hook::Il2CppWrapperType)>(&System::Net::System__Net__TimerThread__TimerNode::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2818f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__TimerThread__Callback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__TimerNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__TimerThread__TimerNode::*)()>(&System::Net::System__Net__TimerThread__TimerNode::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2818d10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__TimerNode.get_HasExpired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::System__Net__TimerThread__TimerNode::*)()>(&System::Net::System__Net__TimerThread__TimerNode::get_HasExpired)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28192bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::System__Net__TimerThread__TimerNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerNode>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__TimerNode.get_Next
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::System__Net__TimerThread__TimerNode (System::Net::System__Net__TimerThread__TimerNode::*)()>(&System::Net::System__Net__TimerThread__TimerNode::get_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28192cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerNode>::get(),
                            "get_Next",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__TimerNode.set_Next
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__TimerThread__TimerNode::*)(System::Net::System__Net__TimerThread__TimerNode)>(&System::Net::System__Net__TimerThread__TimerNode::set_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28192d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerNode>::get(),
                            "set_Next",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__TimerThread__TimerNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__TimerNode.get_Prev
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::System__Net__TimerThread__TimerNode (System::Net::System__Net__TimerThread__TimerNode::*)()>(&System::Net::System__Net__TimerThread__TimerNode::get_Prev)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28192dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerNode>::get(),
                            "get_Prev",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__TimerNode.set_Prev
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__TimerThread__TimerNode::*)(System::Net::System__Net__TimerThread__TimerNode)>(&System::Net::System__Net__TimerThread__TimerNode::set_Prev)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28192e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerNode>::get(),
                            "set_Prev",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__TimerThread__TimerNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__TimerNode.Cancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::System__Net__TimerThread__TimerNode::*)()>(&System::Net::System__Net__TimerThread__TimerNode::Cancel)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x28192ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::System__Net__TimerThread__TimerNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerNode>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__TimerNode.Fire
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::System__Net__TimerThread__TimerNode::*)()>(&System::Net::System__Net__TimerThread__TimerNode::Fire)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x2818fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerNode>::get(),
                            "Fire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::System__Net__TimerThread__TimerNode::__set_m_TimerState(GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState>(value));
}
constexpr GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState System::Net::System__Net__TimerThread__TimerNode::__get_m_TimerState() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::System__Net__TimerThread__TimerNode__TimerState, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::System__Net__TimerThread__TimerNode::__set_m_Callback(System::Net::System__Net__TimerThread__Callback value)  {
::cordl_internals::setInstanceField<System::Net::System__Net__TimerThread__Callback, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::System__Net__TimerThread__Callback>(value));
}
constexpr System::Net::System__Net__TimerThread__Callback System::Net::System__Net__TimerThread__TimerNode::__get_m_Callback() const {
return ::cordl_internals::getInstanceField<System::Net::System__Net__TimerThread__Callback, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::System__Net__TimerThread__TimerNode::__set_m_Context(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Net::System__Net__TimerThread__TimerNode::__get_m_Context() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::System__Net__TimerThread__TimerNode::__set_m_QueueLock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Net::System__Net__TimerThread__TimerNode::__get_m_QueueLock() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::System__Net__TimerThread__TimerNode::__set_next(System::Net::System__Net__TimerThread__TimerNode value)  {
::cordl_internals::setInstanceField<System::Net::System__Net__TimerThread__TimerNode, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::System__Net__TimerThread__TimerNode>(value));
}
constexpr System::Net::System__Net__TimerThread__TimerNode System::Net::System__Net__TimerThread__TimerNode::__get_next() const {
return ::cordl_internals::getInstanceField<System::Net::System__Net__TimerThread__TimerNode, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::System__Net__TimerThread__TimerNode::__set_prev(System::Net::System__Net__TimerThread__TimerNode value)  {
::cordl_internals::setInstanceField<System::Net::System__Net__TimerThread__TimerNode, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::System__Net__TimerThread__TimerNode>(value));
}
constexpr System::Net::System__Net__TimerThread__TimerNode System::Net::System__Net__TimerThread__TimerNode::__get_prev() const {
return ::cordl_internals::getInstanceField<System::Net::System__Net__TimerThread__TimerNode, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::System__Net__TimerThread__TimerNode System::Net::System__Net__TimerThread__TimerNode::New_ctor(System::Net::System__Net__TimerThread__Callback callback, ::bs_hook::Il2CppWrapperType context, int32_t durationMilliseconds, ::bs_hook::Il2CppWrapperType queueLock)  {
System::Net::System__Net__TimerThread__TimerNode o{THROW_UNLESS(::il2cpp_utils::New<System::Net::System__Net__TimerThread__TimerNode>(callback, context, durationMilliseconds, queueLock))};
return o;
}
 void System::Net::System__Net__TimerThread__TimerNode::_ctor(System::Net::System__Net__TimerThread__Callback callback, ::bs_hook::Il2CppWrapperType context, int32_t durationMilliseconds, ::bs_hook::Il2CppWrapperType queueLock)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__TimerThread__Callback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback, context, durationMilliseconds, queueLock);
}
 System::Net::System__Net__TimerThread__TimerNode System::Net::System__Net__TimerThread__TimerNode::New_ctor()  {
System::Net::System__Net__TimerThread__TimerNode o{THROW_UNLESS(::il2cpp_utils::New<System::Net::System__Net__TimerThread__TimerNode>())};
return o;
}
 void System::Net::System__Net__TimerThread__TimerNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::System__Net__TimerThread__TimerNode::get_HasExpired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerNode>::get(),
                            "get_HasExpired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::System__Net__TimerThread__TimerNode System::Net::System__Net__TimerThread__TimerNode::get_Next()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerNode>::get(),
                            "get_Next",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::System__Net__TimerThread__TimerNode, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::System__Net__TimerThread__TimerNode::set_Next(System::Net::System__Net__TimerThread__TimerNode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerNode>::get(),
                            "set_Next",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__TimerThread__TimerNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Net::System__Net__TimerThread__TimerNode System::Net::System__Net__TimerThread__TimerNode::get_Prev()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerNode>::get(),
                            "get_Prev",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::System__Net__TimerThread__TimerNode, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::System__Net__TimerThread__TimerNode::set_Prev(System::Net::System__Net__TimerThread__TimerNode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerNode>::get(),
                            "set_Prev",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::System__Net__TimerThread__TimerNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Net::System__Net__TimerThread__TimerNode::Cancel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerNode>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::System__Net__TimerThread__TimerNode::Fire()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__TimerNode>::get(),
                            "Fire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Net::System__Net__TimerThread__InfiniteTimer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__TimerThread__InfiniteTimer::*)()>(&System::Net::System__Net__TimerThread__InfiniteTimer::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2819290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__InfiniteTimer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__InfiniteTimer.get_HasExpired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::System__Net__TimerThread__InfiniteTimer::*)()>(&System::Net::System__Net__TimerThread__InfiniteTimer::get_HasExpired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2819424;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::System__Net__TimerThread__InfiniteTimer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__InfiniteTimer>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__TimerThread__InfiniteTimer.Cancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::System__Net__TimerThread__InfiniteTimer::*)()>(&System::Net::System__Net__TimerThread__InfiniteTimer::Cancel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x281942c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::System__Net__TimerThread__InfiniteTimer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__InfiniteTimer>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::System__Net__TimerThread__InfiniteTimer::__set_cancelled(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__TimerThread__InfiniteTimer::__get_cancelled() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::System__Net__TimerThread__InfiniteTimer System::Net::System__Net__TimerThread__InfiniteTimer::New_ctor()  {
System::Net::System__Net__TimerThread__InfiniteTimer o{THROW_UNLESS(::il2cpp_utils::New<System::Net::System__Net__TimerThread__InfiniteTimer>())};
return o;
}
 void System::Net::System__Net__TimerThread__InfiniteTimer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__InfiniteTimer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::System__Net__TimerThread__InfiniteTimer::get_HasExpired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__InfiniteTimer>::get(),
                            "get_HasExpired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::System__Net__TimerThread__InfiniteTimer::Cancel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__TimerThread__InfiniteTimer>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Net::TimerThread.CreateQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::System__Net__TimerThread__Queue (*)(int32_t)>(&System::Net::TimerThread::CreateQueue)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x2812b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get(),
                            "CreateQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::TimerThread.GetOrCreateQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::System__Net__TimerThread__Queue (*)(int32_t)>(&System::Net::TimerThread::GetOrCreateQueue)> {
  constexpr static std::size_t size = 0x99c;
  constexpr static std::size_t addrs = 0x281759c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get(),
                            "GetOrCreateQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::TimerThread.Prod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::TimerThread::Prod)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2817f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get(),
                            "Prod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::TimerThread.ThreadProc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::TimerThread::ThreadProc)> {
  constexpr static std::size_t size = 0x7c8;
  constexpr static std::size_t addrs = 0x281804c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get(),
                            "ThreadProc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::TimerThread.StopTimerThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::TimerThread::StopTimerThread)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2818a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get(),
                            "StopTimerThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::TimerThread.IsTickBetween
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, int32_t, int32_t)>(&System::Net::TimerThread::IsTickBetween)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28189e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get(),
                            "IsTickBetween",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::TimerThread.OnDomainUnload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, System::EventArgs)>(&System::Net::TimerThread::OnDomainUnload)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2818a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get(),
                            "OnDomainUnload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::EventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Net::TimerThread::__set_s_Queues(System::Collections::Generic::LinkedList_1<System::WeakReference> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::LinkedList_1<System::WeakReference>, "s_Queues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get>(std::forward<System::Collections::Generic::LinkedList_1<System::WeakReference>>(value));
}
 System::Collections::Generic::LinkedList_1<System::WeakReference> System::Net::TimerThread::__get_s_Queues()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::LinkedList_1<System::WeakReference>, "s_Queues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get>();
}
 void System::Net::TimerThread::__set_s_NewQueues(System::Collections::Generic::LinkedList_1<System::WeakReference> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::LinkedList_1<System::WeakReference>, "s_NewQueues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get>(std::forward<System::Collections::Generic::LinkedList_1<System::WeakReference>>(value));
}
 System::Collections::Generic::LinkedList_1<System::WeakReference> System::Net::TimerThread::__get_s_NewQueues()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::LinkedList_1<System::WeakReference>, "s_NewQueues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get>();
}
 void System::Net::TimerThread::__set_s_ThreadState(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_ThreadState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get>(std::forward<int32_t>(value));
}
 int32_t System::Net::TimerThread::__get_s_ThreadState()  {
return ::cordl_internals::getStaticField<int32_t, "s_ThreadState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get>();
}
 void System::Net::TimerThread::__set_s_ThreadReadyEvent(System::Threading::AutoResetEvent value)  {
::cordl_internals::setStaticField<System::Threading::AutoResetEvent, "s_ThreadReadyEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get>(std::forward<System::Threading::AutoResetEvent>(value));
}
 System::Threading::AutoResetEvent System::Net::TimerThread::__get_s_ThreadReadyEvent()  {
return ::cordl_internals::getStaticField<System::Threading::AutoResetEvent, "s_ThreadReadyEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get>();
}
 void System::Net::TimerThread::__set_s_ThreadShutdownEvent(System::Threading::ManualResetEvent value)  {
::cordl_internals::setStaticField<System::Threading::ManualResetEvent, "s_ThreadShutdownEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get>(std::forward<System::Threading::ManualResetEvent>(value));
}
 System::Threading::ManualResetEvent System::Net::TimerThread::__get_s_ThreadShutdownEvent()  {
return ::cordl_internals::getStaticField<System::Threading::ManualResetEvent, "s_ThreadShutdownEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get>();
}
 void System::Net::TimerThread::__set_s_ThreadEvents(::ArrayW<System::Threading::WaitHandle> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Threading::WaitHandle>, "s_ThreadEvents", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get>(std::forward<::ArrayW<System::Threading::WaitHandle>>(value));
}
 ::ArrayW<System::Threading::WaitHandle> System::Net::TimerThread::__get_s_ThreadEvents()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Threading::WaitHandle>, "s_ThreadEvents", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get>();
}
 void System::Net::TimerThread::__set_s_CacheScanIteration(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_CacheScanIteration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get>(std::forward<int32_t>(value));
}
 int32_t System::Net::TimerThread::__get_s_CacheScanIteration()  {
return ::cordl_internals::getStaticField<int32_t, "s_CacheScanIteration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get>();
}
 void System::Net::TimerThread::__set_s_QueuesCache(System::Collections::Hashtable value)  {
::cordl_internals::setStaticField<System::Collections::Hashtable, "s_QueuesCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get>(std::forward<System::Collections::Hashtable>(value));
}
 System::Collections::Hashtable System::Net::TimerThread::__get_s_QueuesCache()  {
return ::cordl_internals::getStaticField<System::Collections::Hashtable, "s_QueuesCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get>();
}
 System::Net::System__Net__TimerThread__Queue System::Net::TimerThread::CreateQueue(int32_t durationMilliseconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get(),
                            "CreateQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::System__Net__TimerThread__Queue, false>(nullptr, ___internal_method, durationMilliseconds);
}
 System::Net::System__Net__TimerThread__Queue System::Net::TimerThread::GetOrCreateQueue(int32_t durationMilliseconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get(),
                            "GetOrCreateQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::System__Net__TimerThread__Queue, false>(nullptr, ___internal_method, durationMilliseconds);
}
 void System::Net::TimerThread::Prod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get(),
                            "Prod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void System::Net::TimerThread::ThreadProc()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get(),
                            "ThreadProc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void System::Net::TimerThread::StopTimerThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get(),
                            "StopTimerThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 bool System::Net::TimerThread::IsTickBetween(int32_t start, int32_t end, int32_t comparand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get(),
                            "IsTickBetween",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, start, end, comparand);
}
 void System::Net::TimerThread::OnDomainUnload(::bs_hook::Il2CppWrapperType sender, System::EventArgs e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::TimerThread>::get(),
                            "OnDomainUnload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::EventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sender, e);
}
