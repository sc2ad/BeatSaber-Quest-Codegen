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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberManager
  class SaberManager;
  // Forward declaring type: Saber
  class Saber;
  // Forward declaring type: MovementHistoryRecorder
  class MovementHistoryRecorder;
  // Forward declaring type: AveragingValueRecorder
  class AveragingValueRecorder;
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
  // Forward declaring type: SaberActivityCounter
  class SaberActivityCounter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SaberActivityCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberActivityCounter*, "", "SaberActivityCounter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: SaberActivityCounter
  // [TokenAttribute] Offset: FFFFFFFF
  class SaberActivityCounter : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single _averageWindowDuration
    // Size: 0x4
    // Offset: 0x18
    float averageWindowDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _valuesPerSecond
    // Size: 0x4
    // Offset: 0x1C
    float valuesPerSecond;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _increaseSpeed
    // Size: 0x4
    // Offset: 0x20
    float increaseSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _deceraseSpeed
    // Size: 0x4
    // Offset: 0x24
    float deceraseSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _movementSensitivityThreshold
    // Size: 0x4
    // Offset: 0x28
    float movementSensitivityThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: movementSensitivityThreshold and: saberManager
    char __padding4[0x4] = {};
    // [InjectAttribute] Offset: 0x1104648
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SaberManager*) == 0x8);
    // private System.Action`1<System.Single> totalDistanceDidChangeEvent
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<float>* totalDistanceDidChangeEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<float>*) == 0x8);
    // private Saber _leftSaber
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::Saber* leftSaber;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Saber*) == 0x8);
    // private Saber _rightSaber
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::Saber* rightSaber;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Saber*) == 0x8);
    // private UnityEngine.Vector3 _prevLeftSaberTipPos
    // Size: 0xC
    // Offset: 0x50
    ::UnityEngine::Vector3 prevLeftSaberTipPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _prevRightSaberTipPos
    // Size: 0xC
    // Offset: 0x5C
    ::UnityEngine::Vector3 prevRightSaberTipPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _prevLeftHandPos
    // Size: 0xC
    // Offset: 0x68
    ::UnityEngine::Vector3 prevLeftHandPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _prevRightHandPos
    // Size: 0xC
    // Offset: 0x74
    ::UnityEngine::Vector3 prevRightHandPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean _hasPrevPos
    // Size: 0x1
    // Offset: 0x80
    bool hasPrevPos;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasPrevPos and: leftSaberMovementDistance
    char __padding13[0x3] = {};
    // private System.Single _leftSaberMovementDistance
    // Size: 0x4
    // Offset: 0x84
    float leftSaberMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rightSaberMovementDistance
    // Size: 0x4
    // Offset: 0x88
    float rightSaberMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _leftHandMovementDistance
    // Size: 0x4
    // Offset: 0x8C
    float leftHandMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rightHandMovementDistance
    // Size: 0x4
    // Offset: 0x90
    float rightHandMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: rightHandMovementDistance and: saberMovementHistoryRecorder
    char __padding17[0x4] = {};
    // private MovementHistoryRecorder _saberMovementHistoryRecorder
    // Size: 0x8
    // Offset: 0x98
    ::GlobalNamespace::MovementHistoryRecorder* saberMovementHistoryRecorder;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MovementHistoryRecorder*) == 0x8);
    // private MovementHistoryRecorder _handMovementHistoryRecorder
    // Size: 0x8
    // Offset: 0xA0
    ::GlobalNamespace::MovementHistoryRecorder* handMovementHistoryRecorder;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MovementHistoryRecorder*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _averageWindowDuration
    [[deprecated("Use field access instead!")]] float& dyn__averageWindowDuration();
    // Get instance field reference: private System.Single _valuesPerSecond
    [[deprecated("Use field access instead!")]] float& dyn__valuesPerSecond();
    // Get instance field reference: private System.Single _increaseSpeed
    [[deprecated("Use field access instead!")]] float& dyn__increaseSpeed();
    // Get instance field reference: private System.Single _deceraseSpeed
    [[deprecated("Use field access instead!")]] float& dyn__deceraseSpeed();
    // Get instance field reference: private System.Single _movementSensitivityThreshold
    [[deprecated("Use field access instead!")]] float& dyn__movementSensitivityThreshold();
    // Get instance field reference: private readonly SaberManager _saberManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SaberManager*& dyn__saberManager();
    // Get instance field reference: private System.Action`1<System.Single> totalDistanceDidChangeEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<float>*& dyn_totalDistanceDidChangeEvent();
    // Get instance field reference: private Saber _leftSaber
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Saber*& dyn__leftSaber();
    // Get instance field reference: private Saber _rightSaber
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Saber*& dyn__rightSaber();
    // Get instance field reference: private UnityEngine.Vector3 _prevLeftSaberTipPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__prevLeftSaberTipPos();
    // Get instance field reference: private UnityEngine.Vector3 _prevRightSaberTipPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__prevRightSaberTipPos();
    // Get instance field reference: private UnityEngine.Vector3 _prevLeftHandPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__prevLeftHandPos();
    // Get instance field reference: private UnityEngine.Vector3 _prevRightHandPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__prevRightHandPos();
    // Get instance field reference: private System.Boolean _hasPrevPos
    [[deprecated("Use field access instead!")]] bool& dyn__hasPrevPos();
    // Get instance field reference: private System.Single _leftSaberMovementDistance
    [[deprecated("Use field access instead!")]] float& dyn__leftSaberMovementDistance();
    // Get instance field reference: private System.Single _rightSaberMovementDistance
    [[deprecated("Use field access instead!")]] float& dyn__rightSaberMovementDistance();
    // Get instance field reference: private System.Single _leftHandMovementDistance
    [[deprecated("Use field access instead!")]] float& dyn__leftHandMovementDistance();
    // Get instance field reference: private System.Single _rightHandMovementDistance
    [[deprecated("Use field access instead!")]] float& dyn__rightHandMovementDistance();
    // Get instance field reference: private MovementHistoryRecorder _saberMovementHistoryRecorder
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MovementHistoryRecorder*& dyn__saberMovementHistoryRecorder();
    // Get instance field reference: private MovementHistoryRecorder _handMovementHistoryRecorder
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MovementHistoryRecorder*& dyn__handMovementHistoryRecorder();
    // public System.Single get_leftSaberMovementDistance()
    // Offset: 0x149318C
    float get_leftSaberMovementDistance();
    // public System.Single get_rightSaberMovementDistance()
    // Offset: 0x1493194
    float get_rightSaberMovementDistance();
    // public System.Single get_leftHandMovementDistance()
    // Offset: 0x149319C
    float get_leftHandMovementDistance();
    // public System.Single get_rightHandMovementDistance()
    // Offset: 0x14931A4
    float get_rightHandMovementDistance();
    // public AveragingValueRecorder get_saberMovementAveragingValueRecorder()
    // Offset: 0x14931AC
    ::GlobalNamespace::AveragingValueRecorder* get_saberMovementAveragingValueRecorder();
    // public AveragingValueRecorder get_handMovementAveragingValueRecorder()
    // Offset: 0x14931C8
    ::GlobalNamespace::AveragingValueRecorder* get_handMovementAveragingValueRecorder();
    // public System.Void add_totalDistanceDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x1493044
    void add_totalDistanceDidChangeEvent(::System::Action_1<float>* value);
    // public System.Void remove_totalDistanceDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x14930E8
    void remove_totalDistanceDidChangeEvent(::System::Action_1<float>* value);
    // public System.Void .ctor()
    // Offset: 0x149367C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberActivityCounter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SaberActivityCounter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberActivityCounter*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x14931E4
    void Awake();
    // protected System.Void Start()
    // Offset: 0x14932A4
    void Start();
    // protected System.Void Update()
    // Offset: 0x14932CC
    void Update();
  }; // SaberActivityCounter
  #pragma pack(pop)
  static check_size<sizeof(SaberActivityCounter), 160 + sizeof(::GlobalNamespace::MovementHistoryRecorder*)> __GlobalNamespace_SaberActivityCounterSizeCheck;
  static_assert(sizeof(SaberActivityCounter) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::get_leftSaberMovementDistance
// Il2CppName: get_leftSaberMovementDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SaberActivityCounter::*)()>(&GlobalNamespace::SaberActivityCounter::get_leftSaberMovementDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "get_leftSaberMovementDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::get_rightSaberMovementDistance
// Il2CppName: get_rightSaberMovementDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SaberActivityCounter::*)()>(&GlobalNamespace::SaberActivityCounter::get_rightSaberMovementDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "get_rightSaberMovementDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::get_leftHandMovementDistance
// Il2CppName: get_leftHandMovementDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SaberActivityCounter::*)()>(&GlobalNamespace::SaberActivityCounter::get_leftHandMovementDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "get_leftHandMovementDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::get_rightHandMovementDistance
// Il2CppName: get_rightHandMovementDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SaberActivityCounter::*)()>(&GlobalNamespace::SaberActivityCounter::get_rightHandMovementDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "get_rightHandMovementDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::get_saberMovementAveragingValueRecorder
// Il2CppName: get_saberMovementAveragingValueRecorder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AveragingValueRecorder* (GlobalNamespace::SaberActivityCounter::*)()>(&GlobalNamespace::SaberActivityCounter::get_saberMovementAveragingValueRecorder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "get_saberMovementAveragingValueRecorder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::get_handMovementAveragingValueRecorder
// Il2CppName: get_handMovementAveragingValueRecorder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AveragingValueRecorder* (GlobalNamespace::SaberActivityCounter::*)()>(&GlobalNamespace::SaberActivityCounter::get_handMovementAveragingValueRecorder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "get_handMovementAveragingValueRecorder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::add_totalDistanceDidChangeEvent
// Il2CppName: add_totalDistanceDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberActivityCounter::*)(::System::Action_1<float>*)>(&GlobalNamespace::SaberActivityCounter::add_totalDistanceDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "add_totalDistanceDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::remove_totalDistanceDidChangeEvent
// Il2CppName: remove_totalDistanceDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberActivityCounter::*)(::System::Action_1<float>*)>(&GlobalNamespace::SaberActivityCounter::remove_totalDistanceDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "remove_totalDistanceDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberActivityCounter::*)()>(&GlobalNamespace::SaberActivityCounter::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberActivityCounter::*)()>(&GlobalNamespace::SaberActivityCounter::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberActivityCounter::*)()>(&GlobalNamespace::SaberActivityCounter::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
