#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetPSSaberGlowColor_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberTypeObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: GlobalNamespace::SetPSSaberGlowColor.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetPSSaberGlowColor::*)()>(&GlobalNamespace::SetPSSaberGlowColor::Start)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x210ca30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SetPSSaberGlowColor>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SetPSSaberGlowColor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetPSSaberGlowColor::*)()>(&GlobalNamespace::SetPSSaberGlowColor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210cab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SetPSSaberGlowColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SetPSSaberGlowColor::__set__saber(GlobalNamespace::SaberTypeObject value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SaberTypeObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SaberTypeObject>(value));
}
constexpr GlobalNamespace::SaberTypeObject GlobalNamespace::SetPSSaberGlowColor::__get__saber() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SaberTypeObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SetPSSaberGlowColor::__set__colorManager(GlobalNamespace::ColorManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorManager>(value));
}
constexpr GlobalNamespace::ColorManager GlobalNamespace::SetPSSaberGlowColor::__get__colorManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SetPSSaberGlowColor::__set__particleSystem(UnityEngine::ParticleSystem value)  {
::cordl_internals::setInstanceField<UnityEngine::ParticleSystem, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ParticleSystem>(value));
}
constexpr UnityEngine::ParticleSystem GlobalNamespace::SetPSSaberGlowColor::__get__particleSystem() const {
return ::cordl_internals::getInstanceField<UnityEngine::ParticleSystem, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SetPSSaberGlowColor::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SetPSSaberGlowColor>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::SetPSSaberGlowColor::SetPSSaberGlowColor()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<SetPSSaberGlowColor>())) {}
 void GlobalNamespace::SetPSSaberGlowColor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SetPSSaberGlowColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
