#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BufferedLightColorGroupEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
#include "GlobalNamespace/zzzz__BufferedLightColorGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: GlobalNamespace::BufferedLightColorGroupEffectManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BufferedLightColorGroupEffectManager::*)()>(&GlobalNamespace::BufferedLightColorGroupEffectManager::Start)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x225c9c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BufferedLightColorGroupEffectManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BufferedLightColorGroupEffectManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BufferedLightColorGroupEffectManager::*)()>(&GlobalNamespace::BufferedLightColorGroupEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x225cb80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BufferedLightColorGroupEffectManager>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BufferedLightColorGroupEffectManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BufferedLightColorGroupEffectManager::*)()>(&GlobalNamespace::BufferedLightColorGroupEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x225cbdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BufferedLightColorGroupEffectManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BufferedLightColorGroupEffectManager::__set__lightGroups(::ArrayW<GlobalNamespace::LightGroup> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::LightGroup>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::LightGroup>>(value));
}
constexpr ::ArrayW<GlobalNamespace::LightGroup> GlobalNamespace::BufferedLightColorGroupEffectManager::__get__lightGroups() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::LightGroup>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffectManager::__set__materialPropertyBlockControllers(::ArrayW<GlobalNamespace::MaterialPropertyBlockController> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::MaterialPropertyBlockController>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::MaterialPropertyBlockController>>(value));
}
constexpr ::ArrayW<GlobalNamespace::MaterialPropertyBlockController> GlobalNamespace::BufferedLightColorGroupEffectManager::__get__materialPropertyBlockControllers() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::MaterialPropertyBlockController>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffectManager::__set__container(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer GlobalNamespace::BufferedLightColorGroupEffectManager::__get__container() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffectManager::__set__bufferedLightColorGroupEffects(::ArrayW<GlobalNamespace::BufferedLightColorGroupEffect> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::BufferedLightColorGroupEffect>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::BufferedLightColorGroupEffect>>(value));
}
constexpr ::ArrayW<GlobalNamespace::BufferedLightColorGroupEffect> GlobalNamespace::BufferedLightColorGroupEffectManager::__get__bufferedLightColorGroupEffects() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::BufferedLightColorGroupEffect>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::BufferedLightColorGroupEffectManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BufferedLightColorGroupEffectManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BufferedLightColorGroupEffectManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BufferedLightColorGroupEffectManager>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::BufferedLightColorGroupEffectManager::BufferedLightColorGroupEffectManager()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<BufferedLightColorGroupEffectManager>())) {}
 void GlobalNamespace::BufferedLightColorGroupEffectManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BufferedLightColorGroupEffectManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
