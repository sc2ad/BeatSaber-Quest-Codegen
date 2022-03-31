// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DynamicBone
#include "GlobalNamespace/DynamicBone.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
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
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DynamicBone::Particle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DynamicBone::Particle*, "", "DynamicBone/Particle");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x74
  #pragma pack(push, 1)
  // Autogenerated type: DynamicBone/Particle
  // [TokenAttribute] Offset: FFFFFFFF
  class DynamicBone::Particle : public ::Il2CppObject {
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
    // public UnityEngine.Transform m_Transform
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* m_Transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Int32 m_ParentIndex
    // Size: 0x4
    // Offset: 0x18
    int m_ParentIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single m_Damping
    // Size: 0x4
    // Offset: 0x1C
    float m_Damping;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_Elasticity
    // Size: 0x4
    // Offset: 0x20
    float m_Elasticity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_Stiffness
    // Size: 0x4
    // Offset: 0x24
    float m_Stiffness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_Inert
    // Size: 0x4
    // Offset: 0x28
    float m_Inert;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_Radius
    // Size: 0x4
    // Offset: 0x2C
    float m_Radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_BoneLength
    // Size: 0x4
    // Offset: 0x30
    float m_BoneLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 m_Position
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::Vector3 m_Position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 m_PrevPosition
    // Size: 0xC
    // Offset: 0x40
    ::UnityEngine::Vector3 m_PrevPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 m_EndOffset
    // Size: 0xC
    // Offset: 0x4C
    ::UnityEngine::Vector3 m_EndOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 m_InitLocalPosition
    // Size: 0xC
    // Offset: 0x58
    ::UnityEngine::Vector3 m_InitLocalPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion m_InitLocalRotation
    // Size: 0x10
    // Offset: 0x64
    ::UnityEngine::Quaternion m_InitLocalRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Get instance field reference: public UnityEngine.Transform m_Transform
    ::UnityEngine::Transform*& dyn_m_Transform();
    // Get instance field reference: public System.Int32 m_ParentIndex
    int& dyn_m_ParentIndex();
    // Get instance field reference: public System.Single m_Damping
    float& dyn_m_Damping();
    // Get instance field reference: public System.Single m_Elasticity
    float& dyn_m_Elasticity();
    // Get instance field reference: public System.Single m_Stiffness
    float& dyn_m_Stiffness();
    // Get instance field reference: public System.Single m_Inert
    float& dyn_m_Inert();
    // Get instance field reference: public System.Single m_Radius
    float& dyn_m_Radius();
    // Get instance field reference: public System.Single m_BoneLength
    float& dyn_m_BoneLength();
    // Get instance field reference: public UnityEngine.Vector3 m_Position
    ::UnityEngine::Vector3& dyn_m_Position();
    // Get instance field reference: public UnityEngine.Vector3 m_PrevPosition
    ::UnityEngine::Vector3& dyn_m_PrevPosition();
    // Get instance field reference: public UnityEngine.Vector3 m_EndOffset
    ::UnityEngine::Vector3& dyn_m_EndOffset();
    // Get instance field reference: public UnityEngine.Vector3 m_InitLocalPosition
    ::UnityEngine::Vector3& dyn_m_InitLocalPosition();
    // Get instance field reference: public UnityEngine.Quaternion m_InitLocalRotation
    ::UnityEngine::Quaternion& dyn_m_InitLocalRotation();
    // public System.Void .ctor()
    // Offset: 0x2A7594C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicBone::Particle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DynamicBone::Particle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicBone::Particle*, creationType>()));
    }
  }; // DynamicBone/Particle
  #pragma pack(pop)
  static check_size<sizeof(DynamicBone::Particle), 100 + sizeof(::UnityEngine::Quaternion)> __GlobalNamespace_DynamicBone_ParticleSizeCheck;
  static_assert(sizeof(DynamicBone::Particle) == 0x74);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::Particle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
