#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__IBeatEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__SongController_def.hpp"
#include "GlobalNamespace/zzzz__BeatEffect_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatEffect_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatEffectSpawner__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatEffectSpawner__InitData::*)(bool)>(&GlobalNamespace::GlobalNamespace__BeatEffectSpawner__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2258828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatEffectSpawner__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__BeatEffectSpawner__InitData::__set_hideNoteSpawnEffect(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__BeatEffectSpawner__InitData::__get_hideNoteSpawnEffect() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "hideNoteSpawnEffect", ty: "bool", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__BeatEffectSpawner__InitData::GlobalNamespace__BeatEffectSpawner__InitData(bool hideNoteSpawnEffect)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__BeatEffectSpawner__InitData>(hideNoteSpawnEffect))) {}
 void GlobalNamespace::GlobalNamespace__BeatEffectSpawner__InitData::_ctor(bool hideNoteSpawnEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatEffectSpawner__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hideNoteSpawnEffect);
}
//  Writing Method size for method: GlobalNamespace::BeatEffectSpawner.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatEffectSpawner::*)(GlobalNamespace::GlobalNamespace__BeatEffect__Pool)>(&GlobalNamespace::BeatEffectSpawner::Init)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2258148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatEffectSpawner>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatEffect__Pool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatEffectSpawner.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatEffectSpawner::*)()>(&GlobalNamespace::BeatEffectSpawner::Start)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x22581cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatEffectSpawner>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatEffectSpawner.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatEffectSpawner::*)()>(&GlobalNamespace::BeatEffectSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2258258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatEffectSpawner>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatEffectSpawner.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatEffectSpawner::*)()>(&GlobalNamespace::BeatEffectSpawner::Update)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x22582f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatEffectSpawner>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatEffectSpawner.HandleNoteDidStartJump
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatEffectSpawner::*)(GlobalNamespace::NoteController)>(&GlobalNamespace::BeatEffectSpawner::HandleNoteDidStartJump)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x2258474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatEffectSpawner>::get(),
                            "HandleNoteDidStartJump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatEffectSpawner.HandleBeatEffectDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatEffectSpawner::*)(GlobalNamespace::BeatEffect)>(&GlobalNamespace::BeatEffectSpawner::HandleBeatEffectDidFinish)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2258734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatEffectSpawner>::get(),
                            "HandleBeatEffectDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatEffect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatEffectSpawner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatEffectSpawner::*)()>(&GlobalNamespace::BeatEffectSpawner::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x225880c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatEffectSpawner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IBeatEffectDidFinishEvent
constexpr  GlobalNamespace::BeatEffectSpawner::operator GlobalNamespace::IBeatEffectDidFinishEvent() const noexcept {
return GlobalNamespace::IBeatEffectDidFinishEvent(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatEffectSpawner::__set__effectDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BeatEffectSpawner::__get__effectDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatEffectSpawner::__set__bombColorEffect(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::BeatEffectSpawner::__get__bombColorEffect() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatEffectSpawner::__set__colorManager(GlobalNamespace::ColorManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorManager>(value));
}
constexpr GlobalNamespace::ColorManager GlobalNamespace::BeatEffectSpawner::__get__colorManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatEffectSpawner::__set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapObjectManager, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapObjectManager>(value));
}
constexpr GlobalNamespace::BeatmapObjectManager GlobalNamespace::BeatEffectSpawner::__get__beatmapObjectManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapObjectManager, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatEffectSpawner::__set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AudioTimeSyncController, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AudioTimeSyncController>(value));
}
constexpr GlobalNamespace::AudioTimeSyncController GlobalNamespace::BeatEffectSpawner::__get__audioTimeSyncController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AudioTimeSyncController, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatEffectSpawner::__set__initData(GlobalNamespace::GlobalNamespace__BeatEffectSpawner__InitData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BeatEffectSpawner__InitData, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__BeatEffectSpawner__InitData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BeatEffectSpawner__InitData GlobalNamespace::BeatEffectSpawner::__get__initData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BeatEffectSpawner__InitData, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatEffectSpawner::__set__bloomFog(GlobalNamespace::BloomFogSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BloomFogSO, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BloomFogSO>(value));
}
constexpr GlobalNamespace::BloomFogSO GlobalNamespace::BeatEffectSpawner::__get__bloomFog() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BloomFogSO, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatEffectSpawner::__set__songController(GlobalNamespace::SongController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongController, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SongController>(value));
}
constexpr GlobalNamespace::SongController GlobalNamespace::BeatEffectSpawner::__get__songController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongController, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatEffectSpawner::__set__beatEffectPoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BeatEffect> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BeatEffect>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BeatEffect>>(value));
}
constexpr GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BeatEffect> GlobalNamespace::BeatEffectSpawner::__get__beatEffectPoolContainer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BeatEffect>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::BeatEffectSpawner::Init(GlobalNamespace::GlobalNamespace__BeatEffect__Pool beatEffectPool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatEffectSpawner>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatEffect__Pool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatEffectPool);
}
 void GlobalNamespace::BeatEffectSpawner::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatEffectSpawner>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatEffectSpawner::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatEffectSpawner>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatEffectSpawner::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatEffectSpawner>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatEffectSpawner::HandleNoteDidStartJump(GlobalNamespace::NoteController noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatEffectSpawner>::get(),
                            "HandleNoteDidStartJump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
 void GlobalNamespace::BeatEffectSpawner::HandleBeatEffectDidFinish(GlobalNamespace::BeatEffect beatEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatEffectSpawner>::get(),
                            "HandleBeatEffectDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatEffect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatEffect);
}
// Ctor Parameters []
 GlobalNamespace::BeatEffectSpawner::BeatEffectSpawner()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<BeatEffectSpawner>())) {}
 void GlobalNamespace::BeatEffectSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatEffectSpawner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
