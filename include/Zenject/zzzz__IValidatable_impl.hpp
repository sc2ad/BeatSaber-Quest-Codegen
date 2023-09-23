#pragma once
#include "Zenject/zzzz__IValidatable_def.hpp"
//  Writing Method size for method: Zenject::IValidatable.Validate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IValidatable::*)()>(&Zenject::IValidatable::Validate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::IValidatable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IValidatable>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void Zenject::IValidatable::Validate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IValidatable>::get(),
                            "Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
