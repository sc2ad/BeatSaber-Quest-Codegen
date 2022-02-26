// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SpawnRotationChevron
#include "GlobalNamespace/SpawnRotationChevron.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: BeatmapObjectSpawnController
  class BeatmapObjectSpawnController;
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
  // Forward declaring type: SpawnRotationProcessor
  class SpawnRotationProcessor;
  // Forward declaring type: BeatmapObjectCallbackData
  class BeatmapObjectCallbackData;
  // Forward declaring type: BeatmapEventCallbackData
  class BeatmapEventCallbackData;
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SpawnRotationChevronManager
  class SpawnRotationChevronManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SpawnRotationChevronManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnRotationChevronManager*, "", "SpawnRotationChevronManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: SpawnRotationChevronManager
  // [TokenAttribute] Offset: FFFFFFFF
  class SpawnRotationChevronManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::SpawnRotationChevronManager::DirectionData
    class DirectionData;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Single _fadeInTime
    // Size: 0x4
    // Offset: 0x18
    float fadeInTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _fadeOutTime
    // Size: 0x4
    // Offset: 0x1C
    float fadeOutTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _jumpStartOffsetTime
    // Size: 0x4
    // Offset: 0x20
    float jumpStartOffsetTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _cutOffsetTime
    // Size: 0x4
    // Offset: 0x24
    float cutOffsetTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AnimationCurve _fadeInLightAmountCurve
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AnimationCurve* fadeInLightAmountCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _fadeOutLightAmountCurve
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AnimationCurve* fadeOutLightAmountCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // [InjectAttribute] Offset: 0x12427B0
    // private readonly SpawnRotationChevron/Pool _chevronPool
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::SpawnRotationChevron::Pool* chevronPool;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SpawnRotationChevron::Pool*) == 0x8);
    // [InjectAttribute] Offset: 0x12427C0
    // private readonly IAudioTimeSource _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::IAudioTimeSource* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAudioTimeSource*) == 0x8);
    // [InjectAttribute] Offset: 0x12427D0
    // private readonly BeatmapObjectSpawnController _beatmapObjectSpawnController
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::BeatmapObjectSpawnController* beatmapObjectSpawnController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectSpawnController*) == 0x8);
    // [InjectAttribute] Offset: 0x12427E0
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // private readonly SpawnRotationProcessor _spawnRotationProcessor
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::SpawnRotationProcessor* spawnRotationProcessor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SpawnRotationProcessor*) == 0x8);
    // private BeatmapObjectCallbackData _beatmapObjectCallbackData
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::BeatmapObjectCallbackData* beatmapObjectCallbackData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectCallbackData*) == 0x8);
    // private BeatmapEventCallbackData _beatmapEventCallbackData
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::BeatmapEventCallbackData* beatmapEventCallbackData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapEventCallbackData*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,SpawnRotationChevronManager/DirectionData> _directionToDataDictionary
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::SpawnRotationChevronManager::DirectionData*>* directionToDataDictionary;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::SpawnRotationChevronManager::DirectionData*>*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.Int32> _activeDirections
    // Size: 0x8
    // Offset: 0x78
    ::System::Collections::Generic::HashSet_1<int>* activeDirections;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<int>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Int32> _reusableDirectionsList
    // Size: 0x8
    // Offset: 0x80
    ::System::Collections::Generic::List_1<int>* reusableDirectionsList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<int>*) == 0x8);
    // private System.Single _moveDuration
    // Size: 0x4
    // Offset: 0x88
    float moveDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _halfJumpDuration
    // Size: 0x4
    // Offset: 0x8C
    float halfJumpDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _fadeInTime
    float& dyn__fadeInTime();
    // Get instance field reference: private System.Single _fadeOutTime
    float& dyn__fadeOutTime();
    // Get instance field reference: private System.Single _jumpStartOffsetTime
    float& dyn__jumpStartOffsetTime();
    // Get instance field reference: private System.Single _cutOffsetTime
    float& dyn__cutOffsetTime();
    // Get instance field reference: private UnityEngine.AnimationCurve _fadeInLightAmountCurve
    ::UnityEngine::AnimationCurve*& dyn__fadeInLightAmountCurve();
    // Get instance field reference: private UnityEngine.AnimationCurve _fadeOutLightAmountCurve
    ::UnityEngine::AnimationCurve*& dyn__fadeOutLightAmountCurve();
    // Get instance field reference: private readonly SpawnRotationChevron/Pool _chevronPool
    ::GlobalNamespace::SpawnRotationChevron::Pool*& dyn__chevronPool();
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSyncController
    ::GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSyncController();
    // Get instance field reference: private readonly BeatmapObjectSpawnController _beatmapObjectSpawnController
    ::GlobalNamespace::BeatmapObjectSpawnController*& dyn__beatmapObjectSpawnController();
    // Get instance field reference: private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    ::GlobalNamespace::IBeatmapObjectCallbackController*& dyn__beatmapObjectCallbackController();
    // Get instance field reference: private readonly SpawnRotationProcessor _spawnRotationProcessor
    ::GlobalNamespace::SpawnRotationProcessor*& dyn__spawnRotationProcessor();
    // Get instance field reference: private BeatmapObjectCallbackData _beatmapObjectCallbackData
    ::GlobalNamespace::BeatmapObjectCallbackData*& dyn__beatmapObjectCallbackData();
    // Get instance field reference: private BeatmapEventCallbackData _beatmapEventCallbackData
    ::GlobalNamespace::BeatmapEventCallbackData*& dyn__beatmapEventCallbackData();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,SpawnRotationChevronManager/DirectionData> _directionToDataDictionary
    ::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::SpawnRotationChevronManager::DirectionData*>*& dyn__directionToDataDictionary();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.Int32> _activeDirections
    ::System::Collections::Generic::HashSet_1<int>*& dyn__activeDirections();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Int32> _reusableDirectionsList
    ::System::Collections::Generic::List_1<int>*& dyn__reusableDirectionsList();
    // Get instance field reference: private System.Single _moveDuration
    float& dyn__moveDuration();
    // Get instance field reference: private System.Single _halfJumpDuration
    float& dyn__halfJumpDuration();
    // protected System.Void Start()
    // Offset: 0x13D522C
    void Start();
    // protected System.Void Update()
    // Offset: 0x13D5540
    void Update();
    // protected System.Void OnDestroy()
    // Offset: 0x13D5F20
    void OnDestroy();
    // private System.Void HandleBeatmapObjectCallback(BeatmapObjectData beatmapObjectData)
    // Offset: 0x13D60E4
    void HandleBeatmapObjectCallback(::GlobalNamespace::BeatmapObjectData* beatmapObjectData);
    // private System.Void HandleBeatmapEventCallback(BeatmapEventData beatmapEventData)
    // Offset: 0x13D64A4
    void HandleBeatmapEventCallback(::GlobalNamespace::BeatmapEventData* beatmapEventData);
    // private System.Void HandleBeatmapObjectSpawnControllerDidInit()
    // Offset: 0x13D534C
    void HandleBeatmapObjectSpawnControllerDidInit();
    // public System.Void .ctor()
    // Offset: 0x13D6520
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpawnRotationChevronManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SpawnRotationChevronManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpawnRotationChevronManager*, creationType>()));
    }
  }; // SpawnRotationChevronManager
  #pragma pack(pop)
  static check_size<sizeof(SpawnRotationChevronManager), 140 + sizeof(float)> __GlobalNamespace_SpawnRotationChevronManagerSizeCheck;
  static_assert(sizeof(SpawnRotationChevronManager) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevronManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevronManager::*)()>(&GlobalNamespace::SpawnRotationChevronManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnRotationChevronManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevronManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevronManager::*)()>(&GlobalNamespace::SpawnRotationChevronManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnRotationChevronManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevronManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevronManager::*)()>(&GlobalNamespace::SpawnRotationChevronManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnRotationChevronManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectCallback
// Il2CppName: HandleBeatmapObjectCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevronManager::*)(::GlobalNamespace::BeatmapObjectData*)>(&GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectCallback)> {
  static const MethodInfo* get() {
    static auto* beatmapObjectData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnRotationChevronManager*), "HandleBeatmapObjectCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapObjectData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapEventCallback
// Il2CppName: HandleBeatmapEventCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevronManager::*)(::GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapEventCallback)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnRotationChevronManager*), "HandleBeatmapEventCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectSpawnControllerDidInit
// Il2CppName: HandleBeatmapObjectSpawnControllerDidInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevronManager::*)()>(&GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectSpawnControllerDidInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnRotationChevronManager*), "HandleBeatmapObjectSpawnControllerDidInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnRotationChevronManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
