// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerConnectedPlayerNoteController
#include "GlobalNamespace/MultiplayerConnectedPlayerNoteController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerConnectedPlayerBombNoteController
  class MultiplayerConnectedPlayerBombNoteController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*, "", "MultiplayerConnectedPlayerBombNoteController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerBombNoteController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerBombNoteController : public ::GlobalNamespace::MultiplayerConnectedPlayerNoteController {
    public:
    // Nested type: ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController::Pool
    class Pool;
    // public System.Void Init(NoteData noteData, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity)
    // Offset: 0x145B3EC
    void Init(::GlobalNamespace::NoteData* noteData, float worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity);
    // public System.Void .ctor()
    // Offset: 0x145C334
    // Implemented from: MultiplayerConnectedPlayerNoteController
    // Base method: System.Void MultiplayerConnectedPlayerNoteController::.ctor()
    // Base method: System.Void NoteController::.ctor()
    // Base method: System.Void NoteControllerBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerBombNoteController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerBombNoteController*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerBombNoteController
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBombNoteController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerBombNoteController::*)(::GlobalNamespace::NoteData*, float, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float, float, float)>(&GlobalNamespace::MultiplayerConnectedPlayerBombNoteController::Init)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    static auto* worldRotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* moveStartPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* moveEndPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* jumpEndPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* moveDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* jumpDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* jumpGravity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData, worldRotation, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerBombNoteController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
