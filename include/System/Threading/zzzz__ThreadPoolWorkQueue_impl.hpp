#pragma once
#include "System/Threading/zzzz__ThreadPoolWorkQueue_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__SpinLock_def.hpp"
#include "System/Threading/zzzz__ThreadPoolWorkQueueThreadLocals_def.hpp"
//  Writing Method size for method: System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue.LocalPush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::*)(System::Threading::IThreadPoolWorkItem)>(&System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::LocalPush)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x24ad4cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue>::get(),
                            "LocalPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::IThreadPoolWorkItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue.LocalFindAndPop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::*)(System::Threading::IThreadPoolWorkItem)>(&System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::LocalFindAndPop)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x24ad970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue>::get(),
                            "LocalFindAndPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::IThreadPoolWorkItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue.LocalPop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::*)(ByRef<System::Threading::IThreadPoolWorkItem>)>(&System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::LocalPop)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x24addfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue>::get(),
                            "LocalPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::IThreadPoolWorkItem>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue.TrySteal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::*)(ByRef<System::Threading::IThreadPoolWorkItem>, ByRef<bool>)>(&System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::TrySteal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24ae070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue>::get(),
                            "TrySteal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::IThreadPoolWorkItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue.TrySteal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::*)(ByRef<System::Threading::IThreadPoolWorkItem>, ByRef<bool>, int32_t)>(&System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::TrySteal)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x24ae558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue>::get(),
                            "TrySteal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::IThreadPoolWorkItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::*)()>(&System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x24ae79c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::__set_m_array(::ArrayW<System::Threading::IThreadPoolWorkItem> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Threading::IThreadPoolWorkItem>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Threading::IThreadPoolWorkItem>>(value));
}
constexpr ::ArrayW<System::Threading::IThreadPoolWorkItem> System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::__get_m_array() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Threading::IThreadPoolWorkItem>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::__set_m_mask(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::__get_m_mask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::__set_m_headIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::__get_m_headIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::__set_m_tailIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::__get_m_tailIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::__set_m_foreignLock(System::Threading::SpinLock value)  {
::cordl_internals::setInstanceField<System::Threading::SpinLock, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::SpinLock>(value));
}
constexpr System::Threading::SpinLock System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::__get_m_foreignLock() const {
return ::cordl_internals::getInstanceField<System::Threading::SpinLock, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::LocalPush(System::Threading::IThreadPoolWorkItem obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue>::get(),
                            "LocalPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::IThreadPoolWorkItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::LocalFindAndPop(System::Threading::IThreadPoolWorkItem obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue>::get(),
                            "LocalFindAndPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::IThreadPoolWorkItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::LocalPop(ByRef<System::Threading::IThreadPoolWorkItem> obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue>::get(),
                            "LocalPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::IThreadPoolWorkItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 bool System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::TrySteal(ByRef<System::Threading::IThreadPoolWorkItem> obj, ByRef<bool> missedSteal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue>::get(),
                            "TrySteal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::IThreadPoolWorkItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj, missedSteal);
}
 bool System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::TrySteal(ByRef<System::Threading::IThreadPoolWorkItem> obj, ByRef<bool> missedSteal, int32_t millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue>::get(),
                            "TrySteal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::IThreadPoolWorkItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj, missedSteal, millisecondsTimeout);
}
// Ctor Parameters []
 System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Threading__ThreadPoolWorkQueue__WorkStealingQueue>())) {}
 void System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment.GetIndexes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::*)(ByRef<int32_t>, ByRef<int32_t>)>(&System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::GetIndexes)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x24ae81c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment>::get(),
                            "GetIndexes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment.CompareExchangeIndexes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::*)(ByRef<int32_t>, int32_t, ByRef<int32_t>, int32_t)>(&System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::CompareExchangeIndexes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x24ae850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment>::get(),
                            "CompareExchangeIndexes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::*)()>(&System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x24ae8bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment.IsUsedUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::*)()>(&System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::IsUsedUp)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x24ae918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment>::get(),
                            "IsUsedUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment.TryEnqueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::*)(System::Threading::IThreadPoolWorkItem)>(&System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::TryEnqueue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x24ae95c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment>::get(),
                            "TryEnqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::IThreadPoolWorkItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment.TryDequeue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::*)(ByRef<System::Threading::IThreadPoolWorkItem>)>(&System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::TryDequeue)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x24aea08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment>::get(),
                            "TryDequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::IThreadPoolWorkItem>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::__set_nodes(::ArrayW<System::Threading::IThreadPoolWorkItem> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Threading::IThreadPoolWorkItem>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Threading::IThreadPoolWorkItem>>(value));
}
constexpr ::ArrayW<System::Threading::IThreadPoolWorkItem> System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::__get_nodes() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Threading::IThreadPoolWorkItem>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::__set_indexes(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::__get_indexes() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::__set_Next(System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment value)  {
::cordl_internals::setInstanceField<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment>(value));
}
constexpr System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::__get_Next() const {
return ::cordl_internals::getInstanceField<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::GetIndexes(ByRef<int32_t> upper, ByRef<int32_t> lower)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment>::get(),
                            "GetIndexes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, upper, lower);
}
 bool System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::CompareExchangeIndexes(ByRef<int32_t> prevUpper, int32_t newUpper, ByRef<int32_t> prevLower, int32_t newLower)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment>::get(),
                            "CompareExchangeIndexes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, prevUpper, newUpper, prevLower, newLower);
}
// Ctor Parameters []
 System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::System__Threading__ThreadPoolWorkQueue__QueueSegment()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Threading__ThreadPoolWorkQueue__QueueSegment>())) {}
 void System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::IsUsedUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment>::get(),
                            "IsUsedUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::TryEnqueue(System::Threading::IThreadPoolWorkItem node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment>::get(),
                            "TryEnqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::IThreadPoolWorkItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, node);
}
 bool System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment::TryDequeue(ByRef<System::Threading::IThreadPoolWorkItem> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment>::get(),
                            "TryDequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::IThreadPoolWorkItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, node);
}
//  Writing Method size for method: System::Threading::ThreadPoolWorkQueue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueue::*)()>(&System::Threading::ThreadPoolWorkQueue::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x24ad19c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::ThreadPoolWorkQueue.EnsureCurrentThreadHasQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::ThreadPoolWorkQueueThreadLocals (System::Threading::ThreadPoolWorkQueue::*)()>(&System::Threading::ThreadPoolWorkQueue::EnsureCurrentThreadHasQueue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24ad214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueue>::get(),
                            "EnsureCurrentThreadHasQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::ThreadPoolWorkQueue.EnsureThreadRequested
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueue::*)()>(&System::Threading::ThreadPoolWorkQueue::EnsureThreadRequested)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x24ad2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueue>::get(),
                            "EnsureThreadRequested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::ThreadPoolWorkQueue.MarkThreadRequestSatisfied
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueue::*)()>(&System::Threading::ThreadPoolWorkQueue::MarkThreadRequestSatisfied)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x24ad344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueue>::get(),
                            "MarkThreadRequestSatisfied",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::ThreadPoolWorkQueue.Enqueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueue::*)(System::Threading::IThreadPoolWorkItem, bool)>(&System::Threading::ThreadPoolWorkQueue::Enqueue)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x24ad390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueue>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::IThreadPoolWorkItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::ThreadPoolWorkQueue.LocalFindAndPop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ThreadPoolWorkQueue::*)(System::Threading::IThreadPoolWorkItem)>(&System::Threading::ThreadPoolWorkQueue::LocalFindAndPop)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24ad900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueue>::get(),
                            "LocalFindAndPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::IThreadPoolWorkItem>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::ThreadPoolWorkQueue.Dequeue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueue::*)(System::Threading::ThreadPoolWorkQueueThreadLocals, ByRef<System::Threading::IThreadPoolWorkItem>, ByRef<bool>)>(&System::Threading::ThreadPoolWorkQueue::Dequeue)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x24adc2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueue>::get(),
                            "Dequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ThreadPoolWorkQueueThreadLocals>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::IThreadPoolWorkItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::ThreadPoolWorkQueue.Dispatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Threading::ThreadPoolWorkQueue::Dispatch)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x24ae078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueue>::get(),
                            "Dispatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::ThreadPoolWorkQueue::__set_queueHead(System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment value)  {
::cordl_internals::setInstanceField<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment>(value));
}
constexpr System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment System::Threading::ThreadPoolWorkQueue::__get_queueHead() const {
return ::cordl_internals::getInstanceField<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::ThreadPoolWorkQueue::__set_queueTail(System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment value)  {
::cordl_internals::setInstanceField<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment>(value));
}
constexpr System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment System::Threading::ThreadPoolWorkQueue::__get_queueTail() const {
return ::cordl_internals::getInstanceField<System::Threading::System__Threading__ThreadPoolWorkQueue__QueueSegment, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Threading::ThreadPoolWorkQueue::__set_allThreadQueues(System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue> value)  {
::cordl_internals::setStaticField<System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue>, "allThreadQueues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueue>::get>(std::forward<System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue>>(value));
}
 System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue> System::Threading::ThreadPoolWorkQueue::__get_allThreadQueues()  {
return ::cordl_internals::getStaticField<System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue>, "allThreadQueues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueue>::get>();
}
constexpr void System::Threading::ThreadPoolWorkQueue::__set_numOutstandingThreadRequests(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::ThreadPoolWorkQueue::__get_numOutstandingThreadRequests() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Threading::ThreadPoolWorkQueue::ThreadPoolWorkQueue()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ThreadPoolWorkQueue>())) {}
 void System::Threading::ThreadPoolWorkQueue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::ThreadPoolWorkQueueThreadLocals System::Threading::ThreadPoolWorkQueue::EnsureCurrentThreadHasQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueue>::get(),
                            "EnsureCurrentThreadHasQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::ThreadPoolWorkQueueThreadLocals, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::ThreadPoolWorkQueue::EnsureThreadRequested()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueue>::get(),
                            "EnsureThreadRequested",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::ThreadPoolWorkQueue::MarkThreadRequestSatisfied()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueue>::get(),
                            "MarkThreadRequestSatisfied",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::ThreadPoolWorkQueue::Enqueue(System::Threading::IThreadPoolWorkItem callback, bool forceGlobal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueue>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::IThreadPoolWorkItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback, forceGlobal);
}
 bool System::Threading::ThreadPoolWorkQueue::LocalFindAndPop(System::Threading::IThreadPoolWorkItem callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueue>::get(),
                            "LocalFindAndPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::IThreadPoolWorkItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, callback);
}
 void System::Threading::ThreadPoolWorkQueue::Dequeue(System::Threading::ThreadPoolWorkQueueThreadLocals tl, ByRef<System::Threading::IThreadPoolWorkItem> callback, ByRef<bool> missedSteal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueue>::get(),
                            "Dequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ThreadPoolWorkQueueThreadLocals>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Threading::IThreadPoolWorkItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tl, callback, missedSteal);
}
 bool System::Threading::ThreadPoolWorkQueue::Dispatch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueue>::get(),
                            "Dispatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1::*)(int32_t)>(&System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<T> (System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1::*)()>(&System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1::get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1::*)(T)>(&System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1::*)(T)>(&System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1::__set_m_array(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1::__get_m_array() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "initialSize", ty: "int32_t", modifiers: "", def_value: None }]
 System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1::System__Threading__ThreadPoolWorkQueue__SparseArray_1(int32_t initialSize)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Threading__ThreadPoolWorkQueue__SparseArray_1>(initialSize))) {}
 void System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1::_ctor(int32_t initialSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initialSize);
}
 ::ArrayW<T> System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1::Add(T e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1::Remove(T e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::System__Threading__ThreadPoolWorkQueue__SparseArray_1>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
