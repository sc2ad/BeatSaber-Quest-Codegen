#pragma once
#include "GlobalNamespace/zzzz__BeatmapObjectManager_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialBeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__TutorialNoteController_def.hpp"
#include "GlobalNamespace/zzzz__BombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__BombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__TutorialNoteController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__TutorialBeatmapObjectManager__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__TutorialBeatmapObjectManager__InitData::*)(float_t)>(&GlobalNamespace::GlobalNamespace__TutorialBeatmapObjectManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x224d4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TutorialBeatmapObjectManager__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__TutorialBeatmapObjectManager__InitData::__set_cutAngleTolerance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__TutorialBeatmapObjectManager__InitData::__get_cutAngleTolerance() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "cutAngleTolerance", ty: "float_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__TutorialBeatmapObjectManager__InitData::GlobalNamespace__TutorialBeatmapObjectManager__InitData(float_t cutAngleTolerance)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__TutorialBeatmapObjectManager__InitData>(cutAngleTolerance))) {}
 void GlobalNamespace::GlobalNamespace__TutorialBeatmapObjectManager__InitData::_ctor(float_t cutAngleTolerance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__TutorialBeatmapObjectManager__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cutAngleTolerance);
}
//  Writing Method size for method: GlobalNamespace::TutorialBeatmapObjectManager.get_activeObstacleControllers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::ObstacleController> (GlobalNamespace::TutorialBeatmapObjectManager::*)()>(&GlobalNamespace::TutorialBeatmapObjectManager::get_activeObstacleControllers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x224cf78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TutorialBeatmapObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectManager>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialBeatmapObjectManager.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)(GlobalNamespace::GlobalNamespace__TutorialBeatmapObjectManager__InitData, GlobalNamespace::GlobalNamespace__TutorialNoteController__Pool, GlobalNamespace::GlobalNamespace__BombNoteController__Pool, GlobalNamespace::GlobalNamespace__ObstacleController__Pool)>(&GlobalNamespace::TutorialBeatmapObjectManager::Init)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x224cfc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectManager>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__TutorialBeatmapObjectManager__InitData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__TutorialNoteController__Pool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BombNoteController__Pool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ObstacleController__Pool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialBeatmapObjectManager.ProcessObstacleData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)(GlobalNamespace::ObstacleData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData>, float_t)>(&GlobalNamespace::TutorialBeatmapObjectManager::ProcessObstacleData)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x224d0f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TutorialBeatmapObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectManager>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialBeatmapObjectManager.ProcessNoteData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)(GlobalNamespace::NoteData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData>, float_t, bool)>(&GlobalNamespace::TutorialBeatmapObjectManager::ProcessNoteData)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x224d1ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TutorialBeatmapObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectManager>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialBeatmapObjectManager.ProcessSliderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)(GlobalNamespace::SliderData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData>, float_t)>(&GlobalNamespace::TutorialBeatmapObjectManager::ProcessSliderData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x224d36c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TutorialBeatmapObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectManager>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialBeatmapObjectManager.DespawnInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)(GlobalNamespace::NoteController)>(&GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x224d370;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TutorialBeatmapObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectManager>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialBeatmapObjectManager.DespawnInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)(GlobalNamespace::ObstacleController)>(&GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x224d474;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TutorialBeatmapObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectManager>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialBeatmapObjectManager.DespawnInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)(GlobalNamespace::SliderController)>(&GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x224d4cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TutorialBeatmapObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectManager>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TutorialBeatmapObjectManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectManager::*)()>(&GlobalNamespace::TutorialBeatmapObjectManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224d4d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TutorialBeatmapObjectManager::__set__tutorialNotePoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::TutorialNoteController> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::TutorialNoteController>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::TutorialNoteController>>(value));
}
constexpr GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::TutorialNoteController> GlobalNamespace::TutorialBeatmapObjectManager::__get__tutorialNotePoolContainer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::TutorialNoteController>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialBeatmapObjectManager::__set__bombNotePoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BombNoteController> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BombNoteController>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BombNoteController>>(value));
}
constexpr GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BombNoteController> GlobalNamespace::TutorialBeatmapObjectManager::__get__bombNotePoolContainer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::BombNoteController>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialBeatmapObjectManager::__set__obstaclePoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ObstacleController> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ObstacleController>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ObstacleController>>(value));
}
constexpr GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ObstacleController> GlobalNamespace::TutorialBeatmapObjectManager::__get__obstaclePoolContainer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ObstacleController>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TutorialBeatmapObjectManager::__set__initData(GlobalNamespace::GlobalNamespace__TutorialBeatmapObjectManager__InitData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__TutorialBeatmapObjectManager__InitData, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__TutorialBeatmapObjectManager__InitData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__TutorialBeatmapObjectManager__InitData GlobalNamespace::TutorialBeatmapObjectManager::__get__initData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__TutorialBeatmapObjectManager__InitData, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::List_1<GlobalNamespace::ObstacleController> GlobalNamespace::TutorialBeatmapObjectManager::get_activeObstacleControllers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectManager>::get(),
                            "get_activeObstacleControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<GlobalNamespace::ObstacleController>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::TutorialBeatmapObjectManager::Init(GlobalNamespace::GlobalNamespace__TutorialBeatmapObjectManager__InitData initData, GlobalNamespace::GlobalNamespace__TutorialNoteController__Pool tutorialNotePool, GlobalNamespace::GlobalNamespace__BombNoteController__Pool bombNotePool, GlobalNamespace::GlobalNamespace__ObstacleController__Pool obstaclePool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectManager>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__TutorialBeatmapObjectManager__InitData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__TutorialNoteController__Pool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BombNoteController__Pool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__ObstacleController__Pool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initData, tutorialNotePool, bombNotePool, obstaclePool);
}
 void GlobalNamespace::TutorialBeatmapObjectManager::ProcessObstacleData(GlobalNamespace::ObstacleData obstacleData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData, float_t rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectManager>::get(),
                            "ProcessObstacleData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleData, obstacleSpawnData, rotation);
}
 void GlobalNamespace::TutorialBeatmapObjectManager::ProcessNoteData(GlobalNamespace::NoteData noteData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, float_t rotation, bool forceIsFirstNoteBehaviour)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectManager>::get(),
                            "ProcessNoteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteData, noteSpawnData, rotation, forceIsFirstNoteBehaviour);
}
 void GlobalNamespace::TutorialBeatmapObjectManager::ProcessSliderData(GlobalNamespace::SliderData sliderData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData, float_t rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectManager>::get(),
                            "ProcessSliderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sliderData, sliderSpawnData, rotation);
}
 void GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal(GlobalNamespace::NoteController noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectManager>::get(),
                            "DespawnInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
 void GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal(GlobalNamespace::ObstacleController obstacleController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectManager>::get(),
                            "DespawnInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleController);
}
 void GlobalNamespace::TutorialBeatmapObjectManager::DespawnInternal(GlobalNamespace::SliderController sliderNoteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectManager>::get(),
                            "DespawnInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sliderNoteController);
}
// Ctor Parameters []
 GlobalNamespace::TutorialBeatmapObjectManager::TutorialBeatmapObjectManager()  : GlobalNamespace::BeatmapObjectManager(THROW_UNLESS(::il2cpp_utils::New<TutorialBeatmapObjectManager>())) {}
 void GlobalNamespace::TutorialBeatmapObjectManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TutorialBeatmapObjectManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
