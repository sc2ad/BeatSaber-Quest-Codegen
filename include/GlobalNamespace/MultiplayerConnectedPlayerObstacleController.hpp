// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ObstacleController
#include "GlobalNamespace/ObstacleController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerConnectedPlayerObstacleClippingController
  class MultiplayerConnectedPlayerObstacleClippingController;
  // Forward declaring type: ObstacleData
  class ObstacleData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerConnectedPlayerObstacleController
  class MultiplayerConnectedPlayerObstacleController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*, "", "MultiplayerConnectedPlayerObstacleController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x128
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerObstacleController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerObstacleController : public ::GlobalNamespace::ObstacleController {
    public:
    // Nested type: ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController::Pool
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
    // private MultiplayerConnectedPlayerObstacleClippingController _multiplayerConnectedPlayerObstacleClippingController
    // Size: 0x8
    // Offset: 0x120
    ::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController* multiplayerConnectedPlayerObstacleClippingController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*) == 0x8);
    public:
    // Get instance field reference: private MultiplayerConnectedPlayerObstacleClippingController _multiplayerConnectedPlayerObstacleClippingController
    ::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*& dyn__multiplayerConnectedPlayerObstacleClippingController();
    // public System.Void .ctor()
    // Offset: 0x13D5A20
    // Implemented from: ObstacleController
    // Base method: System.Void ObstacleController::.ctor()
    // Base method: System.Void ObstacleControllerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerObstacleController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerConnectedPlayerObstacleController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerObstacleController*, creationType>()));
    }
    // public override System.Void Init(ObstacleData obstacleData, System.Single worldRotation, UnityEngine.Vector3 startPos, UnityEngine.Vector3 midPos, UnityEngine.Vector3 endPos, System.Single move1Duration, System.Single move2Duration, System.Single singleLineWidth, System.Single height)
    // Offset: 0x13D57F4
    // Implemented from: ObstacleController
    // Base method: System.Void ObstacleController::Init(ObstacleData obstacleData, System.Single worldRotation, UnityEngine.Vector3 startPos, UnityEngine.Vector3 midPos, UnityEngine.Vector3 endPos, System.Single move1Duration, System.Single move2Duration, System.Single singleLineWidth, System.Single height)
    void Init(::GlobalNamespace::ObstacleData* obstacleData, float worldRotation, ::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 midPos, ::UnityEngine::Vector3 endPos, float move1Duration, float move2Duration, float singleLineWidth, float height);
  }; // MultiplayerConnectedPlayerObstacleController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerObstacleController), 288 + sizeof(::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*)> __GlobalNamespace_MultiplayerConnectedPlayerObstacleControllerSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerObstacleController) == 0x128);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerObstacleController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerObstacleController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerObstacleController::*)(::GlobalNamespace::ObstacleData*, float, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float, float, float, float)>(&GlobalNamespace::MultiplayerConnectedPlayerObstacleController::Init)> {
  static const MethodInfo* get() {
    static auto* obstacleData = &::il2cpp_utils::GetClassFromName("", "ObstacleData")->byval_arg;
    static auto* worldRotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* startPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* midPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* endPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* move1Duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* move2Duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* singleLineWidth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerObstacleController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleData, worldRotation, startPos, midPos, endPos, move1Duration, move2Duration, singleLineWidth, height});
  }
};
