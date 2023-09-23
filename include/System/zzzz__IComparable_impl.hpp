#pragma once
#include "System/zzzz__IComparable_def.hpp"
//  Writing Method size for method: System::IComparable.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::IComparable::*)(::bs_hook::Il2CppWrapperType)>(&System::IComparable::CompareTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IComparable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IComparable>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 int32_t System::IComparable::CompareTo(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IComparable>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, obj);
}
