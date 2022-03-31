// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IGamePause
#include "GlobalNamespace/IGamePause.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameEnergyCounter
  class GameEnergyCounter;
  // Forward declaring type: PlayerHeadAndObstacleInteraction
  class PlayerHeadAndObstacleInteraction;
  // Forward declaring type: IScoreController
  class IScoreController;
  // Forward declaring type: BeatmapObjectExecutionRatingsRecorder
  class BeatmapObjectExecutionRatingsRecorder;
  // Forward declaring type: SongController
  class SongController;
  // Forward declaring type: SaberManager
  class SaberManager;
  // Forward declaring type: AudioListenerController
  class AudioListenerController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GamePause
  class GamePause;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GamePause);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GamePause*, "", "GamePause");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: GamePause
  // [TokenAttribute] Offset: FFFFFFFF
  class GamePause : public ::Il2CppObject/*, public ::GlobalNamespace::IGamePause*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Action didPauseEvent
    // Size: 0x8
    // Offset: 0x10
    ::System::Action* didPauseEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action willResumeEvent
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* willResumeEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action didResumeEvent
    // Size: 0x8
    // Offset: 0x20
    ::System::Action* didResumeEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // [InjectAttribute] Offset: 0x1252A94
    // private GameEnergyCounter _gameEnergyCounter
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::GameEnergyCounter* gameEnergyCounter;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameEnergyCounter*) == 0x8);
    // [InjectAttribute] Offset: 0x1252AA4
    // private PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::PlayerHeadAndObstacleInteraction* playerHeadAndObstacleInteraction;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerHeadAndObstacleInteraction*) == 0x8);
    // [InjectAttribute] Offset: 0x1252AB4
    // private IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IScoreController*) == 0x8);
    // [InjectAttribute] Offset: 0x1252AC4
    // private BeatmapObjectExecutionRatingsRecorder _beatmapObjectExecutionRatingsRecorder
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder* beatmapObjectExecutionRatingsRecorder;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*) == 0x8);
    // [InjectAttribute] Offset: 0x1252AD4
    // private SongController _songController
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::SongController* songController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SongController*) == 0x8);
    // [InjectAttribute] Offset: 0x1252AE4
    // private SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SaberManager*) == 0x8);
    // [InjectAttribute] Offset: 0x1252AF4
    // private AudioListenerController _audioListenerController
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::AudioListenerController* audioListenerController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioListenerController*) == 0x8);
    // private System.Boolean _pause
    // Size: 0x1
    // Offset: 0x60
    bool pause;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IGamePause
    operator ::GlobalNamespace::IGamePause() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IGamePause*>(this);
    }
    // Get instance field reference: private System.Action didPauseEvent
    ::System::Action*& dyn_didPauseEvent();
    // Get instance field reference: private System.Action willResumeEvent
    ::System::Action*& dyn_willResumeEvent();
    // Get instance field reference: private System.Action didResumeEvent
    ::System::Action*& dyn_didResumeEvent();
    // Get instance field reference: private GameEnergyCounter _gameEnergyCounter
    ::GlobalNamespace::GameEnergyCounter*& dyn__gameEnergyCounter();
    // Get instance field reference: private PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    ::GlobalNamespace::PlayerHeadAndObstacleInteraction*& dyn__playerHeadAndObstacleInteraction();
    // Get instance field reference: private IScoreController _scoreController
    ::GlobalNamespace::IScoreController*& dyn__scoreController();
    // Get instance field reference: private BeatmapObjectExecutionRatingsRecorder _beatmapObjectExecutionRatingsRecorder
    ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*& dyn__beatmapObjectExecutionRatingsRecorder();
    // Get instance field reference: private SongController _songController
    ::GlobalNamespace::SongController*& dyn__songController();
    // Get instance field reference: private SaberManager _saberManager
    ::GlobalNamespace::SaberManager*& dyn__saberManager();
    // Get instance field reference: private AudioListenerController _audioListenerController
    ::GlobalNamespace::AudioListenerController*& dyn__audioListenerController();
    // Get instance field reference: private System.Boolean _pause
    bool& dyn__pause();
    // public System.Boolean get_isPaused()
    // Offset: 0x1397104
    bool get_isPaused();
    // public System.Void add_didPauseEvent(System.Action value)
    // Offset: 0x139710C
    void add_didPauseEvent(::System::Action* value);
    // public System.Void remove_didPauseEvent(System.Action value)
    // Offset: 0x13971B0
    void remove_didPauseEvent(::System::Action* value);
    // public System.Void add_willResumeEvent(System.Action value)
    // Offset: 0x1397254
    void add_willResumeEvent(::System::Action* value);
    // public System.Void remove_willResumeEvent(System.Action value)
    // Offset: 0x13972F8
    void remove_willResumeEvent(::System::Action* value);
    // public System.Void add_didResumeEvent(System.Action value)
    // Offset: 0x139739C
    void add_didResumeEvent(::System::Action* value);
    // public System.Void remove_didResumeEvent(System.Action value)
    // Offset: 0x1397440
    void remove_didResumeEvent(::System::Action* value);
    // public System.Void Pause()
    // Offset: 0x13974E4
    void Pause();
    // public System.Void WillResume()
    // Offset: 0x139763C
    void WillResume();
    // public System.Void Resume()
    // Offset: 0x1397658
    void Resume();
    // public System.Void .ctor()
    // Offset: 0x13977AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GamePause* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GamePause::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GamePause*, creationType>()));
    }
  }; // GamePause
  #pragma pack(pop)
  static check_size<sizeof(GamePause), 96 + sizeof(bool)> __GlobalNamespace_GamePauseSizeCheck;
  static_assert(sizeof(GamePause) == 0x61);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GamePause::get_isPaused
// Il2CppName: get_isPaused
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GamePause::*)()>(&GlobalNamespace::GamePause::get_isPaused)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GamePause*), "get_isPaused", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GamePause::add_didPauseEvent
// Il2CppName: add_didPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GamePause::*)(::System::Action*)>(&GlobalNamespace::GamePause::add_didPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GamePause*), "add_didPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GamePause::remove_didPauseEvent
// Il2CppName: remove_didPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GamePause::*)(::System::Action*)>(&GlobalNamespace::GamePause::remove_didPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GamePause*), "remove_didPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GamePause::add_willResumeEvent
// Il2CppName: add_willResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GamePause::*)(::System::Action*)>(&GlobalNamespace::GamePause::add_willResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GamePause*), "add_willResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GamePause::remove_willResumeEvent
// Il2CppName: remove_willResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GamePause::*)(::System::Action*)>(&GlobalNamespace::GamePause::remove_willResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GamePause*), "remove_willResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GamePause::add_didResumeEvent
// Il2CppName: add_didResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GamePause::*)(::System::Action*)>(&GlobalNamespace::GamePause::add_didResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GamePause*), "add_didResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GamePause::remove_didResumeEvent
// Il2CppName: remove_didResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GamePause::*)(::System::Action*)>(&GlobalNamespace::GamePause::remove_didResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GamePause*), "remove_didResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GamePause::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GamePause::*)()>(&GlobalNamespace::GamePause::Pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GamePause*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GamePause::WillResume
// Il2CppName: WillResume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GamePause::*)()>(&GlobalNamespace::GamePause::WillResume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GamePause*), "WillResume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GamePause::Resume
// Il2CppName: Resume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GamePause::*)()>(&GlobalNamespace::GamePause::Resume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GamePause*), "Resume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GamePause::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
