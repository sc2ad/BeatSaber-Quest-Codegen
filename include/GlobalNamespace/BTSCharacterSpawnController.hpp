// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BTSCharacterSpawnAnimationController
  class BTSCharacterSpawnAnimationController;
  // Forward declaring type: BTSCharacterSpawnEventEffect
  class BTSCharacterSpawnEventEffect;
  // Forward declaring type: IGamePause
  class IGamePause;
  // Forward declaring type: ILevelEndActions
  class ILevelEndActions;
  // Forward declaring type: BTSCharacter
  class BTSCharacter;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: BTSCharacterSpawnController
  // [TokenAttribute] Offset: FFFFFFFF
  class BTSCharacterSpawnController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BTSCharacterSpawnController::$TimelineStoppedDelayed$d__19
    class $TimelineStoppedDelayed$d__19;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private BTSCharacterSpawnAnimationController _characterSpawnAnimationController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BTSCharacterSpawnAnimationController* characterSpawnAnimationController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BTSCharacterSpawnAnimationController*) == 0x8);
    // [SpaceAttribute] Offset: 0xEFE864
    // private BTSCharacterSpawnEventEffect _btsCharacterSpawnEventEffect
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BTSCharacterSpawnEventEffect* btsCharacterSpawnEventEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BTSCharacterSpawnEventEffect*) == 0x8);
    // [InjectAttribute] Offset: 0xEFE89C
    // private readonly IGamePause _gamePause
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IGamePause* gamePause;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGamePause*) == 0x8);
    // [InjectAttribute] Offset: 0xEFE8AC
    // private readonly ILevelEndActions _levelEndActions
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ILevelEndActions* levelEndActions;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILevelEndActions*) == 0x8);
    // private System.Boolean _characterSpawned
    // Size: 0x1
    // Offset: 0x38
    bool characterSpawned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: characterSpawned and: playableDirectorTimeBeforePause
    char __padding4[0x7] = {};
    // private System.Double _playableDirectorTimeBeforePause
    // Size: 0x8
    // Offset: 0x40
    double playableDirectorTimeBeforePause;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Single _animatorNormalizedTimeBeforePause
    // Size: 0x4
    // Offset: 0x48
    float animatorNormalizedTimeBeforePause;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: animatorNormalizedTimeBeforePause and: despawnCharacterCoroutine
    char __padding6[0x4] = {};
    // private UnityEngine.Coroutine _despawnCharacterCoroutine
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Coroutine* despawnCharacterCoroutine;
    // Field size check
    static_assert(sizeof(UnityEngine::Coroutine*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BTSCharacterSpawnAnimationController _characterSpawnAnimationController
    GlobalNamespace::BTSCharacterSpawnAnimationController*& dyn__characterSpawnAnimationController();
    // Get instance field reference: private BTSCharacterSpawnEventEffect _btsCharacterSpawnEventEffect
    GlobalNamespace::BTSCharacterSpawnEventEffect*& dyn__btsCharacterSpawnEventEffect();
    // Get instance field reference: private readonly IGamePause _gamePause
    GlobalNamespace::IGamePause*& dyn__gamePause();
    // Get instance field reference: private readonly ILevelEndActions _levelEndActions
    GlobalNamespace::ILevelEndActions*& dyn__levelEndActions();
    // Get instance field reference: private System.Boolean _characterSpawned
    bool& dyn__characterSpawned();
    // Get instance field reference: private System.Double _playableDirectorTimeBeforePause
    double& dyn__playableDirectorTimeBeforePause();
    // Get instance field reference: private System.Single _animatorNormalizedTimeBeforePause
    float& dyn__animatorNormalizedTimeBeforePause();
    // Get instance field reference: private UnityEngine.Coroutine _despawnCharacterCoroutine
    UnityEngine::Coroutine*& dyn__despawnCharacterCoroutine();
    // public System.Boolean get_isCharacterVisible()
    // Offset: 0x1250F64
    bool get_isCharacterVisible();
    // public System.Boolean get_isSpawned()
    // Offset: 0x1250F7C
    bool get_isSpawned();
    // protected System.Void Start()
    // Offset: 0x1250F84
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1251320
    void OnDestroy();
    // private System.Void HandleStartCharacterAnimation(BTSCharacter btsCharacter)
    // Offset: 0x1251730
    void HandleStartCharacterAnimation(GlobalNamespace::BTSCharacter* btsCharacter);
    // private System.Void HandleGamePauseDidPause()
    // Offset: 0x1251878
    void HandleGamePauseDidPause();
    // private System.Void HandleGamePauseWillResume()
    // Offset: 0x12518C4
    void HandleGamePauseWillResume();
    // private System.Void HandleGamePauseDidResume()
    // Offset: 0x1251918
    void HandleGamePauseDidResume();
    // private System.Void HandleLevelEndActionsLevelFailed()
    // Offset: 0x125193C
    void HandleLevelEndActionsLevelFailed();
    // private System.Collections.IEnumerator TimelineStoppedDelayed()
    // Offset: 0x1251808
    System::Collections::IEnumerator* TimelineStoppedDelayed();
    // public System.Void .ctor()
    // Offset: 0x125198C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacterSpawnController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSCharacterSpawnController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacterSpawnController*, creationType>()));
    }
  }; // BTSCharacterSpawnController
  #pragma pack(pop)
  static check_size<sizeof(BTSCharacterSpawnController), 80 + sizeof(UnityEngine::Coroutine*)> __GlobalNamespace_BTSCharacterSpawnControllerSizeCheck;
  static_assert(sizeof(BTSCharacterSpawnController) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterSpawnController*, "", "BTSCharacterSpawnController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnController::get_isCharacterVisible
// Il2CppName: get_isCharacterVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BTSCharacterSpawnController::*)()>(&GlobalNamespace::BTSCharacterSpawnController::get_isCharacterVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnController*), "get_isCharacterVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnController::get_isSpawned
// Il2CppName: get_isSpawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BTSCharacterSpawnController::*)()>(&GlobalNamespace::BTSCharacterSpawnController::get_isSpawned)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnController*), "get_isSpawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnController::*)()>(&GlobalNamespace::BTSCharacterSpawnController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnController::*)()>(&GlobalNamespace::BTSCharacterSpawnController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnController::HandleStartCharacterAnimation
// Il2CppName: HandleStartCharacterAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnController::*)(GlobalNamespace::BTSCharacter*)>(&GlobalNamespace::BTSCharacterSpawnController::HandleStartCharacterAnimation)> {
  static const MethodInfo* get() {
    static auto* btsCharacter = &::il2cpp_utils::GetClassFromName("", "BTSCharacter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnController*), "HandleStartCharacterAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{btsCharacter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnController::HandleGamePauseDidPause
// Il2CppName: HandleGamePauseDidPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnController::*)()>(&GlobalNamespace::BTSCharacterSpawnController::HandleGamePauseDidPause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnController*), "HandleGamePauseDidPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnController::HandleGamePauseWillResume
// Il2CppName: HandleGamePauseWillResume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnController::*)()>(&GlobalNamespace::BTSCharacterSpawnController::HandleGamePauseWillResume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnController*), "HandleGamePauseWillResume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnController::HandleGamePauseDidResume
// Il2CppName: HandleGamePauseDidResume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnController::*)()>(&GlobalNamespace::BTSCharacterSpawnController::HandleGamePauseDidResume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnController*), "HandleGamePauseDidResume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnController::HandleLevelEndActionsLevelFailed
// Il2CppName: HandleLevelEndActionsLevelFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnController::*)()>(&GlobalNamespace::BTSCharacterSpawnController::HandleLevelEndActionsLevelFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnController*), "HandleLevelEndActionsLevelFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnController::TimelineStoppedDelayed
// Il2CppName: TimelineStoppedDelayed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::BTSCharacterSpawnController::*)()>(&GlobalNamespace::BTSCharacterSpawnController::TimelineStoppedDelayed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnController*), "TimelineStoppedDelayed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
