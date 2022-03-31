// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CharacterController
  class CharacterController;
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ControllerColliderHit
  class ControllerColliderHit;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ControllerColliderHit);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ControllerColliderHit*, "UnityEngine", "ControllerColliderHit");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ControllerColliderHit
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 11D3DEC
  class ControllerColliderHit : public ::Il2CppObject {
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
    // UnityEngine.CharacterController m_Controller
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::CharacterController* m_Controller;
    // Field size check
    static_assert(sizeof(::UnityEngine::CharacterController*) == 0x8);
    // UnityEngine.Collider m_Collider
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Collider* m_Collider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    // UnityEngine.Vector3 m_Point
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 m_Point;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // UnityEngine.Vector3 m_Normal
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 m_Normal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // UnityEngine.Vector3 m_MoveDirection
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 m_MoveDirection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // System.Single m_MoveLength
    // Size: 0x4
    // Offset: 0x44
    float m_MoveLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Int32 m_Push
    // Size: 0x4
    // Offset: 0x48
    int m_Push;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: UnityEngine.CharacterController m_Controller
    ::UnityEngine::CharacterController*& dyn_m_Controller();
    // Get instance field reference: UnityEngine.Collider m_Collider
    ::UnityEngine::Collider*& dyn_m_Collider();
    // Get instance field reference: UnityEngine.Vector3 m_Point
    ::UnityEngine::Vector3& dyn_m_Point();
    // Get instance field reference: UnityEngine.Vector3 m_Normal
    ::UnityEngine::Vector3& dyn_m_Normal();
    // Get instance field reference: UnityEngine.Vector3 m_MoveDirection
    ::UnityEngine::Vector3& dyn_m_MoveDirection();
    // Get instance field reference: System.Single m_MoveLength
    float& dyn_m_MoveLength();
    // Get instance field reference: System.Int32 m_Push
    int& dyn_m_Push();
  }; // UnityEngine.ControllerColliderHit
  #pragma pack(pop)
  static check_size<sizeof(ControllerColliderHit), 72 + sizeof(int)> __UnityEngine_ControllerColliderHitSizeCheck;
  static_assert(sizeof(ControllerColliderHit) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
