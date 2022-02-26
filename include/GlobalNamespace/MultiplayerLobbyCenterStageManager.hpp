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
  // Forward declaring type: CenterStageScreenController
  class CenterStageScreenController;
  // Forward declaring type: ILobbyStateDataModel
  class ILobbyStateDataModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLobbyCenterStageManager
  class MultiplayerLobbyCenterStageManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyCenterStageManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyCenterStageManager*, "", "MultiplayerLobbyCenterStageManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLobbyCenterStageManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLobbyCenterStageManager : public ::UnityEngine::MonoBehaviour {
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
    // private UnityEngine.Transform _centerObjectTransform
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* centerObjectTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [SpaceAttribute] Offset: 0x124AC8C
    // private CenterStageScreenController _centerStageScreenController
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::CenterStageScreenController* centerStageScreenController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CenterStageScreenController*) == 0x8);
    // [InjectAttribute] Offset: 0x124ACC4
    // private readonly ILobbyStateDataModel _lobbyStateDataModel
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::ILobbyStateDataModel* lobbyStateDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ILobbyStateDataModel*) == 0x8);
    // private System.Single _innerCircleRadius
    // Size: 0x4
    // Offset: 0x30
    float innerCircleRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minOuterCircleRadius
    // Size: 0x4
    // Offset: 0x34
    float minOuterCircleRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Transform _centerObjectTransform
    ::UnityEngine::Transform*& dyn__centerObjectTransform();
    // Get instance field reference: private CenterStageScreenController _centerStageScreenController
    ::GlobalNamespace::CenterStageScreenController*& dyn__centerStageScreenController();
    // Get instance field reference: private readonly ILobbyStateDataModel _lobbyStateDataModel
    ::GlobalNamespace::ILobbyStateDataModel*& dyn__lobbyStateDataModel();
    // Get instance field reference: private System.Single _innerCircleRadius
    float& dyn__innerCircleRadius();
    // Get instance field reference: private System.Single _minOuterCircleRadius
    float& dyn__minOuterCircleRadius();
    // public System.Void Init(System.Single innerCircleRadius, System.Single minOuterCircleRadius)
    // Offset: 0x1443400
    void Init(float innerCircleRadius, float minOuterCircleRadius);
    // public System.Void ActivateCenterStageManager()
    // Offset: 0x1443408
    void ActivateCenterStageManager();
    // public System.Void DeactivateCenterStageManager()
    // Offset: 0x1443594
    void DeactivateCenterStageManager();
    // private System.Void RecalculateCenterPosition()
    // Offset: 0x1443438
    void RecalculateCenterPosition();
    // public System.Void .ctor()
    // Offset: 0x14435C4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLobbyCenterStageManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerLobbyCenterStageManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLobbyCenterStageManager*, creationType>()));
    }
  }; // MultiplayerLobbyCenterStageManager
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLobbyCenterStageManager), 52 + sizeof(float)> __GlobalNamespace_MultiplayerLobbyCenterStageManagerSizeCheck;
  static_assert(sizeof(MultiplayerLobbyCenterStageManager) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageManager::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterStageManager::*)(float, float)>(&GlobalNamespace::MultiplayerLobbyCenterStageManager::Init)> {
  static const MethodInfo* get() {
    static auto* innerCircleRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* minOuterCircleRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyCenterStageManager*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{innerCircleRadius, minOuterCircleRadius});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageManager::ActivateCenterStageManager
// Il2CppName: ActivateCenterStageManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterStageManager::*)()>(&GlobalNamespace::MultiplayerLobbyCenterStageManager::ActivateCenterStageManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyCenterStageManager*), "ActivateCenterStageManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageManager::DeactivateCenterStageManager
// Il2CppName: DeactivateCenterStageManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterStageManager::*)()>(&GlobalNamespace::MultiplayerLobbyCenterStageManager::DeactivateCenterStageManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyCenterStageManager*), "DeactivateCenterStageManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageManager::RecalculateCenterPosition
// Il2CppName: RecalculateCenterPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyCenterStageManager::*)()>(&GlobalNamespace::MultiplayerLobbyCenterStageManager::RecalculateCenterPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyCenterStageManager*), "RecalculateCenterPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyCenterStageManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
