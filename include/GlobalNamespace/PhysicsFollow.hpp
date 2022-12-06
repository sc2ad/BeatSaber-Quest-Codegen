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
  // Forward declaring type: Rigidbody2D
  class Rigidbody2D;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PhysicsFollow
  class PhysicsFollow;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PhysicsFollow);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PhysicsFollow*, "", "PhysicsFollow");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: PhysicsFollow
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 10EA3E8
  class PhysicsFollow : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Transform _targetTransform
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* targetTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Vector3 _offset
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single _friction
    // Size: 0x4
    // Offset: 0x2C
    float friction;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _elasticity
    // Size: 0x4
    // Offset: 0x30
    float elasticity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: elasticity and: rigidBody2D
    char __padding3[0x4] = {};
    // private UnityEngine.Rigidbody2D _rigidBody2D
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Rigidbody2D* rigidBody2D;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody2D*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Transform _targetTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__targetTransform();
    // Get instance field reference: public UnityEngine.Vector3 _offset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__offset();
    // Get instance field reference: public System.Single _friction
    [[deprecated("Use field access instead!")]] float& dyn__friction();
    // Get instance field reference: public System.Single _elasticity
    [[deprecated("Use field access instead!")]] float& dyn__elasticity();
    // Get instance field reference: private UnityEngine.Rigidbody2D _rigidBody2D
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody2D*& dyn__rigidBody2D();
    // public System.Void .ctor()
    // Offset: 0x2AB9818
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhysicsFollow* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PhysicsFollow::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhysicsFollow*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x2AB953C
    void Start();
    // private System.Void FixedUpdate()
    // Offset: 0x2AB9634
    void FixedUpdate();
  }; // PhysicsFollow
  #pragma pack(pop)
  static check_size<sizeof(PhysicsFollow), 56 + sizeof(::UnityEngine::Rigidbody2D*)> __GlobalNamespace_PhysicsFollowSizeCheck;
  static_assert(sizeof(PhysicsFollow) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PhysicsFollow::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PhysicsFollow::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PhysicsFollow::*)()>(&GlobalNamespace::PhysicsFollow::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PhysicsFollow*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PhysicsFollow::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PhysicsFollow::*)()>(&GlobalNamespace::PhysicsFollow::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PhysicsFollow*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
