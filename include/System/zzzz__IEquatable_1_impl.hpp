#pragma once
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: System::IEquatable_1.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IEquatable_1::*)(T)>(&System::IEquatable_1::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::IEquatable_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IEquatable_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 bool System::IEquatable_1::Equals(T other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IEquatable_1>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
