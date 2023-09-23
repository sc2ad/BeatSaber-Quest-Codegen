#pragma once
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
//  Writing Method size for method: System::Runtime::CompilerServices::ITuple.get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Runtime::CompilerServices::ITuple::*)()>(&System::Runtime::CompilerServices::ITuple::get_Length)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::CompilerServices::ITuple),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ITuple>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 int32_t System::Runtime::CompilerServices::ITuple::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::ITuple>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
