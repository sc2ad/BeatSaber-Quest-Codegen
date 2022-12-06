// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IMultiplayerLevelEndActionsPublisher
#include "GlobalNamespace/IMultiplayerLevelEndActionsPublisher.hpp"
// Including type: IMultiplayerLevelEndActionsListener
#include "GlobalNamespace/IMultiplayerLevelEndActionsListener.hpp"
// Including type: IStartSeekSongControllerProvider
#include "GlobalNamespace/IStartSeekSongControllerProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IStartSeekSongController
  class IStartSeekSongController;
  // Forward declaring type: MultiplayerLocalActivePlayerIntroAnimator
  class MultiplayerLocalActivePlayerIntroAnimator;
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
  // Forward declaring type: BeatmapCallbacksUpdater
  class BeatmapCallbacksUpdater;
  // Forward declaring type: MultiplayerLevelCompletionResults
  class MultiplayerLevelCompletionResults;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLocalActivePlayerFacade
  class MultiplayerLocalActivePlayerFacade;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerFacade);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerFacade*, "", "MultiplayerLocalActivePlayerFacade");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalActivePlayerFacade
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalActivePlayerFacade : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher, public ::GlobalNamespace::IMultiplayerLevelEndActionsListener, public ::GlobalNamespace::IStartSeekSongControllerProvider*/ {
    public:
    // Nested type: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::Factory
    class Factory;
    public:
    // private UnityEngine.GameObject[] _activeOnlyGameObjects
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::GameObject*> activeOnlyGameObjects;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // private UnityEngine.GameObject _outroAnimator
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* outroAnimator;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0x1119CD0
    // private readonly IStartSeekSongController _songController
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::IStartSeekSongController* songController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IStartSeekSongController*) == 0x8);
    // [InjectAttribute] Offset: 0x1119CE0
    // private readonly MultiplayerLocalActivePlayerIntroAnimator _introAnimator
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* introAnimator;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*) == 0x8);
    // [InjectAttribute] Offset: 0x1119CF0
    // private readonly GameSongController _gameSongController
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::GameSongController* gameSongController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameSongController*) == 0x8);
    // [InjectAttribute] Offset: 0x1119D00
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0x1119D10
    // private readonly PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PrepareLevelCompletionResults*) == 0x8);
    // [InjectAttribute] Offset: 0x1119D20
    // private readonly BeatmapCallbacksUpdater _beatmapCallbacksUpdater
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::BeatmapCallbacksUpdater* beatmapCallbacksUpdater;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksUpdater*) == 0x8);
    // private System.Action`1<MultiplayerLevelCompletionResults> playerDidFinishEvent
    // Size: 0x8
    // Offset: 0x58
    ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* playerDidFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*) == 0x8);
    // private System.Action`1<MultiplayerLevelCompletionResults> playerNetworkDidFailedEvent
    // Size: 0x8
    // Offset: 0x60
    ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* playerNetworkDidFailedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher
    operator ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(this);
    }
    // Creating interface conversion operator: i_IMultiplayerLevelEndActionsPublisher
    inline ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* i_IMultiplayerLevelEndActionsPublisher() noexcept {
      return reinterpret_cast<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IMultiplayerLevelEndActionsListener
    operator ::GlobalNamespace::IMultiplayerLevelEndActionsListener() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>(this);
    }
    // Creating interface conversion operator: i_IMultiplayerLevelEndActionsListener
    inline ::GlobalNamespace::IMultiplayerLevelEndActionsListener* i_IMultiplayerLevelEndActionsListener() noexcept {
      return reinterpret_cast<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IStartSeekSongControllerProvider
    operator ::GlobalNamespace::IStartSeekSongControllerProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IStartSeekSongControllerProvider*>(this);
    }
    // Creating interface conversion operator: i_IStartSeekSongControllerProvider
    inline ::GlobalNamespace::IStartSeekSongControllerProvider* i_IStartSeekSongControllerProvider() noexcept {
      return reinterpret_cast<::GlobalNamespace::IStartSeekSongControllerProvider*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.GameObject[] _activeOnlyGameObjects
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn__activeOnlyGameObjects();
    // Get instance field reference: private UnityEngine.GameObject _outroAnimator
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__outroAnimator();
    // Get instance field reference: private readonly IStartSeekSongController _songController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IStartSeekSongController*& dyn__songController();
    // Get instance field reference: private readonly MultiplayerLocalActivePlayerIntroAnimator _introAnimator
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*& dyn__introAnimator();
    // Get instance field reference: private readonly GameSongController _gameSongController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameSongController*& dyn__gameSongController();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private readonly PrepareLevelCompletionResults _prepareLevelCompletionResults
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PrepareLevelCompletionResults*& dyn__prepareLevelCompletionResults();
    // Get instance field reference: private readonly BeatmapCallbacksUpdater _beatmapCallbacksUpdater
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCallbacksUpdater*& dyn__beatmapCallbacksUpdater();
    // Get instance field reference: private System.Action`1<MultiplayerLevelCompletionResults> playerDidFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& dyn_playerDidFinishEvent();
    // Get instance field reference: private System.Action`1<MultiplayerLevelCompletionResults> playerNetworkDidFailedEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& dyn_playerNetworkDidFailedEvent();
    // public MultiplayerLocalActivePlayerIntroAnimator get_introAnimator()
    // Offset: 0x13C5B8C
    ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* get_introAnimator();
    // public UnityEngine.GameObject get_outroAnimator()
    // Offset: 0x13C5B94
    ::UnityEngine::GameObject* get_outroAnimator();
    // public IStartSeekSongController get_songController()
    // Offset: 0x13C5B9C
    ::GlobalNamespace::IStartSeekSongController* get_songController();
    // public LevelCompletionResults get_currentLocalPlayerLevelCompletionResult()
    // Offset: 0x13C5BA4
    ::GlobalNamespace::LevelCompletionResults* get_currentLocalPlayerLevelCompletionResult();
    // public System.Void add_playerDidFinishEvent(System.Action`1<MultiplayerLevelCompletionResults> value)
    // Offset: 0x13C5BC8
    void add_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);
    // public System.Void remove_playerDidFinishEvent(System.Action`1<MultiplayerLevelCompletionResults> value)
    // Offset: 0x13C5C6C
    void remove_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);
    // public System.Void add_playerNetworkDidFailedEvent(System.Action`1<MultiplayerLevelCompletionResults> value)
    // Offset: 0x13C5D10
    void add_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);
    // public System.Void remove_playerNetworkDidFailedEvent(System.Action`1<MultiplayerLevelCompletionResults> value)
    // Offset: 0x13C5DB4
    void remove_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);
    // public System.Void .ctor()
    // Offset: 0x13C6030
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActivePlayerFacade* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerLocalActivePlayerFacade::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActivePlayerFacade*, creationType>()));
    }
    // public System.Void ReportPlayerDidFinish(MultiplayerLevelCompletionResults results)
    // Offset: 0x13C5E58
    void ReportPlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults* results);
    // public System.Void ReportPlayerNetworkDidFailed(MultiplayerLevelCompletionResults results)
    // Offset: 0x13C5ECC
    void ReportPlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults* results);
    // public System.Void DisablePlayer()
    // Offset: 0x13C5F40
    void DisablePlayer();
    // public System.Void PauseSpawning()
    // Offset: 0x13C5FB0
    void PauseSpawning();
    // public System.Void ResumeSpawning()
    // Offset: 0x13C5FCC
    void ResumeSpawning();
    // public System.Void __ForceStopSong()
    // Offset: 0x13C5FE8
    void __ForceStopSong();
    // public UnityEngine.GameObject[] __GetActiveOnlyGameObjects()
    // Offset: 0x13C6028
    ::ArrayW<::UnityEngine::GameObject*> __GetActiveOnlyGameObjects();
  }; // MultiplayerLocalActivePlayerFacade
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalActivePlayerFacade), 96 + sizeof(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)> __GlobalNamespace_MultiplayerLocalActivePlayerFacadeSizeCheck;
  static_assert(sizeof(MultiplayerLocalActivePlayerFacade) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_introAnimator
// Il2CppName: get_introAnimator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_introAnimator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "get_introAnimator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_outroAnimator
// Il2CppName: get_outroAnimator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_outroAnimator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "get_outroAnimator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_songController
// Il2CppName: get_songController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IStartSeekSongController* (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_songController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "get_songController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_currentLocalPlayerLevelCompletionResult
// Il2CppName: get_currentLocalPlayerLevelCompletionResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LevelCompletionResults* (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_currentLocalPlayerLevelCompletionResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "get_currentLocalPlayerLevelCompletionResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerDidFinishEvent
// Il2CppName: add_playerDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerLevelCompletionResults")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "add_playerDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerDidFinishEvent
// Il2CppName: remove_playerDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerLevelCompletionResults")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "remove_playerDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerNetworkDidFailedEvent
// Il2CppName: add_playerNetworkDidFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerNetworkDidFailedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerLevelCompletionResults")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "add_playerNetworkDidFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerNetworkDidFailedEvent
// Il2CppName: remove_playerNetworkDidFailedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerNetworkDidFailedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerLevelCompletionResults")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "remove_playerNetworkDidFailedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerDidFinish
// Il2CppName: ReportPlayerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(::GlobalNamespace::MultiplayerLevelCompletionResults*)>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerDidFinish)> {
  static const MethodInfo* get() {
    static auto* results = &::il2cpp_utils::GetClassFromName("", "MultiplayerLevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "ReportPlayerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{results});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerNetworkDidFailed
// Il2CppName: ReportPlayerNetworkDidFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(::GlobalNamespace::MultiplayerLevelCompletionResults*)>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerNetworkDidFailed)> {
  static const MethodInfo* get() {
    static auto* results = &::il2cpp_utils::GetClassFromName("", "MultiplayerLevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "ReportPlayerNetworkDidFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{results});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::DisablePlayer
// Il2CppName: DisablePlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::DisablePlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "DisablePlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::PauseSpawning
// Il2CppName: PauseSpawning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::PauseSpawning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "PauseSpawning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::ResumeSpawning
// Il2CppName: ResumeSpawning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::ResumeSpawning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "ResumeSpawning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::__ForceStopSong
// Il2CppName: __ForceStopSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::__ForceStopSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "__ForceStopSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::__GetActiveOnlyGameObjects
// Il2CppName: __GetActiveOnlyGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GameObject*> (GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerFacade::__GetActiveOnlyGameObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerFacade*), "__GetActiveOnlyGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
