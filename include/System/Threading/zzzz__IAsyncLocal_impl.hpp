#pragma once
#include "System/Threading/zzzz__IAsyncLocal_def.hpp"
//  Writing Method size for method: System::Threading::IAsyncLocal.OnValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::IAsyncLocal::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType, bool)>(&System::Threading::IAsyncLocal::OnValueChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::IAsyncLocal),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::IAsyncLocal>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void System::Threading::IAsyncLocal::OnValueChanged(::bs_hook::Il2CppWrapperType previousValue, ::bs_hook::Il2CppWrapperType currentValue, bool contextChanged)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::IAsyncLocal>::get(),
                            "OnValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, previousValue, currentValue, contextChanged);
}
