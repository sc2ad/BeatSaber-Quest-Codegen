// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
// Including type: ICubeNoteControllerInitializable`1
#include "GlobalNamespace/ICubeNoteControllerInitializable_1.hpp"
// Including type: IGameNoteMirrorable
#include "GlobalNamespace/IGameNoteMirrorable.hpp"
// Including type: INoteVisualModifierTypeProvider
#include "GlobalNamespace/INoteVisualModifierTypeProvider.hpp"
// Including type: INoteMovementProvider
#include "GlobalNamespace/INoteMovementProvider.hpp"
// Including type: NoteVisualModifierType
#include "GlobalNamespace/NoteVisualModifierType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoxCuttableBySaber
  class BoxCuttableBySaber;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: NoteMovement
  class NoteMovement;
  // Skipping declaration: NoteData because it is already included!
  // Forward declaring type: Saber
  class Saber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
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
  // Forward declaring type: GameNoteController
  class GameNoteController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameNoteController*, "", "GameNoteController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB4
  #pragma pack(push, 1)
  // Autogenerated type: GameNoteController
  // [TokenAttribute] Offset: FFFFFFFF
  class GameNoteController : public ::GlobalNamespace::NoteController/*, public ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::GameNoteController*>, public ::GlobalNamespace::IGameNoteMirrorable, public ::GlobalNamespace::INoteVisualModifierTypeProvider, public ::GlobalNamespace::INoteMovementProvider*/ {
    public:
    // Nested type: ::GlobalNamespace::GameNoteController::Pool
    class Pool;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private BoxCuttableBySaber[] _bigCuttableBySaberList
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*> bigCuttableBySaberList;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BoxCuttableBySaber*>) == 0x8);
    // private BoxCuttableBySaber[] _smallCuttableBySaberList
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*> smallCuttableBySaberList;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BoxCuttableBySaber*>) == 0x8);
    // private UnityEngine.GameObject _wrapperGO
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::GameObject* wrapperGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0x124F130
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x98
    ::GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // private System.Action`1<GameNoteController> cubeNoteControllerDidInitEvent
    // Size: 0x8
    // Offset: 0xA0
    ::System::Action_1<::GlobalNamespace::GameNoteController*>* cubeNoteControllerDidInitEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::GameNoteController*>*) == 0x8);
    // private NoteVisualModifierType _noteVisualModifierType
    // Size: 0x4
    // Offset: 0xA8
    ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteVisualModifierType) == 0x4);
    // private NoteData/GameplayType _gameplayType
    // Size: 0x4
    // Offset: 0xAC
    ::GlobalNamespace::NoteData::GameplayType gameplayType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteData::GameplayType) == 0x4);
    // private System.Single _cutAngleTolerance
    // Size: 0x4
    // Offset: 0xB0
    float cutAngleTolerance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::GameNoteController*>
    operator ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::GameNoteController*>() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::GameNoteController*>*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IGameNoteMirrorable
    operator ::GlobalNamespace::IGameNoteMirrorable() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IGameNoteMirrorable*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::INoteVisualModifierTypeProvider
    operator ::GlobalNamespace::INoteVisualModifierTypeProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::INoteVisualModifierTypeProvider*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::INoteMovementProvider
    operator ::GlobalNamespace::INoteMovementProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::INoteMovementProvider*>(this);
    }
    // Get instance field reference: private BoxCuttableBySaber[] _bigCuttableBySaberList
    ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*>& dyn__bigCuttableBySaberList();
    // Get instance field reference: private BoxCuttableBySaber[] _smallCuttableBySaberList
    ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*>& dyn__smallCuttableBySaberList();
    // Get instance field reference: private UnityEngine.GameObject _wrapperGO
    ::UnityEngine::GameObject*& dyn__wrapperGO();
    // Get instance field reference: private readonly AudioTimeSyncController _audioTimeSyncController
    ::GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private System.Action`1<GameNoteController> cubeNoteControllerDidInitEvent
    ::System::Action_1<::GlobalNamespace::GameNoteController*>*& dyn_cubeNoteControllerDidInitEvent();
    // Get instance field reference: private NoteVisualModifierType _noteVisualModifierType
    ::GlobalNamespace::NoteVisualModifierType& dyn__noteVisualModifierType();
    // Get instance field reference: private NoteData/GameplayType _gameplayType
    ::GlobalNamespace::NoteData::GameplayType& dyn__gameplayType();
    // Get instance field reference: private System.Single _cutAngleTolerance
    float& dyn__cutAngleTolerance();
    // public NoteMovement get_noteMovement()
    // Offset: 0x1396014
    ::GlobalNamespace::NoteMovement* get_noteMovement();
    // public NoteVisualModifierType get_noteVisualModifierType()
    // Offset: 0x139601C
    ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType();
    // public NoteData/GameplayType get_gameplayType()
    // Offset: 0x1396024
    ::GlobalNamespace::NoteData::GameplayType get_gameplayType();
    // public System.Void add_cubeNoteControllerDidInitEvent(System.Action`1<GameNoteController> value)
    // Offset: 0x1395ECC
    void add_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::GameNoteController*>* value);
    // public System.Void remove_cubeNoteControllerDidInitEvent(System.Action`1<GameNoteController> value)
    // Offset: 0x1395F70
    void remove_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::GameNoteController*>* value);
    // public System.Void Init(NoteData noteData, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, NoteVisualModifierType noteVisualModifierType, System.Single cutAngleTolerance, System.Single uniformScale)
    // Offset: 0x139602C
    void Init(::GlobalNamespace::NoteData* noteData, float worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType, float cutAngleTolerance, float uniformScale);
    // private System.Void HandleBigWasCutBySaber(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0x1396814
    void HandleBigWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);
    // private System.Void HandleSmallWasCutBySaber(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0x1396D60
    void HandleSmallWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);
    // private System.Void HandleCut(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec, System.Boolean allowBadCut)
    // Offset: 0x139682C
    void HandleCut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec, bool allowBadCut);
    // public System.Void .ctor()
    // Offset: 0x1396E78
    // Implemented from: NoteController
    // Base method: System.Void NoteController::.ctor()
    // Base method: System.Void NoteControllerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameNoteController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameNoteController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameNoteController*, creationType>()));
    }
    // protected override System.Void Awake()
    // Offset: 0x1396334
    // Implemented from: NoteController
    // Base method: System.Void NoteController::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0x1396498
    // Implemented from: NoteController
    // Base method: System.Void NoteController::OnDestroy()
    void OnDestroy();
    // protected override System.Void NoteDidPassMissedMarker()
    // Offset: 0x1396674
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidPassMissedMarker()
    void NoteDidPassMissedMarker();
    // protected override System.Void NoteDidStartDissolving()
    // Offset: 0x1396748
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidStartDissolving()
    void NoteDidStartDissolving();
    // protected override System.Void NoteDidStartJump()
    // Offset: 0x1396D78
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidStartJump()
    void NoteDidStartJump();
    // protected override System.Void HiddenStateDidChange(System.Boolean hide)
    // Offset: 0x1396E44
    // Implemented from: NoteController
    // Base method: System.Void NoteController::HiddenStateDidChange(System.Boolean hide)
    void HiddenStateDidChange(bool hide);
    // public override System.Void Pause(System.Boolean pause)
    // Offset: 0x1396E68
    // Implemented from: NoteController
    // Base method: System.Void NoteController::Pause(System.Boolean pause)
    void Pause(bool pause);
  }; // GameNoteController
  #pragma pack(pop)
  static check_size<sizeof(GameNoteController), 176 + sizeof(float)> __GlobalNamespace_GameNoteControllerSizeCheck;
  static_assert(sizeof(GameNoteController) == 0xB4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::get_noteMovement
// Il2CppName: get_noteMovement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteMovement* (GlobalNamespace::GameNoteController::*)()>(&GlobalNamespace::GameNoteController::get_noteMovement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "get_noteMovement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::get_noteVisualModifierType
// Il2CppName: get_noteVisualModifierType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteVisualModifierType (GlobalNamespace::GameNoteController::*)()>(&GlobalNamespace::GameNoteController::get_noteVisualModifierType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "get_noteVisualModifierType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::get_gameplayType
// Il2CppName: get_gameplayType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteData::GameplayType (GlobalNamespace::GameNoteController::*)()>(&GlobalNamespace::GameNoteController::get_gameplayType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "get_gameplayType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::add_cubeNoteControllerDidInitEvent
// Il2CppName: add_cubeNoteControllerDidInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)(::System::Action_1<::GlobalNamespace::GameNoteController*>*)>(&GlobalNamespace::GameNoteController::add_cubeNoteControllerDidInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "GameNoteController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "add_cubeNoteControllerDidInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::remove_cubeNoteControllerDidInitEvent
// Il2CppName: remove_cubeNoteControllerDidInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)(::System::Action_1<::GlobalNamespace::GameNoteController*>*)>(&GlobalNamespace::GameNoteController::remove_cubeNoteControllerDidInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "GameNoteController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "remove_cubeNoteControllerDidInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)(::GlobalNamespace::NoteData*, float, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float, float, float, ::GlobalNamespace::NoteVisualModifierType, float, float)>(&GlobalNamespace::GameNoteController::Init)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    static auto* worldRotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* moveStartPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* moveEndPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* jumpEndPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* moveDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* jumpDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* jumpGravity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* noteVisualModifierType = &::il2cpp_utils::GetClassFromName("", "NoteVisualModifierType")->byval_arg;
    static auto* cutAngleTolerance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* uniformScale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData, worldRotation, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity, noteVisualModifierType, cutAngleTolerance, uniformScale});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::HandleBigWasCutBySaber
// Il2CppName: HandleBigWasCutBySaber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&GlobalNamespace::GameNoteController::HandleBigWasCutBySaber)> {
  static const MethodInfo* get() {
    static auto* saber = &::il2cpp_utils::GetClassFromName("", "Saber")->byval_arg;
    static auto* cutPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* orientation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* cutDirVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "HandleBigWasCutBySaber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saber, cutPoint, orientation, cutDirVec});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::HandleSmallWasCutBySaber
// Il2CppName: HandleSmallWasCutBySaber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&GlobalNamespace::GameNoteController::HandleSmallWasCutBySaber)> {
  static const MethodInfo* get() {
    static auto* saber = &::il2cpp_utils::GetClassFromName("", "Saber")->byval_arg;
    static auto* cutPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* orientation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* cutDirVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "HandleSmallWasCutBySaber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saber, cutPoint, orientation, cutDirVec});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::HandleCut
// Il2CppName: HandleCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, bool)>(&GlobalNamespace::GameNoteController::HandleCut)> {
  static const MethodInfo* get() {
    static auto* saber = &::il2cpp_utils::GetClassFromName("", "Saber")->byval_arg;
    static auto* cutPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* orientation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* cutDirVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* allowBadCut = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "HandleCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saber, cutPoint, orientation, cutDirVec, allowBadCut});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)()>(&GlobalNamespace::GameNoteController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)()>(&GlobalNamespace::GameNoteController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::NoteDidPassMissedMarker
// Il2CppName: NoteDidPassMissedMarker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)()>(&GlobalNamespace::GameNoteController::NoteDidPassMissedMarker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "NoteDidPassMissedMarker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::NoteDidStartDissolving
// Il2CppName: NoteDidStartDissolving
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)()>(&GlobalNamespace::GameNoteController::NoteDidStartDissolving)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "NoteDidStartDissolving", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::NoteDidStartJump
// Il2CppName: NoteDidStartJump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)()>(&GlobalNamespace::GameNoteController::NoteDidStartJump)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "NoteDidStartJump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::HiddenStateDidChange
// Il2CppName: HiddenStateDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)(bool)>(&GlobalNamespace::GameNoteController::HiddenStateDidChange)> {
  static const MethodInfo* get() {
    static auto* hide = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "HiddenStateDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hide});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)(bool)>(&GlobalNamespace::GameNoteController::Pause)> {
  static const MethodInfo* get() {
    static auto* pause = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pause});
  }
};
