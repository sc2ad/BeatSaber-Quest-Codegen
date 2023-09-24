#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Zenject/Internal/zzzz__PreserveAttribute_def.hpp"
//  Writing Method size for method: Zenject::Internal::PreserveAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::PreserveAttribute::*)()>(&Zenject::Internal::PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d402b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::PreserveAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 Zenject::Internal::PreserveAttribute Zenject::Internal::PreserveAttribute::New_ctor()  {
Zenject::Internal::PreserveAttribute o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Internal::PreserveAttribute>())};
return o;
}
 void Zenject::Internal::PreserveAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::PreserveAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
