#pragma once
#include "Zenject/zzzz__IInstaller_def.hpp"
//  Writing Method size for method: Zenject::IInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IInstaller::*)()>(&Zenject::IInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::IInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IInstaller>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::IInstaller.get_IsEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::IInstaller::*)()>(&Zenject::IInstaller::get_IsEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::IInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IInstaller>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void Zenject::IInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Zenject::IInstaller::get_IsEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IInstaller>::get(),
                            "get_IsEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
