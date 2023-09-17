#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__SpawnChevronObjectPoolsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationChevron_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpawnChevronObjectPoolsInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnChevronObjectPoolsInstaller::*)()>(&::GlobalNamespace::SpawnChevronObjectPoolsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x226a5e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SpawnChevronObjectPoolsInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnChevronObjectPoolsInstaller>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnChevronObjectPoolsInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnChevronObjectPoolsInstaller::*)()>(&::GlobalNamespace::SpawnChevronObjectPoolsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226a66c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnChevronObjectPoolsInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::SpawnChevronObjectPoolsInstaller::__set__spawnRotationChevronPrefab(::GlobalNamespace::SpawnRotationChevron value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SpawnRotationChevron, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::SpawnRotationChevron>(value));
}
constexpr ::GlobalNamespace::SpawnRotationChevron ::GlobalNamespace::SpawnChevronObjectPoolsInstaller::__get__spawnRotationChevronPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SpawnRotationChevron, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::SpawnChevronObjectPoolsInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnChevronObjectPoolsInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::SpawnChevronObjectPoolsInstaller::SpawnChevronObjectPoolsInstaller()  : ::Zenject::MonoInstaller(THROW_UNLESS(::il2cpp_utils::New<SpawnChevronObjectPoolsInstaller>())) {}
 void ::GlobalNamespace::SpawnChevronObjectPoolsInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnChevronObjectPoolsInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
