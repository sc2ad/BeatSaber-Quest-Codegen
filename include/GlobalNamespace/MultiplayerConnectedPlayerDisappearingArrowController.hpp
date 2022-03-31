// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DisappearingArrowControllerBase`1
#include "GlobalNamespace/DisappearingArrowControllerBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerConnectedPlayerGameNoteController
  class MultiplayerConnectedPlayerGameNoteController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerConnectedPlayerDisappearingArrowController
  class MultiplayerConnectedPlayerDisappearingArrowController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*, "", "MultiplayerConnectedPlayerDisappearingArrowController");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MultiplayerConnectedPlayerDisappearingArrowController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerDisappearingArrowController : public ::GlobalNamespace::DisappearingArrowControllerBase_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*> {
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
    // private MultiplayerConnectedPlayerGameNoteController _gameNoteController
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* gameNoteController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*) == 0x8);
    public:
    // Get instance field reference: private MultiplayerConnectedPlayerGameNoteController _gameNoteController
    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*& dyn__gameNoteController();
    // protected MultiplayerConnectedPlayerGameNoteController get_gameNoteController()
    // Offset: 0x13D3194
    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* get_gameNoteController();
    // public System.Void .ctor()
    // Offset: 0x13D319C
    // Implemented from: DisappearingArrowControllerBase`1
    // Base method: System.Void DisappearingArrowControllerBase_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerDisappearingArrowController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerDisappearingArrowController*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerDisappearingArrowController
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::get_gameNoteController
// Il2CppName: get_gameNoteController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* (GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::get_gameNoteController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*), "get_gameNoteController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
