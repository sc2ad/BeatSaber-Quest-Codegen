#pragma once
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
//  Writing Method size for method: System::Collections::Generic::IComparer_1.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Collections::Generic::IComparer_1::*)(T, T)>(&System::Collections::Generic::IComparer_1::Compare)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Collections::Generic::IComparer_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::IComparer_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 int32_t System::Collections::Generic::IComparer_1::Compare(T x, T y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Collections::Generic::IComparer_1>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x, y);
}
