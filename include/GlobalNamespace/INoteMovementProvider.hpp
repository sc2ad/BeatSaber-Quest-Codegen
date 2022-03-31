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
  // Forward declaring type: NoteMovement
  class NoteMovement;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: INoteMovementProvider
  class INoteMovementProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::INoteMovementProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteMovementProvider*, "", "INoteMovementProvider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: INoteMovementProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class INoteMovementProvider {
    public:
    // public NoteMovement get_noteMovement()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::NoteMovement* get_noteMovement();
  }; // INoteMovementProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::INoteMovementProvider::get_noteMovement
// Il2CppName: get_noteMovement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteMovement* (GlobalNamespace::INoteMovementProvider::*)()>(&GlobalNamespace::INoteMovementProvider::get_noteMovement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INoteMovementProvider*), "get_noteMovement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
