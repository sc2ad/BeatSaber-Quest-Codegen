#pragma once
namespace {
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::System::IComparable_1.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IComparable_1::*)(T)>(&::System::IComparable_1::CompareTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::IComparable_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IComparable_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 int32_t ::System::IComparable_1::CompareTo(T other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IComparable_1>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, other);
}
} // end anonymous namespace
