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
  // Forward declaring type: NoteControllerBase
  class NoteControllerBase;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: INoteControllerNoteDidPassJumpThreeQuartersEvent
  class INoteControllerNoteDidPassJumpThreeQuartersEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*, "", "INoteControllerNoteDidPassJumpThreeQuartersEvent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: INoteControllerNoteDidPassJumpThreeQuartersEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class INoteControllerNoteDidPassJumpThreeQuartersEvent {
    public:
    // public System.Void HandleNoteControllerNoteDidPassJumpThreeQuarters(NoteControllerBase noteController)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandleNoteControllerNoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteControllerBase* noteController);
  }; // INoteControllerNoteDidPassJumpThreeQuartersEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent::HandleNoteControllerNoteDidPassJumpThreeQuarters
// Il2CppName: HandleNoteControllerNoteDidPassJumpThreeQuarters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent::*)(::GlobalNamespace::NoteControllerBase*)>(&GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent::HandleNoteControllerNoteDidPassJumpThreeQuarters)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteControllerBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*), "HandleNoteControllerNoteDidPassJumpThreeQuarters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
