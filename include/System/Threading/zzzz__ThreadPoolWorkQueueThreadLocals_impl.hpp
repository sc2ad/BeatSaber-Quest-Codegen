#pragma once
#include "System/Threading/zzzz__ThreadPoolWorkQueueThreadLocals_def.hpp"
#include "System/Threading/zzzz__ThreadPoolWorkQueue_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: System::Threading::ThreadPoolWorkQueueThreadLocals._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueueThreadLocals::*)(System::Threading::ThreadPoolWorkQueue)>(&System::Threading::ThreadPoolWorkQueueThreadLocals::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x24aeaf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueueThreadLocals>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ThreadPoolWorkQueue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::ThreadPoolWorkQueueThreadLocals.CleanUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueueThreadLocals::*)()>(&System::Threading::ThreadPoolWorkQueueThreadLocals::CleanUp)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x24aec10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueueThreadLocals>::get(),
                            "CleanUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::ThreadPoolWorkQueueThreadLocals.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueueThreadLocals::*)()>(&System::Threading::ThreadPoolWorkQueueThreadLocals::Finalize)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x24aece4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::ThreadPoolWorkQueueThreadLocals),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueueThreadLocals>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void System::Threading::ThreadPoolWorkQueueThreadLocals::__set_threadLocals(System::Threading::ThreadPoolWorkQueueThreadLocals value)  {
::cordl_internals::setStaticField<System::Threading::ThreadPoolWorkQueueThreadLocals, "threadLocals", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueueThreadLocals>::get>(std::forward<System::Threading::ThreadPoolWorkQueueThreadLocals>(value));
}
 System::Threading::ThreadPoolWorkQueueThreadLocals System::Threading::ThreadPoolWorkQueueThreadLocals::__get_threadLocals()  {
return ::cordl_internals::getStaticField<System::Threading::ThreadPoolWorkQueueThreadLocals, "threadLocals", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueueThreadLocals>::get>();
}
constexpr void System::Threading::ThreadPoolWorkQueueThreadLocals::__set_workQueue(System::Threading::ThreadPoolWorkQueue value)  {
::cordl_internals::setInstanceField<System::Threading::ThreadPoolWorkQueue, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::ThreadPoolWorkQueue>(value));
}
constexpr System::Threading::ThreadPoolWorkQueue System::Threading::ThreadPoolWorkQueueThreadLocals::__get_workQueue() const {
return ::cordl_internals::getInstanceField<System::Threading::ThreadPoolWorkQueue, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::ThreadPoolWorkQueueThreadLocals::__set_workStealingQueue(System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue value)  {
::cordl_internals::setInstanceField<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue>(value));
}
constexpr System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue System::Threading::ThreadPoolWorkQueueThreadLocals::__get_workStealingQueue() const {
return ::cordl_internals::getInstanceField<System::Threading::System__Threading__ThreadPoolWorkQueue__WorkStealingQueue, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::ThreadPoolWorkQueueThreadLocals::__set_random(System::Random value)  {
::cordl_internals::setInstanceField<System::Random, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Random>(value));
}
constexpr System::Random System::Threading::ThreadPoolWorkQueueThreadLocals::__get_random() const {
return ::cordl_internals::getInstanceField<System::Random, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::ThreadPoolWorkQueueThreadLocals System::Threading::ThreadPoolWorkQueueThreadLocals::New_ctor(System::Threading::ThreadPoolWorkQueue tpq)  {
System::Threading::ThreadPoolWorkQueueThreadLocals o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::ThreadPoolWorkQueueThreadLocals>(tpq))};
return o;
}
 void System::Threading::ThreadPoolWorkQueueThreadLocals::_ctor(System::Threading::ThreadPoolWorkQueue tpq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueueThreadLocals>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ThreadPoolWorkQueue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tpq);
}
 void System::Threading::ThreadPoolWorkQueueThreadLocals::CleanUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueueThreadLocals>::get(),
                            "CleanUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::ThreadPoolWorkQueueThreadLocals::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::ThreadPoolWorkQueueThreadLocals>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
