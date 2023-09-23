#pragma once
#include "Zenject/zzzz__ILateDisposable_def.hpp"
//  Writing Method size for method: Zenject::ILateDisposable.LateDispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ILateDisposable::*)()>(&Zenject::ILateDisposable::LateDispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::ILateDisposable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ILateDisposable>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void Zenject::ILateDisposable::LateDispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ILateDisposable>::get(),
                            "LateDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
