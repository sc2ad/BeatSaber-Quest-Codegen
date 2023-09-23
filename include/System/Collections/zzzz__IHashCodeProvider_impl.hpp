#pragma once
#include "System/Collections/zzzz__IHashCodeProvider_def.hpp"
//  Writing Method size for method: System::Collections::IHashCodeProvider.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Collections::IHashCodeProvider::*)(::bs_hook::Il2CppWrapperType)>(&System::Collections::IHashCodeProvider::GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::IHashCodeProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::IHashCodeProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 int32_t System::Collections::IHashCodeProvider::GetHashCode(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::IHashCodeProvider>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
