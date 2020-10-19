// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerSpaceConvertor
  class PlayerSpaceConvertor : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Quaternion _worldToPlayerSpaceRotation
    // Offset: 0x18
    UnityEngine::Quaternion worldToPlayerSpaceRotation;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Quaternion get_worldToPlayerSpaceRotation()
    // Offset: 0x208E480
    UnityEngine::Quaternion get_worldToPlayerSpaceRotation();
    // protected System.Void Start()
    // Offset: 0x208E48C
    void Start();
    // public System.Void .ctor()
    // Offset: 0x208E548
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlayerSpaceConvertor* New_ctor();
  }; // PlayerSpaceConvertor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSpaceConvertor*, "", "PlayerSpaceConvertor");
#pragma pack(pop)