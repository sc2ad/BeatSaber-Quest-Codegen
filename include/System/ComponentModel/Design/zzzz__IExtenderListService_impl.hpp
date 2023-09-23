#pragma once
#include "System/ComponentModel/Design/zzzz__IExtenderListService_def.hpp"
#include "System/ComponentModel/zzzz__IExtenderProvider_def.hpp"
//  Writing Method size for method: System::ComponentModel::Design::IExtenderListService.GetExtenderProviders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::ComponentModel::IExtenderProvider> (System::ComponentModel::Design::IExtenderListService::*)()>(&System::ComponentModel::Design::IExtenderListService::GetExtenderProviders)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::Design::IExtenderListService),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::Design::IExtenderListService>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::ArrayW<System::ComponentModel::IExtenderProvider> System::ComponentModel::Design::IExtenderListService::GetExtenderProviders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::Design::IExtenderListService>::get(),
                            "GetExtenderProviders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::ComponentModel::IExtenderProvider>, false>(const_cast<void*>(instance), ___internal_method);
}
