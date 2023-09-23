#pragma once
#include "System/zzzz____Il2CppComObject_def.hpp"
//  Writing Method size for method: System::__Il2CppComObject.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::__Il2CppComObject::*)()>(&System::__Il2CppComObject::Finalize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2db0170;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::__Il2CppComObject),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::__Il2CppComObject>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void System::__Il2CppComObject::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::__Il2CppComObject>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
