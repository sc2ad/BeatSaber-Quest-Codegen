// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteController
  class NoteController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: INoteControllerNoteDidFinishJumpEvent
  class INoteControllerNoteDidFinishJumpEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*, "", "INoteControllerNoteDidFinishJumpEvent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: INoteControllerNoteDidFinishJumpEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class INoteControllerNoteDidFinishJumpEvent {
    public:
    // public System.Void HandleNoteControllerNoteDidFinishJump(NoteController noteController)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandleNoteControllerNoteDidFinishJump(::GlobalNamespace::NoteController* noteController);
  }; // INoteControllerNoteDidFinishJumpEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::INoteControllerNoteDidFinishJumpEvent::HandleNoteControllerNoteDidFinishJump
// Il2CppName: HandleNoteControllerNoteDidFinishJump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INoteControllerNoteDidFinishJumpEvent::*)(::GlobalNamespace::NoteController*)>(&GlobalNamespace::INoteControllerNoteDidFinishJumpEvent::HandleNoteControllerNoteDidFinishJump)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*), "HandleNoteControllerNoteDidFinishJump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
