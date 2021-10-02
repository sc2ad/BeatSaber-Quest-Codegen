// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IAudioTimeSource
#include "GlobalNamespace/IAudioTimeSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectSpawnController
  class BeatmapObjectSpawnController;
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
  // Forward declaring type: BasicSpectrogramData
  class BasicSpectrogramData;
  // Forward declaring type: SaberManager
  class SaberManager;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: Saber
  class Saber;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
  // Forward declaring type: BeatmapObjectCallbackData
  class BeatmapObjectCallbackData;
  // Forward declaring type: BeatmapObjectCallback
  class BeatmapObjectCallback;
  // Forward declaring type: BeatmapEventCallbackData
  class BeatmapEventCallbackData;
  // Forward declaring type: BeatmapEventCallback
  class BeatmapEventCallback;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: GameplayFacade
  // [TokenAttribute] Offset: FFFFFFFF
  class GameplayFacade : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IAudioTimeSource*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [InjectAttribute] Offset: 0xF0C060
    // private readonly BeatmapObjectSpawnController _beatmapObjectSpawnController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapObjectSpawnController* beatmapObjectSpawnController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectSpawnController*) == 0x8);
    // [InjectAttribute] Offset: 0xF0C070
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // [InjectAttribute] Offset: 0xF0C080
    // private readonly BasicSpectrogramData _spectrogramData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BasicSpectrogramData* spectrogramData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BasicSpectrogramData*) == 0x8);
    // [InjectAttribute] Offset: 0xF0C090
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF0C0A0
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [InjectOptionalAttribute] Offset: 0xF0C0B0
    // private readonly IDifficultyBeatmap _difficultyBeatmap
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::IAudioTimeSource
    operator GlobalNamespace::IAudioTimeSource() noexcept {
      return *reinterpret_cast<GlobalNamespace::IAudioTimeSource*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly BeatmapObjectSpawnController _beatmapObjectSpawnController
    GlobalNamespace::BeatmapObjectSpawnController*& dyn__beatmapObjectSpawnController();
    // Get instance field reference: private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    GlobalNamespace::IBeatmapObjectCallbackController*& dyn__beatmapObjectCallbackController();
    // Get instance field reference: private readonly BasicSpectrogramData _spectrogramData
    GlobalNamespace::BasicSpectrogramData*& dyn__spectrogramData();
    // Get instance field reference: private readonly SaberManager _saberManager
    GlobalNamespace::SaberManager*& dyn__saberManager();
    // Get instance field reference: private readonly AudioTimeSyncController _audioTimeSyncController
    GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private readonly IDifficultyBeatmap _difficultyBeatmap
    GlobalNamespace::IDifficultyBeatmap*& dyn__difficultyBeatmap();
    // public IDifficultyBeatmap get_difficultyBeatmap()
    // Offset: 0x11E4314
    GlobalNamespace::IDifficultyBeatmap* get_difficultyBeatmap();
    // public System.Single get_songTime()
    // Offset: 0x11E431C
    float get_songTime();
    // public System.Single get_lastFrameDeltaSongTime()
    // Offset: 0x11E4338
    float get_lastFrameDeltaSongTime();
    // public System.Single get_songEndTime()
    // Offset: 0x11E4354
    float get_songEndTime();
    // public System.Boolean get_isReady()
    // Offset: 0x11E4370
    bool get_isReady();
    // public System.Boolean get_isInitialized()
    // Offset: 0x11E438C
    bool get_isInitialized();
    // public System.Single get_moveDuration()
    // Offset: 0x11E43A8
    float get_moveDuration();
    // public System.Single get_jumpDuration()
    // Offset: 0x11E43C4
    float get_jumpDuration();
    // public System.Collections.Generic.List`1<System.Single> get_ProcessedSamples()
    // Offset: 0x11E4418
    System::Collections::Generic::List_1<float>* get_ProcessedSamples();
    // public Saber get_leftSaber()
    // Offset: 0x11E4434
    GlobalNamespace::Saber* get_leftSaber();
    // public Saber get_rightSaber()
    // Offset: 0x11E4450
    GlobalNamespace::Saber* get_rightSaber();
    // public System.Void add_didInitEvent(System.Action value)
    // Offset: 0x11E43E0
    void add_didInitEvent(System::Action* value);
    // public System.Void remove_didInitEvent(System.Action value)
    // Offset: 0x11E43FC
    void remove_didInitEvent(System::Action* value);
    // public System.Void add_beatmapEventDidTriggerEvent(System.Action`1<BeatmapEventData> value)
    // Offset: 0x11E446C
    void add_beatmapEventDidTriggerEvent(System::Action_1<GlobalNamespace::BeatmapEventData*>* value);
    // public System.Void remove_beatmapEventDidTriggerEvent(System.Action`1<BeatmapEventData> value)
    // Offset: 0x11E452C
    void remove_beatmapEventDidTriggerEvent(System::Action_1<GlobalNamespace::BeatmapEventData*>* value);
    // public BeatmapObjectCallbackData AddBeatmapObjectCallback(BeatmapObjectCallback callback, System.Single aheadTime)
    // Offset: 0x11E45F0
    GlobalNamespace::BeatmapObjectCallbackData* AddBeatmapObjectCallback(GlobalNamespace::BeatmapObjectCallback* callback, float aheadTime);
    // public System.Void RemoveBeatmapObjectCallback(BeatmapObjectCallbackData callbackData)
    // Offset: 0x11E46C4
    void RemoveBeatmapObjectCallback(GlobalNamespace::BeatmapObjectCallbackData* callbackData);
    // public BeatmapEventCallbackData AddBeatmapEventCallback(BeatmapEventCallback callback, System.Single aheadTime)
    // Offset: 0x11E4788
    GlobalNamespace::BeatmapEventCallbackData* AddBeatmapEventCallback(GlobalNamespace::BeatmapEventCallback* callback, float aheadTime);
    // public System.Void RemoveBeatmapEventCallback(BeatmapEventCallbackData callbackData)
    // Offset: 0x11E485C
    void RemoveBeatmapEventCallback(GlobalNamespace::BeatmapEventCallbackData* callbackData);
    // public System.Void .ctor()
    // Offset: 0x11E4920
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayFacade* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayFacade::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayFacade*, creationType>()));
    }
  }; // GameplayFacade
  #pragma pack(pop)
  static check_size<sizeof(GameplayFacade), 64 + sizeof(GlobalNamespace::IDifficultyBeatmap*)> __GlobalNamespace_GameplayFacadeSizeCheck;
  static_assert(sizeof(GameplayFacade) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayFacade*, "", "GameplayFacade");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::get_difficultyBeatmap
// Il2CppName: get_difficultyBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IDifficultyBeatmap* (GlobalNamespace::GameplayFacade::*)()>(&GlobalNamespace::GameplayFacade::get_difficultyBeatmap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayFacade*), "get_difficultyBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::get_songTime
// Il2CppName: get_songTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::GameplayFacade::*)()>(&GlobalNamespace::GameplayFacade::get_songTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayFacade*), "get_songTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::get_lastFrameDeltaSongTime
// Il2CppName: get_lastFrameDeltaSongTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::GameplayFacade::*)()>(&GlobalNamespace::GameplayFacade::get_lastFrameDeltaSongTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayFacade*), "get_lastFrameDeltaSongTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::get_songEndTime
// Il2CppName: get_songEndTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::GameplayFacade::*)()>(&GlobalNamespace::GameplayFacade::get_songEndTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayFacade*), "get_songEndTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::get_isReady
// Il2CppName: get_isReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayFacade::*)()>(&GlobalNamespace::GameplayFacade::get_isReady)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayFacade*), "get_isReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::get_isInitialized
// Il2CppName: get_isInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayFacade::*)()>(&GlobalNamespace::GameplayFacade::get_isInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayFacade*), "get_isInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::get_moveDuration
// Il2CppName: get_moveDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::GameplayFacade::*)()>(&GlobalNamespace::GameplayFacade::get_moveDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayFacade*), "get_moveDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::get_jumpDuration
// Il2CppName: get_jumpDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::GameplayFacade::*)()>(&GlobalNamespace::GameplayFacade::get_jumpDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayFacade*), "get_jumpDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::get_ProcessedSamples
// Il2CppName: get_ProcessedSamples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<float>* (GlobalNamespace::GameplayFacade::*)()>(&GlobalNamespace::GameplayFacade::get_ProcessedSamples)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayFacade*), "get_ProcessedSamples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::get_leftSaber
// Il2CppName: get_leftSaber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::Saber* (GlobalNamespace::GameplayFacade::*)()>(&GlobalNamespace::GameplayFacade::get_leftSaber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayFacade*), "get_leftSaber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::get_rightSaber
// Il2CppName: get_rightSaber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::Saber* (GlobalNamespace::GameplayFacade::*)()>(&GlobalNamespace::GameplayFacade::get_rightSaber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayFacade*), "get_rightSaber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::add_didInitEvent
// Il2CppName: add_didInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayFacade::*)(System::Action*)>(&GlobalNamespace::GameplayFacade::add_didInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayFacade*), "add_didInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::remove_didInitEvent
// Il2CppName: remove_didInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayFacade::*)(System::Action*)>(&GlobalNamespace::GameplayFacade::remove_didInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayFacade*), "remove_didInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::add_beatmapEventDidTriggerEvent
// Il2CppName: add_beatmapEventDidTriggerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayFacade::*)(System::Action_1<GlobalNamespace::BeatmapEventData*>*)>(&GlobalNamespace::GameplayFacade::add_beatmapEventDidTriggerEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapEventData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayFacade*), "add_beatmapEventDidTriggerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::remove_beatmapEventDidTriggerEvent
// Il2CppName: remove_beatmapEventDidTriggerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayFacade::*)(System::Action_1<GlobalNamespace::BeatmapEventData*>*)>(&GlobalNamespace::GameplayFacade::remove_beatmapEventDidTriggerEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapEventData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayFacade*), "remove_beatmapEventDidTriggerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::AddBeatmapObjectCallback
// Il2CppName: AddBeatmapObjectCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapObjectCallbackData* (GlobalNamespace::GameplayFacade::*)(GlobalNamespace::BeatmapObjectCallback*, float)>(&GlobalNamespace::GameplayFacade::AddBeatmapObjectCallback)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectCallback")->byval_arg;
    static auto* aheadTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayFacade*), "AddBeatmapObjectCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, aheadTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::RemoveBeatmapObjectCallback
// Il2CppName: RemoveBeatmapObjectCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayFacade::*)(GlobalNamespace::BeatmapObjectCallbackData*)>(&GlobalNamespace::GameplayFacade::RemoveBeatmapObjectCallback)> {
  static const MethodInfo* get() {
    static auto* callbackData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectCallbackData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayFacade*), "RemoveBeatmapObjectCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callbackData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::AddBeatmapEventCallback
// Il2CppName: AddBeatmapEventCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapEventCallbackData* (GlobalNamespace::GameplayFacade::*)(GlobalNamespace::BeatmapEventCallback*, float)>(&GlobalNamespace::GameplayFacade::AddBeatmapEventCallback)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("", "BeatmapEventCallback")->byval_arg;
    static auto* aheadTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayFacade*), "AddBeatmapEventCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, aheadTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::RemoveBeatmapEventCallback
// Il2CppName: RemoveBeatmapEventCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayFacade::*)(GlobalNamespace::BeatmapEventCallbackData*)>(&GlobalNamespace::GameplayFacade::RemoveBeatmapEventCallback)> {
  static const MethodInfo* get() {
    static auto* callbackData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventCallbackData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayFacade*), "RemoveBeatmapEventCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callbackData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayFacade::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
