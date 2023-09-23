#pragma once
#include "System/ComponentModel/Design/zzzz__IComponentChangeService_def.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
//  Writing Method size for method: System::ComponentModel::Design::IComponentChangeService.OnComponentChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::Design::IComponentChangeService::*)(::bs_hook::Il2CppWrapperType, System::ComponentModel::MemberDescriptor, ::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::Design::IComponentChangeService::OnComponentChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::Design::IComponentChangeService),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::Design::IComponentChangeService>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::Design::IComponentChangeService.OnComponentChanging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::Design::IComponentChangeService::*)(::bs_hook::Il2CppWrapperType, System::ComponentModel::MemberDescriptor)>(&System::ComponentModel::Design::IComponentChangeService::OnComponentChanging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::Design::IComponentChangeService),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::Design::IComponentChangeService>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void System::ComponentModel::Design::IComponentChangeService::OnComponentChanged(::bs_hook::Il2CppWrapperType component, System::ComponentModel::MemberDescriptor member, ::bs_hook::Il2CppWrapperType oldValue, ::bs_hook::Il2CppWrapperType newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::Design::IComponentChangeService>::get(),
                            "OnComponentChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::MemberDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, component, member, oldValue, newValue);
}
 void System::ComponentModel::Design::IComponentChangeService::OnComponentChanging(::bs_hook::Il2CppWrapperType component, System::ComponentModel::MemberDescriptor member)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::Design::IComponentChangeService>::get(),
                            "OnComponentChanging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::MemberDescriptor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, component, member);
}
