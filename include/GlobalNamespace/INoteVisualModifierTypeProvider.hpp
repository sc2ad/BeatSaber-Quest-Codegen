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
  // Forward declaring type: NoteVisualModifierType
  struct NoteVisualModifierType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: INoteVisualModifierTypeProvider
  class INoteVisualModifierTypeProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::INoteVisualModifierTypeProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteVisualModifierTypeProvider*, "", "INoteVisualModifierTypeProvider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: INoteVisualModifierTypeProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class INoteVisualModifierTypeProvider {
    public:
    // public NoteVisualModifierType get_noteVisualModifierType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType();
  }; // INoteVisualModifierTypeProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::INoteVisualModifierTypeProvider::get_noteVisualModifierType
// Il2CppName: get_noteVisualModifierType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteVisualModifierType (GlobalNamespace::INoteVisualModifierTypeProvider::*)()>(&GlobalNamespace::INoteVisualModifierTypeProvider::get_noteVisualModifierType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INoteVisualModifierTypeProvider*), "get_noteVisualModifierType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
