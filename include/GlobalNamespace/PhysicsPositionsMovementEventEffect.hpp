// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BasicBeatmapEventType
#include "GlobalNamespace/BasicBeatmapEventType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
  // Forward declaring type: SongTimeFixedUpdateController
  class SongTimeFixedUpdateController;
  // Forward declaring type: BeatmapDataCallbackWrapper
  class BeatmapDataCallbackWrapper;
  // Forward declaring type: BasicBeatmapEventData
  class BasicBeatmapEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PhysicsPositionsMovementEventEffect
  class PhysicsPositionsMovementEventEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PhysicsPositionsMovementEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PhysicsPositionsMovementEventEffect*, "", "PhysicsPositionsMovementEventEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: PhysicsPositionsMovementEventEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class PhysicsPositionsMovementEventEffect : public ::UnityEngine::MonoBehaviour {
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
    // private BasicBeatmapEventType _event
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::BasicBeatmapEventType event;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BasicBeatmapEventType) == 0x4);
    // private UnityEngine.Vector3 _movementVector
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 movementVector;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single _stepSize
    // Size: 0x4
    // Offset: 0x28
    float stepSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _elasticity
    // Size: 0x4
    // Offset: 0x2C
    float elasticity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _friction
    // Size: 0x4
    // Offset: 0x30
    float friction;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minMaxSpeed
    // Size: 0x4
    // Offset: 0x34
    float minMaxSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxMaxSpeed
    // Size: 0x4
    // Offset: 0x38
    float maxMaxSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxAcceleration
    // Size: 0x4
    // Offset: 0x3C
    float maxAcceleration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0x12518EC
    // private readonly BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
    // [InjectAttribute] Offset: 0x12518FC
    // private readonly SongTimeFixedUpdateController _songTimeFixedUpdateController
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::SongTimeFixedUpdateController* songTimeFixedUpdateController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SongTimeFixedUpdateController*) == 0x8);
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 _startPos
    // Size: 0xC
    // Offset: 0x58
    ::UnityEngine::Vector3 startPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _velocity
    // Size: 0xC
    // Offset: 0x64
    ::UnityEngine::Vector3 velocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _prevPosition
    // Size: 0xC
    // Offset: 0x70
    ::UnityEngine::Vector3 prevPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _position
    // Size: 0xC
    // Offset: 0x7C
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _targetPosition
    // Size: 0xC
    // Offset: 0x88
    ::UnityEngine::Vector3 targetPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single _maxSpeed
    // Size: 0x4
    // Offset: 0x94
    float maxSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _sqrMaxSpeed
    // Size: 0x4
    // Offset: 0x98
    float sqrMaxSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: sqrMaxSpeed and: beatmapDataCallbackWrapper
    char __padding17[0x4] = {};
    // private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    // Size: 0x8
    // Offset: 0xA0
    ::GlobalNamespace::BeatmapDataCallbackWrapper* beatmapDataCallbackWrapper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BasicBeatmapEventType _event
    ::GlobalNamespace::BasicBeatmapEventType& dyn__event();
    // Get instance field reference: private UnityEngine.Vector3 _movementVector
    ::UnityEngine::Vector3& dyn__movementVector();
    // Get instance field reference: private System.Single _stepSize
    float& dyn__stepSize();
    // Get instance field reference: private System.Single _elasticity
    float& dyn__elasticity();
    // Get instance field reference: private System.Single _friction
    float& dyn__friction();
    // Get instance field reference: private System.Single _minMaxSpeed
    float& dyn__minMaxSpeed();
    // Get instance field reference: private System.Single _maxMaxSpeed
    float& dyn__maxMaxSpeed();
    // Get instance field reference: private System.Single _maxAcceleration
    float& dyn__maxAcceleration();
    // Get instance field reference: private readonly BeatmapCallbacksController _beatmapCallbacksController
    ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // Get instance field reference: private readonly SongTimeFixedUpdateController _songTimeFixedUpdateController
    ::GlobalNamespace::SongTimeFixedUpdateController*& dyn__songTimeFixedUpdateController();
    // Get instance field reference: private UnityEngine.Transform _transform
    ::UnityEngine::Transform*& dyn__transform();
    // Get instance field reference: private UnityEngine.Vector3 _startPos
    ::UnityEngine::Vector3& dyn__startPos();
    // Get instance field reference: private UnityEngine.Vector3 _velocity
    ::UnityEngine::Vector3& dyn__velocity();
    // Get instance field reference: private UnityEngine.Vector3 _prevPosition
    ::UnityEngine::Vector3& dyn__prevPosition();
    // Get instance field reference: private UnityEngine.Vector3 _position
    ::UnityEngine::Vector3& dyn__position();
    // Get instance field reference: private UnityEngine.Vector3 _targetPosition
    ::UnityEngine::Vector3& dyn__targetPosition();
    // Get instance field reference: private System.Single _maxSpeed
    float& dyn__maxSpeed();
    // Get instance field reference: private System.Single _sqrMaxSpeed
    float& dyn__sqrMaxSpeed();
    // Get instance field reference: private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    ::GlobalNamespace::BeatmapDataCallbackWrapper*& dyn__beatmapDataCallbackWrapper();
    // protected System.Void Start()
    // Offset: 0x12F110C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x12F130C
    void OnDestroy();
    // private System.Void HandleSongTimeFixedUpdate(System.Single fixedDeltaTime)
    // Offset: 0x12F1440
    void HandleSongTimeFixedUpdate(float fixedDeltaTime);
    // private System.Void HandleSongTimeUpdate()
    // Offset: 0x12F1700
    void HandleSongTimeUpdate();
    // private System.Void HandleBeatmapEvent(BasicBeatmapEventData basicBeatmapEventData)
    // Offset: 0x12F17DC
    void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);
    // public System.Void .ctor()
    // Offset: 0x12F1910
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhysicsPositionsMovementEventEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PhysicsPositionsMovementEventEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhysicsPositionsMovementEventEffect*, creationType>()));
    }
  }; // PhysicsPositionsMovementEventEffect
  #pragma pack(pop)
  static check_size<sizeof(PhysicsPositionsMovementEventEffect), 160 + sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*)> __GlobalNamespace_PhysicsPositionsMovementEventEffectSizeCheck;
  static_assert(sizeof(PhysicsPositionsMovementEventEffect) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PhysicsPositionsMovementEventEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PhysicsPositionsMovementEventEffect::*)()>(&GlobalNamespace::PhysicsPositionsMovementEventEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PhysicsPositionsMovementEventEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PhysicsPositionsMovementEventEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PhysicsPositionsMovementEventEffect::*)()>(&GlobalNamespace::PhysicsPositionsMovementEventEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PhysicsPositionsMovementEventEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PhysicsPositionsMovementEventEffect::HandleSongTimeFixedUpdate
// Il2CppName: HandleSongTimeFixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PhysicsPositionsMovementEventEffect::*)(float)>(&GlobalNamespace::PhysicsPositionsMovementEventEffect::HandleSongTimeFixedUpdate)> {
  static const MethodInfo* get() {
    static auto* fixedDeltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PhysicsPositionsMovementEventEffect*), "HandleSongTimeFixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixedDeltaTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PhysicsPositionsMovementEventEffect::HandleSongTimeUpdate
// Il2CppName: HandleSongTimeUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PhysicsPositionsMovementEventEffect::*)()>(&GlobalNamespace::PhysicsPositionsMovementEventEffect::HandleSongTimeUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PhysicsPositionsMovementEventEffect*), "HandleSongTimeUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PhysicsPositionsMovementEventEffect::HandleBeatmapEvent
// Il2CppName: HandleBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PhysicsPositionsMovementEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&GlobalNamespace::PhysicsPositionsMovementEventEffect::HandleBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* basicBeatmapEventData = &::il2cpp_utils::GetClassFromName("", "BasicBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PhysicsPositionsMovementEventEffect*), "HandleBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{basicBeatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PhysicsPositionsMovementEventEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
