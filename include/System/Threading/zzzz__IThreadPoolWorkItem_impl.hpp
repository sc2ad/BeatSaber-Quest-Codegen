#pragma once
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
//  Writing Method size for method: System::Threading::IThreadPoolWorkItem.ExecuteWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::IThreadPoolWorkItem::*)()>(&System::Threading::IThreadPoolWorkItem::ExecuteWorkItem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::IThreadPoolWorkItem),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::IThreadPoolWorkItem>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::IThreadPoolWorkItem.MarkAborted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::IThreadPoolWorkItem::*)(System::Threading::ThreadAbortException)>(&System::Threading::IThreadPoolWorkItem::MarkAborted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::IThreadPoolWorkItem),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::IThreadPoolWorkItem>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void System::Threading::IThreadPoolWorkItem::ExecuteWorkItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::IThreadPoolWorkItem>::get(),
                            "ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::IThreadPoolWorkItem::MarkAborted(System::Threading::ThreadAbortException tae)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::IThreadPoolWorkItem>::get(),
                            "MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ThreadAbortException>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tae);
}
