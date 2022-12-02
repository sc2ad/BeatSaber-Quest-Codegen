// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoteFloorMovement
  class NoteFloorMovement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoteFloorMovement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteFloorMovement*, "", "NoteFloorMovement");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x84
  #pragma pack(push, 1)
  // Autogenerated type: NoteFloorMovement
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteFloorMovement : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Transform _rotatedObject
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* rotatedObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0x11128D8
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerTransforms*) == 0x8);
    // [InjectAttribute] Offset: 0x11128E8
    // private readonly IAudioTimeSource _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::IAudioTimeSource* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAudioTimeSource*) == 0x8);
    // private System.Action floorMovementDidFinishEvent
    // Size: 0x8
    // Offset: 0x30
    ::System::Action* floorMovementDidFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private UnityEngine.Vector3 _startPos
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 startPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _endPos
    // Size: 0xC
    // Offset: 0x44
    ::UnityEngine::Vector3 endPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single _moveDuration
    // Size: 0x4
    // Offset: 0x50
    float moveDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startTime
    // Size: 0x4
    // Offset: 0x54
    float startTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Quaternion _worldRotation
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Quaternion worldRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion _inverseWorldRotation
    // Size: 0x10
    // Offset: 0x68
    ::UnityEngine::Quaternion inverseWorldRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 _localPosition
    // Size: 0xC
    // Offset: 0x78
    ::UnityEngine::Vector3 localPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Transform _rotatedObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__rotatedObject();
    // Get instance field reference: private readonly PlayerTransforms _playerTransforms
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerTransforms*& dyn__playerTransforms();
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSyncController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSyncController();
    // Get instance field reference: private System.Action floorMovementDidFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_floorMovementDidFinishEvent();
    // Get instance field reference: private UnityEngine.Vector3 _startPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__startPos();
    // Get instance field reference: private UnityEngine.Vector3 _endPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__endPos();
    // Get instance field reference: private System.Single _moveDuration
    [[deprecated("Use field access instead!")]] float& dyn__moveDuration();
    // Get instance field reference: private System.Single _startTime
    [[deprecated("Use field access instead!")]] float& dyn__startTime();
    // Get instance field reference: private UnityEngine.Quaternion _worldRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__worldRotation();
    // Get instance field reference: private UnityEngine.Quaternion _inverseWorldRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__inverseWorldRotation();
    // Get instance field reference: private UnityEngine.Vector3 _localPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__localPosition();
    // public System.Single get_distanceToPlayer()
    // Offset: 0x1504A60
    float get_distanceToPlayer();
    // public UnityEngine.Vector3 get_startPos()
    // Offset: 0x1504B4C
    ::UnityEngine::Vector3 get_startPos();
    // public UnityEngine.Vector3 get_endPos()
    // Offset: 0x1504B58
    ::UnityEngine::Vector3 get_endPos();
    // public System.Single get_startTime()
    // Offset: 0x1504B64
    float get_startTime();
    // public System.Single get_moveDuration()
    // Offset: 0x1504B6C
    float get_moveDuration();
    // public UnityEngine.Quaternion get_worldRotation()
    // Offset: 0x1504B74
    ::UnityEngine::Quaternion get_worldRotation();
    // public UnityEngine.Quaternion get_inverseWorldRotation()
    // Offset: 0x1504B80
    ::UnityEngine::Quaternion get_inverseWorldRotation();
    // public UnityEngine.Vector3 get_localPosition()
    // Offset: 0x1504B8C
    ::UnityEngine::Vector3 get_localPosition();
    // public System.Void add_floorMovementDidFinishEvent(System.Action value)
    // Offset: 0x1504918
    void add_floorMovementDidFinishEvent(::System::Action* value);
    // public System.Void remove_floorMovementDidFinishEvent(System.Action value)
    // Offset: 0x15049BC
    void remove_floorMovementDidFinishEvent(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x1504FA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteFloorMovement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoteFloorMovement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteFloorMovement*, creationType>()));
    }
    // public System.Void Init(System.Single worldRotation, UnityEngine.Vector3 startPos, UnityEngine.Vector3 endPos, System.Single moveDuration, System.Single startTime)
    // Offset: 0x1504B98
    void Init(float worldRotation, ::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 endPos, float moveDuration, float startTime);
    // public UnityEngine.Vector3 SetToStart()
    // Offset: 0x1504C90
    ::UnityEngine::Vector3 SetToStart();
    // public UnityEngine.Vector3 ManualUpdate()
    // Offset: 0x1504DC0
    ::UnityEngine::Vector3 ManualUpdate();
  }; // NoteFloorMovement
  #pragma pack(pop)
  static check_size<sizeof(NoteFloorMovement), 120 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_NoteFloorMovementSizeCheck;
  static_assert(sizeof(NoteFloorMovement) == 0x84);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteFloorMovement::get_distanceToPlayer
// Il2CppName: get_distanceToPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::NoteFloorMovement::*)()>(&GlobalNamespace::NoteFloorMovement::get_distanceToPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteFloorMovement*), "get_distanceToPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteFloorMovement::get_startPos
// Il2CppName: get_startPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::NoteFloorMovement::*)()>(&GlobalNamespace::NoteFloorMovement::get_startPos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteFloorMovement*), "get_startPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteFloorMovement::get_endPos
// Il2CppName: get_endPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::NoteFloorMovement::*)()>(&GlobalNamespace::NoteFloorMovement::get_endPos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteFloorMovement*), "get_endPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteFloorMovement::get_startTime
// Il2CppName: get_startTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::NoteFloorMovement::*)()>(&GlobalNamespace::NoteFloorMovement::get_startTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteFloorMovement*), "get_startTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteFloorMovement::get_moveDuration
// Il2CppName: get_moveDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::NoteFloorMovement::*)()>(&GlobalNamespace::NoteFloorMovement::get_moveDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteFloorMovement*), "get_moveDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteFloorMovement::get_worldRotation
// Il2CppName: get_worldRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (GlobalNamespace::NoteFloorMovement::*)()>(&GlobalNamespace::NoteFloorMovement::get_worldRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteFloorMovement*), "get_worldRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteFloorMovement::get_inverseWorldRotation
// Il2CppName: get_inverseWorldRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (GlobalNamespace::NoteFloorMovement::*)()>(&GlobalNamespace::NoteFloorMovement::get_inverseWorldRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteFloorMovement*), "get_inverseWorldRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteFloorMovement::get_localPosition
// Il2CppName: get_localPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::NoteFloorMovement::*)()>(&GlobalNamespace::NoteFloorMovement::get_localPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteFloorMovement*), "get_localPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteFloorMovement::add_floorMovementDidFinishEvent
// Il2CppName: add_floorMovementDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteFloorMovement::*)(::System::Action*)>(&GlobalNamespace::NoteFloorMovement::add_floorMovementDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteFloorMovement*), "add_floorMovementDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteFloorMovement::remove_floorMovementDidFinishEvent
// Il2CppName: remove_floorMovementDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteFloorMovement::*)(::System::Action*)>(&GlobalNamespace::NoteFloorMovement::remove_floorMovementDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteFloorMovement*), "remove_floorMovementDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteFloorMovement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoteFloorMovement::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteFloorMovement::*)(float, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float, float)>(&GlobalNamespace::NoteFloorMovement::Init)> {
  static const MethodInfo* get() {
    static auto* worldRotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* startPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* endPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* moveDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* startTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteFloorMovement*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldRotation, startPos, endPos, moveDuration, startTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteFloorMovement::SetToStart
// Il2CppName: SetToStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::NoteFloorMovement::*)()>(&GlobalNamespace::NoteFloorMovement::SetToStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteFloorMovement*), "SetToStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteFloorMovement::ManualUpdate
// Il2CppName: ManualUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::NoteFloorMovement::*)()>(&GlobalNamespace::NoteFloorMovement::ManualUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteFloorMovement*), "ManualUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
