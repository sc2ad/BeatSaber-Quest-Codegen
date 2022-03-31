// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapObjectManager
#include "GlobalNamespace/BeatmapObjectManager.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: SliderController/LengthType
#include "GlobalNamespace/SliderController.hpp"
// Including type: GameNoteController
#include "GlobalNamespace/GameNoteController.hpp"
// Including type: BurstSliderGameNoteController
#include "GlobalNamespace/BurstSliderGameNoteController.hpp"
// Including type: BombNoteController
#include "GlobalNamespace/BombNoteController.hpp"
// Including type: ObstacleController
#include "GlobalNamespace/ObstacleController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MemoryPoolContainer`1<T>
  template<typename T>
  class MemoryPoolContainer_1;
  // Forward declaring type: SliderData
  class SliderData;
  // Skipping declaration: NoteController because it is already included!
  // Skipping declaration: NoteData because it is already included!
  // Forward declaring type: ObstacleData
  class ObstacleData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BasicBeatmapObjectManager
  class BasicBeatmapObjectManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BasicBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicBeatmapObjectManager*, "", "BasicBeatmapObjectManager");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BasicBeatmapObjectManager
  // [TokenAttribute] Offset: FFFFFFFF
  class BasicBeatmapObjectManager : public ::GlobalNamespace::BeatmapObjectManager {
    public:
    // Writing base type padding for base size: 0x91 to desired offset: 0x94
    char ___base_padding[0x3] = {};
    // Nested type: ::GlobalNamespace::BasicBeatmapObjectManager::InitData
    class InitData;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Nullable`1<System.Single> _firstBasicNoteTime
    // Size: 0xFFFFFFFF
    // Offset: 0x94
    ::System::Nullable_1<float> firstBasicNoteTime;
    // private BasicBeatmapObjectManager/InitData _initData
    // Size: 0x8
    // Offset: 0xA0
    ::GlobalNamespace::BasicBeatmapObjectManager::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BasicBeatmapObjectManager::InitData*) == 0x8);
    // private MemoryPoolContainer`1<GameNoteController> _basicGameNotePoolContainer
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>* basicGameNotePoolContainer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*) == 0x8);
    // private MemoryPoolContainer`1<GameNoteController> _burstSliderHeadGameNotePoolContainer
    // Size: 0x8
    // Offset: 0xB0
    ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>* burstSliderHeadGameNotePoolContainer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*) == 0x8);
    // private MemoryPoolContainer`1<BurstSliderGameNoteController> _burstSliderGameNotePoolContainer
    // Size: 0x8
    // Offset: 0xB8
    ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>* burstSliderGameNotePoolContainer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*) == 0x8);
    // private MemoryPoolContainer`1<BurstSliderGameNoteController> _burstSliderFillPoolContainer
    // Size: 0x8
    // Offset: 0xC0
    ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>* burstSliderFillPoolContainer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*) == 0x8);
    // private MemoryPoolContainer`1<BombNoteController> _bombNotePoolContainer
    // Size: 0x8
    // Offset: 0xC8
    ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>* bombNotePoolContainer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*) == 0x8);
    // private MemoryPoolContainer`1<ObstacleController> _obstaclePoolContainer
    // Size: 0x8
    // Offset: 0xD0
    ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>* obstaclePoolContainer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<SliderController/LengthType,MemoryPoolContainer`1<SliderController>> _sliderNotePoolContainersDictionary
    // Size: 0x8
    // Offset: 0xD8
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController::LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::SliderController*>*>* sliderNotePoolContainersDictionary;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController::LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::SliderController*>*>*) == 0x8);
    public:
    // Get instance field reference: private System.Nullable`1<System.Single> _firstBasicNoteTime
    ::System::Nullable_1<float>& dyn__firstBasicNoteTime();
    // Get instance field reference: private BasicBeatmapObjectManager/InitData _initData
    ::GlobalNamespace::BasicBeatmapObjectManager::InitData*& dyn__initData();
    // Get instance field reference: private MemoryPoolContainer`1<GameNoteController> _basicGameNotePoolContainer
    ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*& dyn__basicGameNotePoolContainer();
    // Get instance field reference: private MemoryPoolContainer`1<GameNoteController> _burstSliderHeadGameNotePoolContainer
    ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::GameNoteController*>*& dyn__burstSliderHeadGameNotePoolContainer();
    // Get instance field reference: private MemoryPoolContainer`1<BurstSliderGameNoteController> _burstSliderGameNotePoolContainer
    ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*& dyn__burstSliderGameNotePoolContainer();
    // Get instance field reference: private MemoryPoolContainer`1<BurstSliderGameNoteController> _burstSliderFillPoolContainer
    ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BurstSliderGameNoteController*>*& dyn__burstSliderFillPoolContainer();
    // Get instance field reference: private MemoryPoolContainer`1<BombNoteController> _bombNotePoolContainer
    ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*& dyn__bombNotePoolContainer();
    // Get instance field reference: private MemoryPoolContainer`1<ObstacleController> _obstaclePoolContainer
    ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*& dyn__obstaclePoolContainer();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<SliderController/LengthType,MemoryPoolContainer`1<SliderController>> _sliderNotePoolContainersDictionary
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController::LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::SliderController*>*>*& dyn__sliderNotePoolContainersDictionary();
    // private System.Void Init(BasicBeatmapObjectManager/InitData initData, GameNoteController/Pool basicGameNotePool, GameNoteController/Pool burstSliderHeadGameNotePool, BurstSliderGameNoteController/Pool burstSliderGameNotePool, BurstSliderGameNoteController/Pool burstSliderFillPool, BombNoteController/Pool bombNotePool, ObstacleController/Pool obstaclePool, SliderController/Pool sliderPools)
    // Offset: 0x1360C08
    void Init(::GlobalNamespace::BasicBeatmapObjectManager::InitData* initData, ::GlobalNamespace::GameNoteController::Pool* basicGameNotePool, ::GlobalNamespace::GameNoteController::Pool* burstSliderHeadGameNotePool, ::GlobalNamespace::BurstSliderGameNoteController::Pool* burstSliderGameNotePool, ::GlobalNamespace::BurstSliderGameNoteController::Pool* burstSliderFillPool, ::GlobalNamespace::BombNoteController::Pool* bombNotePool, ::GlobalNamespace::ObstacleController::Pool* obstaclePool, ::GlobalNamespace::SliderController::Pool* sliderPools);
    // public override System.Collections.Generic.List`1<ObstacleController> get_activeObstacleControllers()
    // Offset: 0x1360BB0
    // Implemented from: BeatmapObjectManager
    // Base method: System.Collections.Generic.List`1<ObstacleController> BeatmapObjectManager::get_activeObstacleControllers()
    ::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* get_activeObstacleControllers();
    // public System.Void .ctor()
    // Offset: 0x1361A48
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BasicBeatmapObjectManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BasicBeatmapObjectManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BasicBeatmapObjectManager*, creationType>()));
    }
    // public override System.Void ProcessObstacleData(ObstacleData obstacleData, in BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    // Offset: 0x1361060
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::ProcessObstacleData(ObstacleData obstacleData, in BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    void ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ByRef<::GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData> obstacleSpawnData, float rotation);
    // protected override System.Void DespawnInternal(ObstacleController obstacleController)
    // Offset: 0x1361160
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::DespawnInternal(ObstacleController obstacleController)
    void DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController);
    // public override System.Void ProcessNoteData(NoteData noteData, in BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation, System.Boolean forceIsFirstNoteBehaviour)
    // Offset: 0x13611C8
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::ProcessNoteData(NoteData noteData, in BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation, System.Boolean forceIsFirstNoteBehaviour)
    void ProcessNoteData(::GlobalNamespace::NoteData* noteData, ByRef<::GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData> noteSpawnData, float rotation, bool forceIsFirstNoteBehaviour);
    // protected override System.Void DespawnInternal(NoteController noteController)
    // Offset: 0x13615E8
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::DespawnInternal(NoteController noteController)
    void DespawnInternal(::GlobalNamespace::NoteController* noteController);
    // public override System.Void ProcessSliderData(SliderData sliderData, in BeatmapObjectSpawnMovementData/SliderSpawnData sliderSpawnData, System.Single rotation)
    // Offset: 0x136179C
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::ProcessSliderData(SliderData sliderData, in BeatmapObjectSpawnMovementData/SliderSpawnData sliderSpawnData, System.Single rotation)
    void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ByRef<::GlobalNamespace::BeatmapObjectSpawnMovementData::SliderSpawnData> sliderSpawnData, float rotation);
    // protected override System.Void DespawnInternal(SliderController sliderNoteController)
    // Offset: 0x13619B0
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::DespawnInternal(SliderController sliderNoteController)
    void DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController);
  }; // BasicBeatmapObjectManager
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapObjectManager::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicBeatmapObjectManager::*)(::GlobalNamespace::BasicBeatmapObjectManager::InitData*, ::GlobalNamespace::GameNoteController::Pool*, ::GlobalNamespace::GameNoteController::Pool*, ::GlobalNamespace::BurstSliderGameNoteController::Pool*, ::GlobalNamespace::BurstSliderGameNoteController::Pool*, ::GlobalNamespace::BombNoteController::Pool*, ::GlobalNamespace::ObstacleController::Pool*, ::GlobalNamespace::SliderController::Pool*)>(&GlobalNamespace::BasicBeatmapObjectManager::Init)> {
  static const MethodInfo* get() {
    static auto* initData = &::il2cpp_utils::GetClassFromName("", "BasicBeatmapObjectManager/InitData")->byval_arg;
    static auto* basicGameNotePool = &::il2cpp_utils::GetClassFromName("", "GameNoteController/Pool")->byval_arg;
    static auto* burstSliderHeadGameNotePool = &::il2cpp_utils::GetClassFromName("", "GameNoteController/Pool")->byval_arg;
    static auto* burstSliderGameNotePool = &::il2cpp_utils::GetClassFromName("", "BurstSliderGameNoteController/Pool")->byval_arg;
    static auto* burstSliderFillPool = &::il2cpp_utils::GetClassFromName("", "BurstSliderGameNoteController/Pool")->byval_arg;
    static auto* bombNotePool = &::il2cpp_utils::GetClassFromName("", "BombNoteController/Pool")->byval_arg;
    static auto* obstaclePool = &::il2cpp_utils::GetClassFromName("", "ObstacleController/Pool")->byval_arg;
    static auto* sliderPools = &::il2cpp_utils::GetClassFromName("", "SliderController/Pool")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicBeatmapObjectManager*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initData, basicGameNotePool, burstSliderHeadGameNotePool, burstSliderGameNotePool, burstSliderFillPool, bombNotePool, obstaclePool, sliderPools});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapObjectManager::get_activeObstacleControllers
// Il2CppName: get_activeObstacleControllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* (GlobalNamespace::BasicBeatmapObjectManager::*)()>(&GlobalNamespace::BasicBeatmapObjectManager::get_activeObstacleControllers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicBeatmapObjectManager*), "get_activeObstacleControllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapObjectManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapObjectManager::ProcessObstacleData
// Il2CppName: ProcessObstacleData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicBeatmapObjectManager::*)(::GlobalNamespace::ObstacleData*, ByRef<::GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData>, float)>(&GlobalNamespace::BasicBeatmapObjectManager::ProcessObstacleData)> {
  static const MethodInfo* get() {
    static auto* obstacleData = &::il2cpp_utils::GetClassFromName("", "ObstacleData")->byval_arg;
    static auto* obstacleSpawnData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectSpawnMovementData/ObstacleSpawnData")->this_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicBeatmapObjectManager*), "ProcessObstacleData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleData, obstacleSpawnData, rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal
// Il2CppName: DespawnInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicBeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(&GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal)> {
  static const MethodInfo* get() {
    static auto* obstacleController = &::il2cpp_utils::GetClassFromName("", "ObstacleController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicBeatmapObjectManager*), "DespawnInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapObjectManager::ProcessNoteData
// Il2CppName: ProcessNoteData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicBeatmapObjectManager::*)(::GlobalNamespace::NoteData*, ByRef<::GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData>, float, bool)>(&GlobalNamespace::BasicBeatmapObjectManager::ProcessNoteData)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    static auto* noteSpawnData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectSpawnMovementData/NoteSpawnData")->this_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* forceIsFirstNoteBehaviour = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicBeatmapObjectManager*), "ProcessNoteData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData, noteSpawnData, rotation, forceIsFirstNoteBehaviour});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal
// Il2CppName: DespawnInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicBeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(&GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicBeatmapObjectManager*), "DespawnInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapObjectManager::ProcessSliderData
// Il2CppName: ProcessSliderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicBeatmapObjectManager::*)(::GlobalNamespace::SliderData*, ByRef<::GlobalNamespace::BeatmapObjectSpawnMovementData::SliderSpawnData>, float)>(&GlobalNamespace::BasicBeatmapObjectManager::ProcessSliderData)> {
  static const MethodInfo* get() {
    static auto* sliderData = &::il2cpp_utils::GetClassFromName("", "SliderData")->byval_arg;
    static auto* sliderSpawnData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectSpawnMovementData/SliderSpawnData")->this_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicBeatmapObjectManager*), "ProcessSliderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderData, sliderSpawnData, rotation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal
// Il2CppName: DespawnInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicBeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(&GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal)> {
  static const MethodInfo* get() {
    static auto* sliderNoteController = &::il2cpp_utils::GetClassFromName("", "SliderController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicBeatmapObjectManager*), "DespawnInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderNoteController});
  }
};
