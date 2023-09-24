#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Zenject/zzzz__NoReflectionBakingAttribute_def.hpp"
//  Writing Method size for method: Zenject::NoReflectionBakingAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::NoReflectionBakingAttribute::*)()>(&Zenject::NoReflectionBakingAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d414cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::NoReflectionBakingAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 Zenject::NoReflectionBakingAttribute Zenject::NoReflectionBakingAttribute::New_ctor()  {
Zenject::NoReflectionBakingAttribute o{THROW_UNLESS(::il2cpp_utils::New<Zenject::NoReflectionBakingAttribute>())};
return o;
}
 void Zenject::NoReflectionBakingAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::NoReflectionBakingAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
