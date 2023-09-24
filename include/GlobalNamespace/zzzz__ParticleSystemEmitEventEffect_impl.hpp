#pragma once
#include "GlobalNamespace/zzzz__ParticleSystemEmitEventEffect_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEmitEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEventController_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "Zenject/zzzz__TickableManager_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__PauseController_def.hpp"
#include "GlobalNamespace/zzzz__SongSpeedData_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentContext_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEmitEventEffect_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::*)(GlobalNamespace::BasicBeatmapEventType, UnityEngine::Transform, int32_t, GlobalNamespace::IAudioTimeSource, GlobalNamespace::BeatmapCallbacksController, GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool)>(&GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x226514c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAudioTimeSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCallbacksController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::*)()>(&GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::Dispose)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x22652f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior.HandleBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::*)(GlobalNamespace::BasicBeatmapEventData)>(&GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x226549c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior.EmitParticles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ParticleSystemEventController (GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::*)(float_t)>(&GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::EmitParticles)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2265600;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__set__audioTimeSource(GlobalNamespace::IAudioTimeSource value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IAudioTimeSource, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IAudioTimeSource>(value));
}
constexpr GlobalNamespace::IAudioTimeSource GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__get__audioTimeSource() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IAudioTimeSource, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCallbacksController>(value));
}
constexpr GlobalNamespace::BeatmapCallbacksController GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__set__particleSystemEventControllerPoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ParticleSystemEventController> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ParticleSystemEventController>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ParticleSystemEventController>>(value));
}
constexpr GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ParticleSystemEventController> GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__get__particleSystemEventControllerPoolContainer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ParticleSystemEventController>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__set__particleSystemParentTransform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__get__particleSystemParentTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__set__particleSystemMaxSpawnedSystems(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__get__particleSystemMaxSpawnedSystems() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__set__beatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr GlobalNamespace::BeatmapDataCallbackWrapper GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::__get__beatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::New_ctor(GlobalNamespace::BasicBeatmapEventType beatmapEvent, UnityEngine::Transform particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems, GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool particleSystemEventControllerPool)  {
GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior>(beatmapEvent, particleSystemParentTransform, particleSystemMaxSpawnedSystems, audioTimeSource, beatmapCallbacksController, particleSystemEventControllerPool))};
return o;
}
 void GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::_ctor(GlobalNamespace::BasicBeatmapEventType beatmapEvent, UnityEngine::Transform particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems, GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool particleSystemEventControllerPool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAudioTimeSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCallbacksController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapEvent, particleSystemParentTransform, particleSystemMaxSpawnedSystems, audioTimeSource, beatmapCallbacksController, particleSystemEventControllerPool);
}
 void GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::HandleBeatmapEvent(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, basicBeatmapEventData);
}
 GlobalNamespace::ParticleSystemEventController GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior::EmitParticles(float_t startTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior>::get(),
                            "EmitParticles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ParticleSystemEventController, false>(const_cast<void*>(instance), ___internal_method, startTime);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::*)(GlobalNamespace::BasicBeatmapEventType, UnityEngine::Transform, int32_t, GlobalNamespace::IAudioTimeSource, GlobalNamespace::BeatmapCallbacksController, GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool, Zenject::TickableManager)>(&GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x226579c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAudioTimeSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCallbacksController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::TickableManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior.Tick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::*)()>(&GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::Tick)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x22657d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::*)()>(&GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2265b7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::ITickable
constexpr  GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::operator Zenject::ITickable() const noexcept {
return Zenject::ITickable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::__set__tickableManager(Zenject::TickableManager value)  {
::cordl_internals::setInstanceField<Zenject::TickableManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::TickableManager>(value));
}
constexpr Zenject::TickableManager GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::__get__tickableManager() const {
return ::cordl_internals::getInstanceField<Zenject::TickableManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::New_ctor(GlobalNamespace::BasicBeatmapEventType beatmapEvent, UnityEngine::Transform particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems, GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool particleSystemEventControllerPool, Zenject::TickableManager tickableManager)  {
GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior>(beatmapEvent, particleSystemParentTransform, particleSystemMaxSpawnedSystems, audioTimeSource, beatmapCallbacksController, particleSystemEventControllerPool, tickableManager))};
return o;
}
 void GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::_ctor(GlobalNamespace::BasicBeatmapEventType beatmapEvent, UnityEngine::Transform particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems, GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool particleSystemEventControllerPool, Zenject::TickableManager tickableManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAudioTimeSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCallbacksController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::TickableManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapEvent, particleSystemParentTransform, particleSystemMaxSpawnedSystems, audioTimeSource, beatmapCallbacksController, particleSystemEventControllerPool, tickableManager);
}
 void GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::*)(GlobalNamespace::BasicBeatmapEventType, UnityEngine::Transform, int32_t, GlobalNamespace::IAudioTimeSource, GlobalNamespace::BeatmapCallbacksController, GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool, GlobalNamespace::PauseController, GlobalNamespace::SongSpeedData)>(&GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2265ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAudioTimeSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCallbacksController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PauseController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongSpeedData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::*)()>(&GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::Dispose)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2265cdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior.HandlePauseControllerDidPause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::*)()>(&GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::HandlePauseControllerDidPause)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2265e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior>::get(),
                            "HandlePauseControllerDidPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior.HandlePauseControllerDidResume
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::*)()>(&GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::HandlePauseControllerDidResume)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2265f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior>::get(),
                            "HandlePauseControllerDidResume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior.EmitParticles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ParticleSystemEventController (GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::*)(float_t)>(&GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::EmitParticles)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2266130;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::__set__pauseController(GlobalNamespace::PauseController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PauseController, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PauseController>(value));
}
constexpr GlobalNamespace::PauseController GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::__get__pauseController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PauseController, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::__set__songSpeedData(GlobalNamespace::SongSpeedData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongSpeedData, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SongSpeedData>(value));
}
constexpr GlobalNamespace::SongSpeedData GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::__get__songSpeedData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongSpeedData, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::New_ctor(GlobalNamespace::BasicBeatmapEventType beatmapEvent, UnityEngine::Transform particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems, GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool particleSystemEventControllerPool, GlobalNamespace::PauseController pauseController, GlobalNamespace::SongSpeedData songSpeedData)  {
GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior>(beatmapEvent, particleSystemParentTransform, particleSystemMaxSpawnedSystems, audioTimeSource, beatmapCallbacksController, particleSystemEventControllerPool, pauseController, songSpeedData))};
return o;
}
 void GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::_ctor(GlobalNamespace::BasicBeatmapEventType beatmapEvent, UnityEngine::Transform particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems, GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool particleSystemEventControllerPool, GlobalNamespace::PauseController pauseController, GlobalNamespace::SongSpeedData songSpeedData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAudioTimeSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCallbacksController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PauseController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongSpeedData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapEvent, particleSystemParentTransform, particleSystemMaxSpawnedSystems, audioTimeSource, beatmapCallbacksController, particleSystemEventControllerPool, pauseController, songSpeedData);
}
 void GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::HandlePauseControllerDidPause()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior>::get(),
                            "HandlePauseControllerDidPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::HandlePauseControllerDidResume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior>::get(),
                            "HandlePauseControllerDidResume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::ParticleSystemEventController GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior::EmitParticles(float_t startTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior>::get(),
                            "EmitParticles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ParticleSystemEventController, false>(const_cast<void*>(instance), ___internal_method, startTime);
}
//  Writing Method size for method: GlobalNamespace::ParticleSystemEmitEventEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEmitEventEffect::*)()>(&GlobalNamespace::ParticleSystemEmitEventEffect::Start)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x2264ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemEmitEventEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ParticleSystemEmitEventEffect.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEmitEventEffect::*)()>(&GlobalNamespace::ParticleSystemEmitEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2265124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemEmitEventEffect>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ParticleSystemEmitEventEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEmitEventEffect::*)()>(&GlobalNamespace::ParticleSystemEmitEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x226513c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemEmitEventEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect::__set__beatmapEvent(GlobalNamespace::BasicBeatmapEventType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BasicBeatmapEventType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr GlobalNamespace::BasicBeatmapEventType GlobalNamespace::ParticleSystemEmitEventEffect::__get__beatmapEvent() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BasicBeatmapEventType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect::__set__particleSystemParentTransform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::ParticleSystemEmitEventEffect::__get__particleSystemParentTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect::__set__particleSystemMaxSpawnedSystems(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::ParticleSystemEmitEventEffect::__get__particleSystemMaxSpawnedSystems() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect::__set__environmentContext(GlobalNamespace::EnvironmentContext value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentContext, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EnvironmentContext>(value));
}
constexpr GlobalNamespace::EnvironmentContext GlobalNamespace::ParticleSystemEmitEventEffect::__get__environmentContext() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentContext, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect::__set__diContainer(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer GlobalNamespace::ParticleSystemEmitEventEffect::__get__diContainer() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffect::__set__particleSystemEmitBehavior(GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior>(value));
}
constexpr GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior GlobalNamespace::ParticleSystemEmitEventEffect::__get__particleSystemEmitBehavior() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::ParticleSystemEmitEventEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemEmitEventEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ParticleSystemEmitEventEffect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemEmitEventEffect>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::ParticleSystemEmitEventEffect GlobalNamespace::ParticleSystemEmitEventEffect::New_ctor()  {
GlobalNamespace::ParticleSystemEmitEventEffect o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::ParticleSystemEmitEventEffect>())};
return o;
}
 void GlobalNamespace::ParticleSystemEmitEventEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ParticleSystemEmitEventEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
