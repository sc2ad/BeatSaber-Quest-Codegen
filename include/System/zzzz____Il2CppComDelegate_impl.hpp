#pragma once
#include "System/zzzz____Il2CppComObject_impl.hpp"
#include "System/zzzz____Il2CppComDelegate_def.hpp"
//  Writing Method size for method: System::__Il2CppComDelegate.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::__Il2CppComDelegate::*)()>(&System::__Il2CppComDelegate::Finalize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x2db01ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::__Il2CppComDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::__Il2CppComDelegate>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void System::__Il2CppComDelegate::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::__Il2CppComDelegate>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
