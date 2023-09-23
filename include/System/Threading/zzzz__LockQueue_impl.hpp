#pragma once
#include "System/Threading/zzzz__LockQueue_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLock_def.hpp"
//  Writing Method size for method: System::Threading::LockQueue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::LockQueue::*)(System::Threading::ReaderWriterLock)>(&System::Threading::LockQueue::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24b0a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::LockQueue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ReaderWriterLock>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::LockQueue.Wait
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::LockQueue::*)(int32_t)>(&System::Threading::LockQueue::Wait)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x24b0ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::LockQueue>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::LockQueue.get_IsEmpty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::LockQueue::*)()>(&System::Threading::LockQueue::get_IsEmpty)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x24b0c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::LockQueue>::get(),
                            "get_IsEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::LockQueue.Pulse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::LockQueue::*)()>(&System::Threading::LockQueue::Pulse)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x24b0d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::LockQueue>::get(),
                            "Pulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::LockQueue::__set_rwlock(System::Threading::ReaderWriterLock value)  {
::cordl_internals::setInstanceField<System::Threading::ReaderWriterLock, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::ReaderWriterLock>(value));
}
constexpr System::Threading::ReaderWriterLock System::Threading::LockQueue::__get_rwlock() const {
return ::cordl_internals::getInstanceField<System::Threading::ReaderWriterLock, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::LockQueue::__set_lockCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::LockQueue::__get_lockCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "rwlock", ty: "System::Threading::ReaderWriterLock", modifiers: "", def_value: None }]
 System::Threading::LockQueue::LockQueue(System::Threading::ReaderWriterLock rwlock)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LockQueue>(rwlock))) {}
 void System::Threading::LockQueue::_ctor(System::Threading::ReaderWriterLock rwlock)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::LockQueue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ReaderWriterLock>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rwlock);
}
 bool System::Threading::LockQueue::Wait(int32_t timeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::LockQueue>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, timeout);
}
 bool System::Threading::LockQueue::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::LockQueue>::get(),
                            "get_IsEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::LockQueue::Pulse()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::LockQueue>::get(),
                            "Pulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
