#pragma once
namespace {
#include "System/zzzz__IServiceProvider_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::IServiceProvider.GetService
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::IServiceProvider::*)(::System::Type)>(&::System::IServiceProvider::GetService)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::IServiceProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IServiceProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::bs_hook::Il2CppWrapperType ::System::IServiceProvider::GetService(::System::Type serviceType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IServiceProvider>::get(),
                            "GetService",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, serviceType);
}
} // end anonymous namespace
