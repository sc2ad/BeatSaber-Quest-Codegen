#pragma once
#include "System/ComponentModel/zzzz__ISynchronizeInvoke_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
//  Writing Method size for method: System::ComponentModel::ISynchronizeInvoke.get_InvokeRequired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ISynchronizeInvoke::*)()>(&System::ComponentModel::ISynchronizeInvoke::get_InvokeRequired)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::ISynchronizeInvoke),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ISynchronizeInvoke>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::ISynchronizeInvoke.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::ComponentModel::ISynchronizeInvoke::*)(System::Delegate, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&System::ComponentModel::ISynchronizeInvoke::BeginInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::ISynchronizeInvoke),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ISynchronizeInvoke>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 bool System::ComponentModel::ISynchronizeInvoke::get_InvokeRequired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ISynchronizeInvoke>::get(),
                            "get_InvokeRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult System::ComponentModel::ISynchronizeInvoke::BeginInvoke(System::Delegate method, ::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ISynchronizeInvoke>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, method, args);
}
