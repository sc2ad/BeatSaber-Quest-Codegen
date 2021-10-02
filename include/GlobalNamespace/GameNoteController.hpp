// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
// Including type: ICubeNoteControllerInitializable`1
#include "GlobalNamespace/ICubeNoteControllerInitializable_1.hpp"
// Including type: ISaberSwingRatingCounterDidFinishReceiver
#include "GlobalNamespace/ISaberSwingRatingCounterDidFinishReceiver.hpp"
// Including type: ICubeNoteMirrorable
#include "GlobalNamespace/ICubeNoteMirrorable.hpp"
// Including type: ICubeNoteTypeProvider
#include "GlobalNamespace/ICubeNoteTypeProvider.hpp"
// Including type: INoteMovementProvider
#include "GlobalNamespace/INoteMovementProvider.hpp"
// Including type: SaberSwingRatingCounter
#include "GlobalNamespace/SaberSwingRatingCounter.hpp"
// Including type: GameNoteController/GameNoteType
#include "GlobalNamespace/GameNoteController_GameNoteType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: Saber
  class Saber;
  // Skipping declaration: ISaberSwingRatingCounter because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
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
  // Size: 0xB4
  #pragma pack(push, 1)
  // Autogenerated type: GameNoteController
  // [TokenAttribute] Offset: FFFFFFFF
  class GameNoteController : public GlobalNamespace::NoteController/*, public GlobalNamespace::ICubeNoteControllerInitializable_1<GlobalNamespace::GameNoteController*>, public GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver, public GlobalNamespace::ICubeNoteMirrorable, public GlobalNamespace::ICubeNoteTypeProvider, public GlobalNamespace::INoteMovementProvider*/ {
    public:
    // Nested type: GlobalNamespace::GameNoteController::Pool
    class Pool;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private BoxCuttableBySaber[] _bigCuttableBySaberList
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<GlobalNamespace::BoxCuttableBySaber*> bigCuttableBySaberList;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::BoxCuttableBySaber*>) == 0x8);
    // private BoxCuttableBySaber[] _smallCuttableBySaberList
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<GlobalNamespace::BoxCuttableBySaber*> smallCuttableBySaberList;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::BoxCuttableBySaber*>) == 0x8);
    // private UnityEngine.GameObject _wrapperGO
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::GameObject* wrapperGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0xF049A0
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xF049B0
    // private readonly SaberSwingRatingCounter/Pool _saberSwingRatingCounterPool
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::SaberSwingRatingCounter::Pool* saberSwingRatingCounterPool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberSwingRatingCounter::Pool*) == 0x8);
    // private System.Action`1<GameNoteController> cubeNoteControllerDidInitEvent
    // Size: 0x8
    // Offset: 0xA0
    System::Action_1<GlobalNamespace::GameNoteController*>* cubeNoteControllerDidInitEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::GameNoteController*>*) == 0x8);
    // private GameNoteController/GameNoteType _gameNoteType
    // Size: 0x4
    // Offset: 0xA8
    GlobalNamespace::GameNoteController_GameNoteType gameNoteType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameNoteController_GameNoteType) == 0x4);
    // private System.Boolean _hidden
    // Size: 0x1
    // Offset: 0xAC
    bool hidden;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hidden and: cutAngleTolerance
    char __padding7[0x3] = {};
    // private System.Single _cutAngleTolerance
    // Size: 0x4
    // Offset: 0xB0
    float cutAngleTolerance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::ICubeNoteControllerInitializable_1<GlobalNamespace::GameNoteController*>
    operator GlobalNamespace::ICubeNoteControllerInitializable_1<GlobalNamespace::GameNoteController*>() noexcept {
      return *reinterpret_cast<GlobalNamespace::ICubeNoteControllerInitializable_1<GlobalNamespace::GameNoteController*>*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver
    operator GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver() noexcept {
      return *reinterpret_cast<GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::ICubeNoteMirrorable
    operator GlobalNamespace::ICubeNoteMirrorable() noexcept {
      return *reinterpret_cast<GlobalNamespace::ICubeNoteMirrorable*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::ICubeNoteTypeProvider
    operator GlobalNamespace::ICubeNoteTypeProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::ICubeNoteTypeProvider*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::INoteMovementProvider
    operator GlobalNamespace::INoteMovementProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::INoteMovementProvider*>(this);
    }
    // Get instance field reference: private BoxCuttableBySaber[] _bigCuttableBySaberList
    ::ArrayW<GlobalNamespace::BoxCuttableBySaber*>& dyn__bigCuttableBySaberList();
    // Get instance field reference: private BoxCuttableBySaber[] _smallCuttableBySaberList
    ::ArrayW<GlobalNamespace::BoxCuttableBySaber*>& dyn__smallCuttableBySaberList();
    // Get instance field reference: private UnityEngine.GameObject _wrapperGO
    UnityEngine::GameObject*& dyn__wrapperGO();
    // Get instance field reference: private readonly AudioTimeSyncController _audioTimeSyncController
    GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private readonly SaberSwingRatingCounter/Pool _saberSwingRatingCounterPool
    GlobalNamespace::SaberSwingRatingCounter::Pool*& dyn__saberSwingRatingCounterPool();
    // Get instance field reference: private System.Action`1<GameNoteController> cubeNoteControllerDidInitEvent
    System::Action_1<GlobalNamespace::GameNoteController*>*& dyn_cubeNoteControllerDidInitEvent();
    // Get instance field reference: private GameNoteController/GameNoteType _gameNoteType
    GlobalNamespace::GameNoteController_GameNoteType& dyn__gameNoteType();
    // Get instance field reference: private System.Boolean _hidden
    bool& dyn__hidden();
    // Get instance field reference: private System.Single _cutAngleTolerance
    float& dyn__cutAngleTolerance();
    // public NoteMovement get_noteMovement()
    // Offset: 0x11D5BB0
    GlobalNamespace::NoteMovement* get_noteMovement();
    // public GameNoteController/GameNoteType get_gameNoteType()
    // Offset: 0x11D5BB8
    GlobalNamespace::GameNoteController_GameNoteType get_gameNoteType();
    // private UnityEngine.Transform INoteMirrorable.get_transform()
    // Offset: 0x11D6A90
    UnityEngine::Transform* INoteMirrorable_get_transform();
    // public System.Void add_cubeNoteControllerDidInitEvent(System.Action`1<GameNoteController> value)
    // Offset: 0x11D5A68
    void add_cubeNoteControllerDidInitEvent(System::Action_1<GlobalNamespace::GameNoteController*>* value);
    // public System.Void remove_cubeNoteControllerDidInitEvent(System.Action`1<GameNoteController> value)
    // Offset: 0x11D5B0C
    void remove_cubeNoteControllerDidInitEvent(System::Action_1<GlobalNamespace::GameNoteController*>* value);
    // public System.Void Init(NoteData noteData, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, GameNoteController/GameNoteType gameNoteType, System.Single cutDirectionAngleOffset, System.Single cutAngleTolerance, System.Single uniformScale)
    // Offset: 0x11D5C1C
    void Init(GlobalNamespace::NoteData* noteData, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, GlobalNamespace::GameNoteController_GameNoteType gameNoteType, float cutDirectionAngleOffset, float cutAngleTolerance, float uniformScale);
    // private System.Void HandleBigWasCutBySaber(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0x11D63B8
    void HandleBigWasCutBySaber(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec);
    // private System.Void HandleSmallWasCutBySaber(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0x11D6874
    void HandleSmallWasCutBySaber(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec);
    // private System.Void HandleCut(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec, System.Boolean allowBadCut)
    // Offset: 0x11D63D0
    void HandleCut(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec, bool allowBadCut);
    // public System.Void HandleSaberSwingRatingCounterDidFinish(ISaberSwingRatingCounter saberSwingRatingCounter)
    // Offset: 0x11D688C
    void HandleSaberSwingRatingCounterDidFinish(GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter);
    // public override System.Boolean get_hide()
    // Offset: 0x11D5C04
    // Implemented from: NoteController
    // Base method: System.Boolean NoteController::get_hide()
    bool get_hide();
    // public override System.Void set_hide(System.Boolean value)
    // Offset: 0x11D5BC0
    // Implemented from: NoteController
    // Base method: System.Void NoteController::set_hide(System.Boolean value)
    void set_hide(bool value);
    // public override System.Void set_pause(System.Boolean value)
    // Offset: 0x11D5C0C
    // Implemented from: NoteController
    // Base method: System.Void NoteController::set_pause(System.Boolean value)
    void set_pause(bool value);
    // public System.Void .ctor()
    // Offset: 0x11D6A88
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
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameNoteController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameNoteController*, creationType>()));
    }
    // protected override System.Void Awake()
    // Offset: 0x11D5ED8
    // Implemented from: NoteController
    // Base method: System.Void NoteController::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0x11D603C
    // Implemented from: NoteController
    // Base method: System.Void NoteController::OnDestroy()
    void OnDestroy();
    // protected override System.Void NoteDidPassMissedMarker()
    // Offset: 0x11D6218
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidPassMissedMarker()
    void NoteDidPassMissedMarker();
    // protected override System.Void NoteDidStartDissolving()
    // Offset: 0x11D62EC
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidStartDissolving()
    void NoteDidStartDissolving();
    // protected override System.Void NoteDidStartJump()
    // Offset: 0x11D69BC
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidStartJump()
    void NoteDidStartJump();
  }; // GameNoteController
  #pragma pack(pop)
  static check_size<sizeof(GameNoteController), 176 + sizeof(float)> __GlobalNamespace_GameNoteControllerSizeCheck;
  static_assert(sizeof(GameNoteController) == 0xB4);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameNoteController*, "", "GameNoteController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::get_noteMovement
// Il2CppName: get_noteMovement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteMovement* (GlobalNamespace::GameNoteController::*)()>(&GlobalNamespace::GameNoteController::get_noteMovement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "get_noteMovement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::get_gameNoteType
// Il2CppName: get_gameNoteType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameNoteController_GameNoteType (GlobalNamespace::GameNoteController::*)()>(&GlobalNamespace::GameNoteController::get_gameNoteType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "get_gameNoteType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::INoteMirrorable_get_transform
// Il2CppName: INoteMirrorable.get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (GlobalNamespace::GameNoteController::*)()>(&GlobalNamespace::GameNoteController::INoteMirrorable_get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "INoteMirrorable.get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::add_cubeNoteControllerDidInitEvent
// Il2CppName: add_cubeNoteControllerDidInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)(System::Action_1<GlobalNamespace::GameNoteController*>*)>(&GlobalNamespace::GameNoteController::add_cubeNoteControllerDidInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "GameNoteController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "add_cubeNoteControllerDidInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::remove_cubeNoteControllerDidInitEvent
// Il2CppName: remove_cubeNoteControllerDidInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)(System::Action_1<GlobalNamespace::GameNoteController*>*)>(&GlobalNamespace::GameNoteController::remove_cubeNoteControllerDidInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "GameNoteController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "remove_cubeNoteControllerDidInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)(GlobalNamespace::NoteData*, float, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float, float, float, GlobalNamespace::GameNoteController_GameNoteType, float, float, float)>(&GlobalNamespace::GameNoteController::Init)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    static auto* worldRotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* moveStartPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* moveEndPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* jumpEndPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* moveDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* jumpDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* jumpGravity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* gameNoteType = &::il2cpp_utils::GetClassFromName("", "GameNoteController/GameNoteType")->byval_arg;
    static auto* cutDirectionAngleOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* cutAngleTolerance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* uniformScale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData, worldRotation, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity, gameNoteType, cutDirectionAngleOffset, cutAngleTolerance, uniformScale});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::HandleBigWasCutBySaber
// Il2CppName: HandleBigWasCutBySaber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)(GlobalNamespace::Saber*, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3)>(&GlobalNamespace::GameNoteController::HandleBigWasCutBySaber)> {
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)(GlobalNamespace::Saber*, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3)>(&GlobalNamespace::GameNoteController::HandleSmallWasCutBySaber)> {
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)(GlobalNamespace::Saber*, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3, bool)>(&GlobalNamespace::GameNoteController::HandleCut)> {
  static const MethodInfo* get() {
    static auto* saber = &::il2cpp_utils::GetClassFromName("", "Saber")->byval_arg;
    static auto* cutPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* orientation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* cutDirVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* allowBadCut = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "HandleCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saber, cutPoint, orientation, cutDirVec, allowBadCut});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::HandleSaberSwingRatingCounterDidFinish
// Il2CppName: HandleSaberSwingRatingCounterDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)(GlobalNamespace::ISaberSwingRatingCounter*)>(&GlobalNamespace::GameNoteController::HandleSaberSwingRatingCounterDidFinish)> {
  static const MethodInfo* get() {
    static auto* saberSwingRatingCounter = &::il2cpp_utils::GetClassFromName("", "ISaberSwingRatingCounter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "HandleSaberSwingRatingCounterDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberSwingRatingCounter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::get_hide
// Il2CppName: get_hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameNoteController::*)()>(&GlobalNamespace::GameNoteController::get_hide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "get_hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::set_hide
// Il2CppName: set_hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)(bool)>(&GlobalNamespace::GameNoteController::set_hide)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "set_hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameNoteController::set_pause
// Il2CppName: set_pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameNoteController::*)(bool)>(&GlobalNamespace::GameNoteController::set_pause)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameNoteController*), "set_pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
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
