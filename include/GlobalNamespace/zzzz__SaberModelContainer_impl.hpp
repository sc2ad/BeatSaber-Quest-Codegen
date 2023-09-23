#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SaberModelContainer_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__SaberModelController_def.hpp"
//  Writing Method size for method: GlobalNamespace::SaberModelContainer.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberModelContainer::*)()>(&GlobalNamespace::SaberModelContainer::Start)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x210c368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SaberModelContainer>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SaberModelContainer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberModelContainer::*)()>(&GlobalNamespace::SaberModelContainer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210c6dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SaberModelContainer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SaberModelContainer::__set__saber(GlobalNamespace::Saber value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Saber, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Saber>(value));
}
constexpr GlobalNamespace::Saber GlobalNamespace::SaberModelContainer::__get__saber() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Saber, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SaberModelContainer::__set__saberModelControllerPrefab(GlobalNamespace::SaberModelController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SaberModelController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SaberModelController>(value));
}
constexpr GlobalNamespace::SaberModelController GlobalNamespace::SaberModelContainer::__get__saberModelControllerPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SaberModelController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SaberModelContainer::__set__container(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer GlobalNamespace::SaberModelContainer::__get__container() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SaberModelContainer::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SaberModelContainer>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::SaberModelContainer::SaberModelContainer()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<SaberModelContainer>())) {}
 void GlobalNamespace::SaberModelContainer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SaberModelContainer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
