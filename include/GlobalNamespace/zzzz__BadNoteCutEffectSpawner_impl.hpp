#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BadNoteCutEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "GlobalNamespace/zzzz__FlyingSpriteSpawner_def.hpp"
//  Writing Method size for method: GlobalNamespace::BadNoteCutEffectSpawner.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BadNoteCutEffectSpawner::*)()>(&GlobalNamespace::BadNoteCutEffectSpawner::Start)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2257ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BadNoteCutEffectSpawner>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BadNoteCutEffectSpawner.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BadNoteCutEffectSpawner::*)()>(&GlobalNamespace::BadNoteCutEffectSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2257d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BadNoteCutEffectSpawner>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BadNoteCutEffectSpawner.HandleNoteWasCut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BadNoteCutEffectSpawner::*)(GlobalNamespace::NoteController, ByRef<GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::BadNoteCutEffectSpawner::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2257e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BadNoteCutEffectSpawner>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteCutInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BadNoteCutEffectSpawner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BadNoteCutEffectSpawner::*)()>(&GlobalNamespace::BadNoteCutEffectSpawner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2258140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BadNoteCutEffectSpawner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BadNoteCutEffectSpawner::__set__failFlyingSpriteSpawner(GlobalNamespace::FlyingSpriteSpawner value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FlyingSpriteSpawner, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FlyingSpriteSpawner>(value));
}
constexpr GlobalNamespace::FlyingSpriteSpawner GlobalNamespace::BadNoteCutEffectSpawner::__get__failFlyingSpriteSpawner() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FlyingSpriteSpawner, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BadNoteCutEffectSpawner::__set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapObjectManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapObjectManager>(value));
}
constexpr GlobalNamespace::BeatmapObjectManager GlobalNamespace::BadNoteCutEffectSpawner::__get__beatmapObjectManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapObjectManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BadNoteCutEffectSpawner::__set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AudioTimeSyncController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AudioTimeSyncController>(value));
}
constexpr GlobalNamespace::AudioTimeSyncController GlobalNamespace::BadNoteCutEffectSpawner::__get__audioTimeSyncController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AudioTimeSyncController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BadNoteCutEffectSpawner::__set__initData(GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData GlobalNamespace::BadNoteCutEffectSpawner::__get__initData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::BadNoteCutEffectSpawner::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BadNoteCutEffectSpawner>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BadNoteCutEffectSpawner::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BadNoteCutEffectSpawner>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BadNoteCutEffectSpawner::HandleNoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BadNoteCutEffectSpawner>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteCutInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController, noteCutInfo);
}
// Ctor Parameters []
 GlobalNamespace::BadNoteCutEffectSpawner::BadNoteCutEffectSpawner()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<BadNoteCutEffectSpawner>())) {}
 void GlobalNamespace::BadNoteCutEffectSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BadNoteCutEffectSpawner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
