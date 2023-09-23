#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EffectPoolsManualInstaller_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutSoundEffect_def.hpp"
#include "GlobalNamespace/zzzz__FlyingSpriteEffect_def.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatEffect_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__BombCutSoundEffect_def.hpp"
#include "GlobalNamespace/zzzz__FlyingTextEffect_def.hpp"
//  Writing Method size for method: GlobalNamespace::EffectPoolsManualInstaller.ManualInstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EffectPoolsManualInstaller::*)(Zenject::DiContainer, bool)>(&GlobalNamespace::EffectPoolsManualInstaller::ManualInstallBindings)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x21177e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EffectPoolsManualInstaller>::get(),
                            "ManualInstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EffectPoolsManualInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EffectPoolsManualInstaller::*)()>(&GlobalNamespace::EffectPoolsManualInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2117a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EffectPoolsManualInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__set__flyingTextEffectPrefab(GlobalNamespace::FlyingTextEffect value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FlyingTextEffect, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FlyingTextEffect>(value));
}
constexpr GlobalNamespace::FlyingTextEffect GlobalNamespace::EffectPoolsManualInstaller::__get__flyingTextEffectPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FlyingTextEffect, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__set__flyingScoreEffectPrefab(GlobalNamespace::FlyingScoreEffect value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FlyingScoreEffect, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FlyingScoreEffect>(value));
}
constexpr GlobalNamespace::FlyingScoreEffect GlobalNamespace::EffectPoolsManualInstaller::__get__flyingScoreEffectPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FlyingScoreEffect, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__set__beatEffectPrefab(GlobalNamespace::BeatEffect value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatEffect, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatEffect>(value));
}
constexpr GlobalNamespace::BeatEffect GlobalNamespace::EffectPoolsManualInstaller::__get__beatEffectPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatEffect, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__set__shortBeatEffectPrefab(GlobalNamespace::BeatEffect value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatEffect, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatEffect>(value));
}
constexpr GlobalNamespace::BeatEffect GlobalNamespace::EffectPoolsManualInstaller::__get__shortBeatEffectPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatEffect, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__set__noteCutSoundEffectPrefab(GlobalNamespace::NoteCutSoundEffect value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteCutSoundEffect, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteCutSoundEffect>(value));
}
constexpr GlobalNamespace::NoteCutSoundEffect GlobalNamespace::EffectPoolsManualInstaller::__get__noteCutSoundEffectPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteCutSoundEffect, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__set__bombCutSoundEffectPrefab(GlobalNamespace::BombCutSoundEffect value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BombCutSoundEffect, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BombCutSoundEffect>(value));
}
constexpr GlobalNamespace::BombCutSoundEffect GlobalNamespace::EffectPoolsManualInstaller::__get__bombCutSoundEffectPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BombCutSoundEffect, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EffectPoolsManualInstaller::__set__flyingSpriteEffectPrefab(GlobalNamespace::FlyingSpriteEffect value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FlyingSpriteEffect, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FlyingSpriteEffect>(value));
}
constexpr GlobalNamespace::FlyingSpriteEffect GlobalNamespace::EffectPoolsManualInstaller::__get__flyingSpriteEffectPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FlyingSpriteEffect, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::EffectPoolsManualInstaller::ManualInstallBindings(Zenject::DiContainer container, bool shortBeatEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EffectPoolsManualInstaller>::get(),
                            "ManualInstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, shortBeatEffect);
}
// Ctor Parameters []
 GlobalNamespace::EffectPoolsManualInstaller::EffectPoolsManualInstaller()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<EffectPoolsManualInstaller>())) {}
 void GlobalNamespace::EffectPoolsManualInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EffectPoolsManualInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
