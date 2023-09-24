#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__FireworksItemPoolInstaller_def.hpp"
#include "GlobalNamespace/zzzz__FireworksController_def.hpp"
#include "GlobalNamespace/zzzz__FireworkItemController_def.hpp"
//  Writing Method size for method: GlobalNamespace::FireworksItemPoolInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworksItemPoolInstaller::*)()>(&GlobalNamespace::FireworksItemPoolInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2250164;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::FireworksItemPoolInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworksItemPoolInstaller>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FireworksItemPoolInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FireworksItemPoolInstaller::*)()>(&GlobalNamespace::FireworksItemPoolInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22501f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworksItemPoolInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FireworksItemPoolInstaller::__set__fireworksController(GlobalNamespace::FireworksController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FireworksController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FireworksController>(value));
}
constexpr GlobalNamespace::FireworksController GlobalNamespace::FireworksItemPoolInstaller::__get__fireworksController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FireworksController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FireworksItemPoolInstaller::__set__fireworkItemControllerPrefab(GlobalNamespace::FireworkItemController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FireworkItemController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FireworkItemController>(value));
}
constexpr GlobalNamespace::FireworkItemController GlobalNamespace::FireworksItemPoolInstaller::__get__fireworkItemControllerPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FireworkItemController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::FireworksItemPoolInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworksItemPoolInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::FireworksItemPoolInstaller GlobalNamespace::FireworksItemPoolInstaller::New_ctor()  {
GlobalNamespace::FireworksItemPoolInstaller o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::FireworksItemPoolInstaller>())};
return o;
}
 void GlobalNamespace::FireworksItemPoolInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FireworksItemPoolInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
