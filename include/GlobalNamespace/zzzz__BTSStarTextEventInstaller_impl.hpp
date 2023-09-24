#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__BTSStarTextEventInstaller_def.hpp"
#include "GlobalNamespace/zzzz__BTSStarTextEffectController_def.hpp"
//  Writing Method size for method: GlobalNamespace::BTSStarTextEventInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSStarTextEventInstaller::*)()>(&GlobalNamespace::BTSStarTextEventInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x20ab41c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BTSStarTextEventInstaller),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSStarTextEventInstaller>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BTSStarTextEventInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSStarTextEventInstaller::*)()>(&GlobalNamespace::BTSStarTextEventInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20ab4a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSStarTextEventInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BTSStarTextEventInstaller::__set__btsStarTextEffectController(GlobalNamespace::BTSStarTextEffectController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BTSStarTextEffectController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BTSStarTextEffectController>(value));
}
constexpr GlobalNamespace::BTSStarTextEffectController GlobalNamespace::BTSStarTextEventInstaller::__get__btsStarTextEffectController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BTSStarTextEffectController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::BTSStarTextEventInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSStarTextEventInstaller>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BTSStarTextEventInstaller GlobalNamespace::BTSStarTextEventInstaller::New_ctor()  {
GlobalNamespace::BTSStarTextEventInstaller o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::BTSStarTextEventInstaller>())};
return o;
}
 void GlobalNamespace::BTSStarTextEventInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSStarTextEventInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
