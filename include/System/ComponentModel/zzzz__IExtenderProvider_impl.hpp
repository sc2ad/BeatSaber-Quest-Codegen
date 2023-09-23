#pragma once
#include "System/ComponentModel/zzzz__IExtenderProvider_def.hpp"
//  Writing Method size for method: System::ComponentModel::IExtenderProvider.CanExtend
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::IExtenderProvider::*)(::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::IExtenderProvider::CanExtend)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::IExtenderProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::IExtenderProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 bool System::ComponentModel::IExtenderProvider::CanExtend(::bs_hook::Il2CppWrapperType extendee)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::IExtenderProvider>::get(),
                            "CanExtend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, extendee);
}
