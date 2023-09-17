#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerEffectsSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BombExplosionEffect_def.hpp"
#include "GlobalNamespace/zzzz__NoteDebrisSpawner_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayerBeatmapObjectEventManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::Start)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x20df120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x20df210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner.HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::*)(::GlobalNamespace::NoteCutInfoNetSerializable)>(&::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x20df318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner>::get(),
                            "HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfoNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20df510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__set__noteDebrisSpawner(::GlobalNamespace::NoteDebrisSpawner value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteDebrisSpawner, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::NoteDebrisSpawner>(value));
}
constexpr ::GlobalNamespace::NoteDebrisSpawner ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__get__noteDebrisSpawner() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteDebrisSpawner, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__set__bombExplosionEffect(::GlobalNamespace::BombExplosionEffect value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BombExplosionEffect, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BombExplosionEffect>(value));
}
constexpr ::GlobalNamespace::BombExplosionEffect ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__get__bombExplosionEffect() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BombExplosionEffect, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__set__beatmapObjectEventManager(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager>(value));
}
constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__get__beatmapObjectEventManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut(::GlobalNamespace::NoteCutInfoNetSerializable noteCutInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner>::get(),
                            "HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfoNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteCutInfo);
}
// Ctor Parameters []
 ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::MultiplayerConnectedPlayerEffectsSpawner()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerConnectedPlayerEffectsSpawner>())) {}
 void ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
